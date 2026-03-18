/*
 * XREFs of MiInitializeBootProcess @ 0x140855684
 * Callers:
 *     MiInitSystem @ 0x140828E58 (MiInitSystem.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSetPageTablePfnBuddy @ 0x1400B7DD4 (MiSetPageTablePfnBuddy.c)
 *     MmInitializeProcessAddressSpace @ 0x14045E2B4 (MmInitializeProcessAddressSpace.c)
 */

__int64 MiInitializeBootProcess()
{
  _KPROCESS *Process; // rbx
  _QWORD *v1; // rcx
  unsigned __int64 **v2; // rcx
  unsigned __int64 *v3; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+60h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !qword_140400150 )
    qword_140400150 = 0x100000LL;
  if ( !qword_140400148 )
    qword_140400148 = 0x2000LL;
  if ( !qword_140400140 )
    qword_140400140 = 0x10000LL;
  if ( !qword_140400138 )
    qword_140400138 = 4096LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  *(_QWORD *)&Process[1].Spare2[23] = 50LL;
  *(_QWORD *)&Process[1].Spare2[63] = 450LL;
  v1 = (_QWORD *)(48 * ((MEMORY[0xFFFFF6FB7DBEDF68] >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  *v1 = 0LL;
  MiSetPageTablePfnBuddy((__int64)v1, (__int64)Process, 0);
  _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x40000u);
  _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x800u);
  KeAcquireInStackQueuedSpinLock(&qword_140389240, &LockHandle);
  v2 = (unsigned __int64 **)qword_1403884E0;
  v3 = &Process[2].Affinity.Bitmap[1];
  if ( *(__int64 **)qword_1403884E0 != &qword_1403884D8 )
    __fastfail(3u);
  Process[2].Affinity.Bitmap[2] = qword_1403884E0;
  *v3 = (unsigned __int64)&qword_1403884D8;
  *v2 = v3;
  qword_1403884E0 = (__int64)&Process[2].Affinity.Bitmap[1];
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  v6 = 0;
  return MmInitializeProcessAddressSpace((ULONG_PTR)Process, 0LL, 0LL, &v6, 0);
}
