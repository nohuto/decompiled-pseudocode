/*
 * XREFs of MiAttachSession @ 0x140070CAC
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14000B2A0 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     KeFlushTb @ 0x1400349E0 (KeFlushTb.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiCompareTbFlushTimeStamp @ 0x140070D44 (MiCompareTbFlushTimeStamp.c)
 *     MiGetTopPteAddress @ 0x140070E30 (MiGetTopPteAddress.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiAttachSession(unsigned __int64 a1)
{
  _QWORD *TopPteAddress; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
  KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] = a1;
  TopPteAddress = (_QWORD *)MiGetTopPteAddress(qword_1403CB640);
  *TopPteAddress = *(_QWORD *)(a1 + 8008);
  if ( MiPteInShadowRange((unsigned __int64)TopPteAddress) )
    MiWritePteShadow(v4, v3, v5);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  result = MiCompareTbFlushTimeStamp((unsigned int)dword_1403CB5E0, 0xFFFFFFFFLL);
  if ( (_BYTE)result )
    return KeFlushTb(1u, 0);
  return result;
}
