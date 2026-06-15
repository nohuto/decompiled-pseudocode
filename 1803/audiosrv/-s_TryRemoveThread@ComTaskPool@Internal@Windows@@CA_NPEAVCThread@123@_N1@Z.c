/*
 * XREFs of ?s_TryRemoveThread@ComTaskPool@Internal@Windows@@CA_NPEAVCThread@123@_N1@Z @ 0x1800654B0
 * Callers:
 *     ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x180112454 (-_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall Windows::Internal::ComTaskPool::s_TryRemoveThread(
        struct Windows::Internal::ComTaskPool::CThread *a1,
        char a2,
        char a3)
{
  char v6; // bl
  struct Windows::Internal::ComTaskPool::CThread *v7; // rax
  PVOID *v8; // rcx
  __int64 v9; // rax

  AcquireSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
  if ( !a2
    && (*((_QWORD *)a1 + 18)
     || !a3 && Windows::Internal::ComTaskPool::s_taskFloodingList
     || *((_BYTE *)a1 + 48) && Windows::Internal::ComTaskPool::s_cThreadsStarting) )
  {
    v6 = 0;
  }
  else
  {
    v7 = (struct Windows::Internal::ComTaskPool::CThread *)Windows::Internal::ComTaskPool::s_pThreadList;
    v8 = &Windows::Internal::ComTaskPool::s_pThreadList;
    v6 = 1;
    while ( v7 != a1 )
    {
      v8 = (PVOID *)((char *)v7 + 16);
      v7 = (struct Windows::Internal::ComTaskPool::CThread *)*((_QWORD *)v7 + 2);
    }
    *v8 = (PVOID)*((_QWORD *)a1 + 2);
    v9 = *(_QWORD *)a1;
    *((_QWORD *)a1 + 2) = 0LL;
    (*(void (__fastcall **)(struct Windows::Internal::ComTaskPool::CThread *))(v9 + 16))(a1);
    if ( !Windows::Internal::ComTaskPool::s_pThreadList && Windows::Internal::ComTaskPool::s_hEventCache )
    {
      CloseHandle(Windows::Internal::ComTaskPool::s_hEventCache);
      Windows::Internal::ComTaskPool::s_hEventCache = 0LL;
    }
  }
  ReleaseSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
  return v6;
}
