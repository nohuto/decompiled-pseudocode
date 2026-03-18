/*
 * XREFs of IoCreateSymbolicLink @ 0x140596170
 * Callers:
 *     IopCreateArcName @ 0x1405C8AA8 (IopCreateArcName.c)
 *     WmipDriverEntry @ 0x140843D40 (WmipDriverEntry.c)
 *     IopCreateArcNamesCd @ 0x140851E2C (IopCreateArcNamesCd.c)
 *     RamdiskStart @ 0x14086E0DC (RamdiskStart.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x14017EFE0 (ZwCreateSymbolicLinkObject.c)
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
