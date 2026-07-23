/*
 * XREFs of ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x14026FEBC
 * Callers:
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14026E5F8 (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     ?StDmSinglePageRetrieveSync@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z @ 0x14026F080 (-StDmSinglePageRetrieveSync@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z.c)
 * Callees:
 *     ?SmStMapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140268960 (-SmStMapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1402689F0 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140269804 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?StDmIsCurrentRegion@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z @ 0x14026D650 (-StDmIsCurrentRegion@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmSinglePageTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14026F194 (-StDmSinglePageTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LO.c)
 *     ?StDmpSinglePageLookup@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAPEAU_ST_PAGE_RECORD@1@@Z @ 0x14026FDC8 (-StDmpSinglePageLookup@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@P.c)
 *     SmFpFree @ 0x140272EDC (SmFpFree.c)
 *     SmSetThreadSystemPagePriority @ 0x1402762D8 (SmSetThreadSystemPagePriority.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageRetrieve(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        ULONG_PTR a5)
{
  unsigned int v6; // r12d
  unsigned __int64 v7; // r15
  int v8; // ebx
  __int64 v9; // rdi
  int v10; // edi
  int v11; // ebp
  __int64 v12; // r14
  unsigned int v13; // eax
  __int16 v14; // ax
  int v15; // ecx
  unsigned int IsCurrentRegion; // eax
  unsigned int v17; // ebp
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // r10
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r10
  int v28; // [rsp+20h] [rbp-78h]
  __int64 v29; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v30[10]; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v31; // [rsp+A0h] [rbp+8h]

  v6 = a4 & 2 | 1;
  v7 = 0LL;
  v8 = 0;
  if ( (a4 & 2) != 0 )
  {
    v9 = *(_QWORD *)(a3 + 16);
  }
  else
  {
    v10 = ST_STORE<SM_TRAITS>::StDmpSinglePageLookup((__int64 *)a1, a2, (_DWORD *)a3, v30);
    if ( v10 < 0 )
      return (unsigned int)v10;
    v9 = v30[0];
  }
  v11 = *(_DWORD *)v9 & *(_DWORD *)(a1 + 808);
  v12 = (unsigned int)(*(_DWORD *)v9 >> *(_DWORD *)(a1 + 812));
  if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0 )
  {
    v29 = 0LL;
    v13 = SmSetThreadSystemPagePriority(&v29, 0LL, 0LL);
    v8 = 1;
  }
  else
  {
    v13 = a4;
  }
  v31 = v13;
  *(_DWORD *)a5 = *(_DWORD *)v9;
  v14 = 4096;
  v15 = *(_DWORD *)(v9 + 4) & 0xFFF;
  if ( v15 )
    v14 = v15;
  *(_WORD *)(a5 + 4) = v14;
  *(_WORD *)(a5 + 6) = (unsigned __int8)*(_WORD *)a3;
  if ( (unsigned __int8)*(_DWORD *)(a1 + 776) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 1016) + 24LL) )
    {
      *(_DWORD *)(a5 + 8) = *(_DWORD *)(v9 + 12);
      *(_DWORD *)(a5 + 12) = *(unsigned __int16 *)(v9 + 6);
    }
  }
  else
  {
    *(_DWORD *)(a5 + 8) = *(_DWORD *)(v9 + 8);
  }
  if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0 )
    IsCurrentRegion = 8;
  else
    IsCurrentRegion = ST_STORE<SM_TRAITS>::StDmIsCurrentRegion(a1, v12);
  v17 = 16 * v11;
  if ( IsCurrentRegion != 8 )
  {
    v20 = *(_QWORD *)(a1 + 16LL * IsCurrentRegion + 1256) + v17;
    goto LABEL_27;
  }
  v18 = *(_QWORD *)(a1 + 800);
  if ( (*(_BYTE *)(v18 + 6021) & 4) != 0 )
    v19 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(v18, v12, v17, a4, 1u);
  else
    v19 = SMKM_STORE<SM_TRAITS>::SmStMapPhysicalRegion(v18, v12, v17, a4, 1);
  v7 = v19;
  if ( v19 > 3 )
  {
    v20 = v19;
LABEL_27:
    *(_QWORD *)(a2 + 56) = a3;
    v10 = ST_STORE<SM_TRAITS>::StDmSinglePageTransfer(
            a1,
            *(void **)(a2 + 16),
            v20 | v6,
            a4,
            *(_QWORD *)(a3 + 8),
            a5,
            a2);
    if ( v10 >= 0 )
      v10 = 0;
    if ( v7 )
    {
      v22 = *(_QWORD *)(a1 + 800);
      if ( (*(_BYTE *)(v22 + 6021) & 4) != 0 )
      {
        SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v22, v12, v21, v22, v28, 0);
      }
      else
      {
        v23 = *(_QWORD *)(v22 + 6216);
        v24 = *(_QWORD *)(v23 + 8 * v12);
        v25 = v24 & 0xFFFFFFFFFFFFFFFEuLL;
        v26 = v24 & 0xFFFFFFFFFFFFFFF8uLL;
        *(_QWORD *)(v23 + 8 * v12) = v25;
        if ( (v25 & 3) == 0 )
          SmFpFree(v22 + 6592, 5LL, KeGetCurrentThread(), v26);
      }
    }
    goto LABEL_34;
  }
  v10 = -2147483634;
  if ( v19 != 1 )
    v10 = -1073741550;
LABEL_34:
  if ( v8 )
    SmSetThreadSystemPagePriority(&v29, v31, 1LL);
  return (unsigned int)v10;
}
