/*
 * XREFs of MiZeroLargePages @ 0x14017B634
 * Callers:
 *     MiZeroLargePageThread @ 0x14017B500 (MiZeroLargePageThread.c)
 * Callees:
 *     MiZeroPage @ 0x1400299B0 (MiZeroPage.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     MiOkToZeroNextLargePage @ 0x14017B760 (MiOkToZeroNextLargePage.c)
 *     MiGetPagesToZero @ 0x14017B8BC (MiGetPagesToZero.c)
 *     MiReassessZeroThreads @ 0x14017BC60 (MiReassessZeroThreads.c)
 */

__int64 __fastcall MiZeroLargePages(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned int v3; // edi
  int v4; // r15d
  unsigned int v6; // r14d
  int v7; // esi
  unsigned __int64 v8; // r12
  int v9; // ecx
  signed __int32 v11[8]; // [rsp+0h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+70h] [rbp+8h] BYREF

  v13 = a1;
  v2 = *(_QWORD *)(a2 + 224);
  v3 = 0;
  v4 = 0;
  v6 = 0;
LABEL_2:
  v7 = 0;
  _InterlockedOr(v11, 0);
  v8 = __rdtsc();
  while ( 1 )
  {
    LODWORD(v13) = 0;
    if ( !(unsigned int)MiOkToZeroNextLargePage(a2, &v13) )
      break;
    if ( (_DWORD)v13 == 1 )
    {
      v7 = 0;
      v8 = __rdtsc();
      _InterlockedOr(v11, 0);
    }
    if ( (unsigned int)MiGetPagesToZero(&MiSystemPartition, a2, v3) )
    {
      MiZeroPage(a2, (__int64)&MiSystemPartition);
      ++v6;
      if ( (++v7 & 7) == 0 )
      {
        _InterlockedOr(v11, 0);
        MiReassessZeroThreads(a2, __rdtsc() - v8);
        goto LABEL_2;
      }
    }
    else
    {
      if ( v3 == 1 )
      {
        v4 = 1;
        break;
      }
      ++v3;
    }
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 24), &LockHandle);
  ++*(_DWORD *)(v2 + 128);
  v9 = *(_DWORD *)(v2 + 124);
  if ( v9 + *(_DWORD *)(v2 + 128) == *(_DWORD *)(v2 + 120) && v9 )
  {
    if ( v4 == 1 )
      *(_DWORD *)(v2 + 88) = 4;
    KeSetEvent((PRKEVENT)(v2 + 64), 0, 0);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v6;
}
