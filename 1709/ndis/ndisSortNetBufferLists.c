/*
 * XREFs of ndisSortNetBufferLists @ 0x1C0015310
 * Callers:
 *     ndisMTopReceiveNetBufferLists @ 0x1C0014B80 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C00226A0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0068490 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C0069780 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMIndicateSplitNblChain @ 0x1C006A170 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     ndisReturnNetBufferListsInternal @ 0x1C006AA30 (ndisReturnNetBufferListsInternal.c)
 */

__int64 __fastcall ndisSortNetBufferLists(__int64 *a1)
{
  char v1; // r11
  int v3; // edx
  unsigned int v4; // edi
  __int64 v5; // rax
  unsigned int v6; // r10d
  __int64 v7; // rbp
  _QWORD *v8; // r9
  __int64 *v9; // r14
  __int64 *v10; // rsi
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
  __int64 v21; // r8
  unsigned int v22; // r9d
  __int64 v23; // rdx
  bool v24; // zf
  __int64 *v25; // rdx
  unsigned int v26; // ecx
  _WORD *v27; // rax
  unsigned int v28; // r10d
  __int64 v29; // rcx
  int v30; // r8d
  char *v31; // rax
  bool v32; // cf
  __int64 v33; // rcx
  int v34; // [rsp+20h] [rbp-68h]
  unsigned int v35; // [rsp+24h] [rbp-64h]
  __int64 v36; // [rsp+28h] [rbp-60h]
  __int64 *v37; // [rsp+30h] [rbp-58h]
  _QWORD *v38; // [rsp+38h] [rbp-50h]
  char v39; // [rsp+90h] [rbp+8h]
  unsigned __int16 v40; // [rsp+A0h] [rbp+18h]
  unsigned int v41; // [rsp+A8h] [rbp+20h]

  v1 = 0;
  v3 = 0;
  v4 = 0;
  v5 = a1[1];
  v6 = 0;
  v7 = *a1;
  v8 = 0LL;
  v9 = (__int64 *)a1[3];
  v10 = 0LL;
  *((_DWORD *)a1 + 172) = 0;
  v34 = 0;
  v39 = 0;
  v41 = 0;
  v35 = 0;
  v36 = v7;
  v38 = 0LL;
  v37 = 0LL;
  if ( *(_QWORD *)(v5 + 328) || (result = *((unsigned int *)a1 + 4), (result & 2) != 0) )
  {
    a1[8] = (__int64)v9;
    a1[9] = a1[4];
    a1[7] = 0LL;
    result = *((unsigned int *)a1 + 11);
    *((_DWORD *)a1 + 20) = result;
    goto LABEL_34;
  }
  a1[7] = 0LL;
  v12 = 0;
  a1[8] = 0LL;
  a1[9] = 0LL;
  *((_WORD *)a1 + 24) = 0;
  *((_DWORD *)a1 + 20) = 0;
  if ( !v9 )
    goto LABEL_34;
  while ( 1 )
  {
    v13 = (__int64 *)*v9;
    v14 = 0;
    *v9 = 0LL;
    if ( *(_DWORD *)(*a1 + 464) )
    {
      v12 = *((_WORD *)v9 + 100);
      goto LABEL_15;
    }
    result = v9[1];
    v15 = *(_QWORD *)(result + 8);
    v16 = *(_DWORD *)(v15 + 40);
    if ( v16 < 0xE )
      goto LABEL_56;
    v17 = *(unsigned int *)(result + 16);
    if ( v16 <= (unsigned int)v17 )
      goto LABEL_55;
    v18 = v16 - v17;
    if ( v16 - (unsigned int)v17 < 0xE )
    {
LABEL_54:
      v7 = v36;
LABEL_55:
      v4 = v41;
      goto LABEL_56;
    }
    if ( (*(_BYTE *)(v15 + 10) & 5) != 0 )
    {
      v19 = *(char **)(v15 + 24);
    }
    else
    {
      v31 = (char *)MmMapLockedPages((PMDL)v15, 0);
      v6 = v35;
      v19 = v31;
      v1 = v39;
      v8 = v38;
    }
    v20 = &v19[v17];
    HIBYTE(v40) = v20[12];
    LOBYTE(v40) = v20[13];
    if ( v40 <= 0x600u )
      break;
    result = 33024LL;
    if ( v40 != 0x8100 )
    {
      v12 = *((_WORD *)v20 + 6);
      goto LABEL_13;
    }
    v3 = v34;
    if ( v16 < 0x12 )
      goto LABEL_54;
    v4 = v41;
    v32 = v18 < 0x12;
    v7 = v36;
    if ( !v32 )
    {
      v12 = *((_WORD *)v20 + 8);
      goto LABEL_14;
    }
LABEL_56:
    if ( v8 )
    {
      v10 = v37;
      *v8 = v9;
    }
    else
    {
      v10 = v9;
      v37 = v9;
    }
    ++*(_QWORD *)(v7 + 3464);
    v38 = v9;
LABEL_23:
    v9 = v13;
    if ( !v13 )
      goto LABEL_34;
    v8 = v38;
  }
  if ( v20[14] == -86 && v20[15] == -86 && v20[16] == 3 )
  {
    v12 = *((_WORD *)v20 + 10);
LABEL_13:
    v7 = v36;
    v3 = v34;
    v4 = v41;
LABEL_14:
    v10 = v37;
LABEL_15:
    v14 = 1;
    goto LABEL_16;
  }
  v4 = v41;
  v3 = v34;
  v10 = v37;
  v7 = v36;
LABEL_16:
  v21 = a1[1];
  if ( !v14 )
    goto LABEL_39;
  if ( v3 == v12 )
  {
    v22 = v4;
    if ( v1 == 1 )
      goto LABEL_19;
LABEL_39:
    LODWORD(v23) = 0;
  }
  else
  {
    v22 = 0;
    v34 = v12;
    v26 = *(_DWORD *)(v21 + 24);
    if ( !v26 )
    {
LABEL_38:
      v1 = 0;
      v39 = 0;
      v4 = 0;
      v41 = 0;
      goto LABEL_39;
    }
    v27 = (_WORD *)(v21 + 32);
    while ( v12 != *v27 )
    {
      ++v22;
      v27 += 8;
      if ( v22 >= v26 )
        goto LABEL_38;
    }
    v1 = 1;
    v41 = v22;
    v39 = 1;
    v4 = v22;
LABEL_19:
    if ( LOWORD(a1[5 * v6 + 6]) == v12 )
    {
      LODWORD(v23) = v6;
    }
    else
    {
      v28 = *((_DWORD *)a1 + 172);
      LODWORD(v23) = 1;
      if ( v28 )
      {
        while ( LOWORD(a1[5 * (unsigned int)v23 + 6]) != v12 )
        {
          LODWORD(v23) = v23 + 1;
          if ( (unsigned int)v23 > v28 )
            goto LABEL_30;
        }
        v6 = v23;
        v35 = v23;
      }
      else
      {
LABEL_30:
        v23 = v28 + 1;
        *((_DWORD *)a1 + 172) = v23;
        v29 = 5 * v23;
        LOWORD(a1[v29 + 6]) = v12;
        v35 = v28 + 1;
        v6 = v28 + 1;
        a1[v29 + 7] = *(_QWORD *)(v21 + 16 * (v22 + 1LL) + 24);
        a1[v29 + 8] = 0LL;
      }
    }
  }
  result = (unsigned int)v23;
  v24 = a1[5 * (unsigned int)v23 + 8] == 0;
  v25 = &a1[5 * (unsigned int)v23];
  if ( !v24 )
  {
    *(_QWORD *)v25[9] = v9;
    ++LODWORD(a1[5 * result + 10]);
    v25[9] = (__int64)v9;
    v3 = v34;
    goto LABEL_23;
  }
  v25[8] = (__int64)v9;
  if ( (a1[2] & 0x100) == 0 )
  {
    v25[9] = (__int64)v9;
    v3 = v34;
    LODWORD(a1[5 * result + 10]) = 1;
    goto LABEL_23;
  }
  a1[5 * result + 9] = 0LL;
  v33 = 5 * result;
  *v9 = (__int64)v13;
  result = *((unsigned int *)a1 + 11);
  LODWORD(a1[v33 + 10]) = result;
LABEL_34:
  v30 = *((_DWORD *)a1 + 4);
  if ( (v30 & 2) == 0 )
  {
    if ( v10 )
      return ndisReturnNetBufferListsInternal(v7, v10, v30 & 1, 0LL);
  }
  return result;
}
