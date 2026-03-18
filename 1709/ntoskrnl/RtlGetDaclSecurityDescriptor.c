/*
 * XREFs of RtlGetDaclSecurityDescriptor @ 0x1400BB9A0
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14028EEE0 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14044FB54 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     ObpInsertOrLocateNamedObject @ 0x140486408 (ObpInsertOrLocateNamedObject.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x140504CCC (ExpWnfSpecializeSecurityDescriptor.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1405767CC (PipChangeDeviceObjectFromRegistryProperties.c)
 *     MiInitializeMemoryEvents @ 0x1405B1D08 (MiInitializeMemoryEvents.c)
 *     ObCleanupSecurityDescriptor @ 0x1405B2288 (ObCleanupSecurityDescriptor.c)
 *     ObpCreateDosDevicesDirectory @ 0x1405B2414 (ObpCreateDosDevicesDirectory.c)
 *     SepHasCriticalAcePresent @ 0x1405D5890 (SepHasCriticalAcePresent.c)
 *     CmpCopySaclToVirtualKey @ 0x140693140 (CmpCopySaclToVirtualKey.c)
 *     RtlReplaceSidInSd @ 0x140721AB0 (RtlReplaceSidInSd.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140732C08 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetDaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PBOOLEAN DaclPresent,
        PACL *Dacl,
        PBOOLEAN DaclDefaulted)
{
  __int16 v5; // cx
  ACL *v6; // rax
  __int16 v7; // cx
  __int64 v8; // rcx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v5 = *((_WORD *)SecurityDescriptor + 1) & 4;
  *DaclPresent = v5 != 0;
  v6 = 0LL;
  if ( v5 )
  {
    v7 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v7 & 4) != 0 )
    {
      if ( v7 >= 0 )
      {
        v6 = (ACL *)*((_QWORD *)SecurityDescriptor + 4);
      }
      else
      {
        v8 = *((unsigned int *)SecurityDescriptor + 4);
        if ( (_DWORD)v8 )
          v6 = (ACL *)((char *)SecurityDescriptor + v8);
      }
    }
    *Dacl = v6;
    *DaclDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 8) != 0;
  }
  return 0;
}
