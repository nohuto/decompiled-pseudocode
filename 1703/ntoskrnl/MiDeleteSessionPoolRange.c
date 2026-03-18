/*
 * XREFs of MiDeleteSessionPoolRange @ 0x140217EB8
 * Callers:
 *     MiDeleteLeakedSessionPool @ 0x14057AA70 (MiDeleteLeakedSessionPool.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiDeleteSystemPagableVm @ 0x1400C9480 (MiDeleteSystemPagableVm.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiDeleteSessionPoolRange(unsigned __int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  __int64 v4; // rbp
  _QWORD *v5; // rsi
  _QWORD *v6; // r15
  LONG *SharedVm; // rdi
  KIRQL v8; // al
  unsigned __int8 v9; // r14
  __int64 v10; // rax
  LONG *v11; // rdi
  KIRQL v12; // al
  LONG *v13; // rax
  __int64 result; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008;
  v5 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v6 = &v5[a2 >> 12];
  SharedVm = MiGetSharedVm(v4);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v9 = v8;
  while ( v5 < v6 )
  {
    v10 = MI_READ_PTE_LOCK_FREE(v5);
    if ( (v10 & 0xC01) != 0 || (v10 & 0x3E0) != 0 )
    {
      MiUnlockWorkingSetExclusive(v4, v9);
      MiDeleteSystemPagableVm(v4, 0LL, (ULONG_PTR)v5, 1LL, 0, a3);
      v11 = MiGetSharedVm(v4);
      v12 = ExAcquireSpinLockExclusive(v11);
      v11[1] = 0;
      v9 = v12;
    }
    else if ( !v10 )
    {
      goto LABEL_9;
    }
    *v5 = 0LL;
    if ( MiPteInShadowRange((unsigned __int64)v5) )
      MiWritePteShadow();
LABEL_9:
    ++v5;
  }
  MiPreUnlockWorkingSetExclusive(v4, v9);
  v13 = MiGetSharedVm(v4);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v13, retaddr);
  else
    *v13 = 0;
  result = v9;
  __writecr8(v9);
  return result;
}
