/*
 * XREFs of MiInitializeBootProcess @ 0x1408244AC
 * Callers:
 *     MiInitSystem @ 0x1408032EC (MiInitSystem.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MmInitializeProcessAddressSpace @ 0x14049DBB4 (MmInitializeProcessAddressSpace.c)
 */

__int64 MiInitializeBootProcess()
{
  _KPROCESS *Process; // rbx
  unsigned __int64 **v1; // rcx
  unsigned __int64 *v2; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v5; // [rsp+60h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !qword_1403E3150 )
    qword_1403E3150 = 0x100000LL;
  if ( !qword_1403E3148 )
    qword_1403E3148 = 0x2000LL;
  if ( !qword_1403E3140 )
    qword_1403E3140 = 0x10000LL;
  if ( !qword_1403E3138 )
    qword_1403E3138 = 4096LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  *(_QWORD *)&Process[1].Spare2[23] = 50LL;
  *(_QWORD *)&Process[1].Spare2[63] = 450LL;
  *(_QWORD *)(48 * ((MEMORY[0xFFFFF6FB7DBEDF68] >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) = Process;
  _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x40000u);
  _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x800u);
  KeAcquireInStackQueuedSpinLock(&qword_14036CF80, &LockHandle);
  v1 = (unsigned __int64 **)qword_14036C1A0;
  v2 = &Process[2].Affinity.Bitmap[1];
  if ( *(__int64 **)qword_14036C1A0 != &qword_14036C198 )
    __fastfail(3u);
  Process[2].Affinity.Bitmap[2] = qword_14036C1A0;
  *v2 = (unsigned __int64)&qword_14036C198;
  *v1 = v2;
  qword_14036C1A0 = (__int64)&Process[2].Affinity.Bitmap[1];
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  v5 = 0;
  return MmInitializeProcessAddressSpace((__int64)Process, 0LL, 0LL, &v5, 0);
}
