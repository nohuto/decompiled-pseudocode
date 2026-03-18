/*
 * XREFs of CmpDelayCloseWorker @ 0x14049CE20
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     CmpUnlockHashEntry @ 0x14049D070 (CmpUnlockHashEntry.c)
 *     CmpLockKcbExclusive @ 0x14049D0D8 (CmpLockKcbExclusive.c)
 *     CmpLockHashEntryExclusive @ 0x14049D108 (CmpLockHashEntryExclusive.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1404A9A60 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 */

__int64 __fastcall CmpDelayCloseWorker(__int64 a1)
{
  __int64 v1; // r13
  unsigned int v2; // edi
  _BYTE *v3; // r9
  int v4; // eax
  __int64 v5; // r8
  _QWORD *v6; // rdx
  __int64 v7; // rax
  _BYTE *v8; // rdx
  unsigned int v9; // ebp
  char *v10; // rsi
  char *v11; // r14
  unsigned int v12; // r15d
  ULONG_PTR *v13; // rbx
  ULONG_PTR v15; // r12
  ULONG_PTR v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  _BYTE v20[56]; // [rsp+28h] [rbp-D0h] BYREF
  char v21; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v22[12]; // [rsp+68h] [rbp-90h] BYREF
  char v23; // [rsp+74h] [rbp-84h] BYREF

  v1 = a1;
  CmpAttachToRegistryProcess(v20);
  CmpLockRegistry();
  do
  {
    if ( !v1 )
      _InterlockedExchange(&CmpDelayCloseWorkItemActive, 2);
    do
    {
      v2 = 0;
      ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayedCloseTableLock);
      v3 = v22;
      do
      {
        v4 = CmpDelayedCloseElements;
        if ( CmpDelayedCloseElements <= (unsigned int)CmpDelayedCloseSize && (!v1 || !CmpDelayedCloseElements) )
          break;
        v5 = qword_1403CA588 - 216;
        if ( *(__int64 **)qword_1403CA588 == &CmpDelayedLRUListHead )
        {
          v6 = *(_QWORD **)(qword_1403CA588 + 8);
          if ( *v6 == qword_1403CA588 )
            continue;
        }
        __fastfail(3u);
        qword_1403CA588 = *(_QWORD *)(qword_1403CA588 + 8);
        *v6 = &CmpDelayedLRUListHead;
        --qword_140862A88;
        CmpDelayedCloseElements = v4 - 1;
        *((_QWORD *)v3 - 1) = *(_QWORD *)(v5 + 24);
        *(_QWORD *)v3 = v5;
        v7 = v2++;
        v8 = &v22[24 * v7 + 8];
        *v8 = 0;
        *((_DWORD *)v3 + 3) = *(_DWORD *)(v5 + 8);
        v3 += 24;
        *(_BYTE *)(v5 + 56) |= 4u;
        *(_QWORD *)(v5 + 216) = v8;
      }
      while ( v2 < 4 );
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayedCloseTableLock);
      v9 = 0;
      if ( v2 )
      {
        v10 = &v21;
        v11 = &v23;
        do
        {
          CmpLockHashEntryExclusive(*(_QWORD *)v10, *(unsigned int *)v11);
          v12 = v9;
          if ( v9 < v2 )
          {
            v13 = (ULONG_PTR *)(v11 - 12);
            do
            {
              if ( *((_DWORD *)v13 + 3) == *((_DWORD *)v10 + 5) && *(v13 - 1) == *(_QWORD *)v10 && !*((_BYTE *)v13 + 8) )
              {
                CmpLockKcbExclusive(*v13);
                v15 = 0LL;
                v16 = *v13;
                v17 = *(_QWORD *)(*v13 + 184);
                if ( v17 )
                {
                  v18 = *(_QWORD *)(v17 + 24);
                  if ( v18 )
                  {
                    v15 = *(_QWORD *)(v18 + 16);
                    CmpUnlockKcb(*v13);
                    CmpLockKcbExclusive(v15);
                    CmpLockKcbExclusive(*v13);
                    v16 = *v13;
                  }
                }
                CmpCleanUpKcbCacheWithLock(v16);
                CmpUnlockKcb(*v13);
                if ( v15 )
                  CmpUnlockKcb(v15);
                v22[24 * v12 + 8] = 1;
              }
              ++v12;
              v13 += 3;
            }
            while ( v12 < v2 );
          }
          CmpUnlockHashEntry(*(PVOID *)v10);
          ++v9;
          v11 += 24;
          v10 += 24;
        }
        while ( v9 < v2 );
        v1 = a1;
      }
    }
    while ( v2 == 4 );
  }
  while ( !v1 && _InterlockedCompareExchange(&CmpDelayCloseWorkItemActive, 0, 2) != 2 );
  CmpUnlockRegistry();
  return KiUnstackDetachProcess((__int64)v20, 0LL);
}
