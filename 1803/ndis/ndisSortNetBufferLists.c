/*
 * XREFs of ndisSortNetBufferLists @ 0x1C0003550
 * Callers:
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C00022E0 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C0002D60 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001FCF0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0068E48 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C006A0F0 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMIndicateSplitNblChain @ 0x1C006AAB0 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     ndisReturnNetBufferListsInternal @ 0x1C006B330 (ndisReturnNetBufferListsInternal.c)
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
  unsigned int v16; // esi
  __int64 v17; // rdi
  unsigned int v18; // ebp
  char *v19; // r8
  char *v20; // r8
  __int64 v21; // rdx
  unsigned int v22; // ecx
  unsigned int v23; // r10d
  _WORD *v24; // rax
  unsigned int v25; // r9d
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 *v28; // rdx
  __int64 *v29; // rcx
  int v30; // r8d
  char *v31; // rax
  bool v32; // cf
  int v33; // [rsp+20h] [rbp-68h]
  unsigned int v34; // [rsp+24h] [rbp-64h]
  __int64 v35; // [rsp+28h] [rbp-60h]
  __int64 *v36; // [rsp+30h] [rbp-58h]
  _QWORD *v37; // [rsp+38h] [rbp-50h]
  char v38; // [rsp+90h] [rbp+8h]
  unsigned __int16 v39; // [rsp+A0h] [rbp+18h]
  unsigned int v40; // [rsp+A8h] [rbp+20h]

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
  v33 = 0;
  v38 = 0;
  v40 = 0;
  v34 = 0;
  v35 = v1;
  v37 = 0LL;
  v36 = 0LL;
  if ( *(_QWORD *)(v10 + 328) || (result = *((unsigned int *)a1 + 4), (result & 2) != 0) )
  {
    a1[8] = (__int64)v8;
    a1[9] = a1[4];
    a1[7] = 0LL;
    result = *((unsigned int *)a1 + 11);
    *((_DWORD *)a1 + 20) = result;
    goto LABEL_29;
  }
  a1[7] = 0LL;
  v12 = 0;
  a1[8] = 0LL;
  a1[9] = 0LL;
  *((_WORD *)a1 + 24) = 0;
  *((_DWORD *)a1 + 20) = 0;
  if ( !v8 )
    goto LABEL_29;
  while ( 1 )
  {
    v13 = (__int64 *)*v8;
    v14 = 0;
    *v8 = 0LL;
    if ( *(_DWORD *)(*a1 + 464) )
    {
      v12 = *((_WORD *)v8 + 100);
      goto LABEL_15;
    }
    result = v8[1];
    v15 = *(_QWORD *)(result + 8);
    v16 = *(_DWORD *)(v15 + 40);
    if ( v16 < 0xE )
      goto LABEL_59;
    v17 = *(unsigned int *)(result + 16);
    if ( v16 <= (unsigned int)v17 )
      goto LABEL_58;
    v18 = v16 - v17;
    if ( v16 - (unsigned int)v17 < 0xE )
      goto LABEL_57;
    if ( (*(_BYTE *)(v15 + 10) & 5) != 0 )
    {
      v19 = *(char **)(v15 + 24);
    }
    else
    {
      v31 = (char *)MmMapLockedPages((PMDL)v15, 0);
      v7 = v34;
      v19 = v31;
      v2 = v38;
      v9 = v37;
    }
    v20 = &v19[v17];
    HIBYTE(v39) = v20[12];
    LOBYTE(v39) = v20[13];
    if ( v39 <= 0x600u )
      break;
    result = 33024LL;
    if ( v39 != 0x8100 )
    {
      v12 = *((_WORD *)v20 + 6);
      goto LABEL_13;
    }
    if ( v16 < 0x12 )
    {
      v5 = v33;
      v4 = v36;
LABEL_57:
      v1 = v35;
LABEL_58:
      v6 = v40;
      goto LABEL_59;
    }
    v6 = v40;
    v32 = v18 < 0x12;
    v1 = v35;
    if ( !v32 )
    {
      v12 = *((_WORD *)v20 + 8);
      goto LABEL_14;
    }
    v5 = v33;
    v4 = v36;
LABEL_59:
    if ( v9 )
    {
      *v9 = v8;
    }
    else
    {
      v4 = v8;
      v36 = v8;
    }
    ++*(_QWORD *)(v1 + 3464);
    v37 = v8;
LABEL_28:
    v8 = v13;
    if ( !v13 )
      goto LABEL_29;
    v9 = v37;
  }
  if ( v20[14] == -86 && v20[15] == -86 && v20[16] == 3 )
  {
    v12 = *((_WORD *)v20 + 10);
LABEL_13:
    v1 = v35;
    v6 = v40;
LABEL_14:
    v5 = v33;
LABEL_15:
    v14 = 1;
    goto LABEL_16;
  }
  v5 = v33;
  v6 = v40;
  v1 = v35;
LABEL_16:
  v21 = a1[1];
  if ( !v14 )
    goto LABEL_39;
  if ( v5 != v12 )
  {
    v22 = *(_DWORD *)(v21 + 24);
    v23 = 0;
    v33 = v12;
    if ( v22 )
    {
      v24 = (_WORD *)(v21 + 32);
      while ( v12 != *v24 )
      {
        ++v23;
        v24 += 8;
        if ( v23 >= v22 )
          goto LABEL_38;
      }
      v2 = 1;
      v40 = v23;
      v38 = 1;
      v6 = v23;
LABEL_22:
      if ( LOWORD(a1[5 * v7 + 6]) == v12 )
      {
        LODWORD(v26) = v7;
      }
      else
      {
        v25 = *((_DWORD *)a1 + 172);
        LODWORD(v26) = 1;
        if ( v25 )
        {
          while ( LOWORD(a1[5 * (unsigned int)v26 + 6]) != v12 )
          {
            LODWORD(v26) = v26 + 1;
            if ( (unsigned int)v26 > v25 )
              goto LABEL_24;
          }
          v7 = v26;
          v34 = v26;
        }
        else
        {
LABEL_24:
          v26 = v25 + 1;
          *((_DWORD *)a1 + 172) = v26;
          v27 = 5 * v26;
          LOWORD(a1[v27 + 6]) = v12;
          v34 = v25 + 1;
          v7 = v25 + 1;
          a1[v27 + 7] = *(_QWORD *)(v21 + 16 * (v23 + 1LL) + 24);
          a1[v27 + 8] = 0LL;
        }
      }
      goto LABEL_25;
    }
LABEL_38:
    v2 = 0;
    v40 = 0;
    v38 = 0;
    v6 = 0;
LABEL_39:
    LODWORD(v26) = 0;
    goto LABEL_25;
  }
  v23 = v6;
  if ( v2 == 1 )
    goto LABEL_22;
  LODWORD(v26) = 0;
LABEL_25:
  v28 = &a1[5 * (unsigned int)v26];
  result = 5 * ((unsigned int)v26 + 2LL);
  v29 = &a1[5 * (unsigned int)v26 + 10];
  if ( v28[8] )
  {
    result = v28[9];
    v5 = v33;
    *(_QWORD *)result = v8;
    ++*(_DWORD *)v29;
    v28[9] = (__int64)v8;
    v4 = v36;
    goto LABEL_28;
  }
  v28[8] = (__int64)v8;
  if ( (a1[2] & 0x100) == 0 )
  {
    v5 = v33;
    v28[9] = (__int64)v8;
    v4 = v36;
    *(_DWORD *)v29 = 1;
    goto LABEL_28;
  }
  v28[9] = 0LL;
  v4 = v36;
  *v8 = (__int64)v13;
  result = *((unsigned int *)a1 + 11);
  *(_DWORD *)v29 = result;
LABEL_29:
  v30 = *((_DWORD *)a1 + 4);
  if ( (v30 & 2) == 0 )
  {
    if ( v4 )
      return ndisReturnNetBufferListsInternal(v1, v4, v30 & 1, 0LL);
  }
  return result;
}
