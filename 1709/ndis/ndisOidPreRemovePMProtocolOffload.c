/*
 * XREFs of ndisOidPreRemovePMProtocolOffload @ 0x1C00E0090
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C00031DC (ndisGetOidSourceHandle.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisFindPatternEntry @ 0x1C00AC08C (ndisFindPatternEntry.c)
 */

char __fastcall ndisOidPreRemovePMProtocolOffload(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // r14
  char v4; // bl
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int8 v8; // al
  __int64 v9; // rcx
  int v10; // r10d
  __int64 v11; // rax
  unsigned __int8 v12; // cl
  char v13; // r8
  int *v14; // rax
  int v15; // r9d
  __int64 v16; // rcx
  __int64 OidSourceHandle; // rax
  int v18; // r9d
  __int64 *v19; // rcx
  __int64 v20; // r10
  __int64 *v21; // rdx
  bool v22; // zf
  _QWORD *v23; // rdx
  _QWORD *v24; // rax
  _QWORD *v25; // rcx
  char v26; // al

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = 0;
  v5 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x69u, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, v5, v1);
  v6 = *(_QWORD *)(a1 + 24);
  if ( v6 && (v7 = *(_QWORD *)(v6 + 24), v8 = *(_BYTE *)(v7 + 56), v8 <= 6u) && (v8 != 6 || *(_BYTE *)(v7 + 57) < 0x14u)
    || (v9 = *(_QWORD *)(a1 + 8), v10 = 0x4000, v9)
    && (*(_DWORD *)(v1 + 88) & 0x4000) == 0
    && (v11 = *(_QWORD *)(v9 + 16), v12 = *(_BYTE *)(v11 + 100), v12 <= 6u)
    && (v12 != 6 || *(_BYTE *)(v11 + 101) < 0x14u) )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
    v4 = 1;
    goto LABEL_37;
  }
  v13 = 1;
  if ( *(_DWORD *)(v1 + 4) != 1 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
LABEL_36:
    v4 = v13;
    goto LABEL_37;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 4u )
  {
    *(_DWORD *)(v1 + 56) = 4;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( *(_DWORD *)(a1 + 40) )
    goto LABEL_36;
  v14 = *(int **)(v1 + 40);
  *(_DWORD *)(v1 + 56) = 0;
  v15 = *v14;
  if ( *(_QWORD *)(a1 + 24) && !ndisFindPatternEntry((__int64 **)(v3 + 512), v15) )
    goto LABEL_35;
  v16 = *(_QWORD *)(a1 + 8);
  if ( v16 )
  {
    if ( (v10 & *(_DWORD *)(v1 + 88)) == 0 && !ndisFindPatternEntry((__int64 **)(v16 + 872), v15) )
      goto LABEL_35;
  }
  if ( !*(_QWORD *)a1 )
    goto LABEL_37;
  OidSourceHandle = ndisGetOidSourceHandle(v1);
  v19 = *(__int64 **)(v5 + 976);
  v20 = OidSourceHandle;
  if ( !v19 )
    goto LABEL_35;
  do
  {
    v21 = v19;
    if ( *((_DWORD *)v19 + 49) == v18 )
      break;
    v19 = (__int64 *)*v19;
    v21 = 0LL;
  }
  while ( v19 );
  if ( !v21 )
    goto LABEL_35;
  v22 = v21 + 1 == 0LL;
  v23 = v21 + 1;
  v24 = v23;
  if ( v22 )
    goto LABEL_35;
  do
  {
    v25 = v24 - 1;
    if ( v24[2] == v20 )
      break;
    v24 = (_QWORD *)*v24;
    v25 = 0LL;
  }
  while ( v24 );
  if ( !v25 )
  {
LABEL_35:
    *(_DWORD *)(a1 + 40) = -1073676261;
    goto LABEL_36;
  }
  v26 = 0;
  if ( *v23 )
    v26 = v13;
  v4 = v26;
LABEL_37:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qD(0x6Au, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, *(_QWORD *)a1, *(_DWORD *)(a1 + 40));
  return v4;
}
