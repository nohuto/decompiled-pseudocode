/*
 * XREFs of IoCreateSymbolicLink @ 0x140603720
 * Callers:
 *     IopCreateArcName @ 0x1406031D8 (IopCreateArcName.c)
 *     WmipDriverEntry @ 0x14089FCB0 (WmipDriverEntry.c)
 *     IopCreateArcNamesCd @ 0x1408C4DE0 (IopCreateArcNamesCd.c)
 *     RamdiskStart @ 0x1408E2E3C (RamdiskStart.c)
 * Callees:
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x1401A8C00 (ZwCreateSymbolicLinkObject.c)
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
