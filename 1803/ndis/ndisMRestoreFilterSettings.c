/*
 * XREFs of ndisMRestoreFilterSettings @ 0x1C00461E8
 * Callers:
 *     ndisMResetCompleteStage1 @ 0x1C0061418 (ndisMResetCompleteStage1.c)
 *     ndisMKillOpen @ 0x1C0102BA4 (ndisMKillOpen.c)
 * Callees:
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001B848 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisMergeEncapsulations @ 0x1C0021B1C (ndisMergeEncapsulations.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     ndisMAllocateRequest @ 0x1C00455CC (ndisMAllocateRequest.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C00484B0 (ndisQueueRestoreRequestsOnTop.c)
 */

__int64 __fastcall ndisMRestoreFilterSettings(__int64 a1, _QWORD *a2, unsigned __int8 a3)
{
  _QWORD *v3; // r15
  int v4; // r14d
  unsigned int v6; // r12d
  unsigned int v8; // ebx
  bool v9; // al
  _QWORD *v10; // rax
  __int64 ***v11; // rbx
  int v12; // ecx
  _QWORD *v13; // rax
  int v14; // eax
  _QWORD *v15; // rax
  _QWORD *v16; // rsi
  __int64 ***v17; // rbx
  int v18; // ecx
  _QWORD *v19; // rax
  __int64 v20; // r11
  __int64 v21; // rbx
  char v22; // si
  __int64 v23; // rcx
  int v24; // eax
  _QWORD *v25; // rax
  _QWORD *v26; // rsi
  __int64 ***v27; // rbx
  int v28; // ecx
  _QWORD *v29; // rax
  int v30; // eax
  __int64 *v31; // rbx
  unsigned int v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // eax
  unsigned int v35; // ecx
  _QWORD *v36; // rax
  _QWORD *v37; // r14
  __int64 ***v38; // rsi
  _QWORD *v39; // rax
  __int64 *v40; // rsi
  unsigned int v41; // eax
  unsigned int v42; // ecx
  _QWORD *v43; // rax
  __int64 ***v44; // rbx
  int v45; // ecx
  _QWORD *v46; // rax
  __int64 i; // rcx
  _QWORD *v48; // rax
  _QWORD *v49; // rsi
  __int64 ***v50; // rbx
  int v51; // ecx
  _QWORD *v52; // rax
  __int64 *v53; // rcx
  __int64 *v54; // rax
  unsigned __int8 v56; // [rsp+30h] [rbp-50h]
  __int64 *v57; // [rsp+38h] [rbp-48h] BYREF
  __int64 **v58; // [rsp+40h] [rbp-40h]
  int v59; // [rsp+48h] [rbp-38h] BYREF
  int v60; // [rsp+4Ch] [rbp-34h] BYREF
  __int128 v61; // [rsp+50h] [rbp-30h] BYREF
  __int64 v62; // [rsp+60h] [rbp-20h]
  int v63; // [rsp+68h] [rbp-18h]

  v3 = 0LL;
  v56 = a3;
  v4 = 0;
  v6 = 0;
  v8 = -1073741823;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    WPP_SF_qqd(0x66u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a1, a2, a3);
    a3 = v56;
  }
  v9 = !a2 && !a3;
  v58 = &v57;
  v57 = (__int64 *)&v57;
  if ( !v9 && !a3 )
  {
LABEL_52:
    v30 = *(_DWORD *)(a1 + 1292) & 5;
    v59 = v30;
    if ( a2 )
    {
      v31 = (__int64 *)a2[62];
      if ( v31 )
      {
        while ( 1 )
        {
          if ( (_QWORD *)v31[3] == a2 )
          {
            v32 = *((_DWORD *)v31 + 14);
            v33 = v32 + 24;
            if ( v32 + 24 < v32 )
              goto LABEL_84;
            v34 = *((_DWORD *)v31 + 16);
            v35 = v34 + v33;
            if ( v35 < v34 )
              goto LABEL_84;
            v36 = ndisMAllocateRequest(a2, -50265852, 1, v31 + 6, v35);
            v37 = v36;
            if ( !v36 )
              goto LABEL_84;
            v38 = (__int64 ***)(v36 + 9);
            *(_BYTE *)v36 = -106;
            *((_BYTE *)v36 + 1) = 1;
            *((_WORD *)v36 + 1) = 248;
            *((_DWORD *)v36 + 22) |= 2u;
            v36[13] = a2;
            ndisMReferenceOpen((__int64)a2, 6u);
            *((_DWORD *)v38 + 4) = (_DWORD)v38[2] & 0xFFFBFDFF | 0x200;
            v39 = v58;
            if ( *v58 != (__int64 *)&v57 )
              __fastfail(3u);
            v38[1] = v58;
            *v38 = &v57;
            ++v6;
            *v39 = v38;
            v3 = v37;
            v58 = (__int64 **)v38;
          }
          v31 = (__int64 *)*v31;
          if ( !v31 )
            goto LABEL_69;
        }
      }
    }
    else
    {
      v40 = *(__int64 **)(a1 + 960);
      if ( v40 )
      {
        while ( *((_DWORD *)v40 + 14) < 0xFFFFFFE8 )
        {
          v41 = *((_DWORD *)v40 + 16);
          v42 = v41 + *((_DWORD *)v40 + 14) + 24;
          if ( v42 < v41 )
            break;
          v43 = ndisMAllocateRequest(0LL, -50265853, 1, v40 + 6, v42);
          if ( !v43 )
            break;
          v44 = (__int64 ***)(v43 + 9);
          *(_BYTE *)v43 = -106;
          *((_BYTE *)v43 + 1) = 1;
          *((_WORD *)v43 + 1) = 248;
          v45 = *((_DWORD *)v43 + 22) | 2;
          v43[13] = 0LL;
          *((_DWORD *)v43 + 22) = v45;
          v43[13] = &ndisIntReqRestore;
          v3 = v43;
          *((_DWORD *)v43 + 22) = v45 | 0xC0000;
          v46 = v58;
          if ( *v58 != (__int64 *)&v57 )
            __fastfail(3u);
          v44[1] = v58;
          *v44 = &v57;
          ++v6;
          *v46 = v44;
          v58 = (__int64 **)v44;
          v40 = (__int64 *)*v40;
          if ( !v40 )
          {
LABEL_69:
            v30 = v59;
            goto LABEL_70;
          }
        }
        goto LABEL_84;
      }
    }
LABEL_70:
    for ( i = *(_QWORD *)(a1 + 56); i; i = *(_QWORD *)(i + 392) )
    {
      if ( a2 != (_QWORD *)i )
      {
        v30 |= *(_DWORD *)(i + 304);
        v59 = v30;
      }
    }
    if ( v30 != *(_DWORD *)(a1 + 1292) )
    {
      v48 = ndisMAllocateRequest(a2, -50265850, 1, &v59, 4u);
      v49 = v48;
      if ( v48 )
      {
        v50 = (__int64 ***)(v48 + 9);
        *(_BYTE *)v48 = -106;
        *((_BYTE *)v48 + 1) = 1;
        *((_WORD *)v48 + 1) = 248;
        v51 = *((_DWORD *)v48 + 22) | 2;
        v48[13] = a2;
        *((_DWORD *)v48 + 22) = v51;
        if ( a2 )
        {
          ndisMReferenceOpen((__int64)a2, 6u);
          *((_DWORD *)v50 + 4) |= 0x200u;
          v51 = *((_DWORD *)v50 + 4);
        }
        else
        {
          v48[13] = &ndisIntReqRestore;
        }
        v3 = v49;
        *((_DWORD *)v50 + 4) = v51 | 0x80000;
        v52 = v58;
        if ( *v58 != (__int64 *)&v57 )
          __fastfail(3u);
        v50[1] = v58;
        *v50 = &v57;
        ++v6;
        *v52 = v50;
        v58 = (__int64 **)v50;
      }
    }
    goto LABEL_84;
  }
  if ( !*(_DWORD *)(a1 + 464) )
  {
    v60 = -1;
    v10 = ndisMAllocateRequest(a2, 65806, 1, &v60, 4u);
    v3 = v10;
    if ( !v10 )
      goto LABEL_95;
    v11 = (__int64 ***)(v10 + 9);
    *(_BYTE *)v10 = -106;
    *((_BYTE *)v10 + 1) = 1;
    *((_WORD *)v10 + 1) = 248;
    v12 = *((_DWORD *)v10 + 22) | 2;
    v10[13] = a2;
    *((_DWORD *)v10 + 22) = v12;
    if ( a2 )
    {
      ndisMReferenceOpen((__int64)a2, 6u);
      *((_DWORD *)v11 + 4) |= 0x200u;
      v12 = *((_DWORD *)v11 + 4);
    }
    else
    {
      v10[13] = &ndisIntReqRestore;
    }
    *((_DWORD *)v11 + 4) = v12 | 0x80000;
    v13 = v58;
    if ( *v58 != (__int64 *)&v57 )
      __fastfail(3u);
    v11[1] = v58;
    *v11 = &v57;
    v6 = 1;
    *v13 = v11;
    v14 = *(_DWORD *)(a1 + 464);
    v58 = (__int64 **)v11;
    if ( !v14 )
    {
      v15 = ndisMAllocateRequest(a2, 16843011, 1, 0LL, 0);
      v16 = v15;
      if ( !v15 )
        goto LABEL_84;
      v17 = (__int64 ***)(v15 + 9);
      *(_BYTE *)v15 = -106;
      *((_BYTE *)v15 + 1) = 1;
      *((_WORD *)v15 + 1) = 248;
      v18 = *((_DWORD *)v15 + 22) | 2;
      v15[13] = a2;
      *((_DWORD *)v15 + 22) = v18;
      if ( a2 )
      {
        ndisMReferenceOpen((__int64)a2, 6u);
        *((_DWORD *)v17 + 4) |= 0x200u;
        v18 = *((_DWORD *)v17 + 4);
      }
      else
      {
        v15[13] = &ndisIntReqRestore;
      }
      v3 = v16;
      *((_DWORD *)v17 + 4) = v18 | 0x80000;
      v19 = v58;
      if ( *v58 != (__int64 *)&v57 )
        __fastfail(3u);
      v17[1] = v58;
      *v17 = &v57;
      v6 = 2;
      *v19 = v17;
      v58 = (__int64 **)v17;
    }
  }
  v20 = *(_QWORD *)(a1 + 4120);
  if ( !v20 || *(_BYTE *)(v20 + 1) != 1 )
    goto LABEL_52;
  v21 = *(_QWORD *)(a1 + 56);
  v61 = 0uLL;
  v22 = 1;
  v62 = 0LL;
  v63 = 0;
  if ( !v21 )
    goto LABEL_39;
  while ( 1 )
  {
    v23 = *(_QWORD *)(v21 + 792);
    if ( !v23 || !*(_BYTE *)(v23 + 28) )
      goto LABEL_35;
    if ( !v22 )
    {
      v4 = ndisMergeEncapsulations(v23, &v61);
      if ( v4 )
        goto LABEL_84;
      goto LABEL_35;
    }
    if ( *(_BYTE *)v23 != 0xA8 || !*(_BYTE *)(v23 + 1) || *(_WORD *)(v23 + 2) < 0x1Cu )
      break;
    v22 = 0;
    v61 = *(_OWORD *)v23;
    v62 = *(_QWORD *)(v23 + 16);
    v63 = *(_DWORD *)(v23 + 24);
LABEL_35:
    v21 = *(_QWORD *)(v21 + 392);
    if ( !v21 )
      goto LABEL_38;
  }
  v4 = -1073741637;
LABEL_38:
  if ( !v4 )
  {
LABEL_39:
    if ( (_BYTE)v61 == 0xA8 )
      goto LABEL_52;
    LODWORD(v61) = 1835432;
    if ( *(_BYTE *)(v20 + 760) != 0xA8
      || !*(_BYTE *)(v20 + 761)
      || *(_WORD *)(v20 + 762) < 0x1Cu
      || *(_DWORD *)(v20 + 764) == 2 && *(_DWORD *)(v20 + 776) == 2 )
    {
      goto LABEL_52;
    }
    *(_QWORD *)((char *)&v61 + 4) = *(_QWORD *)(v20 + 764);
    HIDWORD(v61) = *(_DWORD *)(v20 + 772);
    v62 = *(_QWORD *)(v20 + 776);
    v24 = *(_DWORD *)(v20 + 784);
    DWORD1(v61) = 2;
    LODWORD(v62) = 2;
    v63 = v24;
    v25 = ndisMAllocateRequest(a2, 16843018, 1, &v61, 0x1Cu);
    v26 = v25;
    if ( v25 )
    {
      v27 = (__int64 ***)(v25 + 9);
      *(_BYTE *)v25 = -106;
      *((_BYTE *)v25 + 1) = 1;
      *((_WORD *)v25 + 1) = 248;
      v28 = *((_DWORD *)v25 + 22) | 2;
      v25[13] = a2;
      *((_DWORD *)v25 + 22) = v28;
      if ( a2 )
      {
        ndisMReferenceOpen((__int64)a2, 6u);
        *((_DWORD *)v27 + 4) |= 0x200u;
        v28 = *((_DWORD *)v27 + 4);
      }
      else
      {
        v25[13] = &ndisIntReqRestore;
      }
      v3 = v26;
      *((_DWORD *)v27 + 4) = v28 | 0x80000;
      v29 = v58;
      if ( *v58 != (__int64 *)&v57 )
        __fastfail(3u);
      v27[1] = v58;
      *v27 = &v57;
      ++v6;
      *v29 = v27;
      v58 = (__int64 **)v27;
      goto LABEL_52;
    }
  }
LABEL_84:
  if ( v3 )
  {
    if ( v56 )
    {
      *((_DWORD *)v3 + 22) |= 0x100u;
      *(_DWORD *)(a1 + 120) |= 0x1000000u;
    }
    if ( (unsigned int)ndisQueueRestoreRequestsOnTop(a1, &v57, v6) != 259 )
    {
      while ( 1 )
      {
        v53 = v57;
        if ( v57 == (__int64 *)&v57 )
          break;
        if ( (__int64 **)v57[1] != &v57 || (v54 = (__int64 *)*v57, *(__int64 **)(*v57 + 8) != v57) )
          __fastfail(3u);
        v57 = (__int64 *)*v57;
        v54[1] = (__int64)&v57;
        ExFreePoolWithTag(v53 - 9, 0);
      }
      goto LABEL_94;
    }
    v8 = 0;
  }
  else
  {
LABEL_94:
    v8 = -1073741823;
  }
LABEL_95:
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qD(0x67u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a1, v8);
  return v8;
}
