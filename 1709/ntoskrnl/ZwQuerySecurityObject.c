/*
 * XREFs of ZwQuerySecurityObject @ 0x1401802E0
 * Callers:
 *     RtlIsUntrustedObject @ 0x14000C7D0 (RtlIsUntrustedObject.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1404E1304 (CmpQueryFileSecurityDescriptor.c)
 *     CmpSaveBootControlSet @ 0x1405A4B40 (CmpSaveBootControlSet.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x1405E6FC0 (PiDevCfgGetKeySecurityDescriptor.c)
 *     CmpCloneHwProfile @ 0x140698898 (CmpCloneHwProfile.c)
 *     _RegRtlCopyTreeInternal @ 0x140785B88 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ULONG Length,
        PULONG LengthNeeded)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
