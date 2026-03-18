/*
 * XREFs of ?StCompactionFindEmptiest@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@KK@Z @ 0x140148C58
 * Callers:
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140147FEC (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionFindEmptiest(
        __int64 a1,
        char *a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned __int64 v4; // rax
  char *v8; // r9
  char *v9; // r14
  unsigned __int64 v10; // r10
  unsigned int v11; // esi
  __int64 v12; // rdi
  unsigned __int16 *v13; // r13
  unsigned __int16 v14; // ax
  unsigned int v15; // ecx
  char *v16; // rbx
  char *v17; // r9
  bool v18; // cf
  unsigned int v19; // eax
  __int16 v21; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v22; // [rsp+70h] [rbp+18h]

  v22 = a3;
  v4 = a3;
  v21 |= 0x1FFFu;
  v8 = a2;
  v9 = &a2[8 * a3];
  v10 = 0LL;
  if ( a2 > v9 )
    v4 = 0LL;
  if ( v4 )
  {
    do
    {
      ++v10;
      *(_QWORD *)v8 = &v21;
      v8 += 8;
    }
    while ( v10 < v4 );
  }
  v11 = 0;
  LODWORD(v12) = -1;
LABEL_6:
  while ( 1 )
  {
    v12 = (unsigned int)(v12 + 1);
    if ( (_DWORD)v12 == *(_DWORD *)(a1 + 788) )
      return v11;
    v13 = (unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2 * v12);
    v14 = *v13;
    if ( (*v13 & 0x1FFF) != 0 && (v14 & 0x1FFFu) <= a4 )
    {
      v15 = *(_BYTE *)(a1 + 776) ? 0 : v14 >> 13;
      if ( (_DWORD)v12 != *(_DWORD *)(a1 + 16 * (v15 + 78LL)) )
      {
        v16 = a2;
        if ( a2 < v9 )
        {
          while ( 1 )
          {
            v17 = v16 + 8;
            if ( (unsigned __int16)(*v13 & 0x1FFF) < (unsigned __int16)(**(_WORD **)v16 & 0x1FFF) )
              break;
            v16 += 8;
            if ( v17 >= v9 )
              goto LABEL_6;
          }
          memmove(v16 + 8, v16, v9 - v16 - 8);
          v18 = v11 < v22;
          v19 = v11 + 1;
          *(_QWORD *)v16 = v13;
          if ( !v18 )
            v19 = v11;
          v11 = v19;
          if ( v19 >= v22 )
            a4 = (**((_WORD **)v9 - 1) & 0x1FFF) - 1;
        }
      }
    }
  }
}
