/*
 * XREFs of ?StAddRemoveRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402A37B8
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140091218 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x1402A5A84 (-StDmRegionRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StAddRemoveRegions(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v3; // esi
  char v4; // al
  unsigned int *v6; // r13
  int v7; // edx
  unsigned int v8; // r9d
  int v9; // r11d
  __int64 v10; // rbx
  unsigned int v11; // ebp
  unsigned int v12; // edx
  _QWORD *v13; // rdx
  __int64 i; // r8
  unsigned __int64 v15; // rax
  unsigned int v16; // edx
  __int64 v17; // r14
  unsigned int v18; // eax
  int v19; // r10d
  unsigned int v20; // edi
  unsigned int v22; // [rsp+68h] [rbp+10h] BYREF
  __int64 v23; // [rsp+70h] [rbp+18h]

  v2 = a1 + 80;
  v3 = *(_DWORD *)(a2 + 24);
  v4 = *(_DWORD *)(a2 + 8) & 7;
  v23 = a1 + 80;
  v22 = 0;
  if ( v4 == 4 )
  {
    v6 = *(unsigned int **)(a2 + 16);
    while ( v3 )
    {
      v7 = *v6 - 1;
      v8 = v22 < *v6 ? v22 : 0;
      v9 = (v6[2] & 4) != 0LL ? 0x20 : 0;
      v10 = *((_QWORD *)v6 + 1) - ((*((_QWORD *)v6 + 1) & 4LL) != 0 ? 4 : 0);
      while ( 1 )
      {
        v11 = v9 + v7;
        if ( v7 - v8 == -1 )
          goto LABEL_6;
        v13 = (_QWORD *)(v10 + 8 * ((unsigned __int64)(v9 + v8) >> 6));
        for ( i = ~*v13 | ((1LL << ((v9 + v8) & 0x3F)) - 1); i == -1; i = ~*v13 )
        {
          if ( (unsigned __int64)++v13 > v10 + 8 * ((unsigned __int64)v11 >> 6) )
            goto LABEL_6;
        }
        _BitScanForward64(&v15, ~i);
        v12 = v15 + ((unsigned int)(((__int64)v13 - v10) >> 3) << 6);
        if ( v12 > v11 )
        {
LABEL_6:
          v12 = -1;
        }
        else if ( v12 != -1 )
        {
          break;
        }
        if ( !v8 )
          break;
        v16 = v22 + 1;
        v8 = 0;
        if ( v22 + 1 > *v6 )
          v16 = *v6;
        v7 = v16 - 1;
      }
      v17 = v23;
      v18 = v12 - v9;
      if ( v12 == -1 )
        v18 = -1;
      --v3;
      *(_BYTE *)(((unsigned __int64)v18 >> 3) + *(_QWORD *)(v23 + 848)) |= 1 << (v18 & 7);
      ++*(_DWORD *)(v17 + 856);
      v22 = v18 + 1;
    }
    return 0;
  }
  else
  {
    v19 = -1;
    v20 = 0;
    if ( v3 )
    {
      while ( 1 )
      {
        v19 = ST_STORE<SM_TRAITS>::StDmRegionRemove(v2, &v22);
        if ( v19 < 0 )
          break;
        ++v20;
        *(_BYTE *)(((unsigned __int64)v22 >> 3) + *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL)) |= 1 << (v22 & 7);
        if ( v20 >= v3 )
          goto LABEL_28;
      }
      if ( v19 != -1073741818 )
        v19 = 0;
    }
LABEL_28:
    *(_DWORD *)(a2 + 24) = v20;
  }
  return (unsigned int)v19;
}
