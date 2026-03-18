/*
 * XREFs of ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140270658
 * Callers:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x140006E2C (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14026AAE0 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14026AD74 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?SmStAllocatePhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140267D20 (-SmStAllocatePhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStAllocateVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140267D88 (-SmStAllocateVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x14026892C (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ?SmStMapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140268960 (-SmStMapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1402689F0 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140269804 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?StDmUpdateRegionLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z @ 0x14026F260 (-StDmUpdateRegionLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1402710C4 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     SmFpFree @ 0x140272EDC (SmFpFree.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StMapAndLockRegion(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  int v4; // r14d
  __int64 v5; // rsi
  __int64 v7; // rdi
  __int64 v9; // rcx
  int VirtualRegion; // eax
  __int64 v11; // rdi
  int v12; // ecx
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  int v18; // ecx
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  int v25; // [rsp+20h] [rbp-28h]
  int v26; // [rsp+20h] [rbp-28h]

  v4 = 0;
  v5 = a2;
  v7 = a3;
  if ( (*(_WORD *)(*(_QWORD *)(a1 + 1032) + 2LL * a2) & 0x1FFF) == 0 )
  {
    v9 = *(_QWORD *)(a1 + 800);
    if ( (*(_BYTE *)(v9 + 6021) & 4) != 0 )
      VirtualRegion = SMKM_STORE<SM_TRAITS>::SmStAllocateVirtualRegion(v9, a2);
    else
      VirtualRegion = SMKM_STORE<SM_TRAITS>::SmStAllocatePhysicalRegion(v9, a2);
    if ( VirtualRegion < 0 )
      return 0LL;
    ++*(_DWORD *)(a1 + 8 * v7 + 1824);
    if ( !(unsigned __int8)*(_DWORD *)(a1 + 776) )
      *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v5) = ((_WORD)v7 << 13) | *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v5) & 0x1FFF;
    v4 = 1;
  }
  if ( (unsigned __int8)*(_DWORD *)(a1 + 776) )
    v12 = 0;
  else
    v12 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2 * v5) >> 13;
  v13 = *(_QWORD *)(a1 + 800);
  v25 = a4 | (v12 << 6) | 0x10;
  if ( (*(_BYTE *)(v13 + 6021) & 4) != 0 )
    v14 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(v13, v5, 0, v13, v25);
  else
    v14 = SMKM_STORE<SM_TRAITS>::SmStMapPhysicalRegion(v13, v5, 0, v13, v25);
  v11 = v14;
  v16 = v14;
  if ( v14 )
  {
    if ( ((v14 - 1) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 776) & 0x40000) == 0 || !SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), v5) )
      {
        v17 = *(_QWORD *)(a1 + 800);
        if ( (*(_BYTE *)(v17 + 6021) & 4) != 0 )
          SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(v17, v5, 0, v16, 2u);
        else
          SMKM_STORE<SM_TRAITS>::SmStMapPhysicalRegion(v17, v5, 0, v16, 2);
        return v11;
      }
      v11 = -1LL;
    }
    else
    {
      ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(a1, v5, 1);
      v16 = 0LL;
      v11 = (v11 != 1) - 1LL;
    }
  }
  if ( v16 )
  {
    if ( (unsigned __int8)*(_DWORD *)(a1 + 776) )
      v18 = 0;
    else
      v18 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2 * v5) >> 13;
    v19 = *(_QWORD *)(a1 + 800);
    if ( (*(_BYTE *)(v19 + 6021) & 4) != 0 )
    {
      SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(*(_QWORD *)(a1 + 800), v5, v15, v19, v26, (8 * v18) | 4);
    }
    else
    {
      v20 = *(_QWORD *)(v19 + 6216);
      v21 = *(_QWORD *)(v20 + 8 * v5);
      v22 = v21 & 0xFFFFFFFFFFFFFFFDuLL;
      v23 = v21 & 0xFFFFFFFFFFFFFFF8uLL;
      *(_QWORD *)(v20 + 8 * v5) = v22;
      if ( (v22 & 3) == 0 )
        SmFpFree(v19 + 6592, 5LL, KeGetCurrentThread(), v23);
    }
  }
  if ( v4 )
    ST_STORE<SM_TRAITS>::StReleaseRegion(a1, (unsigned int)v5);
  return v11;
}
