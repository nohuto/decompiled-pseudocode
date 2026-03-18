/*
 * XREFs of IoCreateSymbolicLink @ 0x1404577A0
 * Callers:
 *     IopCreateArcName @ 0x14059C120 (IopCreateArcName.c)
 *     IopCreateArcNamesCd @ 0x1407F6A7C (IopCreateArcNamesCd.c)
 *     WmipDriverEntry @ 0x1407FF1F0 (WmipDriverEntry.c)
 *     RamdiskStart @ 0x140836EAC (RamdiskStart.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x14017F640 (ZwCreateSymbolicLinkObject.c)
 */

NTSTATUS __stdcall IoCreateSymbolicLink(PUNICODE_STRING SymbolicLinkName, PUNICODE_STRING DeviceName)
{
  int v2; // ebx
  OBJECT_ATTRIBUTES v4; // [rsp+20h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF

  v4.Length = 48;
  v4.RootDirectory = 0LL;
  v4.Attributes = 592;
  v4.SecurityQualityOfService = 0LL;
  v4.ObjectName = SymbolicLinkName;
  v4.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
  v2 = ZwCreateSymbolicLinkObject(&Handle, 0xF0001u, &v4, DeviceName);
  if ( v2 >= 0 )
    ZwClose(Handle);
  return v2;
}
