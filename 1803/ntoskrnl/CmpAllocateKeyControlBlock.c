/*
 * XREFs of CmpAllocateKeyControlBlock @ 0x1404ABAC0
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1404AB0E0 (CmpCreateKeyControlBlock.c)
 *     CmpCloneToUnbackedKcb @ 0x1406F3310 (CmpCloneToUnbackedKcb.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140009020 (CmpAllocateTransientPoolWithTag.c)
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ExpReleaseFastMutexContended @ 0x140064400 (ExpReleaseFastMutexContended.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

_DWORD *CmpAllocateKeyControlBlock()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  _DWORD *v2; // rbx
  unsigned __int8 v3; // di
  signed __int32 v4; // eax
  _DWORD *TransientPoolWithTag; // rax
  _DWORD *v7; // r9
  unsigned __int16 i; // r8
  __int64 v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  _DWORD *v12; // rax

  _InterlockedIncrement64(&CmPerfCounters);
  if ( CmpAllocInited )
  {
    ExAcquireFastMutex((PFAST_MUTEX)&CmpAllocBucketLock);
    while ( 1 )
    {
      v0 = CmpFreeKCBListHead;
      if ( (__int64 *)CmpFreeKCBListHead != &CmpFreeKCBListHead )
        break;
      TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 0x1000uLL, 0x6C414D43u);
      v7 = TransientPoolWithTag;
      if ( !TransientPoolWithTag )
      {
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpAllocBucketLock);
        goto LABEL_18;
      }
      _InterlockedIncrement64(&qword_140862A90);
      *TransientPoolWithTag = 13;
      for ( i = 0; i < 0xDu; ++i )
      {
        v9 = 76LL * i;
        v10 = &v7[v9 + 30];
        v7[v9 + 3] |= 0x10000u;
        v11 = (_QWORD *)qword_1403CA6E8;
        if ( *(__int64 **)qword_1403CA6E8 != &CmpFreeKCBListHead )
          __fastfail(3u);
        *v10 = &CmpFreeKCBListHead;
        v10[1] = v11;
        *v11 = v10;
        qword_1403CA6E8 = (__int64)&v7[v9 + 30];
        _InterlockedIncrement64(&qword_140862A98);
      }
    }
    v1 = *(_QWORD *)CmpFreeKCBListHead;
    if ( *(__int64 **)(CmpFreeKCBListHead + 8) != &CmpFreeKCBListHead || *(_QWORD *)(v1 + 8) != CmpFreeKCBListHead )
      __fastfail(3u);
    CmpFreeKCBListHead = *(_QWORD *)CmpFreeKCBListHead;
    *(_QWORD *)(v1 + 8) = &CmpFreeKCBListHead;
    v2 = (_DWORD *)(v0 - 112);
    --*(_DWORD *)((v0 - 112) & 0xFFFFFFFFFFFFF000uLL);
    *(&CmpAllocBucketLock + 1) = 0LL;
    v3 = *((_BYTE *)&CmpAllocBucketLock + 48);
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpAllocBucketLock, 1, 0);
    if ( v4 )
      ExpReleaseFastMutexContended((__int64)&CmpAllocBucketLock, v4);
    __writecr8(v3);
    KeAbPostRelease((ULONG_PTR)&CmpAllocBucketLock);
    _InterlockedIncrement64(qword_140862AA0);
    _InterlockedDecrement64(&qword_140862A98);
    memset(v2, 0, 0x130uLL);
    v2[1] |= 0x10000u;
  }
  else
  {
LABEL_18:
    v12 = CmpAllocateTransientPoolWithTag(PagedPool, 0x130uLL, 0x626B4D43u);
    v2 = v12;
    if ( v12 )
    {
      memset(v12, 0, 0x130uLL);
      v2[1] &= ~0x10000u;
    }
  }
  return v2;
}
