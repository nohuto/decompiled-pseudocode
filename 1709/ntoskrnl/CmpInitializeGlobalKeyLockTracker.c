/*
 * XREFs of CmpInitializeGlobalKeyLockTracker @ 0x1405BFB0C
 * Callers:
 *     CmInitSystem1 @ 0x14083BF10 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpInitializeGlobalKeyLockTracker()
{
  __int64 *result; // rax

  CmpKeyLockTracker = 0LL;
  result = &qword_140386F08;
  qword_140386F10 = (__int64)&qword_140386F08;
  qword_140386F08 = (__int64)&qword_140386F08;
  return result;
}
