/*
 * XREFs of ?CheckForDeadlock@CThread@ComTaskPool@Internal@Windows@@QEAAXXZ @ 0x18010FD08
 * Callers:
 *     ?s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@PEAVTaskList@123@PEAPEAVCThread@123@@Z @ 0x180112EF4 (-s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::ComTaskPool::CThread::CheckForDeadlock(_QWORD *pv)
{
  struct _TP_TIMER *ThreadpoolTimer; // rax
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  ThreadpoolTimer = (struct _TP_TIMER *)pv[13];
  *((_BYTE *)pv + 97) = 1;
  if ( ThreadpoolTimer
    || (ThreadpoolTimer = CreateThreadpoolTimer(
                            Windows::Internal::ComTaskPool::CThread::s_CheckForDeadlockTimerCallback,
                            pv,
                            0LL),
        (pv[13] = ThreadpoolTimer) != 0LL) )
  {
    pftDueTime.dwHighDateTime = -1;
    pftDueTime.dwLowDateTime = -5000000;
    SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, 0, 0xFAu);
  }
}
