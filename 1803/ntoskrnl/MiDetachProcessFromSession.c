/*
 * XREFs of MiDetachProcessFromSession @ 0x140070DA4
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14000B2A0 (MiTrimOrAgeWorkingSet.c)
 *     MiDereferenceSessionFinal @ 0x1405ECD70 (MiDereferenceSessionFinal.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiGetTopPteAddress @ 0x140070E30 (MiGetTopPteAddress.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiDetachProcessFromSession(int a1)
{
  _QWORD *TopPteAddress; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  TopPteAddress = (_QWORD *)MiGetTopPteAddress(qword_1403CB640);
  KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
  *TopPteAddress = ZeroPte;
  if ( MiPteInShadowRange((unsigned __int64)TopPteAddress) )
    MiWritePteShadow(v4, v3, v5);
  if ( a1 == 1 )
    KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
