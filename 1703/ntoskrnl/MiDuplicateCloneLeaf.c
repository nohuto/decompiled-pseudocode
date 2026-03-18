/*
 * XREFs of MiDuplicateCloneLeaf @ 0x140223024
 * Callers:
 *     MiBuildForkPte @ 0x140001E68 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1402232C0 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MiLockNestedPageAtDpcInline @ 0x14002126C (MiLockNestedPageAtDpcInline.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiCopyPage @ 0x1400A0320 (MiCopyPage.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiVaToPfn @ 0x1400B2D70 (MiVaToPfn.c)
 *     MiGetPfnPriority @ 0x1400C3D60 (MiGetPfnPriority.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiChangePageAttribute @ 0x1401032F4 (MiChangePageAttribute.c)
 *     MiDecrementShareCount @ 0x1401055F0 (MiDecrementShareCount.c)
 *     MiInitializePfnForOtherProcess @ 0x14010A008 (MiInitializePfnForOtherProcess.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakeTransitionPte @ 0x14017CFB4 (MiMakeTransitionPte.c)
 *     MiUpdateTransitionPteFrame @ 0x14017D158 (MiUpdateTransitionPteFrame.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiDuplicateCloneLeaf(unsigned __int64 a1, __int64 *a2, ULONG_PTR a3, __int64 a4, unsigned __int8 a5)
{
  int v7; // r11d
  ULONG_PTR v8; // r14
  __int64 v9; // rdi
  int v10; // r13d
  __int64 v11; // r15
  unsigned __int8 v12; // r9
  unsigned __int64 v13; // r10
  LONG *SharedVm; // rbx
  unsigned int v16; // r15d
  __int64 v17; // rbx
  char v18; // r9
  __int64 TransitionPte; // rax
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // rax
  unsigned __int8 v22; // di
  struct _KTHREAD *CurrentThread; // [rsp+20h] [rbp-48h]
  unsigned int v24; // [rsp+20h] [rbp-48h]
  unsigned __int16 *v25; // [rsp+28h] [rbp-40h]
  char PfnPriority; // [rsp+28h] [rbp-40h]
  __int64 v27[2]; // [rsp+30h] [rbp-38h] BYREF

  v27[0] = MI_READ_PTE_LOCK_FREE(a1);
  if ( (v27[0] & 1) != 0 )
  {
    v8 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)v27);
    v9 = 48 * v8 - 0x58000000000LL;
    v10 = v7;
    v11 = *(_QWORD *)(v9 + 16) >> 5;
  }
  else
  {
    v8 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(v27);
    v9 = 48 * v8 - 0x58000000000LL;
    if ( (*(_BYTE *)(v9 + 34) & 0x20) != 0 )
    {
      v25 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockWorkingSetExclusive((__int64)v25, v12);
      CurrentThread = KeGetCurrentThread();
      ++BYTE6(CurrentThread[1].Queue);
      --BYTE6(CurrentThread[1].Queue);
      SharedVm = MiGetSharedVm((__int64)v25);
      ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
      return 0LL;
    }
    v10 = 0;
    LOBYTE(v11) = v13 >> 5;
  }
  v16 = v11 & 0x1F;
  v17 = 48 * a3 - 0x58000000000LL;
  if ( v10 == v7 )
  {
    v18 = v7;
  }
  else
  {
    MiLockNestedPageAtDpcInline(48 * a3 - 0x58000000000LL);
    v18 = 4;
  }
  MiCopyPage(a3, v8, 0LL, v18);
  if ( !v10 )
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  PfnPriority = MiGetPfnPriority(v9);
  v24 = *(unsigned __int8 *)(v9 + 34) >> 6;
  if ( v10 == 1 )
  {
    TransitionPte = MiMakeTransitionPte(a3, v16);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(a5);
    TransitionPte = MiUpdateTransitionPteFrame(v27[0]);
  }
  v27[0] = TransitionPte;
  *a2 = TransitionPte;
  if ( MiPteInShadowRange((unsigned __int64)a2) )
    MiWritePteShadow();
  v21 = MiVaToPfn(v20);
  MiInitializePfnForOtherProcess(a3, a1, v21, 16);
  *(_QWORD *)(v17 + 16) = *(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32LL * v16);
  v22 = MiLockPageInline(v17);
  if ( *(unsigned __int8 *)(v17 + 34) >> 6 != v24 )
    MiChangePageAttribute(v17, v24, 3u);
  *(_BYTE *)(v17 + 35) ^= (PfnPriority ^ *(_BYTE *)(v17 + 35)) & 7;
  *(_BYTE *)(v17 + 34) = *(_BYTE *)(v17 + 34) & 0xF8 | 6;
  MiDecrementShareCount(v17);
  _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v22);
  return 1LL;
}
