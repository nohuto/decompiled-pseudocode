/*
 * XREFs of ndisSortNetBufferLists @ 0x1C0003250
 * Callers:
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0001008 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C0001480 (ndisMDispatchReceiveNetBufferLists.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0002030 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C0002930 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001E2C0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ndisMIndicateSplitNblChain @ 0x1C0068A50 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     ndisReturnNetBufferListsInternal @ 0x1C00692B0 (ndisReturnNetBufferListsInternal.c)
 */

__int64 __fastcall ndisSortNetBufferLists(__int64 *a1)
{
  __int64 v1; // rbp
  char v2; // r11
  __int64 *v4; // rdx
  int v5; // r8d
  unsigned int v6; // edi
  unsigned int v7; // r9d
  __int64 *v8; // r14
  _QWORD *v9; // r10
  __int64 v10; // rax
  __int64 result; // rax
  unsigned __int16 v12; // r12
  __int64 *v13; // r13
  char v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rdi
  unsigned int v17; // esi
  char *v18; // r8
  char *v19; // r8
  __int64 v20; // rdx
  unsigned int v21; // ecx
  unsigned int v22; // r10d
  _WORD *v23; // rax
  unsigned int v24; // r9d
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 *v28; // rdx
  int v29; // r8d
  char *v30; // rax
  unsigned int v31; // [rsp+20h] [rbp-68h]
  unsigned int v32; // [rsp+24h] [rbp-64h]
  __int64 v33; // [rsp+28h] [rbp-60h]
  __int64 *v34; // [rsp+30h] [rbp-58h]
  _QWORD *v35; // [rsp+38h] [rbp-50h]
  char v36; // [rsp+90h] [rbp+8h]
  unsigned __int16 v37; // [rsp+98h] [rbp+10h]
  unsigned __int16 v38; // [rsp+A0h] [rbp+18h]
  int v39; // [rsp+A8h] [rbp+20h]

  v1 = *a1;
  v2 = 0;
  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = (__int64 *)a1[3];
  v9 = 0LL;
  v10 = a1[1];
  *((_DWORD *)a1 + 172) = 0;
  v39 = 0;
  v36 = 0;
  v31 = 0;
  v32 = 0;
  v33 = v1;
  v35 = 0LL;
  v34 = 0LL;
  if ( *(_QWORD *)(v10 + 328) || (result = *((unsigned int *)a1 + 4), (result & 2) != 0) )
  {
    a1[8] = (__int64)v8;
    a1[9] = a1[4];
    a1[7] = 0LL;
    result = *((unsigned int *)a1 + 11);
    *((_DWORD *)a1 + 20) = result;
    goto LABEL_28;
  }
  a1[7] = 0LL;
  v12 = 0;
  a1[8] = 0LL;
  a1[9] = 0LL;
  *((_WORD *)a1 + 24) = 0;
  *((_DWORD *)a1 + 20) = 0;
  if ( !v8 )
    goto LABEL_28;
  while ( 1 )
  {
    v13 = (__int64 *)*v8;
    v14 = 0;
    *v8 = 0LL;
    if ( *(_DWORD *)(*a1 + 464) )
      break;
    result = v8[1];
    v15 = *(_QWORD *)(result + 8);
    v16 = *(unsigned int *)(result + 16);
    v17 = *(_DWORD *)(v15 + 40);
    if ( v17 >= 0xE && v17 > (unsigned int)v16 )
    {
      if ( v17 - (unsigned int)v16 >= 0xE )
      {
        if ( (*(_BYTE *)(v15 + 10) & 5) != 0 )
        {
          v18 = *(char **)(v15 + 24);
        }
        else
        {
          v30 = (char *)MmMapLockedPages((PMDL)v15, 0);
          v7 = v32;
          v18 = v30;
          v2 = v36;
          v9 = v35;
        }
        v19 = &v18[v16];
        HIBYTE(v37) = v19[13];
        HIBYTE(v38) = v19[12];
        LOBYTE(v38) = HIBYTE(v37);
        LOBYTE(v37) = HIBYTE(v38);
        if ( v38 <= 0x600u )
        {
          if ( v19[14] != -86 || v19[15] != -86 )
            goto LABEL_13;
          v6 = v31;
          v1 = v33;
          if ( v19[16] == 3 )
          {
            v12 = *((_WORD *)v19 + 10);
            v14 = 1;
          }
LABEL_14:
          v5 = v39;
          goto LABEL_15;
        }
        result = 33024LL;
        if ( v38 != 0x8100 )
          goto LABEL_12;
        if ( v17 >= 0x12 && v17 - (unsigned int)v16 >= 0x12 )
        {
          v37 = *((_WORD *)v19 + 8);
LABEL_12:
          v12 = v37;
          v14 = 1;
LABEL_13:
          v6 = v31;
          v1 = v33;
          goto LABEL_14;
        }
        v4 = v34;
        v5 = v39;
      }
      v1 = v33;
    }
    v35 = v8;
    if ( v9 )
    {
      *v9 = v8;
    }
    else
    {
      v4 = v8;
      v34 = v8;
    }
    ++*(_QWORD *)(v1 + 3464);
    v6 = v31;
LABEL_27:
    v8 = v13;
    if ( !v13 )
      goto LABEL_28;
    v9 = v35;
  }
  v12 = *((_WORD *)v8 + 100);
  v14 = 1;
LABEL_15:
  v20 = a1[1];
  if ( !v14 )
    goto LABEL_38;
  if ( v5 == v12 )
  {
    v22 = v6;
    if ( v2 != 1 )
    {
      LODWORD(v25) = 0;
      goto LABEL_24;
    }
    goto LABEL_21;
  }
  v21 = *(_DWORD *)(v20 + 24);
  v22 = 0;
  v39 = v12;
  if ( !v21 )
  {
LABEL_37:
    v2 = 0;
    v31 = 0;
    v36 = 0;
    v6 = 0;
LABEL_38:
    LODWORD(v25) = 0;
    goto LABEL_24;
  }
  v23 = (_WORD *)(v20 + 32);
  while ( v12 != *v23 )
  {
    ++v22;
    v23 += 8;
    if ( v22 >= v21 )
      goto LABEL_37;
  }
  v2 = 1;
  v31 = v22;
  v36 = 1;
  v6 = v22;
LABEL_21:
  if ( LOWORD(a1[5 * v7 + 6]) == v12 )
  {
    LODWORD(v25) = v7;
  }
  else
  {
    v24 = *((_DWORD *)a1 + 172);
    LODWORD(v25) = 1;
    if ( v24 )
    {
      while ( LOWORD(a1[5 * (unsigned int)v25 + 6]) != v12 )
      {
        LODWORD(v25) = v25 + 1;
        if ( (unsigned int)v25 > v24 )
          goto LABEL_23;
      }
      v7 = v25;
      v32 = v25;
    }
    else
    {
LABEL_23:
      v25 = v24 + 1;
      *((_DWORD *)a1 + 172) = v25;
      v26 = 5 * v25;
      LOWORD(a1[v26 + 6]) = v12;
      v32 = v24 + 1;
      v7 = v24 + 1;
      a1[v26 + 7] = *(_QWORD *)(v20 + 16 * (v22 + 1LL) + 24);
      a1[v26 + 8] = 0LL;
    }
  }
LABEL_24:
  v27 = (unsigned int)v25;
  v28 = &a1[5 * (unsigned int)v25];
  if ( v28[8] )
  {
    v5 = v39;
    *(_QWORD *)v28[9] = v8;
    result = 5 * v27;
    ++LODWORD(a1[5 * v27 + 10]);
    v28[9] = (__int64)v8;
    v4 = v34;
    goto LABEL_27;
  }
  v28[8] = (__int64)v8;
  if ( (a1[2] & 0x100) == 0 )
  {
    v5 = v39;
    result = 5 * v27;
    v28[9] = (__int64)v8;
    v4 = v34;
    LODWORD(a1[5 * v27 + 10]) = 1;
    goto LABEL_27;
  }
  v4 = v34;
  a1[5 * (unsigned int)v25 + 9] = 0LL;
  *v8 = (__int64)v13;
  result = *((unsigned int *)a1 + 11);
  LODWORD(a1[5 * (unsigned int)v25 + 10]) = result;
LABEL_28:
  v29 = *((_DWORD *)a1 + 4);
  if ( (v29 & 2) == 0 )
  {
    if ( v4 )
      return ndisReturnNetBufferListsInternal(v1, v4, v29 & 1, 0LL);
  }
  return result;
}
