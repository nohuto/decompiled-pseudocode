/*
 * XREFs of CmpAllocateKeyControlBlock @ 0x1406664FC
 * Callers:
 *     CmpCloneToUnbackedKcb @ 0x140665800 (CmpCloneToUnbackedKcb.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14007EAA8 (CmpAllocateTransientPoolWithTag.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall CmpAllocateKeyControlBlock(__int64 a1)
{
  _QWORD *v1; // rcx
  __int64 v2; // rbx
  _DWORD *TransientPoolWithTag; // rax
  unsigned __int16 i; // r8
  __int64 v5; // rdx
  _QWORD *v6; // rdx
  _DWORD *v7; // rax
  __int64 v8; // rbx
  __int64 v10; // rax

  _InterlockedAdd64(&CmPerfCounters, 1uLL);
  if ( CmpAllocInited )
  {
    ExAcquireFastMutex((PFAST_MUTEX)&CmpAllocBucketLock);
    while ( 1 )
    {
      v2 = CmpFreeKCBListHead;
      if ( (__int64 *)CmpFreeKCBListHead != &CmpFreeKCBListHead )
        break;
      TransientPoolWithTag = CmpAllocateTransientPoolWithTag((__int64)v1, 0x1000uLL, 0x6C414D43u);
      if ( !TransientPoolWithTag )
      {
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpAllocBucketLock);
        goto LABEL_11;
      }
      _InterlockedAdd64(&qword_1407AD0D0, 1uLL);
      *TransientPoolWithTag = 13;
      for ( i = 0; i < 0xDu; ++i )
      {
        v5 = 74LL * i;
        v1 = &TransientPoolWithTag[v5 + 30];
        TransientPoolWithTag[v5 + 3] |= 0x10000u;
        v6 = (_QWORD *)qword_14036B208;
        if ( *(__int64 **)qword_14036B208 != &CmpFreeKCBListHead )
          __fastfail(3u);
        *v1 = &CmpFreeKCBListHead;
        v1[1] = v6;
        *v6 = v1;
        qword_14036B208 = (__int64)v1;
        _InterlockedAdd64(&qword_1407AD0D8, 1uLL);
      }
    }
    v10 = *(_QWORD *)CmpFreeKCBListHead;
    if ( *(__int64 **)(CmpFreeKCBListHead + 8) != &CmpFreeKCBListHead || *(_QWORD *)(v10 + 8) != CmpFreeKCBListHead )
      __fastfail(3u);
    CmpFreeKCBListHead = *(_QWORD *)CmpFreeKCBListHead;
    v8 = v2 - 112;
    *(_QWORD *)(v10 + 8) = &CmpFreeKCBListHead;
    --*(_DWORD *)(v8 & 0xFFFFFFFFFFFFF000uLL);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpAllocBucketLock);
    _InterlockedAdd64(qword_1407AD0E0, 1uLL);
    _InterlockedDecrement64(&qword_1407AD0D8);
    memset((void *)v8, 0, 0x128uLL);
    *(_DWORD *)(v8 + 4) |= 0x10000u;
  }
  else
  {
LABEL_11:
    v7 = CmpAllocateTransientPoolWithTag(a1, 0x128uLL, 0x626B4D43u);
    v8 = (__int64)v7;
    if ( v7 )
    {
      memset(v7, 0, 0x128uLL);
      *(_DWORD *)(v8 + 4) &= ~0x10000u;
    }
  }
  return v8;
}
