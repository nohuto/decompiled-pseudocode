/*
 * XREFs of MiFillPagedPoolLockedDown @ 0x1406B6770
 * Callers:
 *     MiAllocatePagedPoolPages @ 0x1400F8A60 (MiAllocatePagedPoolPages.c)
 * Callees:
 *     MiSetPfnOwnedAndActive @ 0x1400269E4 (MiSetPfnOwnedAndActive.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiInitializePageColorBase @ 0x1401069F0 (MiInitializePageColorBase.c)
 *     MiUpdateShareCount @ 0x140107540 (MiUpdateShareCount.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     MiSetPfnOriginalPte @ 0x14017D2B0 (MiSetPfnOriginalPte.c)
 *     MiGetVmPartition @ 0x1402139C8 (MiGetVmPartition.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPage @ 0x14021EF00 (MiLockPage.c)
 *     MiUnlockPage @ 0x14021EF0C (MiUnlockPage.c)
 *     MiWaitForFreePage @ 0x140220450 (MiWaitForFreePage.c)
 */

char __fastcall MiFillPagedPoolLockedDown(__int64 a1, unsigned __int64 *a2, __int64 a3, int a4)
{
  ULONG_PTR *VmPartition; // r13
  __int64 DemandZeroPte; // rdi
  unsigned __int64 ValidPte; // rbx
  __int16 v10; // ax
  __int64 v11; // r11
  int v12; // ecx
  _WORD *v13; // r12
  unsigned int v14; // esi
  __int64 Page; // rax
  __int64 v16; // r15
  unsigned __int64 PteAddress; // rax
  __int64 v18; // r10
  unsigned __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // rcx
  unsigned __int8 v22; // r10
  __int64 v24; // [rsp+30h] [rbp-58h] BYREF
  _WORD *v25; // [rsp+38h] [rbp-50h] BYREF
  __int16 v26; // [rsp+40h] [rbp-48h]
  unsigned __int16 v27; // [rsp+42h] [rbp-46h]
  int v28; // [rsp+A0h] [rbp+18h]
  __int16 v29; // [rsp+A8h] [rbp+20h]

  VmPartition = (ULONG_PTR *)MiGetVmPartition(a1);
  DemandZeroPte = MiMakeDemandZeroPte(4);
  ValidPte = MiMakeValidPte((unsigned __int64)a2, 0LL, -1610612732);
  LOBYTE(v10) = MiInitializePageColorBase(0LL, a4 + 1, (__int64)&v25);
  if ( a3 )
  {
    v10 = v26;
    LOWORD(v11) = 1;
    v12 = v27;
    v13 = v25;
    v29 = v26;
    v28 = v27;
    do
    {
      *v13 += v11;
      v14 = v12 | (unsigned __int16)(v10 & *v13);
      while ( 1 )
      {
        Page = MiGetPage((__int64)VmPartition, v14, 0);
        v16 = Page;
        if ( Page != -1 )
          break;
        MiWaitForFreePage(VmPartition);
      }
      MiSetPfnOriginalPte(48 * Page - 0x58000000000LL, DemandZeroPte);
      PteAddress = MiGetPteAddress((unsigned __int64)a2);
      v24 = MI_READ_PTE_LOCK_FREE(PteAddress);
      v19 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v24);
      *(_QWORD *)(v18 + 40) = v19 & 0xFFFFFFFFFLL | *(_QWORD *)(v18 + 40) & 0xFDFFFFF000000000uLL;
      MiSetPfnOwnedAndActive(v18, 0, (__int64)a2, 1u, 1);
      v20 = 48 * v19 - 0x58000000000LL;
      MiLockPage(v20);
      MiUpdateShareCount(v20, 1LL);
      MiUnlockPage(v21, v22);
      ValidPte ^= (ValidPte ^ (v16 << 12)) & 0xFFFFFFFFF000LL;
      *a2 = ValidPte;
      if ( MiPteInShadowRange((unsigned __int64)a2) )
        MiWritePteShadow();
      v10 = v29;
      ++a2;
      v12 = v28;
      a3 -= v11;
    }
    while ( a3 );
  }
  return v10;
}
