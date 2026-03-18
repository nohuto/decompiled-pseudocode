/*
 * XREFs of ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14026AD74
 * Callers:
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14026B13C (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402713C4 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x14026892C (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14026A3EC (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StCompactionFindEmptiest@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@KK@Z @ 0x14026A998 (-StCompactionFindEmptiest@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE.c)
 *     ?StCompactionPickPriority@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@K1K@Z @ 0x14026AFE8 (-StCompactionPickPriority@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140270658 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1402710C4 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x1402712C4 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionPerformInMem(__int64 a1, int a2)
{
  __int64 v3; // rsi
  __int64 v5; // rbp
  unsigned int Emptiest; // eax
  unsigned int v7; // r12d
  __int64 v8; // r14
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // r15
  unsigned int v12; // r13d
  char *v13; // r12
  __int64 v14; // rax
  unsigned int v17; // [rsp+34h] [rbp-164h]
  _WORD *v18; // [rsp+38h] [rbp-160h]
  __int64 v19; // [rsp+40h] [rbp-158h] BYREF
  char v20; // [rsp+48h] [rbp-150h] BYREF
  _QWORD v21[32]; // [rsp+60h] [rbp-138h] BYREF

  v3 = 0LL;
  LODWORD(v5) = -1;
  Emptiest = ST_STORE<SM_TRAITS>::StCompactionFindEmptiest(
               a1,
               v21,
               0x20u,
               *(_DWORD *)(a1 + 816) - *(_DWORD *)(a1 + 820) + 1);
  v7 = ST_STORE<SM_TRAITS>::StCompactionPickPriority(a1, v21, Emptiest, &v19);
  v8 = (v19 - *(_QWORD *)(a1 + 1032)) >> 1;
  v17 = v7;
  if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0 && SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), v8) )
    return (unsigned int)-1073740024;
  v10 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, (unsigned int)v8, 0LL, 32LL);
  v11 = v10;
  if ( !v10 )
    return (unsigned int)-1073741739;
  if ( v10 == -1 )
  {
    return (unsigned int)-1073740024;
  }
  else
  {
    v9 = ST_STORE<SM_TRAITS>::StCompactRegions(a1, v10, v8, v10, v8, a2);
    if ( v9 >= 0 )
    {
      v12 = 1;
      if ( v7 <= 1 )
      {
LABEL_21:
        v9 = 0;
LABEL_22:
        v3 = 0LL;
      }
      else
      {
        v13 = &v20;
        while ( 1 )
        {
          v18 = *(_WORD **)v13;
          v5 = (__int64)(*(_QWORD *)v13 - *(_QWORD *)(a1 + 1032)) >> 1;
          if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0
            && SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), v5) )
          {
LABEL_28:
            v9 = -1073740024;
            goto LABEL_22;
          }
          v14 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, (unsigned int)v5, 0LL, 32LL);
          v3 = v14;
          if ( !v14 )
            break;
          if ( v14 == -1 )
            goto LABEL_28;
          if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0
            && SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), v8) )
          {
            v9 = -1073740024;
            goto LABEL_23;
          }
          v9 = ST_STORE<SM_TRAITS>::StCompactRegions(a1, v3, v5, v11, v8, a2);
          if ( (*v18 & 0x1FFF) != 0 )
          {
            ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, (unsigned int)v8);
            v11 = v3;
            LODWORD(v8) = v5;
          }
          else
          {
            ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, (unsigned int)v5);
            ST_STORE<SM_TRAITS>::StReleaseRegion(a1, (unsigned int)v5);
          }
          if ( v9 < 0 )
            goto LABEL_22;
          ++v12;
          v13 += 8;
          if ( v12 >= v17 )
            goto LABEL_21;
        }
        v9 = -1073741739;
      }
    }
LABEL_23:
    if ( v11 )
      ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, (unsigned int)v8);
    if ( v3 )
      ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, (unsigned int)v5);
  }
  return (unsigned int)v9;
}
