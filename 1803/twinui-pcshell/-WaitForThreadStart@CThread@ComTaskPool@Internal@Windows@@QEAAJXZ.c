/*
 * XREFs of ?WaitForThreadStart@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x18003AFA0
 * Callers:
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800368C0 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18010A800 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CThread::WaitForThreadStart(HANDLE *this)
{
  int Error; // ebx

  Error = 0;
  if ( WaitForSingleObject(this[7], 0xFFFFFFFF) == -1 )
    Error = ResultFromKnownLastError();
  if ( (*((_BYTE *)this + 132) & 2) == 0 )
  {
    CloseHandle(this[7]);
    this[7] = 0LL;
  }
  if ( Error >= 0 )
    return (unsigned int)*((_DWORD *)this + 13);
  return (unsigned int)Error;
}
