/*
 * XREFs of CmpSetGlobalQuotaAllowed @ 0x140584D60
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400070F8 (CmpLoadKeyCommon.c)
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
