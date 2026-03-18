/*
 * XREFs of CmpInitializeGlobalKeyLockTracker @ 0x1405D6158
 * Callers:
 *     CmInitSystem1 @ 0x140807ADC (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpInitializeGlobalKeyLockTracker()
{
  __int64 *result; // rax

  CmpKeyLockTracker = 0LL;
  result = &qword_14036AF68;
  qword_14036AF70 = (__int64)&qword_14036AF68;
  qword_14036AF68 = (__int64)&qword_14036AF68;
  return result;
}
