/*
 * XREFs of TdrTimedOperationBugcheckOnTimeout @ 0x1C0031840
 * Callers:
 *     TdrTimedOperationDelay @ 0x1C0031890 (TdrTimedOperationDelay.c)
 *     TdrTimedOperationWaitForSingleObject @ 0x1C019AD90 (TdrTimedOperationWaitForSingleObject.c)
 * Callees:
 *     <none>
 */

void __noreturn TdrTimedOperationBugcheckOnTimeout()
{
  KeBugCheckEx(0xEAu, (ULONG_PTR)KeGetCurrentThread(), 0LL, 0LL, 0LL);
}
