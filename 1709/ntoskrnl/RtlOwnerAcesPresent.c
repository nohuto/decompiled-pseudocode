/*
 * XREFs of RtlOwnerAcesPresent @ 0x1400154D0
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x14046A8D0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     RtlpOwnerAcesPresent @ 0x1400154F0 (RtlpOwnerAcesPresent.c)
 */

__int64 __fastcall RtlOwnerAcesPresent(__int64 a1)
{
  return RtlpOwnerAcesPresent(0LL, a1);
}
