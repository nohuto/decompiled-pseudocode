/*
 * XREFs of MiReleaseLargeZeroingVa @ 0x1400B3778
 * Callers:
 *     MiZeroLargePage @ 0x1400B5CC0 (MiZeroLargePage.c)
 *     MiDecrementHugeContext @ 0x14015D00C (MiDecrementHugeContext.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiZeroPageWorkMapping @ 0x1400B3330 (MiZeroPageWorkMapping.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 */

__int64 __fastcall MiReleaseLargeZeroingVa(__int64 a1)
{
  unsigned int v2; // ecx
  KSPIN_LOCK *v3; // rbp
  KSPIN_LOCK v4; // rsi
  KSPIN_LOCK v5; // rbx
  _QWORD *v6; // rcx
  __int64 v7; // rcx
  KSPIN_LOCK v8; // rsi
  __int64 result; // rax
  __int64 v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_DWORD *)(a1 + 64);
  if ( *(_BYTE *)(a1 + 104) != 1 )
    return MiZeroPageWorkMapping(v2, *(_QWORD *)(a1 + 32));
  v3 = *(KSPIN_LOCK **)(a1 + 144);
  v4 = v3[17];
  if ( v2
    || (v5 = v3[17],
        v4 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 176LL),
        KeAcquireInStackQueuedSpinLock(v3 + 3, &LockHandle),
        _bittestandset64(*(signed __int64 **)(v3[20] + 8), (v4 - v5) >> 30),
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle),
        __writecr8(LockHandle.OldIrql),
        v6 = (_QWORD *)(((v4 >> 27) & 0x1FFFF8) - 0x90482600000LL),
        ((v4 >> 27) & 0x1FFFF8) == 0x90482600000LL) )
  {
    v7 = *(_QWORD *)(a1 + 88);
    v8 = ((v7 + (*(_QWORD *)(a1 + 80) << 9)) << 21) + v4;
    *(_QWORD *)(a1 + 88) = v7 + 1;
    v6 = (_QWORD *)(((v8 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  }
  *v6 = 0LL;
  result = MiPteInShadowRange(v6);
  if ( (_DWORD)result )
    return MiWritePteShadow(v10);
  return result;
}
