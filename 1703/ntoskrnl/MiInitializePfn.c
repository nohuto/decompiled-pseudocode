/*
 * XREFs of MiInitializePfn @ 0x1401099F8
 * Callers:
 *     MmCheckCachedPageStates @ 0x14009E320 (MmCheckCachedPageStates.c)
 *     MmAllocateSpecialPool @ 0x140217008 (MmAllocateSpecialPool.c)
 *     MiInitializeProtoPfn @ 0x14022136C (MiInitializeProtoPfn.c)
 *     MmAllocateIndependentPages @ 0x1405723D0 (MmAllocateIndependentPages.c)
 *     MiMapNewSession @ 0x14057EF68 (MiMapNewSession.c)
 *     MiInitializeSystemImagePage @ 0x140816130 (MiInitializeSystemImagePage.c)
 * Callees:
 *     MiLockNestedPageAtDpcInline @ 0x14002126C (MiLockNestedPageAtDpcInline.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiGetEffectivePagePriorityThread @ 0x1400FE040 (MiGetEffectivePagePriorityThread.c)
 *     MiFinalizePageAttribute @ 0x140105D40 (MiFinalizePageAttribute.c)
 *     MiProtectionToCacheAttribute @ 0x140107AC8 (MiProtectionToCacheAttribute.c)
 *     MiGetContainingPageTable @ 0x14017CDC0 (MiGetContainingPageTable.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     MiTransferSoftwarePte @ 0x14017D0B8 (MiTransferSoftwarePte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

char __fastcall MiInitializePfn(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 DemandZeroPte; // rax
  unsigned int v8; // r10d
  __int64 v9; // rax
  unsigned int v10; // r10d
  unsigned int v11; // eax
  unsigned int v12; // r12d
  __int64 ContainingPageTable; // rax
  __int64 v14; // rsi
  char EffectivePagePriorityThread; // r13
  unsigned __int8 v16; // bp
  int v17; // r9d
  int v18; // r14d
  unsigned __int64 v19; // rax
  char result; // al

  DemandZeroPte = MI_READ_PTE_LOCK_FREE(a2);
  if ( (a4 & 4) != 0 )
  {
    if ( DemandZeroPte )
      DemandZeroPte = ((unsigned __int16)DemandZeroPte ^ (unsigned __int16)(32 * v8)) & 0x3E0 ^ (unsigned __int64)DemandZeroPte;
    else
      DemandZeroPte = MiMakeDemandZeroPte(v8);
  }
  v9 = MiTransferSoftwarePte(DemandZeroPte, 0LL, 0LL);
  *(_QWORD *)(a1 + 16) = v9;
  if ( (a4 & 2) != 0 )
  {
    *(_QWORD *)(a1 + 40) |= 0x200000000000000uLL;
  }
  else if ( (a4 & 8) == 0 )
  {
    *(_QWORD *)(a1 + 16) = v9 & 0xFFFFFFFFFC00FFFFuLL;
  }
  v11 = MiProtectionToCacheAttribute(v10);
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
  if ( (a4 & 0x20) == 0 )
    *(_BYTE *)(a1 + 34) |= 0x10u;
  MiLockNestedPageAtDpcInline(v14);
  *(_QWORD *)(v14 + 24) ^= (*(_QWORD *)(v14 + 24) ^ (*(_QWORD *)(v14 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiFinalizePageAttribute(a1, v12, 1);
  v19 = *(_QWORD *)(a1 + 24) & 0xC000000000000001uLL;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 24) = v19 | 1;
  *(_BYTE *)(a1 + 35) ^= (EffectivePagePriorityThread ^ *(_BYTE *)(a1 + 35)) & 7;
  result = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
  *(_BYTE *)(a1 + 34) = result;
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
