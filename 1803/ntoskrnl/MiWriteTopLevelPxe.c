/*
 * XREFs of MiWriteTopLevelPxe @ 0x140165CA8
 * Callers:
 *     MiDeleteVa @ 0x140011580 (MiDeleteVa.c)
 *     MiCommitPoolMemory @ 0x1400250E0 (MiCommitPoolMemory.c)
 *     MiDeletePteRun @ 0x14002A950 (MiDeletePteRun.c)
 *     MiMapNewSession @ 0x14060B454 (MiMapNewSession.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiWriteTopLevelPxe(__int64 *a1, __int64 a2)
{
  BOOL v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
  v4 = MiPteInShadowRange((unsigned __int64)a1);
  *a1 = a2;
  if ( v4 )
    MiWritePteShadow(v5, a2, v6);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
