/*
 * XREFs of MiReplicatePteChange @ 0x140152B20
 * Callers:
 *     MiMakeZeroedPageTableRange @ 0x1400C3F64 (MiMakeZeroedPageTableRange.c)
 *     MiZeroSystemPdes @ 0x1400F7190 (MiZeroSystemPdes.c)
 *     MiPfnRangeIsZero @ 0x140144C40 (MiPfnRangeIsZero.c)
 *     MiDeletePteRange @ 0x1402151D4 (MiDeletePteRange.c)
 *     MiInitializeShadowPageTable @ 0x14043CFEC (MiInitializeShadowPageTable.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiShadowTopLevelPxes @ 0x14017C4E4 (MiShadowTopLevelPxes.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

__int64 __fastcall MiReplicatePteChange(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r15
  unsigned __int64 v4; // rbp
  __int64 v5; // r8
  _KPROCESS *Process; // rdi
  __int64 *v7; // r14
  __int64 *i; // rsi
  _KPROCESS *v9; // rbx
  int DirectoryTableBase_high; // eax
  __int64 *v11; // rdi
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // r14
  __int64 PteShadow; // rax
  unsigned __int64 v17; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-68h] BYREF
  __int64 *v20; // [rsp+90h] [rbp+8h]
  unsigned __int64 v21; // [rsp+98h] [rbp+10h]
  unsigned __int64 v22; // [rsp+A0h] [rbp+18h]
  _KPROCESS *v23; // [rsp+A8h] [rbp+20h]

  v2 = 0LL;
  v21 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = a1;
  v5 = 3LL;
  do
  {
    v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v5;
  }
  while ( v5 );
  v22 = v4;
  Process = KeGetCurrentThread()->ApcState.Process;
  v23 = Process;
  while ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
    a1 = (__int64)(a1 << 25) >> 16;
  if ( (unsigned int)MiGetSystemRegionType(a1) == 1 )
  {
    v2 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v21 = v2;
    v7 = (__int64 *)(v2 + 16);
  }
  else
  {
    v7 = &qword_1403884D8;
  }
  v20 = v7;
  KeAcquireInStackQueuedSpinLock(&qword_140389240, &LockHandle);
  for ( i = (__int64 *)*v7; i != v7; i = (__int64 *)*i )
  {
    v9 = (_KPROCESS *)((char *)i + (v2 != 0 ? -832LL : -1552LL));
    DirectoryTableBase_high = HIDWORD(v9[1].DirectoryTableBase);
    if ( (DirectoryTableBase_high & 0x800000) == 0 )
    {
      if ( (DirectoryTableBase_high & 0xC00) != 0 && (DirectoryTableBase_high & 0x80u) == 0 )
      {
        if ( v9 != Process )
        {
          v11 = (__int64 *)v4;
          v12 = MiMapPageInHyperSpaceWorker(v9->DirectoryTableBase >> 12, 0LL, 0x80000000);
          v14 = v12;
          if ( v4 <= a2 )
          {
            v15 = v12 + (v4 & 0xFFF) - v4;
            do
            {
              PteShadow = *v11;
              if ( (unsigned __int64)v11 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v11 <= 0xFFFFF6FB7DBED7F8uLL )
                PteShadow = MiReadPteShadow(v11, *v11);
              v17 = (unsigned __int64)v11 + v15;
              *(__int64 *)((char *)v11 + v15) = PteShadow;
              if ( (unsigned __int64)v11 + v15 >= 0xFFFFF6FB7DBED000uLL && v17 <= 0xFFFFF6FB7DBED7F8uLL )
                MiWritePteShadow(v17, PteShadow);
              MiShadowTopLevelPxes(v9, v11++, 1LL);
            }
            while ( (unsigned __int64)v11 <= a2 );
            v7 = v20;
            v4 = v22;
            v2 = v21;
          }
          LOBYTE(v13) = 17;
          MiUnmapPageInHyperSpaceWorker(v14, v13, 0x80000000LL);
          Process = v23;
        }
      }
      else
      {
        _InterlockedOr((volatile signed __int32 *)&v9[1].DirectoryTableBase + 1, 0x800000u);
      }
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
