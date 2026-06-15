/*
 * XREFs of ?CheckForDeadlock@CThread@ComTaskPool@Internal@Windows@@QEAAXXZ @ 0x1800E2CD0
 * Callers:
 *     ?s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@PEAVTaskList@123@PEAPEAVCThread@123@@Z @ 0x1800E5F10 (-s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::ComTaskPool::CThread::CheckForDeadlock(_QWORD *pv)
{
  bool v1; // zf
  struct _TP_TIMER *v3; // rcx
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  v1 = pv[13] == 0LL;
  *((_BYTE *)pv + 97) = 1;
  if ( v1 )
    pv[13] = CreateThreadpoolTimer(Windows::Internal::ComTaskPool::CThread::s_CheckForDeadlockTimerCallback, pv, 0LL);
  v3 = (struct _TP_TIMER *)pv[13];
  if ( v3 )
  {
    pftDueTime.dwHighDateTime = -1;
    pftDueTime.dwLowDateTime = -5000000;
    SetThreadpoolTimer(v3, &pftDueTime, 0, 0xFAu);
  }
}
