/*
 * XREFs of ?BTreeWalkPostOrderInternal@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU_SINGLE_LIST_ENTRY@@P6AJPEAX3PEA_K@Z3PEAPEAU23@@Z @ 0x140264248
 * Callers:
 *     ?BTreeWalkPostOrderInternal@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU_SINGLE_LIST_ENTRY@@P6AJPEAX3PEA_K@Z3PEAPEAU23@@Z @ 0x140264248 (-BTreeWalkPostOrderInternal@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0B.c)
 *     ?StNpEnumBTreeNodes@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@P6AJPEAX1PEA_K@Z1@Z @ 0x1402709E0 (-StNpEnumBTreeNodes@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@P6AJPEAX1PEA_K@Z1@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ?BTreeWalkPostOrderInternal@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU_SINGLE_LIST_ENTRY@@P6AJPEAX3PEA_K@Z3PEAPEAU23@@Z @ 0x140264248 (-BTreeWalkPostOrderInternal@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0B.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeWalkPostOrderInternal(
        __int64 a1,
        _OWORD *a2,
        _QWORD **a3,
        __int64 (__fastcall *a4)(_QWORD, _QWORD, _QWORD),
        __int64 a5,
        __int64 a6)
{
  _QWORD *v6; // rsi
  int v7; // r10d
  _QWORD *v8; // rbx
  _OWORD *v9; // rdi
  __int64 v10; // r8
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  int v13; // ecx
  _OWORD *v14; // r8
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rbx
  bool v17; // cc
  char *v18; // r8
  _QWORD *v19; // rdx
  int v21; // [rsp+50h] [rbp+8h]
  __int64 (__fastcall *v23)(_QWORD, _QWORD, _QWORD); // [rsp+68h] [rbp+20h]

  v23 = a4;
  v21 = a1;
  v6 = *a3;
  v7 = a1;
  v8 = a3;
  if ( *a3 )
  {
    v9 = *a3;
    *a3 = (_QWORD *)*v6;
    v10 = 32LL;
    v11 = v6;
    do
    {
      *v11 = *a2;
      v11[1] = a2[1];
      v11[2] = a2[2];
      v11[3] = a2[3];
      v11[4] = a2[4];
      v11[5] = a2[5];
      v11[6] = a2[6];
      v11 += 8;
      v12 = a2[7];
      a2 += 8;
      *(v11 - 1) = v12;
      --v10;
    }
    while ( v10 );
  }
  else
  {
    v9 = a2;
  }
  if ( *((_BYTE *)v9 + 3) )
  {
    v13 = a4(v9, a5, a6);
    goto LABEL_24;
  }
  v14 = v9 + 1;
  v15 = (unsigned __int64)&v9[(unsigned __int16)*(_DWORD *)v9 + 1];
  v16 = (unsigned __int64)(v9 + 1);
  if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 || *((_BYTE *)v9 + 2) != 2 )
  {
    while ( v16 <= v15 )
    {
      v19 = (_QWORD *)(v16 - 8);
      if ( v16 <= (unsigned __int64)v14 )
        v19 = (_QWORD *)v9 + 1;
      v13 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeWalkPostOrderInternal(
              v7,
              *v19,
              (_DWORD)a3,
              (_DWORD)a4,
              a5,
              (__int64)v19);
      if ( v13 < 0 )
        goto LABEL_23;
      v7 = v21;
      v14 = v9 + 1;
      a4 = v23;
      v16 += 16LL;
    }
  }
  else
  {
    for ( ; v16 <= v15; v16 += 16LL )
    {
      v17 = v16 <= (unsigned __int64)v14;
      v18 = (char *)(v16 - 8);
      if ( v17 )
        v18 = (char *)v9 + 8;
      v13 = a4(0LL, a5, v18);
      if ( v13 < 0 )
        goto LABEL_23;
      a4 = v23;
      v14 = v9 + 1;
    }
  }
  v13 = a4(v9, a5, a6);
  if ( v13 >= 0 )
    v13 = 0;
LABEL_23:
  v8 = a3;
LABEL_24:
  if ( v6 )
  {
    *v6 = *v8;
    *v8 = v6;
  }
  return (unsigned int)v13;
}
