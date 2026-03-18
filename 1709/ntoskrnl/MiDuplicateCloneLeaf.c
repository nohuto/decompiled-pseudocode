/*
 * XREFs of MiDuplicateCloneLeaf @ 0x14022FED0
 * Callers:
 *     MiHandleForkTransitionPte @ 0x14000E3C0 (MiHandleForkTransitionPte.c)
 *     MiBuildForkPte @ 0x1400E7530 (MiBuildForkPte.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiGetPfnPriority @ 0x14004BD90 (MiGetPfnPriority.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiCopyPage @ 0x14005A3E0 (MiCopyPage.c)
 *     MiVaToPfn @ 0x1400C00C4 (MiVaToPfn.c)
 *     MiInitializePfnForOtherProcess @ 0x1400C457C (MiInitializePfnForOtherProcess.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiDecrementShareCount @ 0x1400EB4C0 (MiDecrementShareCount.c)
 *     MiChangePageAttribute @ 0x1400ED32C (MiChangePageAttribute.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011C690 (MiLockNestedPageAtDpcInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakeTransitionPte @ 0x14017C848 (MiMakeTransitionPte.c)
 *     MiUpdateTransitionPteFrame @ 0x14017CA00 (MiUpdateTransitionPteFrame.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiDuplicateCloneLeaf(__int64 *a1, __int64 *a2, ULONG_PTR a3, __int64 a4, unsigned __int8 a5)
{
  __int64 PteShadow; // rbx
  __int64 v8; // r9
  int v9; // r11d
  ULONG_PTR v10; // r12
  __int64 v11; // rsi
  int v12; // edx
  unsigned __int64 v13; // r15
  __int64 v14; // rdx
  char v15; // r10
  LONG *SharedVm; // rbx
  __int64 v18; // r15
  __int64 v19; // rdi
  char v20; // r9
  int v21; // edx
  __int64 v22; // rbx
  __int64 TransitionPte; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int8 v26; // bl
  struct _KTHREAD *CurrentThread; // [rsp+20h] [rbp-38h]
  char PfnPriority; // [rsp+20h] [rbp-38h]
  __int64 v29[6]; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int16 *v30; // [rsp+60h] [rbp+8h]
  int v31; // [rsp+60h] [rbp+8h]
  unsigned int v32; // [rsp+60h] [rbp+8h]

  PteShadow = *a1;
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow();
  v29[0] = PteShadow;
  if ( (PteShadow & 1) != 0 )
  {
    v10 = MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64 *)v29);
    v11 = 48 * v10 - 0x58000000000LL;
    v12 = v9;
    v13 = *(_QWORD *)(v11 + 16);
  }
  else
  {
    v10 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(v29);
    v11 = 48 * v10 - 0x58000000000LL;
    if ( (*(_BYTE *)(v11 + 34) & 0x20) != 0 )
    {
      v30 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      LOBYTE(v14) = v15;
      MiUnlockWorkingSetExclusive((__int64)v30, v14);
      CurrentThread = KeGetCurrentThread();
      ++BYTE6(CurrentThread[1].Queue);
      --BYTE6(CurrentThread[1].Queue);
      SharedVm = MiGetSharedVm((__int64)v30);
      ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
      return 0LL;
    }
    v12 = 0;
    v13 = PteShadow;
  }
  v31 = v12;
  v18 = (v13 >> 5) & 0x1F;
  v19 = 48 * v8 - 0x58000000000LL;
  if ( v12 == v9 )
  {
    v20 = v9;
  }
  else
  {
    MiLockNestedPageAtDpcInline(48 * v8 - 0x58000000000LL);
    v20 = 4;
  }
  MiCopyPage(a3, v10, 0LL, v20);
  if ( !v31 )
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  PfnPriority = MiGetPfnPriority(v11);
  v32 = *(unsigned __int8 *)(v11 + 34) >> 6;
  if ( v21 == 1 )
  {
    v22 = a3;
    TransitionPte = MiMakeTransitionPte(a3, v18);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(a5);
    TransitionPte = MiUpdateTransitionPteFrame(PteShadow);
    v22 = v24;
  }
  v29[0] = TransitionPte;
  *a2 = TransitionPte;
  if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow();
  v25 = MiVaToPfn((unsigned __int64)a2);
  MiInitializePfnForOtherProcess(v22, (__int64)a1, v25, 16);
  *(_QWORD *)(v19 + 16) = *(_QWORD *)(v19 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (unsigned int)v18);
  v26 = MiLockPageInline(v19);
  if ( *(unsigned __int8 *)(v19 + 34) >> 6 != v32 )
    MiChangePageAttribute(v19, v32, 3);
  *(_BYTE *)(v19 + 35) ^= (PfnPriority ^ *(_BYTE *)(v19 + 35)) & 7;
  *(_BYTE *)(v19 + 34) = *(_BYTE *)(v19 + 34) & 0xF8 | 6;
  MiDecrementShareCount(v19);
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v26);
  return 1LL;
}
