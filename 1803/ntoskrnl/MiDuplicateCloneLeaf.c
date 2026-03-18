/*
 * XREFs of MiDuplicateCloneLeaf @ 0x14026AB9C
 * Callers:
 *     MiBuildForkPte @ 0x140141270 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x14026AEC0 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiCopyPage @ 0x14002ED70 (MiCopyPage.c)
 *     MiVaToPfn @ 0x14003C4FC (MiVaToPfn.c)
 *     MiDecrementShareCount @ 0x140054240 (MiDecrementShareCount.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiInitializePfnForOtherProcess @ 0x140071528 (MiInitializePfnForOtherProcess.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400BABE0 (MiLockNestedPageAtDpcInline.c)
 *     MiChangePageAttribute @ 0x1400DA5EC (MiChangePageAttribute.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiGetPfnPriority @ 0x14011B8F0 (MiGetPfnPriority.c)
 *     MiMakeTransitionPte @ 0x1401A669C (MiMakeTransitionPte.c)
 *     MiUpdateTransitionPteFrame @ 0x1401A6828 (MiUpdateTransitionPteFrame.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiDuplicateCloneLeaf(unsigned __int64 a1, __int64 *a2, ULONG_PTR a3, __int64 a4, unsigned __int8 a5)
{
  unsigned __int64 v7; // rsi
  ULONG_PTR v8; // r14
  __int64 v9; // rbx
  int v10; // r12d
  unsigned __int8 v11; // r9
  LONG *SharedVm; // rbx
  __int64 v14; // rsi
  __int64 v15; // rdi
  char v16; // r9
  __int64 TransitionPte; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r10
  unsigned __int64 v22; // rax
  unsigned __int8 v23; // bl
  unsigned __int8 v24; // r8
  struct _KTHREAD *CurrentThread; // [rsp+20h] [rbp-48h]
  int v26; // [rsp+20h] [rbp-48h]
  unsigned __int16 *v27; // [rsp+28h] [rbp-40h]
  char PfnPriority; // [rsp+28h] [rbp-40h]
  __int64 v29[2]; // [rsp+30h] [rbp-38h] BYREF

  v7 = MI_READ_PTE_LOCK_FREE(a1);
  v29[0] = v7;
  if ( (v7 & 1) != 0 )
  {
    v8 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v29) >> 12) & 0xFFFFFFFFFLL;
    v9 = 48 * v8 - 0x58000000000LL;
    v10 = 1;
    v7 = *(_QWORD *)(v9 + 16);
  }
  else
  {
    v8 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(v29);
    v9 = 48 * v8 - 0x58000000000LL;
    if ( (*(_BYTE *)(v9 + 34) & 0x20) != 0 )
    {
      v27 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockWorkingSetExclusive((__int64)v27, v11);
      CurrentThread = KeGetCurrentThread();
      ++BYTE6(CurrentThread[1].Queue);
      --BYTE6(CurrentThread[1].Queue);
      SharedVm = MiGetSharedVm((__int64)v27);
      ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
      return 0LL;
    }
    v10 = 0;
  }
  v14 = (v7 >> 5) & 0x1F;
  v15 = 48 * a3 - 0x58000000000LL;
  if ( v10 != 1 )
    MiLockNestedPageAtDpcInline(48 * a3 - 0x58000000000LL);
  v16 = 1;
  if ( v10 != 1 )
    v16 = 4;
  MiCopyPage(a3, v8, 0LL, v16);
  if ( !v10 )
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  PfnPriority = MiGetPfnPriority(v9);
  v26 = *(unsigned __int8 *)(v9 + 34) >> 6;
  if ( v10 == 1 )
  {
    TransitionPte = MiMakeTransitionPte(a3, v14);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(a5);
    TransitionPte = MiUpdateTransitionPteFrame(v29[0]);
  }
  v29[0] = TransitionPte;
  *a2 = TransitionPte;
  if ( MiPteInShadowRange((unsigned __int64)a2) )
    MiWritePteShadow(v19, v18, v20);
  v22 = MiVaToPfn(v21);
  MiInitializePfnForOtherProcess(a3, a1, v22, 16);
  *(_QWORD *)(v15 + 16) = *(_QWORD *)(v15 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (unsigned int)v14);
  v23 = MiLockPageInline(v15);
  v24 = *(_BYTE *)(v15 + 34);
  if ( v24 >> 6 != v26 )
  {
    MiChangePageAttribute(v15, v26, 3u);
    v24 = *(_BYTE *)(v15 + 34);
  }
  *(_BYTE *)(v15 + 35) ^= (PfnPriority ^ *(_BYTE *)(v15 + 35)) & 7;
  *(_BYTE *)(v15 + 34) = v24 & 0xF8 | 6;
  MiDecrementShareCount(v15);
  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v23);
  return 1LL;
}
