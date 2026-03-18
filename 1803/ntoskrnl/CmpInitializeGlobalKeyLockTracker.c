/*
 * XREFs of CmpInitializeGlobalKeyLockTracker @ 0x1406558FC
 * Callers:
 *     CmInitSystem1 @ 0x1408B04E0 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpInitializeGlobalKeyLockTracker()
{
  __int64 *result; // rax

  CmpKeyLockTracker = 0LL;
  result = &qword_1403CA448;
  qword_1403CA450 = (__int64)&qword_1403CA448;
  qword_1403CA448 = (__int64)&qword_1403CA448;
  return result;
}
