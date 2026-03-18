/*
 * XREFs of MiAllocateKernelStackPages @ 0x1401059E0
 * Callers:
 *     MmCreateKernelStack @ 0x14010FBC0 (MmCreateKernelStack.c)
 *     MmGrowKernelStackEx @ 0x1401359F0 (MmGrowKernelStackEx.c)
 * Callees:
 *     MiLockNestedPageAtDpcInline @ 0x14002126C (MiLockNestedPageAtDpcInline.c)
 *     MiMarkKernelStack @ 0x1400228AC (MiMarkKernelStack.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiGetEffectivePagePriorityThread @ 0x1400FE040 (MiGetEffectivePagePriorityThread.c)
 *     MiFinalizePageAttribute @ 0x140105D40 (MiFinalizePageAttribute.c)
 *     MiInitializePageColorBase @ 0x1401069F0 (MiInitializePageColorBase.c)
 *     MiProtectionToCacheAttribute @ 0x140107AC8 (MiProtectionToCacheAttribute.c)
 *     MiReleaseFreshPage @ 0x14010ADC8 (MiReleaseFreshPage.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x14017CDC0 (MiGetContainingPageTable.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     MiTransferSoftwarePte @ 0x14017D0B8 (MiTransferSoftwarePte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWaitForFreePage @ 0x140220450 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiAllocateKernelStackPages(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int16 a5,
        char a6)
{
  __int64 v6; // r13
  unsigned __int64 *v7; // rbp
  _QWORD *v10; // r15
  _WORD *v11; // r12
  unsigned int v12; // ebx
  __int64 Page; // rax
  __int64 v14; // r14
  unsigned __int64 ValidPte; // rbx
  unsigned int v16; // r13d
  __int64 v17; // r15
  __int64 v18; // rax
  unsigned __int64 DemandZeroPte; // rax
  _QWORD *v20; // rbx
  __int64 v21; // rax
  __int64 ContainingPageTable; // rax
  __int64 v23; // r10
  __int64 v24; // rdi
  char EffectivePagePriorityThread; // si
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // [rsp+20h] [rbp-68h]
  unsigned __int64 v29; // [rsp+28h] [rbp-60h]
  unsigned __int8 CurrentIrql; // [rsp+30h] [rbp-58h]
  _WORD *v31; // [rsp+38h] [rbp-50h] BYREF
  __int16 v32; // [rsp+40h] [rbp-48h]
  unsigned __int16 v33; // [rsp+42h] [rbp-46h]

  v6 = a3;
  v7 = a2;
  if ( !a3 )
    return 1LL;
  v28 = (unsigned __int64)&a2[a3];
  v10 = 0LL;
  MiInitializePageColorBase(0LL, (unsigned __int16)(a5 + 1), &v31);
  v11 = v31;
  while ( 1 )
  {
    v12 = v33 | (unsigned __int16)(v32 & ++*v11);
    Page = MiGetPage(a1, v12, 0);
    if ( Page == -1 )
      break;
LABEL_7:
    v14 = 48 * Page - 0x58000000000LL;
    *(_QWORD *)v14 = v10;
    v10 = (_QWORD *)v14;
    if ( !--v6 )
    {
      ValidPte = MiMakeValidPte((unsigned __int64)v7, 0LL, -1610612732);
      v29 = (unsigned __int64)v7;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v16 = MiProtectionToCacheAttribute(4LL);
      do
      {
        v17 = *(_QWORD *)v14;
        ValidPte ^= (ValidPte ^ (((v14 + 0x58000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL;
        v18 = MI_READ_PTE_LOCK_FREE(v7);
        if ( v18 )
          DemandZeroPte = v18 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
        else
          DemandZeroPte = MiMakeDemandZeroPte(4LL);
        v21 = MiTransferSoftwarePte(DemandZeroPte, 0LL, 0LL);
        *(_WORD *)(v14 + 32) = 1;
        *(_QWORD *)(v14 + 16) = v21 & 0xFFFFFFFFFC00FFFFuLL;
        ContainingPageTable = MiGetContainingPageTable(v7);
        *(_QWORD *)(v14 + 40) ^= v23 & (ContainingPageTable ^ *(_QWORD *)(v14 + 40));
        v24 = 48 * ContainingPageTable - 0x58000000000LL;
        EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)KeGetCurrentThread());
        MiLockPageAtDpcInline(v14);
        *(_BYTE *)(v14 + 34) |= 0x10u;
        MiLockNestedPageAtDpcInline(v24);
        *(_QWORD *)(v24 + 24) ^= (*(_QWORD *)(v24 + 24) ^ (*(_QWORD *)(v24 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiFinalizePageAttribute(v14, v16, 1LL);
        v26 = *(_QWORD *)(v14 + 24) & 0xC000000000000001uLL;
        *(_QWORD *)(v14 + 8) = v7;
        *(_QWORD *)(v14 + 24) = v26 | 1;
        *(_BYTE *)(v14 + 35) ^= (EffectivePagePriorityThread ^ *(_BYTE *)(v14 + 35)) & 7;
        *(_BYTE *)(v14 + 34) = *(_BYTE *)(v14 + 34) & 0xF8 | 6;
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        *v7 = ValidPte;
        if ( (unsigned int)MiPteInShadowRange(v7) )
          MiWritePteShadow(v27);
        ++v7;
        v14 = v17;
      }
      while ( (unsigned __int64)v7 < v28 );
      MiMarkKernelStack(v29, v28, a4);
      __writecr8(CurrentIrql);
      return 1LL;
    }
  }
  while ( (a6 & 2) == 0 )
  {
    MiWaitForFreePage(a1);
    Page = MiGetPage(a1, v12, 0);
    if ( Page != -1 )
      goto LABEL_7;
  }
  if ( v10 )
  {
    do
    {
      v20 = (_QWORD *)*v10;
      MiReleaseFreshPage(v10);
      v10 = v20;
    }
    while ( v20 );
  }
  return 0LL;
}
