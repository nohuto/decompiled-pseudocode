/*
 * XREFs of RtlEqualSid @ 0x18005C240
 * Callers:
 *     RtlSidDominates @ 0x18005BFB0 (RtlSidDominates.c)
 *     RtlpValidOwnerSubjectContext @ 0x18005C080 (RtlpValidOwnerSubjectContext.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x18007A0D0 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18008ACD4 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpCompareKnownObjectAces @ 0x18008D710 (RtlpCompareKnownObjectAces.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800CF020 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlpCompareKnownAces @ 0x1800E5274 (RtlpCompareKnownAces.c)
 *     RtlFindAceBySid @ 0x1800E74F4 (RtlFindAceBySid.c)
 * Callees:
 *     memcmp @ 0x180094960 (memcmp.c)
 */

BOOLEAN __cdecl RtlEqualSid(PSID Sid1, PSID Sid2)
{
  return *(_WORD *)Sid1 == *(_WORD *)Sid2
      && memcmp(Sid1, Sid2, 4 * (unsigned int)*((unsigned __int8 *)Sid1 + 1) + 8) == 0;
}
