/*
 * XREFs of RtlOwnerAcesPresent @ 0x1400154D0
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x14046A8D0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     RtlpOwnerAcesPresent @ 0x1400154F0 (RtlpOwnerAcesPresent.c)
 */

BOOLEAN __cdecl RtlOwnerAcesPresent(PACL pAcl)
{
  return RtlpOwnerAcesPresent(0LL, pAcl);
}
