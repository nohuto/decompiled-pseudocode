/*
 * XREFs of MiFreeUltraMapping @ 0x14018373C
 * Callers:
 *     MiZeroPage @ 0x1400299B0 (MiZeroPage.c)
 *     MiReleaseLargeZeroingVa @ 0x140266E48 (MiReleaseLargeZeroingVa.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiFreeUltraMapping(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  _QWORD *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = (a1 - qword_1403CC2F0) >> 30;
  v2 = (_QWORD *)(((a1 >> 27) & 0x1FFFF8) - 0x90482600000LL);
  KeAcquireInStackQueuedSpinLock(&qword_1403CC2E8, &LockHandle);
  _bittestandset64((signed __int64 *)qword_1403CC318, v1);
  *v2 = ZeroPte;
  if ( MiPteInShadowRange((unsigned __int64)v2) )
    MiWritePteShadow(v4, v3, v5);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
