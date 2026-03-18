/*
 * XREFs of TdrTimedOperationBugcheckOnTimeout @ 0x1C00365DC
 * Callers:
 *     TdrTimedOperationDelay @ 0x1C0036630 (TdrTimedOperationDelay.c)
 *     TdrTimedOperationWaitForSingleObject @ 0x1C0193600 (TdrTimedOperationWaitForSingleObject.c)
 * Callees:
 *     <none>
 */

void __noreturn TdrTimedOperationBugcheckOnTimeout()
{
  KeBugCheckEx(0xEAu, (ULONG_PTR)KeGetCurrentThread(), 0LL, 0LL, 0LL);
}
