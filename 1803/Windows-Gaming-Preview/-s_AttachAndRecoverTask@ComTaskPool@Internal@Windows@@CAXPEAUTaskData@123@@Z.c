/*
 * XREFs of ?s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z @ 0x180024B2C
 * Callers:
 *     ?s_CheckForDeadlockTimerCallback@CThread@ComTaskPool@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800240E0 (-s_CheckForDeadlockTimerCallback@CThread@ComTaskPool@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTA.c)
 *     ?s_ClearOrGetNextTask@ComTaskPool@Internal@Windows@@CAXPEAVCThread@123@@Z @ 0x180024898 (-s_ClearOrGetNextTask@ComTaskPool@Internal@Windows@@CAXPEAVCThread@123@@Z.c)
 *     ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x180024C8C (-_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ.c)
 * Callees:
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x180025984 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
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
    if ( qword_18005DDA8 )
      *(_QWORD *)(qword_18005DDA8 + 24) = Block;
    else
      Windows::Internal::ComTaskPool::s_taskFloodingList = Block;
    qword_18005DDA8 = (__int64)Block;
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
