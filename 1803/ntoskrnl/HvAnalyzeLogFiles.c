/*
 * XREFs of HvAnalyzeLogFiles @ 0x1407056A4
 * Callers:
 *     HvLoadHive @ 0x140496B18 (HvLoadHive.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     HvpHeaderCheckSum @ 0x140496AEC (HvpHeaderCheckSum.c)
 *     HvpDetermineIncrementalLogFileMaximums @ 0x140706180 (HvpDetermineIncrementalLogFileMaximums.c)
 *     HvpDetermineLatestLogFile @ 0x140706224 (HvpDetermineLatestLogFile.c)
 *     HvpIsReadErrorTransient @ 0x140706378 (HvpIsReadErrorTransient.c)
 *     HvpLogIneligibleLogHeader @ 0x140706470 (HvpLogIneligibleLogHeader.c)
 *     HvpLogInvalidLogHeader @ 0x140706514 (HvpLogInvalidLogHeader.c)
 *     HvpLogUnreadableLog @ 0x140706680 (HvpLogUnreadableLog.c)
 */

__int64 __fastcall HvAnalyzeLogFiles(
        _QWORD *a1,
        unsigned int a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r13
  unsigned int v9; // ebx
  unsigned int v10; // r12d
  __int64 v11; // r14
  __int64 *v12; // r15
  _QWORD *v13; // rsi
  int v14; // eax
  unsigned int v15; // r13d
  int v16; // r15d
  unsigned int *v17; // r12
  __int64 *v18; // rsi
  unsigned int v19; // edi
  _DWORD *v20; // r9
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  unsigned int v24; // r10d
  __int64 v25; // rdi
  __int64 v26; // rsi
  unsigned int v27; // eax
  __int64 v28; // rdx
  _OWORD *v29; // rcx
  _OWORD *v30; // rax
  __int128 v31; // xmm1
  __int64 *v32; // r13
  _QWORD *v33; // rsi
  unsigned int v34; // r15d
  unsigned int v35; // r12d
  _DWORD *v36; // rdx
  bool v37; // zf
  _DWORD *v38; // r8
  _DWORD *v39; // r9
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned int LevelPlus1; // edx
  unsigned int v44; // r12d
  unsigned int v45; // r13d
  _DWORD *v46; // rax
  __int128 v47; // xmm0
  __int64 v48; // xmm1_8
  __int64 v49; // rcx
  _DWORD *v50; // rax
  __int64 v51; // xmm1_8
  _DWORD *v52; // rax
  __int64 v53; // xmm1_8
  __int128 v54; // xmm0
  __int64 v55; // xmm1_8
  unsigned int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int128 v59; // xmm0
  __int64 v60; // xmm1_8
  __int128 v61; // xmm0
  __int64 v62; // xmm1_8
  char v64; // [rsp+30h] [rbp-D0h] BYREF
  char v65; // [rsp+31h] [rbp-CFh] BYREF
  char v66; // [rsp+32h] [rbp-CEh] BYREF
  char v67; // [rsp+33h] [rbp-CDh]
  unsigned int v68; // [rsp+34h] [rbp-CCh] BYREF
  _QWORD *v69; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v70; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD *v71; // [rsp+48h] [rbp-B8h]
  __int64 v72; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v73; // [rsp+58h] [rbp-A8h]
  __int64 v74; // [rsp+60h] [rbp-A0h]
  __int64 v75; // [rsp+68h] [rbp-98h]
  __int64 v76; // [rsp+70h] [rbp-90h]
  _OWORD v77[3]; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  char *v79; // [rsp+D0h] [rbp-30h]
  __int64 v80; // [rsp+D8h] [rbp-28h]
  char *v81; // [rsp+E0h] [rbp-20h]
  __int64 v82; // [rsp+E8h] [rbp-18h]
  char *v83; // [rsp+F0h] [rbp-10h]
  __int64 v84; // [rsp+F8h] [rbp-8h]
  unsigned int *v85; // [rsp+100h] [rbp+0h]
  __int64 v86; // [rsp+108h] [rbp+8h]
  unsigned int *v87; // [rsp+110h] [rbp+10h]
  __int64 v88; // [rsp+118h] [rbp+18h]
  EVENT_DATA_DESCRIPTOR v89; // [rsp+120h] [rbp+20h] BYREF

  v71 = a6;
  v76 = a8;
  v8 = a4;
  v67 = a3;
  v70 = a2;
  v69 = a1;
  v68 = a4;
  v74 = a5;
  v75 = a7;
  v72 = 0LL;
  v73 = 0LL;
  memset(v77, 0, sizeof(v77));
  v9 = 0;
  v10 = 0;
  v11 = 24LL;
  if ( (_DWORD)v8 )
  {
    v12 = &v72;
    v13 = (_QWORD *)(a5 + 16);
    do
    {
      v14 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64 *))*(v13 - 1))(*v13, 0LL, 512LL, &v72 + v10);
      v15 = v14;
      if ( v14 < 0 )
      {
        if ( (unsigned __int8)HvpIsReadErrorTransient((unsigned int)v14) )
          return (unsigned int)-1073741491;
        HvpLogUnreadableLog(*((unsigned int *)v13 - 4), v15);
        *v12 = 0LL;
      }
      v8 = v68;
      ++v10;
      v13 += 3;
      ++v12;
    }
    while ( v10 < v68 );
  }
  v16 = 0;
  if ( !(_DWORD)v8 )
    goto LABEL_59;
  v17 = (unsigned int *)v74;
  v18 = &v72;
  v19 = v70;
  do
  {
    v20 = (_DWORD *)*v18;
    if ( !*v18 )
      goto LABEL_24;
    if ( *v20 == 1718052210
      && v20[1] == v20[2]
      && *(_QWORD *)(v20 + 3) == *v69
      && ((v21 = v20[7], v21 == 6) || v21 == 1)
      && (v22 = v20[10], (unsigned int)(v22 - 1) <= 0x7FFFDFFF)
      && (v22 & 0xFFF) == 0
      && (v23 = HvpHeaderCheckSum((_DWORD *)*v18), v20[127] == v23) )
    {
      if ( v24 >= v19 )
      {
        ++v16;
        goto LABEL_24;
      }
      HvpLogIneligibleLogHeader(*v17, v19, v24);
    }
    else
    {
      HvpLogInvalidLogHeader(v69, *v17, v20);
    }
    *v18 = 0LL;
LABEL_24:
    v17 += 6;
    ++v18;
    --v8;
  }
  while ( v8 );
  v25 = v75;
  if ( !v16 )
  {
LABEL_59:
    if ( stru_140397090.LevelPlus1 > 5 && TlgKeywordOn(&stru_140397090, 0x400000000000uLL) )
      TlgWrite(&stru_140397090, &unk_140308B6D, 0LL, 0LL, 2u, &v89);
    return (unsigned int)-1073741492;
  }
  v26 = v76;
  if ( v76 )
  {
    if ( v16 == 1 )
    {
      v27 = v72 == 0;
    }
    else
    {
      LODWORD(v69) = *(_DWORD *)(v72 + 4);
      HIDWORD(v69) = *(_DWORD *)(v73 + 8);
      v27 = HvpDetermineLatestLogFile(&v69);
    }
    v28 = 4LL;
    v29 = (_OWORD *)*(&v72 + v27);
    v30 = (_OWORD *)v26;
    do
    {
      *v30 = *v29;
      v30[1] = v29[1];
      v30[2] = v29[2];
      v30[3] = v29[3];
      v30[4] = v29[4];
      v30[5] = v29[5];
      v30[6] = v29[6];
      v30 += 8;
      v31 = v29[7];
      v29 += 8;
      *(v30 - 1) = v31;
      --v28;
    }
    while ( v28 );
    memset((void *)(v26 + 512), 0, 0xE00uLL);
    *(_DWORD *)(v26 + 28) = 0;
  }
  v32 = &v72;
  v33 = (_QWORD *)(v74 + 8);
  v34 = 0;
  v35 = 0;
  do
  {
    v36 = (_DWORD *)*v32;
    if ( *v32 )
    {
      v37 = v36[7] == 6;
      v38 = (_DWORD *)v77 + 6 * v34 + 3;
      v39 = (_DWORD *)&v77[1] + 6 * v34;
      *((_DWORD *)v77 + 6 * v34 + 1) = *((_DWORD *)v33 - 2);
      v40 = v36[1];
      *((_DWORD *)v77 + 6 * v34 + 2) = v40;
      *((_DWORD *)v77 + 6 * v34) = v35;
      if ( v37 )
      {
        v41 = v33[1];
        *((_BYTE *)&v77[1] + 24 * v34 + 4) = 0;
        v42 = *v33;
        *v32 = 0LL;
        if ( (int)HvpDetermineIncrementalLogFileMaximums(v42, v41, v38, v39) < 0 )
          return (unsigned int)-1073741491;
      }
      else
      {
        *v38 = v40;
        *v39 = v36[10];
        *((_BYTE *)&v77[1] + 24 * v34 + 4) = 1;
      }
      ++v34;
    }
    ++v35;
    v33 += 3;
    ++v32;
  }
  while ( v35 < v68 );
  LevelPlus1 = stru_140397090.LevelPlus1;
  v44 = v77[2];
  v45 = DWORD2(v77[0]);
  if ( stru_140397090.LevelPlus1 > 5 )
  {
    v65 = BYTE4(v77[0]);
    v66 = BYTE12(v77[1]);
    v79 = &v64;
    v81 = &v65;
    v83 = &v66;
    v85 = &v70;
    v87 = &v68;
    v64 = v34;
    v70 = DWORD2(v77[0]);
    v68 = v77[2];
    v80 = 1LL;
    v82 = 1LL;
    v84 = 1LL;
    v86 = 4LL;
    v88 = 4LL;
    TlgWrite(&stru_140397090, &unk_140308B10, 0LL, 0LL, 7u, &pData);
    LevelPlus1 = stru_140397090.LevelPlus1;
  }
  if ( v34 == 1 )
  {
    v46 = v71;
    v47 = v77[0];
    v48 = *(_QWORD *)&v77[1];
    goto LABEL_45;
  }
  if ( v67 )
  {
    v69 = (_QWORD *)__PAIR64__(v44, v45);
    v56 = HvpDetermineLatestLogFile(&v69);
    v57 = -(__int64)(v56 == 0) & 0x18;
    v58 = 3LL * v56;
    v37 = *(_DWORD *)((char *)v77 + v57 + 12) + 1 == *((_DWORD *)v77 + 6 * v56 + 2);
    v46 = v71;
    if ( v37 )
    {
      v59 = *(_OWORD *)((char *)v77 + v57);
      *v71 = 2;
      v60 = *(_QWORD *)((char *)&v77[1] + v57);
      *(_OWORD *)v25 = v59;
      v61 = *(_OWORD *)((char *)v77 + 8 * v58);
      *(_QWORD *)(v25 + 16) = v60;
      v62 = *((_QWORD *)&v77[1] + v58);
      *(_OWORD *)(v25 + 24) = v61;
      *(_QWORD *)(v25 + 40) = v62;
    }
    else
    {
      v47 = *(_OWORD *)((char *)v77 + 8 * v58);
      v48 = *((_QWORD *)&v77[1] + v58);
LABEL_45:
      *v46 = 1;
      *(_OWORD *)v25 = v47;
      *(_QWORD *)(v25 + 16) = v48;
    }
  }
  else
  {
    if ( v45 >= v44 )
    {
      v49 = 24LL;
      v11 = 0LL;
    }
    else
    {
      v49 = 0LL;
    }
    if ( *(_DWORD *)((char *)v77 + v49 + 12) + 1 == *(_DWORD *)((char *)v77 + v11 + 8) )
    {
      v52 = v71;
      v53 = *(_QWORD *)((char *)&v77[1] + v49);
      *(_OWORD *)v25 = *(_OWORD *)((char *)v77 + v49);
      v54 = *(_OWORD *)((char *)v77 + v11);
      *(_QWORD *)(v25 + 16) = v53;
      v55 = *(_QWORD *)((char *)&v77[1] + v11);
      *(_OWORD *)(v25 + 24) = v54;
      *(_QWORD *)(v25 + 40) = v55;
      *v52 = 2;
    }
    else
    {
      if ( LevelPlus1 > 5 && TlgKeywordOn(&stru_140397090, 0x400000000000uLL) )
        TlgWrite(&stru_140397090, &unk_140308AE3, 0LL, 0LL, 2u, &v89);
      v50 = v71;
      v51 = *(_QWORD *)((char *)&v77[1] + v11);
      *(_OWORD *)v25 = *(_OWORD *)((char *)v77 + v11);
      *(_QWORD *)(v25 + 16) = v51;
      *v50 = 1;
    }
  }
  return v9;
}
