/*
 * XREFs of MiPageFileLargestBitmapsRun @ 0x14007DC78
 * Callers:
 *     MiGatherPagefilePages @ 0x140056D98 (MiGatherPagefilePages.c)
 *     MiFindBestOutswapPagefile @ 0x14007D30C (MiFindBestOutswapPagefile.c)
 *     MiGetKernelStackSwapSupport @ 0x14007D9B4 (MiGetKernelStackSwapSupport.c)
 *     MiFindFreePageFileSpace @ 0x14007DD54 (MiFindFreePageFileSpace.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14021A770 (MiTrimUnusedPageFileRegionsWorker.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiPageFileLargestBitmapsRun(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 j; // rax
  unsigned __int64 i; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 144);
  while ( v4 )
  {
    if ( *(_DWORD *)(v4 + 52) == -1 )
    {
      if ( !*(_DWORD *)(v4 + 48) )
        goto LABEL_8;
      v5 = *(_QWORD *)v4;
      v3 = v4;
    }
    else
    {
      v5 = *(_QWORD *)(v4 + 8);
    }
    if ( (*(_BYTE *)(a1 + 152) & 1) != 0 && v5 )
      v4 ^= v5;
    else
      v4 = v5;
  }
  v4 = v3;
LABEL_8:
  v6 = *(_QWORD *)v4;
  if ( *(_QWORD *)v4 )
  {
    for ( i = *(_QWORD *)(v6 + 8); i; i = *(_QWORD *)(i + 8) )
      v6 = i;
  }
  else
  {
    for ( j = *(_QWORD *)(v4 + 16); ; j = *(_QWORD *)(v6 + 16) )
    {
      v6 = j & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v6 || *(_QWORD *)(v6 + 8) == v4 )
        break;
      v4 = v6;
    }
  }
  if ( v6 )
    v2 = *(_DWORD *)(v6 + 52);
  if ( v2 <= *(_DWORD *)(a1 + 140) )
    v2 = *(_DWORD *)(a1 + 140);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v2;
}
