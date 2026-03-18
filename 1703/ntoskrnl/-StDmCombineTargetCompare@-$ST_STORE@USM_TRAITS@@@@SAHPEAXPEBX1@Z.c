/*
 * XREFs of ?StDmCombineTargetCompare@?$ST_STORE@USM_TRAITS@@@@SAHPEAXPEBX1@Z @ 0x1400332E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCombineTargetCompare(_QWORD *a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int v3; // eax
  unsigned int v5; // r9d
  unsigned int v7; // r8d
  __int64 v8; // rax
  unsigned int v9; // edx
  int v10; // ecx
  unsigned int v11; // r9d
  unsigned int v12; // r11d
  unsigned int v13; // r8d
  unsigned int v14; // edx
  bool v15; // cf

  v3 = a2[1];
  v5 = a3[1];
  if ( v3 != v5 )
  {
    v15 = v5 < v3;
    return v15 ? -1 : 1;
  }
  v7 = *a2;
  v8 = a1[1];
  v9 = *a3;
  v10 = *(_DWORD *)(v8 + 812);
  v11 = v7 & *(_DWORD *)(v8 + 808);
  v12 = *a3 & *(_DWORD *)(v8 + 808);
  v13 = v7 >> v10;
  v14 = v9 >> v10;
  if ( v13 == v14 )
  {
LABEL_3:
    v15 = v11 < v12;
    return v15 ? -1 : 1;
  }
  if ( v13 == *(_DWORD *)a1 )
    return 1LL;
  if ( v14 != *(_DWORD *)a1 )
    goto LABEL_3;
  return 0xFFFFFFFFLL;
}
