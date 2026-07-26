/*
 * XREFs of ndisMRestoreFilterSettings @ 0x1C004502C
 * Callers:
 *     ndisMResetCompleteStage1 @ 0x1C0060A00 (ndisMResetCompleteStage1.c)
 *     ndisMKillOpen @ 0x1C00FF208 (ndisMKillOpen.c)
 * Callees:
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0010048 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisMergeEncapsulations @ 0x1C001C464 (ndisMergeEncapsulations.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisMAllocateRequest @ 0x1C00443FC (ndisMAllocateRequest.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C0047228 (ndisQueueRestoreRequestsOnTop.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisMRestoreFilterSettings(__int64 a1, _QWORD *a2, unsigned __int8 a3)
{
  _DWORD *v3; // r14
  int v4; // r15d
  unsigned int v6; // r12d
  unsigned int v8; // ebx
  bool v9; // al
  _DWORD *v10; // rax
  _DWORD *v11; // rbx
  __int64 **v12; // rax
  _DWORD *v13; // rax
  _DWORD *v14; // rsi
  _DWORD *v15; // rbx
  __int64 **v16; // rax
  __int64 v17; // r10
  __int64 v18; // r11
  char v19; // bl
  __int64 v20; // rcx
  int v21; // eax
  _DWORD *v22; // rax
  _DWORD *v23; // rsi
  _DWORD *v24; // rbx
  __int64 **v25; // rax
  int v26; // eax
  __int64 *v27; // rbx
  unsigned int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // eax
  unsigned int v31; // ecx
  _DWORD *v32; // rax
  _DWORD *v33; // r15
  _DWORD *v34; // rsi
  __int64 **v35; // rax
  __int64 *v36; // rsi
  unsigned int v37; // eax
  unsigned int v38; // ecx
  _DWORD *v39; // rax
  _DWORD *v40; // r15
  __int64 ***v41; // rbx
  _QWORD *v42; // rax
  __int64 i; // rcx
  _DWORD *v44; // rax
  _DWORD *v45; // rsi
  _DWORD *v46; // rbx
  __int64 **v47; // rax
  __int64 *v48; // rcx
  __int64 *v49; // rax
  unsigned __int8 v51; // [rsp+30h] [rbp-50h]
  __int64 *v52; // [rsp+38h] [rbp-48h] BYREF
  __int64 **v53; // [rsp+40h] [rbp-40h]
  int v54; // [rsp+48h] [rbp-38h] BYREF
  int v55; // [rsp+4Ch] [rbp-34h] BYREF
  __int128 v56; // [rsp+50h] [rbp-30h] BYREF
  __int64 v57; // [rsp+60h] [rbp-20h]
  int v58; // [rsp+68h] [rbp-18h]

  v3 = 0LL;
  v51 = a3;
  v4 = 0;
  v6 = 0;
  v8 = -1073741823;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    WPP_SF_qqd(102LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, a2, a3);
    a3 = v51;
  }
  v9 = !a2 && !a3;
  v53 = &v52;
  v52 = (__int64 *)&v52;
  if ( !v9 && !a3 )
  {
LABEL_53:
    v26 = *(_DWORD *)(a1 + 1292) & 5;
    v54 = v26;
    if ( a2 )
    {
      v27 = (__int64 *)a2[62];
      if ( v27 )
      {
        while ( 1 )
        {
          if ( (_QWORD *)v27[3] == a2 )
          {
            v28 = *((_DWORD *)v27 + 14);
            v29 = v28 + 24;
            if ( v28 + 24 < v28 )
              goto LABEL_85;
            v30 = *((_DWORD *)v27 + 16);
            v31 = v30 + v29;
            if ( v31 < v30 )
              goto LABEL_85;
            v32 = ndisMAllocateRequest(a2, -50265852, 1, v27 + 6, v31);
            v33 = v32;
            if ( !v32 )
              goto LABEL_85;
            v34 = v32 + 18;
            *(_BYTE *)v32 = -106;
            *((_BYTE *)v32 + 1) = 1;
            *((_WORD *)v32 + 1) = 248;
            v32[22] |= 2u;
            *((_QWORD *)v32 + 13) = a2;
            ndisMReferenceOpen((__int64)a2, 6u);
            v34[4] |= 0x200u;
            v34[4] &= ~0x40000u;
            v35 = v53;
            if ( *v53 != (__int64 *)&v52 )
              __fastfail(3u);
            *((_QWORD *)v34 + 1) = v53;
            *(_QWORD *)v34 = &v52;
            ++v6;
            *v35 = (__int64 *)v34;
            v3 = v33;
            v53 = (__int64 **)v34;
          }
          v27 = (__int64 *)*v27;
          if ( !v27 )
            goto LABEL_70;
        }
      }
    }
    else
    {
      v36 = *(__int64 **)(a1 + 960);
      if ( v36 )
      {
        while ( *((_DWORD *)v36 + 14) < 0xFFFFFFE8 )
        {
          v37 = *((_DWORD *)v36 + 16);
          v38 = v37 + *((_DWORD *)v36 + 14) + 24;
          if ( v38 < v37 )
            break;
          v39 = ndisMAllocateRequest(0LL, -50265853, 1, v36 + 6, v38);
          v40 = v39;
          if ( !v39 )
            break;
          v41 = (__int64 ***)(v39 + 18);
          *(_BYTE *)v39 = -106;
          *((_BYTE *)v39 + 1) = 1;
          *((_WORD *)v39 + 1) = 248;
          v39[22] |= 2u;
          *((_QWORD *)v39 + 13) = 0LL;
          *((_QWORD *)v39 + 13) = &ndisIntReqRestore;
          v39[22] |= 0xC0000u;
          v42 = v53;
          v3 = v40;
          if ( *v53 != (__int64 *)&v52 )
            __fastfail(3u);
          v41[1] = v53;
          *v41 = &v52;
          ++v6;
          *v42 = v41;
          v53 = (__int64 **)v41;
          v36 = (__int64 *)*v36;
          if ( !v36 )
          {
LABEL_70:
            v26 = v54;
            goto LABEL_71;
          }
        }
        goto LABEL_85;
      }
    }
LABEL_71:
    for ( i = *(_QWORD *)(a1 + 56); i; i = *(_QWORD *)(i + 392) )
    {
      if ( a2 != (_QWORD *)i )
      {
        v26 |= *(_DWORD *)(i + 304);
        v54 = v26;
      }
    }
    if ( v26 != *(_DWORD *)(a1 + 1292) )
    {
      v44 = ndisMAllocateRequest(a2, -50265850, 1, &v54, 4u);
      v45 = v44;
      if ( v44 )
      {
        v46 = v44 + 18;
        *(_BYTE *)v44 = -106;
        *((_BYTE *)v44 + 1) = 1;
        *((_WORD *)v44 + 1) = 248;
        v44[22] |= 2u;
        *((_QWORD *)v44 + 13) = a2;
        if ( a2 )
        {
          ndisMReferenceOpen((__int64)a2, 6u);
          v46[4] |= 0x200u;
        }
        else
        {
          *((_QWORD *)v44 + 13) = &ndisIntReqRestore;
        }
        v46[4] |= 0x80000u;
        v47 = v53;
        v3 = v45;
        if ( *v53 != (__int64 *)&v52 )
          __fastfail(3u);
        *((_QWORD *)v46 + 1) = v53;
        *(_QWORD *)v46 = &v52;
        ++v6;
        *v47 = (__int64 *)v46;
        v53 = (__int64 **)v46;
      }
    }
    goto LABEL_85;
  }
  if ( !*(_DWORD *)(a1 + 464) )
  {
    v55 = -1;
    v10 = ndisMAllocateRequest(a2, 65806, 1, &v55, 4u);
    v3 = v10;
    if ( !v10 )
      goto LABEL_96;
    v11 = v10 + 18;
    *(_BYTE *)v10 = -106;
    *((_BYTE *)v10 + 1) = 1;
    *((_WORD *)v10 + 1) = 248;
    v10[22] |= 2u;
    *((_QWORD *)v10 + 13) = a2;
    if ( a2 )
    {
      ndisMReferenceOpen((__int64)a2, 6u);
      v11[4] |= 0x200u;
    }
    else
    {
      *((_QWORD *)v10 + 13) = &ndisIntReqRestore;
    }
    v11[4] |= 0x80000u;
    v12 = v53;
    if ( *v53 != (__int64 *)&v52 )
      __fastfail(3u);
    *((_QWORD *)v11 + 1) = v53;
    *(_QWORD *)v11 = &v52;
    v6 = 1;
    *v12 = (__int64 *)v11;
    v53 = (__int64 **)v11;
  }
  if ( !*(_DWORD *)(a1 + 464) )
  {
    v13 = ndisMAllocateRequest(a2, 16843011, 1, 0LL, 0);
    v14 = v13;
    if ( !v13 )
      goto LABEL_85;
    v15 = v13 + 18;
    *(_BYTE *)v13 = -106;
    *((_BYTE *)v13 + 1) = 1;
    *((_WORD *)v13 + 1) = 248;
    v13[22] |= 2u;
    *((_QWORD *)v13 + 13) = a2;
    if ( a2 )
    {
      ndisMReferenceOpen((__int64)a2, 6u);
      v15[4] |= 0x200u;
    }
    else
    {
      *((_QWORD *)v13 + 13) = &ndisIntReqRestore;
    }
    v15[4] |= 0x80000u;
    v16 = v53;
    v3 = v14;
    if ( *v53 != (__int64 *)&v52 )
      __fastfail(3u);
    *((_QWORD *)v15 + 1) = v53;
    *(_QWORD *)v15 = &v52;
    ++v6;
    *v16 = (__int64 *)v15;
    v53 = (__int64 **)v15;
  }
  v17 = *(_QWORD *)(a1 + 4120);
  if ( !v17 || *(_BYTE *)(v17 + 1) != 1 )
    goto LABEL_53;
  v18 = *(_QWORD *)(a1 + 56);
  v56 = 0uLL;
  v19 = 1;
  v57 = 0LL;
  v58 = 0;
  if ( !v18 )
    goto LABEL_40;
  while ( 1 )
  {
    v20 = *(_QWORD *)(v18 + 792);
    if ( !v20 || !*(_BYTE *)(v20 + 28) )
      goto LABEL_36;
    if ( !v19 )
    {
      v4 = ndisMergeEncapsulations(v20, &v56);
      if ( v4 )
        goto LABEL_85;
      goto LABEL_36;
    }
    if ( *(_BYTE *)v20 != 0xA8 || !*(_BYTE *)(v20 + 1) || *(_WORD *)(v20 + 2) < 0x1Cu )
      break;
    v19 = 0;
    v56 = *(_OWORD *)v20;
    v57 = *(_QWORD *)(v20 + 16);
    v58 = *(_DWORD *)(v20 + 24);
LABEL_36:
    v18 = *(_QWORD *)(v18 + 392);
    if ( !v18 )
      goto LABEL_39;
  }
  v4 = -1073741637;
LABEL_39:
  if ( !v4 )
  {
LABEL_40:
    if ( (_BYTE)v56 == 0xA8 )
      goto LABEL_53;
    LODWORD(v56) = 1835432;
    if ( *(_BYTE *)(v17 + 760) != 0xA8
      || !*(_BYTE *)(v17 + 761)
      || *(_WORD *)(v17 + 762) < 0x1Cu
      || *(_DWORD *)(v17 + 764) == 2 && *(_DWORD *)(v17 + 776) == 2 )
    {
      goto LABEL_53;
    }
    *(_QWORD *)((char *)&v56 + 4) = *(_QWORD *)(v17 + 764);
    HIDWORD(v56) = *(_DWORD *)(v17 + 772);
    v57 = *(_QWORD *)(v17 + 776);
    v21 = *(_DWORD *)(v17 + 784);
    DWORD1(v56) = 2;
    LODWORD(v57) = 2;
    v58 = v21;
    v22 = ndisMAllocateRequest(a2, 16843018, 1, &v56, 0x1Cu);
    v23 = v22;
    if ( v22 )
    {
      v24 = v22 + 18;
      *(_BYTE *)v22 = -106;
      *((_BYTE *)v22 + 1) = 1;
      *((_WORD *)v22 + 1) = 248;
      v22[22] |= 2u;
      *((_QWORD *)v22 + 13) = a2;
      if ( a2 )
      {
        ndisMReferenceOpen((__int64)a2, 6u);
        v24[4] |= 0x200u;
      }
      else
      {
        *((_QWORD *)v22 + 13) = &ndisIntReqRestore;
      }
      v24[4] |= 0x80000u;
      v25 = v53;
      v3 = v23;
      if ( *v53 != (__int64 *)&v52 )
        __fastfail(3u);
      *((_QWORD *)v24 + 1) = v53;
      *(_QWORD *)v24 = &v52;
      ++v6;
      *v25 = (__int64 *)v24;
      v53 = (__int64 **)v24;
      goto LABEL_53;
    }
  }
LABEL_85:
  if ( v3 )
  {
    if ( v51 )
    {
      v3[22] |= 0x100u;
      *(_DWORD *)(a1 + 120) |= 0x1000000u;
    }
    if ( (unsigned int)ndisQueueRestoreRequestsOnTop(a1, &v52, v6) != 259 )
    {
      while ( 1 )
      {
        v48 = v52;
        if ( v52 == (__int64 *)&v52 )
          break;
        if ( (__int64 **)v52[1] != &v52 || (v49 = (__int64 *)*v52, *(__int64 **)(*v52 + 8) != v52) )
          __fastfail(3u);
        v52 = (__int64 *)*v52;
        v49[1] = (__int64)&v52;
        ExFreePoolWithTag(v48 - 9, 0);
      }
      goto LABEL_95;
    }
    v8 = 0;
  }
  else
  {
LABEL_95:
    v8 = -1073741823;
  }
LABEL_96:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qD(0x67u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, v8);
  return v8;
}
