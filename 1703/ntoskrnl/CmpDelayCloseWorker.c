/*
 * XREFs of CmpDelayCloseWorker @ 0x1404908F0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     CmpUnlockHashEntry @ 0x140490B2C (CmpUnlockHashEntry.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1404910B0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpLockKcbExclusive @ 0x1404916C8 (CmpLockKcbExclusive.c)
 *     CmpLockHashEntryExclusive @ 0x140491704 (CmpLockHashEntryExclusive.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpDelayCloseWorker(__int64 a1)
{
  __int64 v1; // r13
  unsigned int v2; // edi
  unsigned int v3; // r8d
  _BYTE *v4; // r10
  __int64 v5; // r9
  _QWORD *v6; // rcx
  __int64 v7; // rax
  _BYTE *v8; // rdx
  unsigned int v9; // ebp
  ULONG_PTR *v10; // rsi
  char *v11; // r14
  unsigned int v12; // r15d
  ULONG_PTR *v13; // rbx
  void *v15; // r12
  __int64 v16; // rax
  __int64 v17; // rdx
  char v19; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v20[12]; // [rsp+38h] [rbp-90h] BYREF
  char v21; // [rsp+44h] [rbp-84h] BYREF

  v1 = a1;
  CmpLockRegistry(a1);
  do
  {
    if ( !v1 )
      _InterlockedExchange(&CmpDelayCloseWorkItemActive, 2);
    do
    {
      v2 = 0;
      ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayedCloseTableLock);
      v3 = CmpDelayedCloseElements;
      v4 = v20;
      do
      {
        if ( v3 <= CmpDelayedCloseSize && (!v1 || !v3) )
          break;
        v5 = qword_14036B0A8 - 216;
        v6 = *(_QWORD **)(qword_14036B0A8 + 8);
        if ( *(__int64 **)qword_14036B0A8 != &CmpDelayedLRUListHead || *v6 != qword_14036B0A8 )
          __fastfail(3u);
        qword_14036B0A8 = *(_QWORD *)(qword_14036B0A8 + 8);
        *v6 = &CmpDelayedLRUListHead;
        --v3;
        --qword_1407AD0C8;
        *((_QWORD *)v4 - 1) = *(_QWORD *)(v5 + 24);
        *(_QWORD *)v4 = v5;
        v7 = v2++;
        CmpDelayedCloseElements = v3;
        v8 = &v20[24 * v7 + 8];
        *v8 = 0;
        *((_DWORD *)v4 + 3) = *(_DWORD *)(v5 + 8);
        v4 += 24;
        *(_BYTE *)(v5 + 56) |= 4u;
        *(_QWORD *)(v5 + 216) = v8;
      }
      while ( v2 < 4 );
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayedCloseTableLock);
      v9 = 0;
      if ( v2 )
      {
        v10 = (ULONG_PTR *)&v19;
        v11 = &v21;
        do
        {
          CmpLockHashEntryExclusive(*v10, *(unsigned int *)v11);
          v12 = v9;
          if ( v9 < v2 )
          {
            v13 = (ULONG_PTR *)(v11 - 12);
            do
            {
              if ( *((_DWORD *)v13 + 3) == *((_DWORD *)v10 + 5) && *(v13 - 1) == *v10 && !*((_BYTE *)v13 + 8) )
              {
                CmpLockKcbExclusive(*v13);
                v15 = 0LL;
                v16 = *(_QWORD *)(*v13 + 184);
                if ( v16 )
                {
                  v17 = *(_QWORD *)(v16 + 24);
                  if ( v17 )
                  {
                    v15 = *(void **)(v17 + 16);
                    CmpUnlockKcb((PVOID)*v13);
                    CmpLockKcbExclusive(v15);
                    CmpLockKcbExclusive(*v13);
                  }
                }
                CmpCleanUpKcbCacheWithLock(*v13);
                CmpUnlockKcb((PVOID)*v13);
                if ( v15 )
                  CmpUnlockKcb(v15);
                v20[24 * v12 + 8] = 1;
              }
              ++v12;
              v13 += 3;
            }
            while ( v12 < v2 );
          }
          CmpUnlockHashEntry(*v10, *(unsigned int *)v11);
          ++v9;
          v11 += 24;
          v10 += 3;
        }
        while ( v9 < v2 );
        v1 = a1;
      }
    }
    while ( v2 == 4 );
  }
  while ( !v1 && _InterlockedCompareExchange(&CmpDelayCloseWorkItemActive, 0, 2) != 2 );
  return CmpUnlockRegistry();
}
