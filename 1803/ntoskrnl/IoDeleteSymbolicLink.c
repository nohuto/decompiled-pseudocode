/*
 * XREFs of IoDeleteSymbolicLink @ 0x140605560
 * Callers:
 *     <none>
 * Callees:
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwMakeTemporaryObject @ 0x1401A95E0 (ZwMakeTemporaryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1401A9980 (ZwOpenSymbolicLinkObject.c)
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
