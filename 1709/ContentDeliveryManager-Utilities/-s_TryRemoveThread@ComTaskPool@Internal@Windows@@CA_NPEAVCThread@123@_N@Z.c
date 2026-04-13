/*
 * XREFs of ?s_TryRemoveThread@ComTaskPool@Internal@Windows@@CA_NPEAVCThread@123@_N@Z @ 0x180006030
 * Callers:
 *     ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x18000522C (-_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

char __fastcall Windows::Internal::ComTaskPool::s_TryRemoveThread(
        struct Windows::Internal::ComTaskPool::CThread *a1,
        char a2)
{
  char v4; // bl
  struct Windows::Internal::ComTaskPool::CThread **v5; // rcx
  __int64 v6; // rax

  AcquireSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
  if ( !a2
    && (*((_QWORD *)a1 + 18)
     || Windows::Internal::ComTaskPool::s_taskFloodingList
     || Windows::Internal::ComTaskPool::s_cThreadsStarting) )
  {
    v4 = 0;
  }
  else
  {
    v5 = &Windows::Internal::ComTaskPool::s_pThreadList;
    v4 = 1;
    if ( Windows::Internal::ComTaskPool::s_pThreadList != a1 )
    {
      do
        v5 = (struct Windows::Internal::ComTaskPool::CThread **)((char *)*v5 + 16);
      while ( *v5 != a1 );
    }
    *v5 = (struct Windows::Internal::ComTaskPool::CThread *)*((_QWORD *)a1 + 2);
    v6 = *(_QWORD *)a1;
    *((_QWORD *)a1 + 2) = 0LL;
    (*(void (__fastcall **)(struct Windows::Internal::ComTaskPool::CThread *))(v6 + 16))(a1);
    if ( !Windows::Internal::ComTaskPool::s_pThreadList && Windows::Internal::ComTaskPool::s_hEventCache )
    {
      CloseHandle(Windows::Internal::ComTaskPool::s_hEventCache);
      Windows::Internal::ComTaskPool::s_hEventCache = 0LL;
    }
  }
  ReleaseSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
  return v4;
}
