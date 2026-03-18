/*
 * XREFs of RtlGetDaclSecurityDescriptor @ 0x14006F530
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140264B94 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x1404C2B6C (ExpWnfSpecializeSecurityDescriptor.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1404E3894 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     ObpInsertOrLocateNamedObject @ 0x1404F3FB0 (ObpInsertOrLocateNamedObject.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14056CFA4 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     MiInitializeMemoryEvents @ 0x1405A25E8 (MiInitializeMemoryEvents.c)
 *     ObCleanupSecurityDescriptor @ 0x1405A2B68 (ObCleanupSecurityDescriptor.c)
 *     ObpCreateDosDevicesDirectory @ 0x1405A2CF4 (ObpCreateDosDevicesDirectory.c)
 *     CmpCopySaclToVirtualKey @ 0x140668104 (CmpCopySaclToVirtualKey.c)
 *     RtlReplaceSidInSd @ 0x1406E9BA0 (RtlReplaceSidInSd.c)
 *     SepHasAllAppPackagesPresent @ 0x1406F8BF8 (SepHasAllAppPackagesPresent.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406FB220 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetDaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PBOOLEAN DaclPresent,
        PACL *Dacl,
        PBOOLEAN DaclDefaulted)
{
  bool v4; // zf
  ACL *v5; // rax
  __int64 v6; // rdx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = (*((_BYTE *)SecurityDescriptor + 2) & 4) == 0;
  *DaclPresent = (*((_BYTE *)SecurityDescriptor + 2) & 4) != 0;
  if ( !v4 )
  {
    if ( (~(unsigned __int8)*((_WORD *)SecurityDescriptor + 1) & 4) != 0 )
    {
      v5 = 0LL;
    }
    else
    {
      v5 = 0LL;
      if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
      {
        v5 = (ACL *)*((_QWORD *)SecurityDescriptor + 4);
      }
      else
      {
        v6 = *((unsigned int *)SecurityDescriptor + 4);
        if ( (_DWORD)v6 )
          v5 = (ACL *)((char *)SecurityDescriptor + v6);
      }
    }
    *Dacl = v5;
    *DaclDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 8) != 0;
  }
  return 0;
}
