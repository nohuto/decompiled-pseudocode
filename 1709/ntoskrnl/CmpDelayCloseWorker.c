/*
 * XREFs of CmpDelayCloseWorker @ 0x140477EE0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     CmpUnlockHashEntry @ 0x140478118 (CmpUnlockHashEntry.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140478800 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpLockKcbExclusive @ 0x140478D48 (CmpLockKcbExclusive.c)
 *     CmpLockHashEntryExclusive @ 0x140478D78 (CmpLockHashEntryExclusive.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpDelayCloseWorker(__int64 a1)
{
  __int64 v1; // r13
  unsigned int v2; // edi
  _BYTE *v3; // r9
  int v4; // ecx
  __int64 v5; // r8
  _QWORD *v6; // rdx
  __int64 v7; // rax
  _BYTE *v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebp
  char *v11; // rsi
  char *v12; // r14
  unsigned int v13; // r15d
  ULONG_PTR *v14; // rbx
  ULONG_PTR v16; // r12
  __int64 v17; // rax
  __int64 v18; // rdx
  char v20; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v21[12]; // [rsp+38h] [rbp-90h] BYREF
  char v22; // [rsp+44h] [rbp-84h] BYREF

  v1 = a1;
  CmpLockRegistry();
  do
  {
    if ( !v1 )
      _InterlockedExchange(&CmpDelayCloseWorkItemActive, 2);
    do
    {
      v2 = 0;
      ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayedCloseTableLock);
      v3 = v21;
      do
      {
        v4 = CmpDelayedCloseElements;
        if ( CmpDelayedCloseElements <= (unsigned int)CmpDelayedCloseSize && (!v1 || !CmpDelayedCloseElements) )
          break;
        v5 = qword_140387048 - 216;
        if ( *(__int64 **)qword_140387048 == &CmpDelayedLRUListHead )
        {
          v6 = *(_QWORD **)(qword_140387048 + 8);
          if ( *v6 == qword_140387048 )
            continue;
        }
        __fastfail(3u);
        qword_140387048 = *(_QWORD *)(qword_140387048 + 8);
        *v6 = &CmpDelayedLRUListHead;
        --qword_1407F4148;
        *((_QWORD *)v3 - 1) = *(_QWORD *)(v5 + 24);
        *(_QWORD *)v3 = v5;
        v7 = v2++;
        CmpDelayedCloseElements = v4 - 1;
        v8 = &v21[24 * v7 + 8];
        *v8 = 0;
        *((_DWORD *)v3 + 3) = *(_DWORD *)(v5 + 8);
        v3 += 24;
        *(_BYTE *)(v5 + 56) |= 4u;
        *(_QWORD *)(v5 + 216) = v8;
      }
      while ( v2 < 4 );
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayedCloseTableLock);
      v10 = 0;
      if ( v2 )
      {
        v11 = &v20;
        v12 = &v22;
        do
        {
          CmpLockHashEntryExclusive(*(_QWORD *)v11, *(unsigned int *)v12);
          v13 = v10;
          if ( v10 < v2 )
          {
            v14 = (ULONG_PTR *)(v12 - 12);
            do
            {
              if ( *((_DWORD *)v14 + 3) == *((_DWORD *)v11 + 5) && *(v14 - 1) == *(_QWORD *)v11 && !*((_BYTE *)v14 + 8) )
              {
                CmpLockKcbExclusive(*v14);
                v16 = 0LL;
                v17 = *(_QWORD *)(*v14 + 184);
                if ( v17 )
                {
                  v18 = *(_QWORD *)(v17 + 24);
                  if ( v18 )
                  {
                    v16 = *(_QWORD *)(v18 + 16);
                    CmpUnlockKcb(*v14);
                    CmpLockKcbExclusive(v16);
                    CmpLockKcbExclusive(*v14);
                  }
                }
                CmpCleanUpKcbCacheWithLock(*v14);
                CmpUnlockKcb(*v14);
                if ( v16 )
                  CmpUnlockKcb(v16);
                v21[24 * v13 + 8] = 1;
              }
              ++v13;
              v14 += 3;
            }
            while ( v13 < v2 );
          }
          CmpUnlockHashEntry(*(PVOID *)v11);
          ++v10;
          v12 += 24;
          v11 += 24;
        }
        while ( v10 < v2 );
        v1 = a1;
      }
    }
    while ( v2 == 4 );
  }
  while ( !v1 && _InterlockedCompareExchange(&CmpDelayCloseWorkItemActive, 0, 2) != 2 );
  return CmpUnlockRegistry(v9);
}
