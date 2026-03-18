/*
 * XREFs of RtlGetOwnerSecurityDescriptor @ 0x140562A00
 * Callers:
 *     PspAllocateAndQueryNotificationChannel @ 0x1405349D0 (PspAllocateAndQueryNotificationChannel.c)
 *     CmpCheckWrpKeyAccess @ 0x140562828 (CmpCheckWrpKeyAccess.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1405C39A8 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1405CD170 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     CmpCopySaclToVirtualKey @ 0x1406F6030 (CmpCopySaclToVirtualKey.c)
 *     RtlReplaceSidInSd @ 0x140785250 (RtlReplaceSidInSd.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1407964E0 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetOwnerSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID *Owner,
        PBOOLEAN OwnerDefaulted)
{
  char *v4; // rax
  __int64 v5; // rdx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = 0LL;
  if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
  {
    v4 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  else
  {
    v5 = *((unsigned int *)SecurityDescriptor + 1);
    if ( (_DWORD)v5 )
      v4 = (char *)SecurityDescriptor + v5;
  }
  *Owner = v4;
  *OwnerDefaulted = *((_BYTE *)SecurityDescriptor + 2) & 1;
  return 0;
}
