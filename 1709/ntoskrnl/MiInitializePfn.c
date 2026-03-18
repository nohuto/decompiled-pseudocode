/*
 * XREFs of MiInitializePfn @ 0x140027CC0
 * Callers:
 *     MmCheckCachedPageStates @ 0x14007B8D0 (MmCheckCachedPageStates.c)
 *     MmAllocateSpecialPool @ 0x140220868 (MmAllocateSpecialPool.c)
 *     MiInitializeProtoPfn @ 0x14022E010 (MiInitializeProtoPfn.c)
 *     MiMapNewSession @ 0x1405B43F8 (MiMapNewSession.c)
 *     MmAllocateIndependentPages @ 0x1405B7830 (MmAllocateIndependentPages.c)
 *     MiInitializeSystemImagePage @ 0x140837D74 (MiInitializeSystemImagePage.c)
 * Callees:
 *     MiFinalizePageAttribute @ 0x140028064 (MiFinalizePageAttribute.c)
 *     MiGetEffectivePagePriorityThread @ 0x140028114 (MiGetEffectivePagePriorityThread.c)
 *     MiProtectionToCacheAttribute @ 0x140028A58 (MiProtectionToCacheAttribute.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011C690 (MiLockNestedPageAtDpcInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiGetContainingPageTable @ 0x14017C61C (MiGetContainingPageTable.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiTransferSoftwarePte @ 0x14017C95C (MiTransferSoftwarePte.c)
 */

char __fastcall MiInitializePfn(__int64 a1, __int64 *a2, unsigned int a3, int a4)
{
  __int64 PteShadow; // rax
  unsigned int v6; // r11d
  __int64 v9; // r9
  __int64 v10; // rax
  unsigned int v11; // r11d
  unsigned int v12; // eax
  unsigned int v13; // r12d
  __int64 ContainingPageTable; // rax
  __int64 v15; // rbp
  char EffectivePagePriorityThread; // r13
  unsigned __int8 v17; // r14
  int v18; // r11d
  int v19; // r15d
  unsigned __int64 v20; // rax
  char result; // al

  PteShadow = *a2;
  v6 = a3;
  if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(a2, *a2);
  v9 = 4LL;
  if ( (a4 & 4) != 0 )
  {
    if ( PteShadow )
      PteShadow = ((unsigned __int16)PteShadow ^ (unsigned __int16)(32 * v6)) & 0x3E0 ^ (unsigned __int64)PteShadow;
    else
      PteShadow = MiMakeDemandZeroPte(v6);
  }
  v10 = MiTransferSoftwarePte(PteShadow, 0LL, 0LL, v9);
  *(_QWORD *)(a1 + 16) = v10;
  if ( (a4 & 2) != 0 )
  {
    *(_QWORD *)(a1 + 40) |= 0x200000000000000uLL;
  }
  else if ( (a4 & 8) == 0 )
  {
    *(_QWORD *)(a1 + 16) = v10 & 0xFFFFFFFFFC00FFFFuLL;
  }
  v12 = MiProtectionToCacheAttribute(v11);
  *(_WORD *)(a1 + 32) = 1;
  v13 = v12;
  ContainingPageTable = MiGetContainingPageTable(a2);
  *(_QWORD *)(a1 + 40) ^= (ContainingPageTable ^ *(_QWORD *)(a1 + 40)) & 0xFFFFFFFFFLL;
  v15 = 48 * ContainingPageTable - 0x58000000000LL;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(KeGetCurrentThread());
  v17 = 17;
  v19 = v18 & a4;
  if ( (v18 & a4) == 0 )
  {
    if ( (a4 & 0x10) != 0 )
      MiLockPageAtDpcInline(a1);
    else
      v17 = MiLockPageInline(a1);
  }
  if ( (a4 & 0x20) == 0 )
    *(_BYTE *)(a1 + 34) |= 0x10u;
  MiLockNestedPageAtDpcInline(v15);
  *(_QWORD *)(v15 + 24) ^= (*(_QWORD *)(v15 + 24) ^ (*(_QWORD *)(v15 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiFinalizePageAttribute(a1, v13, 1LL);
  v20 = *(_QWORD *)(a1 + 24) & 0xC000000000000001uLL;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 24) = v20 | 1;
  *(_BYTE *)(a1 + 35) ^= (EffectivePagePriorityThread ^ *(_BYTE *)(a1 + 35)) & 7;
  result = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
  *(_BYTE *)(a1 + 34) = result;
  if ( (a4 & 0x40) != 0 )
    *(_BYTE *)(a1 + 35) |= 0x20u;
  if ( !v19 )
  {
    result = -1;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (a4 & 0x10) == 0 )
    {
      result = v17;
      __writecr8(v17);
    }
  }
  return result;
}
