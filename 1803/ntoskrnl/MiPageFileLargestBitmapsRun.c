/*
 * XREFs of MiPageFileLargestBitmapsRun @ 0x14009D2DC
 * Callers:
 *     MiFindBestOutswapPagefile @ 0x14007FC04 (MiFindBestOutswapPagefile.c)
 *     MiGetKernelStackSwapSupport @ 0x14009C5E8 (MiGetKernelStackSwapSupport.c)
 *     MiFindFreePageFileSpace @ 0x14009CC84 (MiFindFreePageFileSpace.c)
 *     MiGatherPagefilePages @ 0x1400D5DC8 (MiGatherPagefilePages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14025FF60 (MiTrimUnusedPageFileRegionsWorker.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiPageFileLargestBitmapsRun(__int64 a1)
{
  unsigned int v2; // edi
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  unsigned __int64 i; // rax
  __int64 j; // rcx
  unsigned int v9; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
  v3 = *(_QWORD *)(a1 + 144);
  if ( (*(_QWORD *)(a1 + 152) & 1) != 0 )
  {
    if ( v3 )
      v3 ^= a1 + 144;
    else
      v3 = 0LL;
  }
  v4 = 0LL;
  while ( v3 )
  {
    if ( *(_DWORD *)(v3 + 52) == -1 )
    {
      if ( !*(_DWORD *)(v3 + 48) )
        goto LABEL_16;
      v5 = *(_QWORD *)v3;
      v4 = v3;
    }
    else
    {
      v5 = *(_QWORD *)(v3 + 8);
    }
    if ( (*(_QWORD *)(a1 + 152) & 1) != 0 && v5 )
      v3 ^= v5;
    else
      v3 = v5;
  }
  v3 = v4;
LABEL_16:
  v6 = *(_QWORD *)v3;
  if ( *(_QWORD *)v3 )
  {
    for ( i = *(_QWORD *)(v6 + 8); i; i = *(_QWORD *)(i + 8) )
      v6 = i;
  }
  else
  {
    for ( j = *(_QWORD *)(v3 + 16); ; j = *(_QWORD *)(v6 + 16) )
    {
      v6 = j & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v6 || *(_QWORD *)(v6 + 8) == v3 )
        break;
      v3 = v6;
    }
  }
  if ( v6 )
    v2 = *(_DWORD *)(v6 + 52);
  v9 = *(_DWORD *)(a1 + 140);
  if ( v2 > v9 )
    v9 = v2;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v9;
}
