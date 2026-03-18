/*
 * XREFs of MiDeleteZeroThreadContext @ 0x14015C1E0
 * Callers:
 *     MiZeroPageThread @ 0x1401579F0 (MiZeroPageThread.c)
 *     MiZeroNodePages @ 0x1401585A0 (MiZeroNodePages.c)
 *     MiCreateZeroThreadContext @ 0x14015892C (MiCreateZeroThreadContext.c)
 *     MiZeroLargePageThread @ 0x14015C180 (MiZeroLargePageThread.c)
 * Callees:
 *     KeSignalGate @ 0x14002E0B0 (KeSignalGate.c)
 *     MiReturnSystemVa @ 0x1400822DC (MiReturnSystemVa.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReleaseFreshPage @ 0x14010ADC8 (MiReleaseFreshPage.c)
 *     MiGetUltraMapping @ 0x14015C940 (MiGetUltraMapping.c)
 *     MiDecrementHugeContext @ 0x14015D00C (MiDecrementHugeContext.c)
 */

void __fastcall MiDeleteZeroThreadContext(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // esi
  __int64 *v4; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  __int64 v9; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 104) == 1 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    v2 = *(_QWORD *)(a1 + 112);
    if ( v2 )
    {
      KeAcquireInStackQueuedSpinLock(
        (PKSPIN_LOCK)(qword_140380230 + 2152 + 2184LL * *(unsigned int *)(v2 + 184)),
        &LockHandle);
      MiDecrementHugeContext(a1);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
    }
    MiGetUltraMapping(a1, 0xFFFFFFFFLL);
    MiReleaseFreshPage(48LL * *(_QWORD *)(a1 + 96) - 0x58000000000LL);
  }
  v3 = 0;
  v4 = MiLargePageSizes;
  do
  {
    v5 = *(__int64 *)((char *)v4 + a1 - (_QWORD)MiLargePageSizes + 120);
    if ( v5 )
    {
      v8 = v5 << 25 >> 16;
      v9 = 2 - v3;
      do
      {
        v8 = (__int64)(v8 << 25) >> 16;
        --v9;
      }
      while ( v9 );
      MiReturnSystemVa(v8, v8 + (*v4 << 12), 15, 0LL);
    }
    ++v3;
    ++v4;
  }
  while ( v3 <= 1 );
  v6 = *(_QWORD **)(a1 + 136);
  if ( v6 )
    MiReleasePtes((__int64)&qword_14036D0A0, v6, 0x100u);
  v7 = *(_QWORD *)(a1 + 144);
  if ( v7 && *(_DWORD *)(v7 + 44) && _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 44), 0xFFFFFFFF) == 1 )
    KeSignalGate(v7, 1);
}
