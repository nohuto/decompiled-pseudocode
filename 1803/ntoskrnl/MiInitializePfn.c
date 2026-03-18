/*
 * XREFs of MiInitializePfn @ 0x140056084
 * Callers:
 *     MmAllocateIndependentPages @ 0x1400C74F0 (MmAllocateIndependentPages.c)
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 *     MmAllocateSpecialPool @ 0x14025C600 (MmAllocateSpecialPool.c)
 *     MiInitializeProtoPfn @ 0x1402681CC (MiInitializeProtoPfn.c)
 *     MiMapNewSession @ 0x14060B454 (MiMapNewSession.c)
 *     MiInitializeSystemImagePage @ 0x1408ADBC0 (MiInitializeSystemImagePage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetEffectivePagePriorityThread @ 0x14005605C (MiGetEffectivePagePriorityThread.c)
 *     MiFinalizePageAttribute @ 0x140056268 (MiFinalizePageAttribute.c)
 *     MiProtectionToCacheAttribute @ 0x140056EF8 (MiProtectionToCacheAttribute.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400BABE0 (MiLockNestedPageAtDpcInline.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiGetContainingPageTable @ 0x1401A64B8 (MiGetContainingPageTable.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     MiTransferSoftwarePte @ 0x1401A6760 (MiTransferSoftwarePte.c)
 */

char __fastcall MiInitializePfn(__int64 a1, unsigned __int64 a2, unsigned int a3, int a4)
{
  __int64 DemandZeroPte; // rax
  __int64 v9; // r9
  __int64 v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // r12d
  __int64 ContainingPageTable; // rax
  __int64 v14; // rsi
  char EffectivePagePriorityThread; // r13
  unsigned __int8 v16; // bp
  int v17; // r9d
  int v18; // r15d
  unsigned __int64 v19; // rax
  char result; // al

  DemandZeroPte = MI_READ_PTE_LOCK_FREE(a2);
  v9 = 4LL;
  if ( (a4 & 4) != 0 )
  {
    if ( DemandZeroPte )
      DemandZeroPte = ((unsigned __int16)DemandZeroPte ^ (unsigned __int16)(32 * a3)) & 0x3E0 ^ (unsigned __int64)DemandZeroPte;
    else
      DemandZeroPte = MiMakeDemandZeroPte(a3);
  }
  v10 = MiTransferSoftwarePte(DemandZeroPte, 0LL, 0LL, v9);
  *(_QWORD *)(a1 + 16) = v10;
  if ( (a4 & 2) != 0 )
  {
    *(_QWORD *)(a1 + 40) |= 0x200000000000000uLL;
  }
  else if ( (a4 & 8) == 0 )
  {
    *(_QWORD *)(a1 + 16) = v10 & 0xFFFFFFFFFC00FFFFuLL;
  }
  v11 = MiProtectionToCacheAttribute(a3);
  *(_WORD *)(a1 + 32) = 1;
  v12 = v11;
  ContainingPageTable = MiGetContainingPageTable(a2);
  *(_QWORD *)(a1 + 40) ^= (ContainingPageTable ^ *(_QWORD *)(a1 + 40)) & 0xFFFFFFFFFLL;
  v14 = 48 * ContainingPageTable - 0x58000000000LL;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)KeGetCurrentThread());
  v16 = 17;
  v18 = v17 & a4;
  if ( (v17 & a4) == 0 )
  {
    if ( (a4 & 0x10) != 0 )
      MiLockPageAtDpcInline(a1);
    else
      v16 = MiLockPageInline(a1);
  }
  MiLockNestedPageAtDpcInline(v14);
  *(_QWORD *)(v14 + 24) ^= (*(_QWORD *)(v14 + 24) ^ (*(_QWORD *)(v14 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiFinalizePageAttribute(a1, v12, 1LL);
  v19 = *(_QWORD *)(a1 + 24) & 0xC000000000000001uLL;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 24) = v19 | 1;
  *(_BYTE *)(a1 + 35) ^= (EffectivePagePriorityThread ^ *(_BYTE *)(a1 + 35)) & 7;
  result = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
  *(_BYTE *)(a1 + 34) = result;
  if ( (a4 & 0x20) == 0 )
  {
    result |= 0x10u;
    *(_BYTE *)(a1 + 34) = result;
  }
  if ( (a4 & 0x40) != 0 )
    *(_BYTE *)(a1 + 35) |= 0x20u;
  if ( !v18 )
  {
    result = -1;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (a4 & 0x10) == 0 )
    {
      result = v16;
      __writecr8(v16);
    }
  }
  return result;
}
