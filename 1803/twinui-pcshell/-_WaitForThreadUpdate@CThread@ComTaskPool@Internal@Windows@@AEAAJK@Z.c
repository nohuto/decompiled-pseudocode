/*
 * XREFs of ?_WaitForThreadUpdate@CThread@ComTaskPool@Internal@Windows@@AEAAJK@Z @ 0x18003B870
 * Callers:
 *     ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x18003B0A0 (-_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ.c)
 *     ?WaitForWork@CThread@ComTaskPool@Internal@Windows@@AEAAXK@Z @ 0x18009CFFC (-WaitForWork@CThread@ComTaskPool@Internal@Windows@@AEAAXK@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18010A800 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_DispatchMessage@CThread@ComTaskPool@Internal@Windows@@AEAAXPEAUtagMSG@@@Z @ 0x18010F354 (-_DispatchMessage@CThread@ComTaskPool@Internal@Windows@@AEAAXPEAUtagMSG@@@Z.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CThread::_WaitForThreadUpdate(HANDLE *this, DWORD dwMilliseconds)
{
  unsigned int Error; // ebx
  struct tagMSG Msg; // [rsp+30h] [rbp-38h] BYREF

  if ( MsgWaitForMultipleObjectsEx(1u, this + 14, dwMilliseconds, 0x1CFFu, 6u) == -1 )
    Error = ResultFromKnownLastError();
  else
    Error = 0;
  while ( PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
    Windows::Internal::ComTaskPool::CThread::_DispatchMessage((Windows::Internal::ComTaskPool::CThread *)this, &Msg);
  return Error;
}
