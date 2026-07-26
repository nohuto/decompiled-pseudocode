/*
 * XREFs of ndisMRestoreFilterSettings @ 0x1C0047C1C
 * Callers:
 *     ndisMResetCompleteStage1 @ 0x1C00609C0 (ndisMResetCompleteStage1.c)
 *     ndisMKillOpen @ 0x1C00FB908 (ndisMKillOpen.c)
 * Callees:
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001AE78 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisMergeEncapsulations @ 0x1C001FD68 (ndisMergeEncapsulations.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 *     ndisMAllocateRequest @ 0x1C00471FC (ndisMAllocateRequest.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C0049E40 (ndisQueueRestoreRequestsOnTop.c)
 */

__int64 __fastcall ndisMRestoreFilterSettings(__int64 a1, _QWORD *a2, unsigned __int8 a3)
{
  _DWORD *v3; // r15
  int v4; // r14d
  unsigned int v6; // r12d
  bool v8; // al
  _DWORD *v9; // rax
  _DWORD *v10; // rbx
  __int64 **v11; // rax
  _DWORD *v12; // rax
  _DWORD *v13; // rsi
  _DWORD *v14; // rbx
  __int64 **v15; // rax
  __int64 v16; // r10
  __int64 v17; // r11
  char v18; // bl
  __int64 v19; // rcx
  int v20; // eax
  _DWORD *v21; // rax
  _DWORD *v22; // rsi
  _DWORD *v23; // rbx
  __int64 **v24; // rax
  int v25; // eax
  __int64 *v26; // rbx
  unsigned int v27; // eax
  unsigned int v28; // ecx
  _DWORD *v29; // rax
  _DWORD *v30; // r14
  _DWORD *v31; // rsi
  __int64 **v32; // rax
  __int64 i; // rcx
  __int64 *v34; // rsi
  unsigned int v35; // ecx
  _DWORD *v36; // rax
  _DWORD *v37; // r14
  __int64 ***v38; // rbx
  _QWORD *v39; // rax
  _DWORD *v40; // rax
  _DWORD *v41; // rsi
  _DWORD *v42; // rbx
  __int64 **v43; // rax
  __int64 *v44; // rcx
  __int64 *v45; // rax
  unsigned int v46; // ebx
  unsigned __int8 v48; // [rsp+30h] [rbp-50h]
  __int64 *v49; // [rsp+38h] [rbp-48h] BYREF
  __int64 **v50; // [rsp+40h] [rbp-40h]
  int v51; // [rsp+48h] [rbp-38h] BYREF
  int v52; // [rsp+4Ch] [rbp-34h] BYREF
  __int128 v53; // [rsp+50h] [rbp-30h] BYREF
  __int64 v54; // [rsp+60h] [rbp-20h]
  int v55; // [rsp+68h] [rbp-18h]

  v3 = 0LL;
  v48 = a3;
  v4 = 0;
  v6 = 0;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
  {
    WPP_SF_qqd(0x66u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, a2, a3);
    a3 = v48;
  }
  v8 = !a2 && !a3;
  v50 = &v49;
  v49 = (__int64 *)&v49;
  if ( !v8 && !a3 )
  {
LABEL_53:
    v25 = *(_DWORD *)(a1 + 1292) & 5;
    v51 = v25;
    if ( a2 )
    {
      v26 = (__int64 *)a2[62];
      if ( v26 )
      {
        while ( 1 )
        {
          if ( (_QWORD *)v26[3] == a2 )
          {
            v27 = *((_DWORD *)v26 + 14);
            if ( v27 + 24 < v27 )
              goto LABEL_85;
            v28 = *((_DWORD *)v26 + 16) + v27 + 24;
            if ( v28 < *((_DWORD *)v26 + 16) )
              goto LABEL_85;
            v29 = ndisMAllocateRequest(a2, -50265852, 1, v26 + 6, v28);
            v30 = v29;
            if ( !v29 )
              goto LABEL_85;
            v31 = v29 + 18;
            *(_BYTE *)v29 = -106;
            *((_BYTE *)v29 + 1) = 1;
            *((_WORD *)v29 + 1) = 248;
            v29[22] |= 2u;
            *((_QWORD *)v29 + 13) = a2;
            ndisMReferenceOpen((__int64)a2);
            v31[4] |= 0x200u;
            v31[4] &= ~0x40000u;
            v32 = v50;
            if ( *v50 != (__int64 *)&v49 )
              __fastfail(3u);
            *((_QWORD *)v31 + 1) = v50;
            *(_QWORD *)v31 = &v49;
            ++v6;
            *v32 = (__int64 *)v31;
            v3 = v30;
            v50 = (__int64 **)v31;
          }
          v26 = (__int64 *)*v26;
          if ( !v26 )
            goto LABEL_62;
        }
      }
    }
    else
    {
      v34 = *(__int64 **)(a1 + 960);
      if ( v34 )
      {
        while ( *((_DWORD *)v34 + 14) < 0xFFFFFFE8 )
        {
          v35 = *((_DWORD *)v34 + 16) + *((_DWORD *)v34 + 14) + 24;
          if ( v35 < *((_DWORD *)v34 + 16) )
            break;
          v36 = ndisMAllocateRequest(0LL, -50265853, 1, v34 + 6, v35);
          v37 = v36;
          if ( !v36 )
            break;
          v38 = (__int64 ***)(v36 + 18);
          *(_BYTE *)v36 = -106;
          *((_BYTE *)v36 + 1) = 1;
          *((_WORD *)v36 + 1) = 248;
          v36[22] |= 2u;
          *((_QWORD *)v36 + 13) = 0LL;
          *((_QWORD *)v36 + 13) = &ndisIntReqRestore;
          v36[22] |= 0xC0000u;
          v39 = v50;
          v3 = v37;
          if ( *v50 != (__int64 *)&v49 )
            __fastfail(3u);
          v38[1] = v50;
          *v38 = &v49;
          ++v6;
          *v39 = v38;
          v50 = (__int64 **)v38;
          v34 = (__int64 *)*v34;
          if ( !v34 )
          {
LABEL_62:
            v25 = v51;
            goto LABEL_63;
          }
        }
        goto LABEL_85;
      }
    }
LABEL_63:
    for ( i = *(_QWORD *)(a1 + 56); i; i = *(_QWORD *)(i + 392) )
    {
      if ( a2 != (_QWORD *)i )
      {
        v25 |= *(_DWORD *)(i + 304);
        v51 = v25;
      }
    }
    if ( v25 != *(_DWORD *)(a1 + 1292) )
    {
      v40 = ndisMAllocateRequest(a2, -50265850, 1, &v51, 4u);
      v41 = v40;
      if ( v40 )
      {
        v42 = v40 + 18;
        *(_BYTE *)v40 = -106;
        *((_BYTE *)v40 + 1) = 1;
        *((_WORD *)v40 + 1) = 248;
        v40[22] |= 2u;
        *((_QWORD *)v40 + 13) = a2;
        if ( a2 )
        {
          ndisMReferenceOpen((__int64)a2);
          v42[4] |= 0x200u;
        }
        else
        {
          *((_QWORD *)v40 + 13) = &ndisIntReqRestore;
        }
        v42[4] |= 0x80000u;
        v43 = v50;
        v3 = v41;
        if ( *v50 != (__int64 *)&v49 )
          __fastfail(3u);
        *((_QWORD *)v42 + 1) = v50;
        *(_QWORD *)v42 = &v49;
        ++v6;
        *v43 = (__int64 *)v42;
        v50 = (__int64 **)v42;
      }
    }
    goto LABEL_85;
  }
  if ( !*(_DWORD *)(a1 + 464) )
  {
    v52 = -1;
    v9 = ndisMAllocateRequest(a2, 65806, 1, &v52, 4u);
    v3 = v9;
    if ( !v9 )
      goto LABEL_95;
    v10 = v9 + 18;
    *(_BYTE *)v9 = -106;
    *((_BYTE *)v9 + 1) = 1;
    *((_WORD *)v9 + 1) = 248;
    v9[22] |= 2u;
    *((_QWORD *)v9 + 13) = a2;
    if ( a2 )
    {
      ndisMReferenceOpen((__int64)a2);
      v10[4] |= 0x200u;
    }
    else
    {
      *((_QWORD *)v9 + 13) = &ndisIntReqRestore;
    }
    v10[4] |= 0x80000u;
    v11 = v50;
    if ( *v50 != (__int64 *)&v49 )
      __fastfail(3u);
    *((_QWORD *)v10 + 1) = v50;
    *(_QWORD *)v10 = &v49;
    v6 = 1;
    *v11 = (__int64 *)v10;
    v50 = (__int64 **)v10;
  }
  if ( !*(_DWORD *)(a1 + 464) )
  {
    v12 = ndisMAllocateRequest(a2, 16843011, 1, 0LL, 0);
    v13 = v12;
    if ( !v12 )
      goto LABEL_85;
    v14 = v12 + 18;
    *(_BYTE *)v12 = -106;
    *((_BYTE *)v12 + 1) = 1;
    *((_WORD *)v12 + 1) = 248;
    v12[22] |= 2u;
    *((_QWORD *)v12 + 13) = a2;
    if ( a2 )
    {
      ndisMReferenceOpen((__int64)a2);
      v14[4] |= 0x200u;
    }
    else
    {
      *((_QWORD *)v12 + 13) = &ndisIntReqRestore;
    }
    v14[4] |= 0x80000u;
    v15 = v50;
    v3 = v13;
    if ( *v50 != (__int64 *)&v49 )
      __fastfail(3u);
    *((_QWORD *)v14 + 1) = v50;
    *(_QWORD *)v14 = &v49;
    ++v6;
    *v15 = (__int64 *)v14;
    v50 = (__int64 **)v14;
  }
  v16 = *(_QWORD *)(a1 + 4120);
  if ( !v16 || *(_BYTE *)(v16 + 1) != 1 )
    goto LABEL_53;
  v17 = *(_QWORD *)(a1 + 56);
  v53 = 0uLL;
  v18 = 1;
  v54 = 0LL;
  v55 = 0;
  if ( !v17 )
    goto LABEL_40;
  while ( 1 )
  {
    v19 = *(_QWORD *)(v17 + 792);
    if ( !v19 || !*(_BYTE *)(v19 + 28) )
      goto LABEL_36;
    if ( !v18 )
    {
      v4 = ndisMergeEncapsulations(v19, &v53);
      if ( v4 )
        goto LABEL_85;
      goto LABEL_36;
    }
    if ( *(_BYTE *)v19 != 0xA8 || !*(_BYTE *)(v19 + 1) || *(_WORD *)(v19 + 2) < 0x1Cu )
      break;
    v18 = 0;
    v53 = *(_OWORD *)v19;
    v54 = *(_QWORD *)(v19 + 16);
    v55 = *(_DWORD *)(v19 + 24);
LABEL_36:
    v17 = *(_QWORD *)(v17 + 392);
    if ( !v17 )
      goto LABEL_39;
  }
  v4 = -1073741637;
LABEL_39:
  if ( !v4 )
  {
LABEL_40:
    if ( (_BYTE)v53 == 0xA8 )
      goto LABEL_53;
    LODWORD(v53) = 1835432;
    if ( *(_BYTE *)(v16 + 760) != 0xA8
      || !*(_BYTE *)(v16 + 761)
      || *(_WORD *)(v16 + 762) < 0x1Cu
      || *(_DWORD *)(v16 + 764) == 2 && *(_DWORD *)(v16 + 776) == 2 )
    {
      goto LABEL_53;
    }
    *(_QWORD *)((char *)&v53 + 4) = *(_QWORD *)(v16 + 764);
    HIDWORD(v53) = *(_DWORD *)(v16 + 772);
    v54 = *(_QWORD *)(v16 + 776);
    v20 = *(_DWORD *)(v16 + 784);
    DWORD1(v53) = 2;
    LODWORD(v54) = 2;
    v55 = v20;
    v21 = ndisMAllocateRequest(a2, 16843018, 1, &v53, 0x1Cu);
    v22 = v21;
    if ( v21 )
    {
      v23 = v21 + 18;
      *(_BYTE *)v21 = -106;
      *((_BYTE *)v21 + 1) = 1;
      *((_WORD *)v21 + 1) = 248;
      v21[22] |= 2u;
      *((_QWORD *)v21 + 13) = a2;
      if ( a2 )
      {
        ndisMReferenceOpen((__int64)a2);
        v23[4] |= 0x200u;
      }
      else
      {
        *((_QWORD *)v21 + 13) = &ndisIntReqRestore;
      }
      v23[4] |= 0x80000u;
      v24 = v50;
      v3 = v22;
      if ( *v50 != (__int64 *)&v49 )
        __fastfail(3u);
      *((_QWORD *)v23 + 1) = v50;
      *(_QWORD *)v23 = &v49;
      ++v6;
      *v24 = (__int64 *)v23;
      v50 = (__int64 **)v23;
      goto LABEL_53;
    }
  }
LABEL_85:
  if ( v3 )
  {
    if ( v48 )
    {
      v3[22] |= 0x100u;
      *(_DWORD *)(a1 + 120) |= 0x1000000u;
    }
    if ( (unsigned int)ndisQueueRestoreRequestsOnTop(a1, &v49, v6) != 259 )
    {
      while ( 1 )
      {
        v44 = v49;
        if ( v49 == (__int64 *)&v49 )
          break;
        v45 = (__int64 *)*v49;
        if ( (__int64 **)v49[1] != &v49 || (__int64 *)v45[1] != v49 )
          __fastfail(3u);
        v49 = (__int64 *)*v49;
        v45[1] = (__int64)&v49;
        ExFreePoolWithTag(v44 - 9, 0);
      }
      goto LABEL_95;
    }
    v46 = 0;
  }
  else
  {
LABEL_95:
    v46 = -1073741823;
  }
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qD(0x67u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, v46);
  return v46;
}
