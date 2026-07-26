/*
 * XREFs of ndisOidPreRemovePMProtocolOffload @ 0x1C00D5BF0
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C001F33C (ndisGetOidSourceHandle.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     ndisFindPatternEntry @ 0x1C00D4BAC (ndisFindPatternEntry.c)
 */

char __fastcall ndisOidPreRemovePMProtocolOffload(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // r14
  char v4; // bl
  __int64 v5; // rbp
  char v6; // r11
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int8 v9; // al
  __int64 v10; // rcx
  int v11; // r10d
  __int64 v12; // rdx
  unsigned __int8 v13; // al
  char v14; // r8
  int *v15; // rax
  int v16; // r9d
  __int64 v17; // rcx
  __int64 OidSourceHandle; // rax
  int v19; // r9d
  __int64 *v20; // rcx
  __int64 v21; // r10
  __int64 *v22; // rdx
  bool v23; // zf
  _QWORD *v24; // rdx
  _QWORD *v25; // rax
  _QWORD *v26; // rcx
  char v27; // al

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = 0;
  v5 = *(_QWORD *)a1;
  v6 = byte_1C0092612;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
  {
    WPP_SF_qq(0x69u, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, v5, v1);
    v6 = byte_1C0092612;
  }
  v7 = *(_QWORD *)(a1 + 24);
  if ( v7 && (v8 = *(_QWORD *)(v7 + 24), v9 = *(_BYTE *)(v8 + 56), v9 <= 6u) && (v9 != 6 || *(_BYTE *)(v8 + 57) < 0x14u)
    || (v10 = *(_QWORD *)(a1 + 8), v11 = 0x4000, v10)
    && (*(_DWORD *)(v1 + 88) & 0x4000) == 0
    && (v12 = *(_QWORD *)(v10 + 16), v13 = *(_BYTE *)(v12 + 100), v13 <= 6u)
    && (v13 != 6 || *(_BYTE *)(v12 + 101) < 0x14u) )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
    v4 = 1;
    goto LABEL_37;
  }
  v14 = 1;
  if ( *(_DWORD *)(v1 + 4) != 1 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
LABEL_36:
    v4 = v14;
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
  v15 = *(int **)(v1 + 40);
  *(_DWORD *)(v1 + 56) = 0;
  v16 = *v15;
  if ( *(_QWORD *)(a1 + 24) && !ndisFindPatternEntry((__int64 **)(v3 + 512), v16) )
    goto LABEL_35;
  v17 = *(_QWORD *)(a1 + 8);
  if ( v17 )
  {
    if ( (v11 & *(_DWORD *)(v1 + 88)) == 0 && !ndisFindPatternEntry((__int64 **)(v17 + 872), v16) )
      goto LABEL_35;
  }
  if ( !*(_QWORD *)a1 )
    goto LABEL_37;
  OidSourceHandle = ndisGetOidSourceHandle(v1);
  v20 = *(__int64 **)(v5 + 976);
  v21 = OidSourceHandle;
  if ( !v20 )
    goto LABEL_35;
  do
  {
    v22 = v20;
    if ( *((_DWORD *)v20 + 49) == v19 )
      break;
    v20 = (__int64 *)*v20;
    v22 = 0LL;
  }
  while ( v20 );
  if ( !v22 )
    goto LABEL_35;
  v23 = v22 + 1 == 0LL;
  v24 = v22 + 1;
  v25 = v24;
  if ( v23 )
    goto LABEL_35;
  do
  {
    v26 = v25 - 1;
    if ( v25[2] == v21 )
      break;
    v25 = (_QWORD *)*v25;
    v26 = 0LL;
  }
  while ( v25 );
  if ( !v26 )
  {
LABEL_35:
    *(_DWORD *)(a1 + 40) = -1073676261;
    goto LABEL_36;
  }
  v27 = 0;
  if ( *v24 )
    v27 = v14;
  v4 = v27;
LABEL_37:
  if ( (unsigned __int8)v6 >= 4u )
    WPP_SF_qD(0x6Au, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, *(_QWORD *)a1, *(_DWORD *)(a1 + 40));
  return v4;
}
