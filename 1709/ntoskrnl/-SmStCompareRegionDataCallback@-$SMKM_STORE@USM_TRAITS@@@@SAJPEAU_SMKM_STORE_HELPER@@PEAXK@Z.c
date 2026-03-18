/*
 * XREFs of ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140267F20
 * Callers:
 *     ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x14026BCFC (-StDmCombineBufferProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE.c)
 * Callees:
 *     memcmp @ 0x14015F370 (memcmp.c)
 *     ?SmStCheckResident@?$SMKM_STORE@USM_TRAITS@@@@SA?AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z @ 0x140267E54 (-SmStCheckResident@-$SMKM_STORE@USM_TRAITS@@@@SA-AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1402689F0 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStUnhandledExceptionFilter@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST_STORE_EXCEPTION_SOURCE@1@@Z @ 0x140269774 (-SmStUnhandledExceptionFilter@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140269804 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmFpAllocate @ 0x140272DD0 (SmFpAllocate.c)
 *     SmFpFree @ 0x140272EDC (SmFpFree.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
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
  unsigned __int64 v9; // r13
  unsigned int v10; // r14d
  unsigned int *v11; // r14
  unsigned int *v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r8
  int v21; // [rsp+20h] [rbp-88h]
  void *Buf2; // [rsp+38h] [rbp-70h]
  void *Buf1; // [rsp+40h] [rbp-68h]
  unsigned __int64 v24; // [rsp+50h] [rbp-58h]
  unsigned int *i; // [rsp+58h] [rbp-50h]
  unsigned int *v26; // [rsp+B0h] [rbp+8h]
  __int64 v27; // [rsp+B8h] [rbp+10h]

  v5 = 0LL;
  v6 = a1 - 6232;
  v7 = 0LL;
  if ( (_DWORD)a3 )
  {
    ExFreePoolWithTag(a2, 0);
    return 0LL;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 6580));
  if ( (*(_BYTE *)(v6 + 6021) & 4) == 0 )
  {
    v9 = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)(v6 + 6216) + 8LL * *(unsigned int *)a2) & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    goto LABEL_7;
  }
  v9 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion((int)a1 - 6232, *(_DWORD *)a2, 0, a4, 0);
  if ( v9 > 3 )
  {
LABEL_7:
    v11 = (unsigned int *)(a2 + 4);
    v12 = (unsigned int *)((char *)a2 + a2[3]);
    for ( i = v12; ; v12 = i )
    {
      if ( v11 >= v12 )
      {
        v10 = 0;
        goto LABEL_38;
      }
      Buf1 = (void *)(v9 + *v11);
      *((_BYTE *)v11 + 7) = 16;
      v13 = (unsigned __int64)&v11[2 * *((unsigned __int8 *)v11 + 6) + 2];
      v24 = v13;
      a3 = v11 + 2;
      while ( 1 )
      {
        v26 = a3;
        if ( (unsigned __int64)a3 >= v13 )
          break;
        if ( v5 )
        {
          if ( (_DWORD)v7 == *a3 )
            goto LABEL_31;
          if ( v5 != v9 )
          {
            if ( (*(_BYTE *)(v6 + 6021) & 4) != 0 )
            {
              SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v6, v7, (_DWORD)a3, a4, v21, 0);
            }
            else
            {
              v14 = *(_QWORD *)(v6 + 6216);
              a4 = *(_QWORD *)(v14 + 8 * v7) & 0xFFFFFFFFFFFFFFF8uLL;
              v15 = *(_QWORD *)(v14 + 8 * v7) & 0xFFFFFFFFFFFFFFFEuLL;
              *(_QWORD *)(v14 + 8 * v7) = v15;
              if ( (v15 & 3) != 0 )
                goto LABEL_19;
              SmFpFree(v6 + 6592, 5LL, KeGetCurrentThread(), a4);
            }
            a3 = v26;
          }
        }
LABEL_19:
        v7 = *a3;
        if ( (_DWORD)v7 == *(_DWORD *)a2 )
        {
          v5 = v9;
          goto LABEL_31;
        }
        if ( (*(_BYTE *)(v6 + 6021) & 4) != 0 )
        {
          v5 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(v6, v7, 0, a4, 0);
        }
        else
        {
          v16 = *a3;
          v17 = *(_QWORD *)(v6 + 6216);
          v27 = v17;
          if ( (*(_QWORD *)(v17 + 8 * v7) & 3) != 0 )
          {
            v5 = *(_QWORD *)((*(_QWORD *)(v17 + 8 * v7) & 0xFFFFFFFFFFFFFFF8uLL) + 24);
          }
          else
          {
            v5 = SmFpAllocate((PEX_SPIN_LOCK)(v6 + 6592), 0);
            if ( !v5 )
              goto LABEL_29;
            v16 = v7;
            v17 = v27;
          }
          *(_QWORD *)(v17 + 8 * v16) |= 1uLL;
        }
LABEL_29:
        if ( v5 <= 3 )
          goto LABEL_5;
        a3 = v26;
LABEL_31:
        Buf2 = (void *)(v5 + a3[1]);
        if ( (unsigned int)SMKM_STORE<SM_TRAITS>::SmStCheckResident((__int64)Buf2, *((unsigned __int16 *)v11 + 2)) == 1 )
        {
          if ( !memcmp(Buf1, Buf2, *((unsigned __int16 *)v11 + 2)) )
            *((_BYTE *)v11 + 7) = ((char *)v26 - (char *)(v11 + 2)) >> 3;
          if ( *((_BYTE *)v11 + 7) != 16 )
            break;
        }
        a3 = v26 + 2;
        v13 = v24;
      }
      v11 += 2 * *((unsigned __int8 *)v11 + 6) + 2;
    }
  }
LABEL_5:
  v10 = -1073741670;
LABEL_38:
  if ( (*(_BYTE *)(v6 + 6021) & 4) != 0 && v9 > 3 )
    SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v6, *(_DWORD *)a2, (_DWORD)a3, a4, v21, 0);
  if ( v5 > 3 && v5 != v9 )
  {
    if ( (*(_BYTE *)(v6 + 6021) & 4) != 0 )
    {
      SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v6, v7, (_DWORD)a3, a4, v21, 0);
    }
    else
    {
      v18 = *(_QWORD *)(v6 + 6216);
      v19 = *(_QWORD *)(v18 + 8LL * (unsigned int)v7) & 0xFFFFFFFFFFFFFFF8uLL;
      v20 = *(_QWORD *)(v18 + 8LL * (unsigned int)v7) & 0xFFFFFFFFFFFFFFFEuLL;
      *(_QWORD *)(v18 + 8LL * (unsigned int)v7) = v20;
      if ( (v20 & 3) == 0 )
        SmFpFree(v6 + 6592, 5LL, KeGetCurrentThread(), v19);
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(v6 + 6580));
  return v10;
}
