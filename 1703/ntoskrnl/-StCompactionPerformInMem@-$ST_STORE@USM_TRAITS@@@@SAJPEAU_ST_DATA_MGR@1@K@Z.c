/*
 * XREFs of ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14013958C
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1400549C8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140139500 (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14001E63C (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x14001F2C4 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x14001F350 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x14001FEBC (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14005AB00 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StCompactionPickPriority@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@K1K@Z @ 0x1401397E0 (-StCompactionPickPriority@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE.c)
 *     ?StCompactionFindEmptiest@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@KK@Z @ 0x140139950 (-StCompactionFindEmptiest@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionPerformInMem(__int64 a1, int a2)
{
  __int64 v3; // rsi
  __int64 v5; // rbp
  unsigned int Emptiest; // eax
  unsigned int v7; // r12d
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r15
  int v11; // ebx
  int v12; // r8d
  unsigned int v13; // r13d
  char *v14; // r12
  __int64 v15; // rax
  int v16; // r8d
  unsigned int v19; // [rsp+34h] [rbp-164h]
  _WORD *v20; // [rsp+38h] [rbp-160h]
  __int64 v21; // [rsp+40h] [rbp-158h] BYREF
  char v22; // [rsp+48h] [rbp-150h] BYREF
  _BYTE v23[256]; // [rsp+60h] [rbp-138h] BYREF

  v3 = 0LL;
  LODWORD(v5) = -1;
  Emptiest = ST_STORE<SM_TRAITS>::StCompactionFindEmptiest(
               a1,
               v23,
               32LL,
               (unsigned int)(*(_DWORD *)(a1 + 816) - *(_DWORD *)(a1 + 820) + 1));
  v7 = ST_STORE<SM_TRAITS>::StCompactionPickPriority(a1, v23, Emptiest, &v21);
  v8 = (v21 - *(_QWORD *)(a1 + 1016)) >> 1;
  v19 = v7;
  if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0 && SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), v8) )
    return (unsigned int)-1073740024;
  v9 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, v8, 0, 32);
  v10 = v9;
  if ( !v9 )
    return (unsigned int)-1073741739;
  if ( v9 == -1 )
  {
    return (unsigned int)-1073740024;
  }
  else
  {
    v11 = ST_STORE<SM_TRAITS>::StCompactRegions(a1, v9, v8, v9, v8, a2);
    if ( v11 >= 0 )
    {
      v13 = 1;
      if ( v7 <= 1 )
      {
LABEL_18:
        v11 = 0;
LABEL_19:
        v3 = 0LL;
      }
      else
      {
        v14 = &v22;
        while ( 1 )
        {
          v20 = *(_WORD **)v14;
          v5 = (__int64)(*(_QWORD *)v14 - *(_QWORD *)(a1 + 1016)) >> 1;
          if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0
            && SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), v5) )
          {
LABEL_28:
            v11 = -1073740024;
            goto LABEL_19;
          }
          v15 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, v5, 0, 32);
          v3 = v15;
          if ( !v15 )
            break;
          if ( v15 == -1 )
            goto LABEL_28;
          if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0
            && SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), v8) )
          {
            v11 = -1073740024;
            goto LABEL_20;
          }
          v11 = ST_STORE<SM_TRAITS>::StCompactRegions(a1, v3, v5, v10, v8, a2);
          if ( (*v20 & 0x1FFF) != 0 )
          {
            ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, v8, v16);
            v10 = v3;
            LODWORD(v8) = v5;
          }
          else
          {
            ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, v5, v16);
            ST_STORE<SM_TRAITS>::StReleaseRegion(a1, v5);
          }
          if ( v11 < 0 )
            goto LABEL_19;
          ++v13;
          v14 += 8;
          if ( v13 >= v19 )
            goto LABEL_18;
        }
        v11 = -1073741739;
      }
    }
LABEL_20:
    if ( v10 )
      ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, v8, v12);
    if ( v3 )
      ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, v5, v12);
  }
  return (unsigned int)v11;
}
