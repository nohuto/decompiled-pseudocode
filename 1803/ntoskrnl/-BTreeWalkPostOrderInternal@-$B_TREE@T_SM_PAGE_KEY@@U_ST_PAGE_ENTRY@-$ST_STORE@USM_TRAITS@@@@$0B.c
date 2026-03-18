/*
 * XREFs of ?BTreeWalkPostOrderInternal@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU_SINGLE_LIST_ENTRY@@P6AJPEAX3PEA_K@Z3PEAPEAU23@@Z @ 0x1402A242C
 * Callers:
 *     ?BTreeWalkPostOrderInternal@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU_SINGLE_LIST_ENTRY@@P6AJPEAX3PEA_K@Z3PEAPEAU23@@Z @ 0x1402A242C (-BTreeWalkPostOrderInternal@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0B.c)
 *     ?StNpEnumBTreeNodes@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@P6AJPEAX1PEA_K@Z1@Z @ 0x1402A5FF0 (-StNpEnumBTreeNodes@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@P6AJPEAX1PEA_K@Z1@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ?BTreeWalkPostOrderInternal@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU_SINGLE_LIST_ENTRY@@P6AJPEAX3PEA_K@Z3PEAPEAU23@@Z @ 0x1402A242C (-BTreeWalkPostOrderInternal@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0B.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeWalkPostOrderInternal(
        __int64 a1,
        _OWORD *a2,
        _QWORD **a3,
        __int64 (__fastcall *a4)(_OWORD *, __int64, char *),
        __int64 a5,
        char *a6)
{
  _QWORD *v6; // rdi
  int v7; // r11d
  __int64 (__fastcall *v8)(_OWORD *, __int64, char *); // r10
  _QWORD *v9; // rbx
  _OWORD *v10; // rsi
  __int64 v11; // r8
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  int v14; // ecx
  _OWORD *v15; // r9
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rbx
  char *v18; // r8
  _QWORD *v19; // rdx
  int v21; // [rsp+50h] [rbp+8h]

  v21 = a1;
  v6 = *a3;
  v7 = a1;
  v8 = a4;
  v9 = a3;
  if ( *a3 )
  {
    v10 = *a3;
    *a3 = (_QWORD *)*v6;
    v11 = 32LL;
    v12 = v6;
    do
    {
      *v12 = *a2;
      v12[1] = a2[1];
      v12[2] = a2[2];
      v12[3] = a2[3];
      v12[4] = a2[4];
      v12[5] = a2[5];
      v12[6] = a2[6];
      v12 += 8;
      v13 = a2[7];
      a2 += 8;
      *(v12 - 1) = v13;
      --v11;
    }
    while ( v11 );
  }
  else
  {
    v10 = a2;
  }
  if ( *((_BYTE *)v10 + 3) )
  {
    v14 = a4(v10, a5, a6);
    goto LABEL_24;
  }
  v15 = v10 + 1;
  v16 = (unsigned __int64)&v10[(unsigned __int16)*(_DWORD *)v10 + 1];
  v17 = (unsigned __int64)(v10 + 1);
  if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 || (unsigned __int8)BYTE2(*(_DWORD *)v10) != 2 )
  {
    while ( v17 <= v16 )
    {
      v19 = (_QWORD *)(v17 - 8);
      if ( v17 <= (unsigned __int64)v15 )
        v19 = (_QWORD *)v10 + 1;
      v14 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeWalkPostOrderInternal(
              v7,
              *v19,
              (_DWORD)a3,
              (_DWORD)v8,
              a5,
              (__int64)v19);
      if ( v14 < 0 )
        goto LABEL_23;
      v8 = a4;
      v15 = v10 + 1;
      v7 = v21;
      v17 += 16LL;
    }
  }
  else
  {
    for ( ; v17 <= v16; v17 += 16LL )
    {
      v18 = (char *)(v17 - 8);
      if ( v17 <= (unsigned __int64)v15 )
        v18 = (char *)v10 + 8;
      v14 = v8(0LL, a5, v18);
      if ( v14 < 0 )
        goto LABEL_23;
      v8 = a4;
      v15 = v10 + 1;
    }
  }
  v14 = v8(v10, a5, a6);
  if ( v14 >= 0 )
    v14 = 0;
LABEL_23:
  v9 = a3;
LABEL_24:
  if ( v6 )
  {
    *v6 = *v9;
    *v9 = v6;
  }
  return (unsigned int)v14;
}
