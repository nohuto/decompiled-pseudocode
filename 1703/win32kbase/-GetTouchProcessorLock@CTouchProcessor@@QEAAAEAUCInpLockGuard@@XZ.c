/*
 * XREFs of ?GetTouchProcessorLock@CTouchProcessor@@QEAAAEAUCInpLockGuard@@XZ @ 0x1C01223B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CInpLockGuard *__fastcall CTouchProcessor::GetTouchProcessorLock(CTouchProcessor *this)
{
  return (CTouchProcessor *)((char *)this + 200);
}
