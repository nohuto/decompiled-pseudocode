/*
 * XREFs of ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14009A440
 * Callers:
 *     ?StDmpUpdateRegionState@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z @ 0x1400928E0 (-StDmpUpdateRegionState@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z.c)
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1400962EC (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x1400967E8 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140147FEC (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140090488 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     SmEtwEnabled @ 0x140092880 (SmEtwEnabled.c)
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x14009A2D4 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x1400CE680 (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
 *     MiFreePagesFromMdl @ 0x140136794 (MiFreePagesFromMdl.c)
 *     ?StDmUpdateRegionLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z @ 0x1402A5CB4 (-StDmUpdateRegionLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     SmEtwLogRegionOp @ 0x1402A6D24 (SmEtwLogRegionOp.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StReleaseRegion(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // r9
  ULONGLONG *v9; // rax
  unsigned int v10; // ecx
  __int64 v11; // rdi
  void *v12; // rbx
  int v13; // [rsp+78h] [rbp+10h] BYREF

  v4 = a2;
  if ( *(_BYTE *)(a1 + 776) )
  {
    *(_BYTE *)(a2 + *(_QWORD *)(a1 + 1048)) = 0;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 800);
    if ( (*(_BYTE *)(v6 + 6021) & 4) != 0 )
    {
      v7 = SMKM_STORE<SM_TRAITS>::SmStReleaseVirtualRegion(*(_QWORD *)(a1 + 800), a2, 0LL, a4);
    }
    else
    {
      v11 = *(_QWORD *)(v6 + 6216);
      v12 = (void *)(*(_QWORD *)(v11 + 8LL * a2) & 0xFFFFFFFFFFFFFFF8uLL);
      MiFreePagesFromMdl((ULONG_PTR)v12);
      ExFreePoolWithTag(v12, 0);
      v7 = 0;
      *(_QWORD *)(v11 + 8 * v4) = 0LL;
    }
    if ( v7 == -1073741650 )
      ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(a1, (unsigned int)v4, 1LL, v8);
    v9 = SmEtwEnabled(0);
    if ( v9 )
      SmEtwLogRegionOp((_DWORD)v9, 5, a1, v4, 0, *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v4), 0);
    if ( (unsigned int)v4 < *(_DWORD *)(a1 + 1092) )
      *(_DWORD *)(a1 + 1092) = v4;
  }
  if ( *(_BYTE *)(a1 + 776) )
    v10 = 0;
  else
    v10 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2 * v4) >> 13;
  --*(_DWORD *)(a1 + 8LL * v10 + 1824);
  if ( !*(_BYTE *)(a1 + 776) )
    *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v4) &= 0x1FFFu;
  if ( (*(_DWORD *)(a1 + 832) & 4) != 0 )
  {
    ST_STORE<SM_TRAITS>::StDmGetSpaceStats(a1, &v13, 0LL);
    if ( (unsigned int)(*(_DWORD *)(a1 + 856) - v13) >= 8 && (*(_DWORD *)(a1 + 2232) & 1) == 0 )
    {
      *(_DWORD *)(a1 + 2216) = 0;
      *(_DWORD *)(a1 + 2232) |= 1u;
      SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(*(_QWORD *)(a1 + 800), a1 + 2200, 6);
    }
  }
}
