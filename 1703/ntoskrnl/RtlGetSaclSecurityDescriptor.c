/*
 * XREFs of RtlGetSaclSecurityDescriptor @ 0x1404C2C00
 * Callers:
 *     AdtpBuildContextFromSecurityDescriptor @ 0x14026559C (AdtpBuildContextFromSecurityDescriptor.c)
 *     NtSetSecurityObject @ 0x14046AB40 (NtSetSecurityObject.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x1404C2B6C (ExpWnfSpecializeSecurityDescriptor.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1404E3894 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     CmpCopySaclToVirtualKey @ 0x140668104 (CmpCopySaclToVirtualKey.c)
 *     CmpExamineSaclForAuditEvent @ 0x140668544 (CmpExamineSaclForAuditEvent.c)
 *     RtlReplaceSidInSd @ 0x1406E9BA0 (RtlReplaceSidInSd.c)
 *     SepSDContainsAttributeACE @ 0x1406FA598 (SepSDContainsAttributeACE.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406FB220 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetSaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PBOOLEAN SaclPresent,
        PACL *Sacl,
        PBOOLEAN SaclDefaulted)
{
  bool v4; // zf
  ACL *v6; // rax
  __int64 v7; // rdx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = (*((_BYTE *)SecurityDescriptor + 2) & 0x10) == 0;
  *SaclPresent = (*((_BYTE *)SecurityDescriptor + 2) & 0x10) != 0;
  if ( !v4 )
  {
    if ( (~(unsigned __int8)*((_WORD *)SecurityDescriptor + 1) & 0x10) != 0 )
    {
      v6 = 0LL;
    }
    else
    {
      v6 = 0LL;
      if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
      {
        v6 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      }
      else
      {
        v7 = *((unsigned int *)SecurityDescriptor + 3);
        if ( (_DWORD)v7 )
          v6 = (ACL *)((char *)SecurityDescriptor + v7);
      }
    }
    *Sacl = v6;
    *SaclDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 0x20) != 0;
  }
  return 0;
}
