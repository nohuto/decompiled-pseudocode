/*
 * XREFs of MiReplicatePteChange @ 0x140164BE0
 * Callers:
 *     MiZeroSystemPdes @ 0x140082A5C (MiZeroSystemPdes.c)
 *     MiMakeZeroedPageTableRange @ 0x140109D80 (MiMakeZeroedPageTableRange.c)
 *     MiDeletePteRange @ 0x14013BCF4 (MiDeletePteRange.c)
 *     MiPfnRangeIsZero @ 0x14015B174 (MiPfnRangeIsZero.c)
 *     MiInitializeShadowPageTable @ 0x14041D49C (MiInitializeShadowPageTable.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140103140 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiShadowTopLevelPxes @ 0x14017CC48 (MiShadowTopLevelPxes.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiReplicatePteChange(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // rdx
  _KPROCESS *Process; // r14
  unsigned __int64 v6; // r15
  __int64 *v7; // rsi
  __int64 *i; // rdi
  __int64 *v9; // rbx
  int v10; // eax
  unsigned __int64 v11; // r14
  __int64 j; // r13
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  _KPROCESS *v18; // [rsp+88h] [rbp+10h]

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
  v18 = Process;
  while ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
    a1 = (__int64)(a1 << 25) >> 16;
  if ( (unsigned int)MiGetSystemRegionType(a1) == 1 )
  {
    v6 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v7 = (__int64 *)(v6 + 16);
  }
  else
  {
    v6 = 0LL;
    v7 = &qword_14036C198;
  }
  KeAcquireInStackQueuedSpinLock(&qword_14036CF80, &LockHandle);
  for ( i = (__int64 *)*v7; i != v7; i = (__int64 *)*i )
  {
    v9 = i - 194;
    if ( v6 )
      v9 = i - 104;
    v10 = *((_DWORD *)v9 + 193);
    if ( (v10 & 0x800000) == 0 )
    {
      if ( (v10 & 0xC00) != 0 && (v10 & 0x80u) == 0 )
      {
        if ( v9 != (__int64 *)Process )
        {
          v11 = v3;
          for ( j = MiMapPageInHyperSpaceWorker((unsigned __int64)v9[5] >> 12, 0LL, 0x80000000); v11 <= a2; v11 += 8LL )
          {
            v13 = MI_READ_PTE_LOCK_FREE(v11);
            *(_QWORD *)(v14 + v11) = v13;
            if ( (unsigned int)MiPteInShadowRange(v14 + v11) )
              MiWritePteShadow(v15);
            MiShadowTopLevelPxes(v9, v11, 1LL);
          }
          MiUnmapPageInHyperSpaceWorker(j, 0x11u);
          Process = v18;
        }
      }
      else
      {
        _InterlockedOr((volatile signed __int32 *)v9 + 193, 0x800000u);
      }
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
