/*
 * XREFs of RtlGetOwnerSecurityDescriptor @ 0x1404A1C40
 * Callers:
 *     CmpCheckWrpKeyAccess @ 0x1404A1A64 (CmpCheckWrpKeyAccess.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1404E3894 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140560A90 (PspAllocateAndQueryNotificationChannel.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14056CFA4 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     CmpCopySaclToVirtualKey @ 0x140668104 (CmpCopySaclToVirtualKey.c)
 *     RtlReplaceSidInSd @ 0x1406E9BA0 (RtlReplaceSidInSd.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406FB220 (LocalConvertSDToStringSD_Rev1.c)
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
