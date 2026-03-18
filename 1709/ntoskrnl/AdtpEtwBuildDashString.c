/*
 * XREFs of AdtpEtwBuildDashString @ 0x14059EFB8
 * Callers:
 *     AdtpPackageParameters @ 0x14014C5B0 (AdtpPackageParameters.c)
 *     AdtpBuildMultiSzStringListString @ 0x14014CAB8 (AdtpBuildMultiSzStringListString.c)
 *     AdtpBuildAccessReasonAuditString @ 0x14028EA0C (AdtpBuildAccessReasonAuditString.c)
 * Callees:
 *     <none>
 */

const char *__fastcall AdtpEtwBuildDashString(__int64 a1)
{
  const char *result; // rax

  *(_DWORD *)(a1 + 12) = 0;
  result = "-";
  *(_QWORD *)a1 = "-";
  *(_DWORD *)(a1 + 8) = 4;
  return result;
}
