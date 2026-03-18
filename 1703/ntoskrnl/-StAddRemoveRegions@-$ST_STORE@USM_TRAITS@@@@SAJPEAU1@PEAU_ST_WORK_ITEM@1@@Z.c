/*
 * XREFs of ?StAddRemoveRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14024A530
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1400549C8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x14024C4D8 (-StDmRegionRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StAddRemoveRegions(__int64 a1, __int64 a2)
{
  char v2; // al
  unsigned int *v5; // rax
  int v6; // r14d
  unsigned int v7; // ebp
  int v8; // edx
  unsigned int v9; // r9d
  int v10; // r11d
  __int64 v11; // rdi
  unsigned int v12; // r15d
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  __int64 v15; // r8
  _QWORD *v16; // rcx
  __int64 i; // rax
  unsigned int v18; // edx
  unsigned int v19; // r9d
  int v20; // r10d
  unsigned int v21; // ebp
  __int64 v22; // r14
  unsigned int v23; // esi
  unsigned int v25; // [rsp+68h] [rbp+10h] BYREF
  unsigned int *v26; // [rsp+70h] [rbp+18h]

  v2 = *(_DWORD *)(a2 + 8) & 7;
  v25 = 0;
  if ( v2 == 4 )
  {
    v5 = *(unsigned int **)(a2 + 16);
    v6 = *(_DWORD *)(a2 + 24);
    v26 = v5;
    while ( v6 )
    {
      v7 = *v5;
      v8 = *v5 - 1;
      v9 = v25 < *v5 ? v25 : 0;
      v10 = (v5[2] & 4) != 0LL ? 0x20 : 0;
      v11 = *((_QWORD *)v5 + 1) - ((*((_QWORD *)v5 + 1) & 4LL) != 0 ? 4 : 0);
      while ( 1 )
      {
        v12 = v10 + v8;
        v13 = v10 + v9;
        if ( v8 - v9 == -1 )
          goto LABEL_6;
        v15 = (1LL << (v13 & 0x3F)) - 1;
        v16 = (_QWORD *)(v11 + 8 * ((unsigned __int64)v13 >> 6));
        for ( i = v15 | ~*v16; i == -1; i = ~*v16 )
        {
          if ( (unsigned __int64)++v16 > v11 + 8 * ((unsigned __int64)v12 >> 6) )
            goto LABEL_6;
        }
        _BitScanForward64((unsigned __int64 *)&i, ~i);
        v14 = i + ((unsigned int)(((__int64)v16 - v11) >> 3) << 6);
        if ( v14 > v12 )
        {
LABEL_6:
          v14 = -1;
        }
        else if ( v14 != -1 )
        {
          break;
        }
        if ( !v9 )
          break;
        v18 = v25 + 1;
        v9 = 0;
        if ( v25 + 1 > v7 )
          v18 = v7;
        v8 = v18 - 1;
      }
      v19 = v14 - v10;
      if ( v14 == -1 )
        v19 = -1;
      --v6;
      v5 = v26;
      *(_BYTE *)(((unsigned __int64)v19 >> 3) + *(_QWORD *)(a1 + 928)) |= 1 << (v19 & 7);
      ++*(_DWORD *)(a1 + 936);
      v25 = v19 + 1;
    }
    return 0;
  }
  else
  {
    v21 = *(_DWORD *)(a2 + 24);
    v22 = a1 + 80;
    v20 = -1;
    v23 = 0;
    if ( v21 )
    {
      while ( 1 )
      {
        v20 = ST_STORE<SM_TRAITS>::StDmRegionRemove(v22, &v25);
        if ( v20 < 0 )
          break;
        ++v23;
        *(_BYTE *)(((unsigned __int64)v25 >> 3) + *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL)) |= 1 << (v25 & 7);
        if ( v23 >= v21 )
          goto LABEL_28;
      }
      if ( v20 != -1073741818 )
        v20 = 0;
    }
LABEL_28:
    *(_DWORD *)(a2 + 24) = v23;
  }
  return (unsigned int)v20;
}
