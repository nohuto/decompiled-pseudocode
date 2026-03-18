/*
 * XREFs of MiZeroLargePages @ 0x14015C30C
 * Callers:
 *     MiZeroLargePageThread @ 0x14015C180 (MiZeroLargePageThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiZeroLargePage @ 0x1400B5CC0 (MiZeroLargePage.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     MiGetLargePageToZero @ 0x140129020 (MiGetLargePageToZero.c)
 *     MiOkToZeroNextLargePage @ 0x14015C47C (MiOkToZeroNextLargePage.c)
 *     MiReassessZeroThreads @ 0x14015C5D8 (MiReassessZeroThreads.c)
 */

__int64 __fastcall MiZeroLargePages(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rdi
  int v4; // r14d
  int v5; // ebp
  unsigned int v7; // r15d
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rcx
  int v11; // ecx
  signed __int32 v13[8]; // [rsp+0h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v16; // [rsp+88h] [rbp+10h]

  v15 = a1;
  v2 = *(_QWORD *)(a2 + 144);
  v3 = 0LL;
  v4 = 0;
  v5 = 0;
  v7 = 0;
  v16 = *(_DWORD *)(v2 + 40);
  v8 = __rdtsc();
  _InterlockedOr(v13, 0);
LABEL_2:
  v9 = v8;
  while ( 1 )
  {
    LODWORD(v15) = 0;
    if ( !(unsigned int)MiOkToZeroNextLargePage(a2, &v15) )
      break;
    if ( (_DWORD)v15 == 1 )
    {
      v5 = 0;
      v9 = __rdtsc();
      _InterlockedOr(v13, 0);
    }
    if ( MiGetLargePageToZero((__int64)&MiSystemPartition, a2, v3, v16) )
    {
      MiZeroLargePage(a2, (__int64)&MiSystemPartition);
      v10 = (unsigned __int64)MiLargePageSizes[v3] >> 9;
      v7 += v10;
      v5 += v10;
      if ( (v5 & 7) == 0 )
      {
        _InterlockedOr(v13, 0);
        MiReassessZeroThreads(a2, __rdtsc() - v9);
        v5 = 0;
        v8 = __rdtsc();
        _InterlockedOr(v13, 0);
        goto LABEL_2;
      }
    }
    else
    {
      if ( (_DWORD)v3 == 1 )
      {
        v4 = 1;
        break;
      }
      v3 = (unsigned int)(v3 + 1);
    }
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 24), &LockHandle);
  ++*(_DWORD *)(v2 + 120);
  v11 = *(_DWORD *)(v2 + 116);
  if ( v11 + *(_DWORD *)(v2 + 120) == *(_DWORD *)(v2 + 112) && v11 )
  {
    if ( v4 == 1 )
      *(_DWORD *)(v2 + 80) = 4;
    KeSetEvent((PRKEVENT)(v2 + 56), 0, 0);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v7;
}
