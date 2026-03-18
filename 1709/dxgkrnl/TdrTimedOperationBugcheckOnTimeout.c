/*
 * XREFs of TdrTimedOperationBugcheckOnTimeout @ 0x1C00273F4
 * Callers:
 *     TdrTimedOperationDelay @ 0x1C0027440 (TdrTimedOperationDelay.c)
 *     TdrTimedOperationWaitForSingleObject @ 0x1C01A8120 (TdrTimedOperationWaitForSingleObject.c)
 * Callees:
 *     <none>
 */

void __noreturn TdrTimedOperationBugcheckOnTimeout()
{
  KeBugCheckEx(0xEAu, (ULONG_PTR)KeGetCurrentThread(), 0LL, 0LL, 0LL);
}
