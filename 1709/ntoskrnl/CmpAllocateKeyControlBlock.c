/*
 * XREFs of CmpAllocateKeyControlBlock @ 0x140481170
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x140480870 (CmpCreateKeyControlBlock.c)
 *     CmpCloneToUnbackedKcb @ 0x14068F450 (CmpCloneToUnbackedKcb.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140016F60 (CmpAllocateTransientPoolWithTag.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExpReleaseFastMutexContended @ 0x1400A6FF0 (ExpReleaseFastMutexContended.c)
 *     ExpAcquireFastMutexContended @ 0x1400BAC30 (ExpAcquireFastMutexContended.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     memset @ 0x140192F40 (memset.c)
 */

_DWORD *__fastcall CmpAllocateKeyControlBlock(__int64 a1)
{
  _RTL_BALANCED_NODE *v1; // rax
  _QWORD *v2; // rcx
  _RTL_BALANCED_NODE *v3; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // rax
  __int64 v6; // rcx
  _DWORD *v7; // rbx
  unsigned __int8 v8; // di
  signed __int32 v9; // eax
  _DWORD *TransientPoolWithTag; // rax
  _DWORD *v12; // r9
  unsigned __int16 i; // r8
  __int64 v14; // rdx
  _QWORD *v15; // rax
  _DWORD *v16; // rax

  _InterlockedIncrement64(&CmPerfCounters);
  if ( CmpAllocInited )
  {
    v1 = KeAbPreAcquire((ULONG_PTR)&CmpAllocBucketLock, 0LL, 0);
    v3 = v1;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpAllocBucketLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&CmpAllocBucketLock, v1);
    if ( v3 )
      BYTE2(v3[1].Left) |= 1u;
    *(&CmpAllocBucketLock + 1) = (ULONG_PTR)KeGetCurrentThread();
    *((_DWORD *)&CmpAllocBucketLock + 12) = CurrentIrql;
    while ( 1 )
    {
      v5 = CmpFreeKCBListHead;
      if ( (__int64 *)CmpFreeKCBListHead != &CmpFreeKCBListHead )
        break;
      TransientPoolWithTag = CmpAllocateTransientPoolWithTag((__int64)v2, 0x1000uLL, 0x6C414D43u);
      v12 = TransientPoolWithTag;
      if ( !TransientPoolWithTag )
      {
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpAllocBucketLock);
        goto LABEL_21;
      }
      _InterlockedIncrement64(&qword_1407F4150);
      *TransientPoolWithTag = 13;
      for ( i = 0; i < 0xDu; ++i )
      {
        v14 = 76LL * i;
        v15 = &v12[v14 + 30];
        v12[v14 + 3] |= 0x10000u;
        v2 = (_QWORD *)qword_1403871A8;
        if ( *(__int64 **)qword_1403871A8 != &CmpFreeKCBListHead )
          __fastfail(3u);
        *v15 = &CmpFreeKCBListHead;
        v15[1] = v2;
        *v2 = v15;
        qword_1403871A8 = (__int64)&v12[v14 + 30];
        _InterlockedIncrement64(&qword_1407F4158);
      }
    }
    v6 = *(_QWORD *)CmpFreeKCBListHead;
    if ( *(__int64 **)(CmpFreeKCBListHead + 8) != &CmpFreeKCBListHead || *(_QWORD *)(v6 + 8) != CmpFreeKCBListHead )
      __fastfail(3u);
    CmpFreeKCBListHead = *(_QWORD *)CmpFreeKCBListHead;
    *(_QWORD *)(v6 + 8) = &CmpFreeKCBListHead;
    v7 = (_DWORD *)(v5 - 112);
    --*(_DWORD *)((v5 - 112) & 0xFFFFFFFFFFFFF000uLL);
    *(&CmpAllocBucketLock + 1) = 0LL;
    v8 = *((_BYTE *)&CmpAllocBucketLock + 48);
    v9 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpAllocBucketLock, 1, 0);
    if ( v9 )
      ExpReleaseFastMutexContended((__int64)&CmpAllocBucketLock, v9);
    __writecr8(v8);
    KeAbPostRelease((ULONG_PTR)&CmpAllocBucketLock);
    _InterlockedIncrement64(qword_1407F4160);
    _InterlockedDecrement64(&qword_1407F4158);
    memset(v7, 0, 0x130uLL);
    v7[1] |= 0x10000u;
  }
  else
  {
LABEL_21:
    v16 = CmpAllocateTransientPoolWithTag(a1, 0x130uLL, 0x626B4D43u);
    v7 = v16;
    if ( v16 )
    {
      memset(v16, 0, 0x130uLL);
      v7[1] &= ~0x10000u;
    }
  }
  return v7;
}
