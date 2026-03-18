/*
 * XREFs of MiDeleteSessionPoolRange @ 0x140221EC4
 * Callers:
 *     MiDeleteLeakedSessionPool @ 0x1406E3110 (MiDeleteLeakedSessionPool.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiDeleteSystemPagableVm @ 0x140056870 (MiDeleteSystemPagableVm.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiDeleteSessionPoolRange(unsigned __int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  __int64 v4; // rbp
  __int64 *v5; // rsi
  __int64 *v6; // r15
  LONG *SharedVm; // rdi
  KIRQL v8; // al
  unsigned __int8 v9; // r14
  __int64 PteShadow; // rax
  LONG *v11; // rax
  LONG *v12; // rdi
  KIRQL v13; // al
  LONG *v14; // rax
  __int64 result; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008;
  v5 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v6 = &v5[a2 >> 12];
  SharedVm = MiGetSharedVm(v4);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v9 = v8;
  if ( v5 < v6 )
  {
    while ( 1 )
    {
      PteShadow = *v5;
      if ( (unsigned __int64)v5 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v5 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow();
      if ( (PteShadow & 0xC01) != 0 || (PteShadow & 0x3E0) != 0 )
        break;
      if ( PteShadow )
        goto LABEL_13;
LABEL_16:
      if ( ++v5 >= v6 )
        goto LABEL_17;
    }
    MiPreUnlockWorkingSetExclusive(v4, v9);
    v11 = MiGetSharedVm(v4);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v11, retaddr);
    else
      *v11 = 0;
    __writecr8(v9);
    MiDeleteSystemPagableVm(v4, 0LL, (ULONG_PTR)v5, 1LL, 0, a3);
    v12 = MiGetSharedVm(v4);
    v13 = ExAcquireSpinLockExclusive(v12);
    v12[1] = 0;
    v9 = v13;
LABEL_13:
    *v5 = 0LL;
    if ( (unsigned __int64)v5 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v5 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow();
    goto LABEL_16;
  }
LABEL_17:
  MiPreUnlockWorkingSetExclusive(v4, v9);
  v14 = MiGetSharedVm(v4);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v14, retaddr);
  else
    *v14 = 0;
  result = v9;
  __writecr8(v9);
  return result;
}
