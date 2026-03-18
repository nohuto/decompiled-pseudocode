/*
 * XREFs of MiReplicatePteChange @ 0x14016B45C
 * Callers:
 *     MiDeleteVaTail @ 0x14000DF50 (MiDeleteVaTail.c)
 *     MiCreateSystemPageTable @ 0x140070FD0 (MiCreateSystemPageTable.c)
 *     MiDeleteSystemPageTable @ 0x1400B9530 (MiDeleteSystemPageTable.c)
 *     MiDecommitLargePoolVa @ 0x1401361A0 (MiDecommitLargePoolVa.c)
 *     MiZeroAndFlushPtes @ 0x14013CDC4 (MiZeroAndFlushPtes.c)
 *     MiPfnRangeIsZero @ 0x14017A9CC (MiPfnRangeIsZero.c)
 *     MiInitializeShadowPageTable @ 0x14062B9A4 (MiInitializeShadowPageTable.c)
 * Callees:
 *     MiGetLeafVa @ 0x14003DF80 (MiGetLeafVa.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MiReplicatePteChangeToProcess @ 0x14016B5AC (MiReplicatePteChangeToProcess.c)
 */

__int64 __fastcall MiReplicatePteChange(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // rdx
  _KPROCESS *Process; // r15
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v7; // rsi
  __int64 *v8; // rdi
  __int64 *i; // rbx
  __int64 result; // rax
  _KPROCESS *v11; // rcx
  int DirectoryTableBase_high; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = a1;
  v4 = 3LL;
  do
  {
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v4;
  }
  while ( v4 );
  Process = KeGetCurrentThread()->ApcState.Process;
  LeafVa = MiGetLeafVa(a1);
  if ( (unsigned int)MiGetSystemRegionType(LeafVa) == 1 )
  {
    v7 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v8 = (__int64 *)(v7 + 16);
  }
  else
  {
    v7 = 0LL;
    v8 = &qword_1403CB660;
  }
  KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
  for ( i = (__int64 *)*v8; i != v8; i = (__int64 *)*i )
  {
    v11 = (_KPROCESS *)((char *)i + (v7 != 0 ? -832LL : -1552LL));
    DirectoryTableBase_high = HIDWORD(v11[1].DirectoryTableBase);
    if ( (DirectoryTableBase_high & 0x800000) == 0 )
    {
      if ( (DirectoryTableBase_high & 0xC00) != 0 && (DirectoryTableBase_high & 0x80u) == 0 )
      {
        if ( v11 != Process )
          MiReplicatePteChangeToProcess(v11, v3, a2);
      }
      else
      {
        _InterlockedOr((volatile signed __int32 *)&v11[1].DirectoryTableBase + 1, 0x800000u);
      }
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
