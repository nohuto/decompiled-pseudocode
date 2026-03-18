/*
 * XREFs of MiFillPagedPoolLockedDown @ 0x1406E3220
 * Callers:
 *     MiAllocatePagedPoolPages @ 0x14009B1E0 (MiAllocatePagedPoolPages.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x14002A810 (MiInitializePageColorBase.c)
 *     MiUpdateShareCount @ 0x14002C720 (MiUpdateShareCount.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiSetPfnOwnedAndActive @ 0x1400C7EB8 (MiSetPfnOwnedAndActive.c)
 *     MiGetVmPartition @ 0x140120738 (MiGetVmPartition.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiSetPfnOriginalPte @ 0x14017CAF8 (MiSetPfnOriginalPte.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiLockPage @ 0x14022A294 (MiLockPage.c)
 *     MiUnlockPage @ 0x14022A2A8 (MiUnlockPage.c)
 *     MiWaitForFreePage @ 0x14023059C (MiWaitForFreePage.c)
 */

char __fastcall MiFillPagedPoolLockedDown(__int64 a1, unsigned __int64 *a2, __int64 a3, int a4)
{
  _QWORD *VmPartition; // r13
  __int64 DemandZeroPte; // rdi
  unsigned __int64 ValidPte; // rbx
  __int16 v10; // ax
  __int64 v11; // r11
  int v12; // ecx
  _WORD *v13; // r12
  unsigned int v14; // esi
  __int64 Page; // rax
  __int64 v16; // r15
  __int64 *PteAddress; // r8
  __int64 PteShadow; // rax
  __int64 v19; // r10
  __int64 v20; // rsi
  __int64 v21; // rsi
  __int64 v22; // rcx
  unsigned __int8 v23; // r10
  __int64 v25; // [rsp+30h] [rbp-58h] BYREF
  _WORD *v26; // [rsp+38h] [rbp-50h] BYREF
  __int16 v27; // [rsp+40h] [rbp-48h]
  unsigned __int16 v28; // [rsp+42h] [rbp-46h]
  int v29; // [rsp+A0h] [rbp+18h]
  __int16 v30; // [rsp+A8h] [rbp+20h]

  VmPartition = (_QWORD *)MiGetVmPartition(a1);
  DemandZeroPte = MiMakeDemandZeroPte(4);
  ValidPte = MiMakeValidPte((unsigned __int64)a2, 0LL, -1610612732);
  LOBYTE(v10) = MiInitializePageColorBase(0LL, a4 + 1, (__int64)&v26);
  if ( a3 )
  {
    v10 = v27;
    LOWORD(v11) = 1;
    v12 = v28;
    v13 = v26;
    v30 = v27;
    v29 = v28;
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
      PteAddress = (__int64 *)MiGetPteAddress((unsigned __int64)a2);
      PteShadow = *PteAddress;
      if ( (unsigned __int64)PteAddress >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)PteAddress <= 0xFFFFF6FB7DBED7F8uLL )
      {
        PteShadow = MiReadPteShadow();
      }
      v25 = PteShadow;
      v20 = MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64 *)&v25);
      *(_QWORD *)(v19 + 40) ^= (v20 ^ *(_QWORD *)(v19 + 40)) & 0xFFFFFFFFFLL;
      MiSetPfnOwnedAndActive(v19, 0, (__int64)a2, 1u, 1);
      v21 = 48 * v20 - 0x58000000000LL;
      MiLockPage(v21);
      MiUpdateShareCount(v21, 1LL);
      MiUnlockPage(v22, v23);
      ValidPte ^= (ValidPte ^ (v16 << 12)) & 0xFFFFFFFFF000LL;
      *a2 = ValidPte;
      if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow();
      v10 = v30;
      ++a2;
      v12 = v29;
      a3 -= v11;
    }
    while ( a3 );
  }
  return v10;
}
