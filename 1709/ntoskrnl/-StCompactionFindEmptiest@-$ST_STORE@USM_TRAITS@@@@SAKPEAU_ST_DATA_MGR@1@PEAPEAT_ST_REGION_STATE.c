/*
 * XREFs of ?StCompactionFindEmptiest@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@KK@Z @ 0x14026A998
 * Callers:
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14026AD74 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionFindEmptiest(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned __int64 v4; // rax
  _QWORD *v8; // r9
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r10
  unsigned int v11; // esi
  __int64 v12; // rdi
  unsigned __int16 *v13; // r13
  unsigned __int16 v14; // ax
  unsigned int v15; // ecx
  unsigned __int16 **v16; // rbx
  bool v17; // cf
  unsigned int v18; // eax
  __int16 v20; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v21; // [rsp+70h] [rbp+18h]

  v21 = a3;
  v4 = a3;
  v20 |= 0x1FFFu;
  v8 = a2;
  v9 = (unsigned __int64)&a2[a3];
  v10 = 0LL;
  if ( (unsigned __int64)a2 > v9 )
    v4 = 0LL;
  if ( v4 )
  {
    do
    {
      ++v10;
      *v8++ = &v20;
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
      v15 = (unsigned __int8)*(_DWORD *)(a1 + 776) ? 0 : v14 >> 13;
      if ( (_DWORD)v12 != *(_DWORD *)(a1 + 16 * (v15 + 78LL)) )
      {
        v16 = (unsigned __int16 **)a2;
        if ( (unsigned __int64)a2 < v9 )
        {
          while ( (unsigned __int16)(*v13 & 0x1FFF) >= (unsigned __int16)(**v16 & 0x1FFF) )
          {
            if ( (unsigned __int64)++v16 >= v9 )
              goto LABEL_6;
          }
          memmove(v16 + 1, v16, v9 - (_QWORD)v16 - 8);
          v17 = v11 < v21;
          v18 = v11 + 1;
          *v16 = v13;
          if ( !v17 )
            v18 = v11;
          v11 = v18;
          if ( v18 >= v21 )
            a4 = (**(_WORD **)(v9 - 8) & 0x1FFF) - 1;
        }
      }
    }
  }
}
