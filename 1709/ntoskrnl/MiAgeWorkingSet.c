/*
 * XREFs of MiAgeWorkingSet @ 0x14009C900
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x14002B250 (MiTrimSharedPageFromViews.c)
 *     MmSetAddressRangeModifiedEx @ 0x14002F6E0 (MmSetAddressRangeModifiedEx.c)
 *     MiSystemFault @ 0x140032BA0 (MiSystemFault.c)
 *     MiCopyToUserVa @ 0x140034630 (MiCopyToUserVa.c)
 *     MiQueryAddressState @ 0x14003F110 (MiQueryAddressState.c)
 *     MiDeleteSystemPagableVm @ 0x140056870 (MiDeleteSystemPagableVm.c)
 *     MiCountSharedPages @ 0x1400592B0 (MiCountSharedPages.c)
 *     MiProtectPool @ 0x140065070 (MiProtectPool.c)
 *     MiTrimOrAgeWorkingSet @ 0x14009C460 (MiTrimOrAgeWorkingSet.c)
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 *     MiSetReadOnlyOnSectionView @ 0x1400E9820 (MiSetReadOnlyOnSectionView.c)
 *     MiForceAgeWorkingSet @ 0x14021D508 (MiForceAgeWorkingSet.c)
 * Callees:
 *     MiWalkPageTables @ 0x14009CD60 (MiWalkPageTables.c)
 *     _TlgCreateSz @ 0x1400B0934 (_TlgCreateSz.c)
 *     MiIsStoreProcess @ 0x1400E6B90 (MiIsStoreProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     _TlgWriteEx @ 0x140213AC0 (_TlgWriteEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

_BOOL8 __fastcall MiAgeWorkingSet(__int64 a1, char a2, int a3, unsigned int a4)
{
  __int64 v7; // rsi
  int v8; // r15d
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned int v12; // r8d
  __int64 v13; // r11
  unsigned __int64 v14; // r9
  __int64 v15; // r9
  unsigned __int64 v16; // rsi
  __int64 v17; // rcx
  _BYTE *PoolWithTag; // rbx
  _QWORD *v19; // r8
  __int64 v20; // r14
  _QWORD *v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // r8
  int v25; // r15d
  unsigned __int8 v26; // al
  int v27; // eax
  char v28; // al
  unsigned __int8 v29; // al
  int v30; // eax
  __int64 v31; // rax
  unsigned __int8 v32; // dl
  int v33; // r8d
  const CHAR *v34; // rdi
  unsigned __int128 v36; // rax
  TraceLoggingHProvider v37; // r10
  char v38; // [rsp+48h] [rbp-C0h]
  unsigned __int8 v39; // [rsp+49h] [rbp-BFh] BYREF
  int v40; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v41; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+58h] [rbp-B0h]
  __int64 v43; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+70h] [rbp-98h] BYREF
  __int64 v46; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v47[34]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v48[20]; // [rsp+198h] [rbp+90h] BYREF
  _DWORD v49[68]; // [rsp+238h] [rbp+130h] BYREF
  _BYTE v50[192]; // [rsp+348h] [rbp+240h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+408h] [rbp+300h] BYREF
  char *v52; // [rsp+428h] [rbp+320h]
  __int64 v53; // [rsp+430h] [rbp+328h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+438h] [rbp+330h] BYREF
  int *v55; // [rsp+448h] [rbp+340h]
  __int64 v56; // [rsp+450h] [rbp+348h]
  __int64 *v57; // [rsp+458h] [rbp+350h]
  __int64 v58; // [rsp+460h] [rbp+358h]
  __int64 *v59; // [rsp+468h] [rbp+360h]
  __int64 v60; // [rsp+470h] [rbp+368h]
  __int64 *v61; // [rsp+478h] [rbp+370h]
  __int64 v62; // [rsp+480h] [rbp+378h]
  __int64 *v63; // [rsp+488h] [rbp+380h]
  __int64 v64; // [rsp+490h] [rbp+388h]
  __int64 *v65; // [rsp+498h] [rbp+390h]
  __int64 v66; // [rsp+4A0h] [rbp+398h]

  v38 = a2;
  memset(v47, 0, 0x108uLL);
  memset(v48, 0, 0x98uLL);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = 3;
  v9 = *(_QWORD *)(a1 + 136);
  v42 = v7;
  v10 = *(_QWORD *)(v7 + 32);
  if ( v9 > v10 )
  {
    v11 = v9 - v10;
    v12 = 10;
    if ( a4 )
      v12 = a4;
    if ( (a3 & 2) != 0 )
    {
      v13 = *(unsigned int *)(v7 + 24);
      v14 = v13 + v11;
      *(_DWORD *)(v7 + 24) = (v13 + v11) % v12;
    }
    else
    {
      v13 = *(unsigned int *)(v7 + 28);
      v14 = v13 + v11;
      *(_DWORD *)(v7 + 28) = (v13 + v11) % v12;
    }
    if ( v14 < v11 )
    {
      v15 = 0LL;
      v13 = 0LL;
    }
    else
    {
      v15 = 0LL;
    }
    v16 = v12 * (v13 + v11) / 0x3E8;
    if ( v16 > v11 )
    {
      v36 = v11 * v12 * (unsigned __int128)0x624DD2F1A9FBE77uLL;
      v16 = (*((_QWORD *)&v36 + 1) + ((v11 * v12 - *((_QWORD *)&v36 + 1)) >> 1)) >> 9;
    }
    v17 = *(unsigned __int16 *)(a1 + 172);
    PoolWithTag = 0LL;
    HIDWORD(v47[1]) = v12;
    LODWORD(v47[2]) = a3;
    v19 = *(_QWORD **)(qword_140388AF0 + 8 * v17);
    v20 = v19[710];
    if ( (a3 & 3) != 0 )
    {
      v21 = v19 + 288;
      v22 = v19[264] + v19[272];
      v23 = 0LL;
      v24 = v19 + 313;
      if ( v21 < v24 )
      {
        do
        {
          v23 += *v21;
          v15 += v21[5];
          v21 += 10;
        }
        while ( v21 < v24 - 5 );
        if ( v21 < v24 )
          v22 += *v21;
        v22 += v23 + v15;
      }
      if ( v22 + *v24 < *(_QWORD *)(v20 + 80) )
      {
        if ( *(_BYTE *)(a1 + 194) != 2 )
        {
          if ( v22 >= *(_QWORD *)(v20 + 72) )
            v8 = 5;
          LODWORD(v47[1]) = v8;
        }
        if ( (*(_BYTE *)(a1 + 192) & 7) != 0 || !(unsigned int)MiIsStoreProcess(a1 - 1280, v22, v24, v15) )
          WORD2(v47[0]) = *(_WORD *)(v20 + 2358);
      }
      if ( v16 <= 0x100 )
        goto LABEL_69;
      v25 = 509;
      if ( v16 < 0x1FD )
        v25 = v16;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)(v25 - 256) + 2072, 0x73576D4Du);
      if ( !PoolWithTag )
      {
LABEL_69:
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 132), 1, 0) )
        {
          PoolWithTag = v50;
          v25 = 20;
        }
        else
        {
          PoolWithTag = (_BYTE *)(v20 + 136);
          v25 = 256;
        }
      }
      v26 = *(_BYTE *)(a1 + 192) & 7;
      if ( v26 )
        v27 = v26 < 2u ? 2 : 0;
      else
        v27 = 1;
      *(_DWORD *)PoolWithTag = v27;
      *((_DWORD *)PoolWithTag + 3) = 0;
      *((_WORD *)PoolWithTag + 2) = 0;
      *((_QWORD *)PoolWithTag + 2) = 0LL;
      *((_DWORD *)PoolWithTag + 2) = v25;
      *((_QWORD *)PoolWithTag + 3) = 0LL;
      if ( (*(_BYTE *)(a1 + 192) & 7) == 0 && *(_QWORD *)(a1 + 584) )
      {
        v49[0] = 0;
        v47[32] = v49;
        v49[1] = 32;
      }
    }
    BYTE4(v48[0]) = v38;
    v28 = *(_BYTE *)(a1 + 192);
    v48[1] = a1;
    LODWORD(v47[0]) = a3;
    v47[7] = v16;
    v47[8] = PoolWithTag;
    v29 = v28 & 7;
    if ( v29 )
      v30 = v29 < 2u ? 2 : 0;
    else
      v30 = 1;
    LODWORD(v47[9]) = v30;
    v48[18] = v47;
    v48[16] = MiAgePte;
    v48[17] = MiAgeWorkingSetTail;
    v47[10] = 20LL;
    WORD2(v47[9]) = 4;
    v47[11] = 0LL;
    v47[12] = 0LL;
    LODWORD(v48[0]) = 10;
    if ( (a3 & 2) != 0 )
      v31 = *(_QWORD *)(v42 + 16);
    else
      v31 = *(_QWORD *)(v42 + 8);
    v48[4] = v31;
    if ( !v31 )
      v48[3] = -1LL;
    v8 = MiWalkPageTables(v48);
    if ( PoolWithTag )
    {
      if ( PoolWithTag == (_BYTE *)(v20 + 136) )
      {
        _InterlockedAnd((volatile signed __int32 *)(v20 + 132), 0);
      }
      else if ( PoolWithTag != v50 )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
      }
    }
    if ( v8 == 2 )
      ++*(_DWORD *)(v20 + 2580);
  }
  if ( hProvider )
  {
    v32 = *(_BYTE *)(a1 + 192) & 7;
    if ( v32 )
    {
      if ( v32 < 2u )
        v33 = *(_DWORD *)(a1 - 3000);
      else
        v33 = 0;
      v34 = 0LL;
    }
    else
    {
      v33 = *(_DWORD *)(a1 - 544);
      v34 = (const CHAR *)(a1 - 176);
    }
    if ( hProvider->LevelPlus1 > 5
      && (hProvider->KeywordAny & 1) != 0
      && (hProvider->KeywordAll & 1) == hProvider->KeywordAll )
    {
      v43 = v47[6];
      v44 = v47[3];
      v45 = v47[5];
      v46 = v47[4];
      v39 = v32;
      v52 = (char *)&v39;
      v40 = v33;
      LODWORD(v41) = a3;
      v53 = 1LL;
      TlgCreateSz(&pDesc, v34);
      v56 = 4LL;
      v57 = &v43;
      v55 = &v40;
      v59 = &v44;
      v61 = &v45;
      v63 = &v46;
      v65 = &v41;
      v58 = 8LL;
      v60 = 8LL;
      v62 = 8LL;
      v64 = 8LL;
      v66 = 4LL;
      TlgWriteEx(v37, &unk_1402D07B7, 0LL, 1u, 0LL, 0LL, 0xAu, &pData);
    }
  }
  return v8 == 2;
}
