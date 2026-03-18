/*
 * XREFs of RtlGetSaclSecurityDescriptor @ 0x140504D60
 * Callers:
 *     AdtpBuildContextFromSecurityDescriptor @ 0x14028F8D8 (AdtpBuildContextFromSecurityDescriptor.c)
 *     NtSetSecurityObject @ 0x140488560 (NtSetSecurityObject.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x140504CCC (ExpWnfSpecializeSecurityDescriptor.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1405767CC (PipChangeDeviceObjectFromRegistryProperties.c)
 *     CmpCopySaclToVirtualKey @ 0x140693140 (CmpCopySaclToVirtualKey.c)
 *     CmpExamineSaclForAuditEvent @ 0x14069357C (CmpExamineSaclForAuditEvent.c)
 *     RtlReplaceSidInSd @ 0x140721AB0 (RtlReplaceSidInSd.c)
 *     SepSDContainsAttributeACE @ 0x140731FD4 (SepSDContainsAttributeACE.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140732C08 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetSaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PBOOLEAN SaclPresent,
        PACL *Sacl,
        PBOOLEAN SaclDefaulted)
{
  __int16 v5; // cx
  ACL *v6; // rax
  __int16 v8; // cx
  __int64 v9; // rcx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v5 = *((_WORD *)SecurityDescriptor + 1) & 0x10;
  *SaclPresent = v5 != 0;
  v6 = 0LL;
  if ( v5 )
  {
    v8 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v8 & 0x10) != 0 )
    {
      if ( v8 >= 0 )
      {
        v6 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      }
      else
      {
        v9 = *((unsigned int *)SecurityDescriptor + 3);
        if ( (_DWORD)v9 )
          v6 = (ACL *)((char *)SecurityDescriptor + v9);
      }
    }
    *Sacl = v6;
    *SaclDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 0x20) != 0;
  }
  return 0;
}
