/*
 * XREFs of MiInitializeBootProcess @ 0x14089E3A8
 * Callers:
 *     MiInitSystem @ 0x14089C128 (MiInitSystem.c)
 * Callees:
 *     MiSetPageTablePfnBuddy @ 0x140071888 (MiSetPageTablePfnBuddy.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MmInitializeProcessAddressSpace @ 0x1404ECD04 (MmInitializeProcessAddressSpace.c)
 */

__int64 MiInitializeBootProcess()
{
  _KPROCESS *Process; // rbx
  _QWORD *v1; // rcx
  unsigned __int64 **v2; // rcx
  unsigned __int64 *v3; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v6; // [rsp+60h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !qword_14044B1B0 )
    qword_14044B1B0 = 0x100000LL;
  if ( !qword_14044B1A8 )
    qword_14044B1A8 = 0x2000LL;
  if ( !qword_14044B1A0 )
    qword_14044B1A0 = 0x10000LL;
  if ( !qword_14044B198 )
    qword_14044B198 = 4096LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  *(_QWORD *)&Process[1].Spare2[23] = 50LL;
  *(_QWORD *)&Process[1].Spare2[63] = 450LL;
  v1 = (_QWORD *)(48 * ((MEMORY[0xFFFFF6FB7DBEDF68] >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  *v1 = 0LL;
  MiSetPageTablePfnBuddy((__int64)v1, (__int64)Process, 0);
  _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x40000u);
  _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x800u);
  KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
  v2 = (unsigned __int64 **)qword_1403CB668;
  v3 = &Process[2].Affinity.Bitmap[1];
  if ( *(__int64 **)qword_1403CB668 != &qword_1403CB660 )
    __fastfail(3u);
  Process[2].Affinity.Bitmap[2] = qword_1403CB668;
  *v3 = (unsigned __int64)&qword_1403CB660;
  *v2 = v3;
  qword_1403CB668 = (__int64)&Process[2].Affinity.Bitmap[1];
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  v6 = 0;
  return MmInitializeProcessAddressSpace((ULONG_PTR)Process, 0LL, 0LL, &v6, 0);
}
