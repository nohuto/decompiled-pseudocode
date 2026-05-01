/*
 * XREFs of ?s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z @ 0x180022828
 * Callers:
 *     ?s_TPWake@CDelayedTask@ComTaskPool@Internal@Windows@@CAXPEAXE@Z @ 0x180021AE0 (-s_TPWake@CDelayedTask@ComTaskPool@Internal@Windows@@CAXPEAXE@Z.c)
 *     ?s_CheckForDeadlockTimerCallback@CThread@ComTaskPool@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180021F40 (-s_CheckForDeadlockTimerCallback@CThread@ComTaskPool@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTA.c)
 *     ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x180022970 (-_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ.c)
 * Callees:
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x180023784 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::ComTaskPool::s_AttachAndRecoverTask(
        struct Windows::Internal::ComTaskPool::TaskData *Block)
{
  __int64 v2; // rcx

  if ( (int)Windows::Internal::ComTaskPool::s_QueuePoolTask(
              *(unsigned int *)Block,
              *((unsigned int *)Block + 1),
              *((unsigned int *)Block + 2),
              *((_QWORD *)Block + 2)) < 0 )
  {
    AcquireSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
    if ( qword_1802BAD60 )
      *(_QWORD *)(qword_1802BAD60 + 24) = Block;
    else
      Windows::Internal::ComTaskPool::s_taskFloodingList = (__int64)Block;
    qword_1802BAD60 = (__int64)Block;
    ReleaseSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
  }
  else
  {
    v2 = *((_QWORD *)Block + 2);
    if ( v2 )
    {
      *((_QWORD *)Block + 2) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
    operator delete(Block);
  }
}
