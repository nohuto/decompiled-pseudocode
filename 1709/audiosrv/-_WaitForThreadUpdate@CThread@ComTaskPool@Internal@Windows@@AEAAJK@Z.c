/*
 * XREFs of ?_WaitForThreadUpdate@CThread@ComTaskPool@Internal@Windows@@AEAAJK@Z @ 0x1800E57E8
 * Callers:
 *     ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x1800E5528 (-_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800E4E88 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_DispatchMessage@CThread@ComTaskPool@Internal@Windows@@AEAAXPEAUtagMSG@@@Z @ 0x1800E5410 (-_DispatchMessage@CThread@ComTaskPool@Internal@Windows@@AEAAXPEAUtagMSG@@@Z.c)
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
