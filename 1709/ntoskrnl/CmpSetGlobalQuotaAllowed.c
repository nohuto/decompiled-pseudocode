/*
 * XREFs of CmpSetGlobalQuotaAllowed @ 0x14059F608
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400AF5E8 (CmpLoadKeyCommon.c)
 * Callees:
 *     <none>
 */

__int64 CmpSetGlobalQuotaAllowed()
{
  __int64 result; // rax

  result = CmpGlobalQuota;
  CmpGlobalQuotaAllowed = CmpGlobalQuota;
  return result;
}
