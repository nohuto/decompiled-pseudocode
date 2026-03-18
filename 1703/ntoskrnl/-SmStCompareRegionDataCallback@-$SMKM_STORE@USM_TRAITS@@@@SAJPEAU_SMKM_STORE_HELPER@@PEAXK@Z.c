/*
 * XREFs of ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x1400350F0
 * Callers:
 *     ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x14012F7B0 (-StDmCombineBufferProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE.c)
 * Callees:
 *     ?SmStCheckResident@?$SMKM_STORE@USM_TRAITS@@@@SA?AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z @ 0x14003536C (-SmStCheckResident@-$SMKM_STORE@USM_TRAITS@@@@SA-AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z.c)
 *     SmFpFree @ 0x140054CF0 (SmFpFree.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14005D878 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14005D994 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     SmFpAllocate @ 0x140121890 (SmFpAllocate.c)
 *     memcmp @ 0x14016A960 (memcmp.c)
 *     ?SmStUnhandledExceptionFilter@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST_STORE_EXCEPTION_SOURCE@1@@Z @ 0x14024A500 (-SmStUnhandledExceptionFilter@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStCompareRegionDataCallback(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned int *a3,
        unsigned __int64 a4)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // r12
  unsigned __int64 v8; // r13
  unsigned int *v9; // r14
  unsigned int *v10; // rax
  unsigned __int64 v11; // rax
  unsigned int v12; // r14d
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r8
  void *Buf2; // [rsp+38h] [rbp-70h]
  void *Buf1; // [rsp+40h] [rbp-68h]
  unsigned __int64 v23; // [rsp+50h] [rbp-58h]
  unsigned int *v24; // [rsp+58h] [rbp-50h]
  unsigned int *v25; // [rsp+B0h] [rbp+8h]
  __int64 v26; // [rsp+B8h] [rbp+10h]

  v5 = 0LL;
  v6 = a1 - 6200;
  v7 = 0LL;
  if ( (_DWORD)a3 )
  {
    ExFreePoolWithTag(a2, 0);
    return 0LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 6548));
    if ( (*(_BYTE *)(v6 + 5989) & 4) != 0 )
    {
      v8 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion((int)a1 - 6200, *(_DWORD *)a2, 0, a4, 0);
      if ( v8 <= 3 )
      {
LABEL_35:
        v12 = -1073741670;
        goto LABEL_25;
      }
    }
    else
    {
      v8 = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)(v6 + 6184) + 8LL * *(unsigned int *)a2) & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    }
    v9 = (unsigned int *)(a2 + 4);
    v10 = (unsigned int *)((char *)a2 + a2[3]);
    v24 = v10;
LABEL_5:
    if ( v9 < v10 )
    {
      Buf1 = (void *)(v8 + *v9);
      *((_BYTE *)v9 + 7) = 16;
      v11 = (unsigned __int64)&v9[2 * *((unsigned __int8 *)v9 + 6) + 2];
      v23 = v11;
      a3 = v9 + 2;
      while ( 1 )
      {
        v25 = a3;
        if ( (unsigned __int64)a3 >= v11 )
        {
LABEL_14:
          v9 += 2 * *((unsigned __int8 *)v9 + 6) + 2;
          v10 = v24;
          goto LABEL_5;
        }
        if ( v5 )
        {
          if ( (_DWORD)v7 == *a3 )
            goto LABEL_10;
          if ( v5 != v8 )
          {
            if ( (*(_BYTE *)(v6 + 5989) & 4) != 0 )
            {
              SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v6, v7, (_DWORD)a3, a4);
LABEL_18:
              a3 = v25;
              goto LABEL_19;
            }
            v14 = *(_QWORD *)(v6 + 6184);
            a4 = *(_QWORD *)(v14 + 8 * v7) & 0xFFFFFFFFFFFFFFF8uLL;
            v15 = *(_QWORD *)(v14 + 8 * v7) & 0xFFFFFFFFFFFFFFFEuLL;
            *(_QWORD *)(v14 + 8 * v7) = v15;
            if ( (v15 & 3) == 0 )
            {
              SmFpFree(v6 + 6560, 5LL, KeGetCurrentThread(), a4);
              goto LABEL_18;
            }
          }
        }
LABEL_19:
        v7 = *a3;
        if ( (_DWORD)v7 == *(_DWORD *)a2 )
        {
          v5 = v8;
          goto LABEL_10;
        }
        if ( (*(_BYTE *)(v6 + 5989) & 4) != 0 )
        {
          v5 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(v6, v7, 0, a4, 0);
        }
        else
        {
          v16 = *a3;
          v17 = *(_QWORD *)(v6 + 6184);
          v26 = v17;
          if ( (*(_QWORD *)(v17 + 8 * v7) & 3) != 0 )
          {
            v5 = *(_QWORD *)((*(_QWORD *)(v17 + 8 * v7) & 0xFFFFFFFFFFFFFFF8uLL) + 24);
            goto LABEL_43;
          }
          v5 = SmFpAllocate((PEX_SPIN_LOCK)(v6 + 6560), 0);
          if ( v5 )
          {
            v16 = v7;
            v17 = v26;
LABEL_43:
            *(_QWORD *)(v17 + 8 * v16) |= 1uLL;
          }
        }
        if ( v5 <= 3 )
          goto LABEL_35;
        a3 = v25;
LABEL_10:
        Buf2 = (void *)(v5 + a3[1]);
        if ( (unsigned int)SMKM_STORE<SM_TRAITS>::SmStCheckResident(Buf2, *((unsigned __int16 *)v9 + 2)) == 1 )
        {
          if ( !memcmp(Buf1, Buf2, *((unsigned __int16 *)v9 + 2)) )
            *((_BYTE *)v9 + 7) = ((char *)v25 - (char *)(v9 + 2)) >> 3;
          if ( *((_BYTE *)v9 + 7) != 16 )
            goto LABEL_14;
        }
        a3 = v25 + 2;
        v11 = v23;
      }
    }
    v12 = 0;
LABEL_25:
    if ( (*(_BYTE *)(v6 + 5989) & 4) != 0 && v8 > 3 )
      SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v6, *(_DWORD *)a2, (_DWORD)a3, a4);
    if ( v5 != v8 && v5 > 3 )
    {
      if ( (*(_BYTE *)(v6 + 5989) & 4) != 0 )
      {
        SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v6, v7, (_DWORD)a3, a4);
      }
      else
      {
        v18 = *(_QWORD *)(v6 + 6184);
        v19 = *(_QWORD *)(v18 + 8LL * (unsigned int)v7) & 0xFFFFFFFFFFFFFFF8uLL;
        v20 = *(_QWORD *)(v18 + 8LL * (unsigned int)v7) & 0xFFFFFFFFFFFFFFFEuLL;
        *(_QWORD *)(v18 + 8LL * (unsigned int)v7) = v20;
        if ( (v20 & 3) == 0 )
          SmFpFree(v6 + 6560, 5LL, KeGetCurrentThread(), v19);
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(v6 + 6548));
    return v12;
  }
}
