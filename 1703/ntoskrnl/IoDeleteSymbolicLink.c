/*
 * XREFs of IoDeleteSymbolicLink @ 0x1405D1970
 * Callers:
 *     <none>
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwMakeTemporaryObject @ 0x140180020 (ZwMakeTemporaryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x140180380 (ZwOpenSymbolicLinkObject.c)
 */

NTSTATUS __stdcall IoDeleteSymbolicLink(PUNICODE_STRING SymbolicLinkName)
{
  int TemporaryObject; // ebx
  OBJECT_ATTRIBUTES v3; // [rsp+20h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF

  v3.RootDirectory = 0LL;
  v3.ObjectName = SymbolicLinkName;
  v3.Length = 48;
  v3.Attributes = 576;
  *(_OWORD *)&v3.SecurityDescriptor = 0LL;
  TemporaryObject = ZwOpenSymbolicLinkObject(&Handle, 0x10000u, &v3);
  if ( TemporaryObject >= 0 )
  {
    TemporaryObject = ZwMakeTemporaryObject(Handle);
    if ( TemporaryObject >= 0 )
      ZwClose(Handle);
  }
  return TemporaryObject;
}
