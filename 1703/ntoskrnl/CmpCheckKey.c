/*
 * XREFs of CmpCheckKey @ 0x140505100
 * Callers:
 *     CmpCheckRegistry2 @ 0x140505E80 (CmpCheckRegistry2.c)
 * Callees:
 *     HvpGetBinContextInitialize @ 0x14008CF2C (HvpGetBinContextInitialize.c)
 *     RtlClearBits @ 0x14008CF40 (RtlClearBits.c)
 *     HvpMapEntryIsDiscardable @ 0x14008CFF0 (HvpMapEntryIsDiscardable.c)
 *     HvpMapEntryGetBinAddress @ 0x14008D010 (HvpMapEntryGetBinAddress.c)
 *     HvpReleaseHCell @ 0x14008D080 (HvpReleaseHCell.c)
 *     HvpGetCellContextReinitialize @ 0x14008D150 (HvpGetCellContextReinitialize.c)
 *     HvpMapEntryReleaseBinAddress @ 0x14008D170 (HvpMapEntryReleaseBinAddress.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     SetFailureLocation @ 0x1401DEAE4 (SetFailureLocation.c)
 *     CmpCheckLeaf @ 0x140503C50 (CmpCheckLeaf.c)
 *     CmpCheckValueList @ 0x140504990 (CmpCheckValueList.c)
 *     HvIsCellAllocated @ 0x1405153D0 (HvIsCellAllocated.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpCheckKey(
        ULONG_PTR a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        PRTL_BITMAP BitMapHeader,
        __int64 a7)
{
  __int64 v7; // r15
  unsigned __int64 v8; // r12
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rax
  struct _EX_RUNDOWN_REF *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  _DWORD *v17; // rsi
  unsigned __int64 BinAddress; // rax
  __int64 v19; // rcx
  unsigned int v20; // r8d
  unsigned int v21; // edx
  __int64 v22; // r10
  bool v23; // si
  __int64 v24; // rax
  __int64 v25; // rbx
  unsigned int v26; // ecx
  unsigned int v27; // edx
  unsigned int v28; // eax
  __int64 v29; // rax
  char v30; // dl
  unsigned int v31; // r12d
  unsigned int v32; // esi
  unsigned __int64 v33; // r15
  int v34; // r14d
  __int64 v35; // rsi
  unsigned int v36; // ecx
  int v37; // edx
  __int64 v38; // rax
  __int64 v39; // r14
  unsigned __int16 v40; // dx
  int v41; // eax
  int v42; // ecx
  __int16 v43; // r14
  unsigned int v44; // esi
  unsigned int v45; // r11d
  unsigned int v46; // edx
  int v47; // r9d
  __int64 v48; // r10
  int v49; // eax
  int v50; // ecx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int16 v53; // ax
  unsigned int v54; // esi
  unsigned int v55; // esi
  __int64 v56; // rax
  __int64 v57; // rax
  struct _EX_RUNDOWN_REF *v58; // r14
  __int64 v59; // rax
  __int64 v60; // rcx
  int *v61; // rsi
  __int64 v62; // rcx
  unsigned __int64 v63; // r9
  unsigned int v64; // r8d
  unsigned int v65; // edx
  __int64 v66; // r10
  bool v67; // si
  int v68; // r12d
  __int64 (__fastcall *v69)(ULONG_PTR, _QWORD, int *); // rax
  __int64 v70; // r14
  unsigned __int64 v71; // rax
  unsigned int v72; // r13d
  int v73; // esi
  int v74; // r14d
  unsigned int v75; // esi
  unsigned int v76; // eax
  unsigned int v77; // esi
  __int64 v78; // rax
  char v79; // si
  bool v80; // cl
  __int16 *v82; // rax
  __int16 *v83; // r10
  unsigned int v84; // edx
  __int16 v85; // cx
  __int64 v86; // rax
  __int64 v87; // r8
  __int64 v88; // rcx
  __int16 v89; // cx
  int v90; // eax
  __int64 v91; // rax
  bool v92; // cc
  void (__fastcall *v93)(ULONG_PTR, _DWORD *); // rax
  bool v94; // cf
  int v95; // r13d
  unsigned int i; // r12d
  __int16 *v97; // rsi
  _WORD *v98; // rax
  _WORD *v99; // r15
  unsigned int v100; // edx
  __int16 v101; // r8
  __int64 v102; // rax
  __int64 v103; // r9
  __int64 v104; // rcx
  int v105; // eax
  __int16 v106; // ax
  unsigned int v107; // edx
  unsigned int v108; // ecx
  int v109; // edx
  __int64 v110; // rax
  __int64 v111; // rsi
  __int64 v112; // r14
  __int16 v113; // cx
  __int16 v114; // ax
  int v115; // edx
  _DWORD *v116; // rdx
  __int64 v117; // rcx
  bool v118; // al
  int v119; // [rsp+20h] [rbp-91h]
  int v120; // [rsp+20h] [rbp-91h]
  int v121; // [rsp+20h] [rbp-91h]
  int v122; // [rsp+20h] [rbp-91h]
  int v123; // [rsp+20h] [rbp-91h]
  int v124; // [rsp+20h] [rbp-91h]
  int v125; // [rsp+20h] [rbp-91h]
  int v126; // [rsp+20h] [rbp-91h]
  _WORD v127[2]; // [rsp+50h] [rbp-61h] BYREF
  unsigned int v128; // [rsp+54h] [rbp-5Dh]
  unsigned int v129; // [rsp+58h] [rbp-59h]
  __int16 *v130; // [rsp+60h] [rbp-51h]
  _DWORD v131[2]; // [rsp+68h] [rbp-49h] BYREF
  int v132; // [rsp+70h] [rbp-41h] BYREF
  int v133; // [rsp+74h] [rbp-3Dh]
  _DWORD v134[2]; // [rsp+78h] [rbp-39h] BYREF
  unsigned int v135; // [rsp+80h] [rbp-31h]
  unsigned int v136; // [rsp+84h] [rbp-2Dh] BYREF
  unsigned int v137; // [rsp+88h] [rbp-29h] BYREF
  _DWORD v138[2]; // [rsp+90h] [rbp-21h] BYREF
  _DWORD v139[2]; // [rsp+98h] [rbp-19h] BYREF
  _DWORD v140[2]; // [rsp+A0h] [rbp-11h] BYREF
  _DWORD v141[4]; // [rsp+A8h] [rbp-9h] BYREF
  char v142; // [rsp+100h] [rbp+4Fh]

  v7 = a7;
  v8 = a3;
  v139[0] = -1;
  v139[1] = 0;
  v128 = 0;
  v136 = 0;
  v129 = 0;
  v137 = 0;
  v140[0] = -1;
  v140[1] = 0;
  v134[0] = -1;
  v134[1] = 0;
  v131[0] = -1;
  v131[1] = 0;
  v141[0] = -1;
  v141[1] = 0;
  v142 = 0;
  v130 = 0LL;
  if ( a7 )
  {
    *(_DWORD *)(a7 + 240) = a3;
    *(_QWORD *)(a7 + 248) = 0LL;
    *(_QWORD *)(a7 + 256) = 0LL;
    *(_DWORD *)(a7 + 264) = -1;
  }
  HvpGetCellContextReinitialize((__int64)&v132);
  HvpGetBinContextInitialize(v127);
  if ( (*(_BYTE *)(a1 + 124) & 1) == 0 )
  {
    v11 = (unsigned int)v8 >> 31;
    if ( (v8 & 0x7FFFFFFF) >= *(_DWORD *)(632LL * ((unsigned int)v8 >> 31) + a1 + 1400) || (v8 & 7) != 0 )
      goto LABEL_214;
    if ( BitMapHeader && (v8 & 0x80000000) == 0LL )
    {
      if ( !_bittest64((const signed __int64 *)BitMapHeader->Buffer, (unsigned int)v8 >> 3) )
        goto LABEL_214;
      RtlClearBits(BitMapHeader, (unsigned int)v8 >> 3, 1u);
    }
    v12 = 632LL * v11;
    if ( (unsigned int)v8 + (v11 << 31) < *(_DWORD *)(v12 + a1 + 1400) )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(v12 + a1 + 1408) + 8 * ((v8 >> 21) & 0x3FF));
      v14 = (struct _EX_RUNDOWN_REF *)(v13 + 40 * ((v8 >> 12) & 0x1FF));
      if ( v14 )
      {
        if ( !HvpMapEntryIsDiscardable(v13 + 40 * ((v8 >> 12) & 0x1FF)) )
        {
          v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a1 + 8))(a1, (unsigned int)v8, &v132);
          if ( !v15 )
            goto LABEL_24;
          v17 = (_DWORD *)(v15 - 4);
          if ( v15 == 4 )
            goto LABEL_24;
          BinAddress = HvpMapEntryGetBinAddress(v16, v14, v127);
          v19 = (unsigned int)*v17;
          v20 = (_DWORD)v17 - BinAddress;
          v21 = -*v17;
          v23 = 0;
          if ( (int)v19 < 0 )
          {
            v19 = v21 - 8;
            if ( (unsigned int)v19 <= 0xFFFF8 )
            {
              v22 = *(unsigned int *)(BinAddress + 8);
              v19 = v22 - 32;
              if ( v21 <= (unsigned __int64)(v22 - 32) && v20 - *v17 <= (unsigned int)v22 && v20 >= 0x20 )
                v23 = 1;
            }
          }
          if ( BinAddress )
            HvpMapEntryReleaseBinAddress(v19, v14, v127);
          HvpReleaseHCell(a1);
          if ( v23 )
            goto LABEL_24;
        }
      }
    }
LABEL_214:
    SetFailureLocation(a7, 0, 14, -1073741492, 0);
    return 3221225804LL;
  }
LABEL_24:
  v24 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, (unsigned int)v8, v140);
  v25 = v24;
  if ( !v24 )
  {
    SetFailureLocation(a7, 0, 14, -1073741670, 16);
    return 3221225626LL;
  }
  if ( a7 )
    *(_QWORD *)(a7 + 248) = v24;
  v26 = -4 - *(_DWORD *)(v24 - 4);
  if ( v26 - 76 > 0x410 )
  {
    v119 = 32;
    goto LABEL_440;
  }
  v27 = *(unsigned __int16 *)(v24 + 72);
  if ( !(_WORD)v27 || v27 + 76 > v26 )
  {
    v119 = 48;
    goto LABEL_440;
  }
  if ( (*(_BYTE *)(v24 + 2) & 0x20) != 0 )
  {
    if ( *(_BYTE *)(v24 + 76) )
    {
      v28 = 0;
      while ( *(_BYTE *)(v28 + v25 + 76) != 92 )
      {
        if ( ++v28 >= v27 )
          goto LABEL_35;
      }
      v119 = 1280;
    }
    else
    {
      v119 = 64;
    }
    goto LABEL_440;
  }
  if ( (v27 & 1) != 0 )
  {
    v119 = 80;
LABEL_440:
    v73 = -1073741492;
    goto LABEL_441;
  }
  if ( !*(_WORD *)(v24 + 76) )
  {
    v119 = 96;
    goto LABEL_440;
  }
  v107 = v27 >> 1;
  v108 = 0;
  if ( v107 )
  {
    while ( *(_WORD *)(v24 + 2LL * v108 + 76) != 92 )
    {
      if ( ++v108 >= v107 )
        goto LABEL_35;
    }
    v119 = 1296;
    goto LABEL_440;
  }
LABEL_35:
  if ( *(_WORD *)v25 != 27502 )
  {
    v73 = -1073741492;
    v142 = 1;
    if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      v119 = 144;
      v109 = 1;
LABEL_442:
      SetFailureLocation(v7, v109, 14, v73, v119);
      goto LABEL_124;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 112);
    if ( !(unsigned __int8)HvpMarkCellDirty(a1, (unsigned int)v8) )
    {
      v73 = -1073741443;
      v119 = 128;
      goto LABEL_441;
    }
    *(_WORD *)v25 = 27502;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 144LL) & 2) == 0 && (*(_BYTE *)(v25 + 13) & 3) != 0 )
  {
    v73 = -1073741492;
    v142 = 1;
    if ( (a2 & 0x20000) == 0 && (CmpSelfHeal || (CmpBootType & 6) != 0) )
    {
      SetFailureLocation(a7, 1, 14, -1073741492, 146);
      if ( (unsigned __int8)HvpMarkCellDirty(a1, (unsigned int)v8) )
      {
        *(_BYTE *)(v25 + 13) &= 0xFCu;
        *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
        goto LABEL_38;
      }
      v73 = -1073741443;
      v119 = 150;
    }
    else
    {
      v119 = 148;
    }
LABEL_441:
    v109 = 0;
    goto LABEL_442;
  }
LABEL_38:
  if ( a4 == -1 )
  {
    if ( (*(_BYTE *)(v25 + 13) & 1) == 0 )
      goto LABEL_41;
    v73 = -1073741492;
    v142 = 1;
    if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      v119 = 492;
      goto LABEL_441;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 484);
    if ( !(unsigned __int8)HvpMarkCellDirty(a1, (unsigned int)v8) )
    {
      v73 = -1073741443;
      v119 = 488;
      goto LABEL_441;
    }
    *(_BYTE *)(v25 + 13) = *(_BYTE *)(v25 + 13) & 0xFC | 2;
  }
  else
  {
    v29 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, a4, v134);
    v30 = *(_BYTE *)(v25 + 13) & 3;
    if ( (*(_BYTE *)(v29 + 13) & 3) != 3 || v30 == 3 || v30 == 1 )
    {
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v134);
      goto LABEL_41;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v134);
    v73 = -1073741492;
    v142 = 1;
    if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      v119 = 156;
      goto LABEL_441;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 152);
    if ( !(unsigned __int8)HvpMarkCellDirty(a1, (unsigned int)v8) )
    {
      v73 = -1073741443;
      v119 = 154;
      goto LABEL_441;
    }
    *(_BYTE *)(v25 + 13) |= 3u;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
LABEL_41:
  v31 = *(unsigned __int16 *)(v25 + 74);
  v32 = *(_DWORD *)(v25 + 48);
  v33 = *(unsigned int *)(v25 + 40);
  v34 = *(_DWORD *)(v25 + 44);
  v135 = *(_DWORD *)(v25 + 36);
  if ( !v31 )
  {
    if ( v32 != -1 )
    {
      v73 = -1073741492;
      v142 = 1;
      if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 228);
        goto LABEL_124;
      }
      v35 = a7;
      SetFailureLocation(a7, 1, 14, -1073741492, 232);
      if ( !(unsigned __int8)HvpMarkCellDirty(a1, a3) )
      {
        v73 = -1073741443;
        SetFailureLocation(a7, 1, 14, -1073741443, 236);
        goto LABEL_124;
      }
      *(_DWORD *)(v25 + 48) = -1;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
      goto LABEL_44;
    }
    goto LABEL_43;
  }
  if ( v32 == -1 )
  {
    v73 = -1073741492;
    v142 = 1;
    if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 157);
      goto LABEL_124;
    }
    v35 = a7;
    SetFailureLocation(a7, 0, 14, -1073741492, 155);
    if ( !(unsigned __int8)HvpMarkCellDirty(a1, a3) )
    {
      v73 = -1073741443;
      SetFailureLocation(a7, 0, 14, -1073741443, 159);
      goto LABEL_124;
    }
    v31 = 0;
    *(_WORD *)(v25 + 74) = 0;
    goto LABEL_44;
  }
  if ( (*(_BYTE *)(v25 + 13) & 3) == 1 )
  {
    v120 = 158;
LABEL_260:
    v35 = a7;
    SetFailureLocation(a7, 1, 14, -1073741492, v120);
    goto LABEL_263;
  }
  if ( !(unsigned __int8)HvIsCellAllocated(a1, v32, BitMapHeader) )
  {
    v35 = a7;
LABEL_263:
    if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(v35, 0, 14, -1073741492, 192);
      v73 = -1073741492;
      goto LABEL_124;
    }
    SetFailureLocation(v35, 1, 14, -1073741492, 160);
    if ( !(unsigned __int8)HvpMarkCellDirty(a1, a3) )
    {
      v73 = -1073741443;
      SetFailureLocation(a7, 0, 14, -1073741443, 176);
      goto LABEL_124;
    }
    v142 = 1;
    *(_DWORD *)(v25 + 48) = -1;
    *(_WORD *)(v25 + 74) = 0;
    v31 = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
    goto LABEL_44;
  }
  v91 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, v32, v141);
  if ( !v91 )
  {
    v73 = -1073741670;
    SetFailureLocation(a7, 0, 14, -1073741670, 208);
    goto LABEL_124;
  }
  v92 = v31 <= -4 - *(_DWORD *)(v91 - 4);
  v93 = *(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16);
  if ( !v92 )
  {
    v93(a1, v141);
    v120 = 224;
    goto LABEL_260;
  }
  v93(a1, v141);
LABEL_43:
  v35 = a7;
LABEL_44:
  if ( v34 == -1 )
  {
    SetFailureLocation(v35, 1, 14, -1073741492, 256);
    goto LABEL_282;
  }
  v36 = a4;
  v37 = a2;
  if ( a4 == -1 )
    goto LABEL_199;
  if ( (a2 & 0x20000) == 0 && (CmpSelfHeal || (CmpBootType & 6) != 0) && a5 )
    goto LABEL_283;
LABEL_49:
  if ( v36 == -1 )
  {
LABEL_199:
    v106 = *(_WORD *)(v25 + 2);
    if ( (v106 & 0x50) != 0 )
    {
      v73 = -1073741492;
      SetFailureLocation(a7, 0, 14, -1073741492, 432);
      goto LABEL_122;
    }
    if ( (v106 & 2) == 0 )
      goto LABEL_57;
    v142 = 1;
    v73 = -1073741492;
    if ( (v37 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 480);
      goto LABEL_122;
    }
    v35 = a7;
    SetFailureLocation(a7, 1, 14, -1073741492, 448);
    if ( !(unsigned __int8)HvpMarkCellDirty(a1, a3) )
    {
      v73 = -1073741443;
      SetFailureLocation(a7, 0, 14, -1073741443, 464);
      goto LABEL_122;
    }
    v114 = -3;
    goto LABEL_320;
  }
  if ( *(_DWORD *)(v25 + 16) != v36 )
  {
    v142 = 1;
    v73 = -1073741492;
    if ( (v37 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 352);
      goto LABEL_122;
    }
    v35 = a7;
    SetFailureLocation(a7, 1, 14, -1073741492, 320);
    if ( !(unsigned __int8)HvpMarkCellDirty(a1, a3) )
    {
      v73 = -1073741443;
      SetFailureLocation(a7, 0, 14, -1073741443, 336);
      goto LABEL_122;
    }
    v36 = a4;
    *(_DWORD *)(v25 + 16) = a4;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
  }
  v38 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, v36, v134);
  v39 = v38;
  if ( !v38 )
  {
    v73 = -1073741670;
    SetFailureLocation(a7, 0, 14, -1073741670, 368);
    goto LABEL_122;
  }
  v40 = *(_WORD *)(v25 + 72);
  if ( (*(_BYTE *)(v25 + 2) & 0x20) != 0 )
    v40 *= 2;
  if ( (unsigned __int16)*(_DWORD *)(v38 + 52) < (unsigned int)v40 )
  {
    v73 = -1073741492;
    v142 = 1;
    if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 370);
      goto LABEL_330;
    }
    v35 = a7;
    SetFailureLocation(a7, 1, 14, -1073741492, 372);
    if ( !(unsigned __int8)HvpMarkCellDirty(a1, a4) )
    {
      v121 = 374;
      v115 = 1;
LABEL_327:
      v73 = -1073741443;
LABEL_329:
      SetFailureLocation(a7, v115, 14, v73, v121);
LABEL_330:
      v116 = v134;
      goto LABEL_434;
    }
    if ( (*(_BYTE *)(v25 + 2) & 0x20) != 0 )
      v113 = 2 * *(_WORD *)(v25 + 72);
    else
      v113 = *(_WORD *)(v25 + 72);
    *(_WORD *)(v39 + 52) = v113;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
  }
  if ( *(_DWORD *)(v39 + 56) >= v31 )
    goto LABEL_56;
  v73 = -1073741492;
  v142 = 1;
  if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
  {
    v121 = 376;
    v115 = 0;
    goto LABEL_329;
  }
  v35 = a7;
  SetFailureLocation(a7, 1, 14, -1073741492, 378);
  if ( !(unsigned __int8)HvpMarkCellDirty(a1, a4) )
  {
    v121 = 380;
    v115 = 0;
    goto LABEL_327;
  }
  *(_DWORD *)(v39 + 56) = v31;
  *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
LABEL_56:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v134);
  if ( (*(_BYTE *)(v25 + 2) & 0xE) != 0 )
  {
    v73 = -1073741492;
    v142 = 1;
    if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 416);
      goto LABEL_122;
    }
    v35 = a7;
    SetFailureLocation(a7, 1, 14, -1073741492, 384);
    if ( !(unsigned __int8)HvpMarkCellDirty(a1, a3) )
    {
      v73 = -1073741443;
      SetFailureLocation(a7, 0, 14, -1073741443, 400);
      goto LABEL_122;
    }
    v114 = -15;
LABEL_320:
    *(_WORD *)(v25 + 2) &= v114;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
  }
LABEL_57:
  v41 = *(_DWORD *)(a1 + 3040);
  v42 = *(_DWORD *)(v25 + 44);
  v43 = 0;
  if ( !v41 )
    goto LABEL_281;
  v44 = 0;
  v45 = v41 - 1;
  v46 = *(_DWORD *)(a1 + 3048);
  if ( (v46 & 0x80000000) != 0 || v46 > v45 )
    v46 = v45 >> 1;
  v47 = v42 & 0x7FFFFFFF;
  if ( v42 < 0 )
    v47 = -v47;
  v48 = *(_QWORD *)(a1 + 3056);
  while ( 1 )
  {
    v49 = *(_DWORD *)(v48 + 16LL * v46) & 0x7FFFFFFF;
    if ( *(int *)(v48 + 16LL * v46) < 0 )
      v49 = -v49;
    v50 = v47 - v49;
    if ( v47 == v49 )
      break;
    if ( v43 )
    {
      if ( v43 == 1 )
      {
        if ( v50 < 0 || v44 == v45 )
        {
LABEL_280:
          v35 = a7;
LABEL_281:
          SetFailureLocation(v35, 1, 14, -1073741492, 496);
LABEL_282:
          v37 = a2;
          v36 = a4;
LABEL_283:
          if ( (v37 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
          {
            SetFailureLocation(v35, 0, 14, -1073741492, 304);
            v73 = -1073741492;
            goto LABEL_122;
          }
          v138[0] = -1;
          v138[1] = 0;
          v132 = -1;
          v133 = 0;
          if ( v36 == -1 )
          {
            v73 = -1073741492;
            SetFailureLocation(a7, 0, 14, -1073741492, 272);
            goto LABEL_122;
          }
          v110 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, v36, v138);
          v111 = v110;
          if ( !v110 )
          {
            v73 = -1073741670;
            SetFailureLocation(a7, 0, 14, -1073741670, 276);
            goto LABEL_122;
          }
          v112 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a1 + 8))(a1, *(unsigned int *)(v110 + 44), &v132);
          if ( v112 )
          {
            if ( (unsigned __int8)HvpMarkCellDirty(a1, a3) )
            {
              if ( (unsigned __int8)HvpMarkCellDirty(a1, *(unsigned int *)(v111 + 44)) )
              {
                *(_DWORD *)(v25 + 44) = *(_DWORD *)(v111 + 44);
                ++*(_DWORD *)(v112 + 12);
                *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
                (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v132);
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v138);
                v35 = a7;
                v36 = a4;
                v37 = a2;
                v142 = 1;
                goto LABEL_49;
              }
              v73 = -1073741443;
              SetFailureLocation(a7, 0, 14, -1073741443, 288);
              (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v132);
            }
            else
            {
              v73 = -1073741443;
              SetFailureLocation(a7, 0, 14, -1073741443, 284);
              (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v132);
            }
          }
          else
          {
            v73 = -1073741670;
            SetFailureLocation(a7, 0, 14, -1073741670, 280);
          }
          v116 = v138;
LABEL_434:
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v116);
          goto LABEL_122;
        }
        v43 = 2;
        v46 = v45;
      }
      else if ( v43 == 2 )
      {
        goto LABEL_280;
      }
    }
    else
    {
      if ( v50 >= 0 )
        v44 = v46;
      else
        v45 = v46;
      if ( v45 - v44 <= 1 )
      {
        v46 = v44;
        v43 = 1;
      }
      else
      {
        v46 = v44 + ((v45 - v44) >> 1);
      }
    }
  }
  v51 = *(_QWORD *)(a1 + 3056);
  *(_DWORD *)(a1 + 3048) = v46;
  v52 = *(_QWORD *)(v51 + 16LL * v46 + 8);
  ++*(_DWORD *)(v52 + 28);
  v53 = *(_WORD *)(v25 + 2);
  if ( (v53 & 0x40) == 0 )
  {
    v54 = v135;
    if ( !v135 )
    {
      v7 = a7;
      v68 = -1;
      v72 = a3;
      goto LABEL_97;
    }
    if ( (*(_BYTE *)(v25 + 13) & 3) == 1 )
    {
      v122 = 504;
LABEL_339:
      v7 = a7;
      v73 = -1073741492;
      SetFailureLocation(a7, 1, 14, -1073741492, v122);
      v68 = -1;
      goto LABEL_341;
    }
    HvpGetCellContextReinitialize((__int64)v138);
    HvpGetBinContextInitialize(v127);
    if ( (*(_BYTE *)(a1 + 124) & 1) != 0 )
    {
LABEL_91:
      v133 = 0;
      v68 = -1;
      v69 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a1 + 8);
      v132 = -1;
      v70 = v69(a1, (unsigned int)v33, &v132);
      if ( !v70 )
      {
        v73 = -1073741670;
        SetFailureLocation(a7, 0, 14, -1073741670, 528);
        goto LABEL_122;
      }
      v71 = 4LL * v54;
      if ( v71 <= 0xFFFFFFFF && (unsigned int)v71 <= -4 - *(_DWORD *)(v70 - 4) )
      {
        v7 = a7;
        v72 = a3;
        v73 = CmpCheckValueList(a1, (*(_BYTE *)(v25 + 2) & 0x10) != 0, v70, v54, a3, a2, BitMapHeader, a7, &v137, &v136);
        (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v132);
        if ( v73 == -2147483606 )
        {
          v128 = v136;
          v129 = v137;
          v142 = 1;
          goto LABEL_97;
        }
        if ( v73 >= 0 )
        {
          v128 = v136;
          v129 = v137;
LABEL_97:
          v74 = a2;
          while ( 1 )
          {
            if ( *(_DWORD *)(v25 + 36) )
              goto LABEL_99;
            if ( *(_DWORD *)(v25 + 40) == -1 )
              break;
            v73 = -1073741492;
            SetFailureLocation(v7, 1, 14, -1073741492, 608);
LABEL_351:
            if ( (v74 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
            {
              SetFailureLocation(v7, 0, 14, v73, 592);
              goto LABEL_122;
            }
            if ( !(unsigned __int8)HvpMarkCellDirty(a1, v72) )
            {
              v123 = 576;
              goto LABEL_358;
            }
            *(_DWORD *)(v25 + 40) = -1;
            *(_DWORD *)(v25 + 36) = 0;
            v142 = 1;
            *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
          }
          if ( *(_DWORD *)(v25 + 36) )
          {
LABEL_99:
            v75 = v129;
            v76 = v128;
          }
          else
          {
            v75 = 0;
            v129 = 0;
            v76 = 0;
            v128 = 0;
          }
          if ( *(_DWORD *)(v25 + 60) < v75 )
          {
            v142 = 1;
            v73 = -1073741492;
            if ( (v74 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
            {
              v123 = 610;
              goto LABEL_359;
            }
            if ( !(unsigned __int8)HvpMarkCellDirty(a1, v72) )
            {
              v123 = 612;
              goto LABEL_358;
            }
            v75 = v129;
            *(_DWORD *)(v25 + 60) = v129;
            *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
            v76 = v128;
          }
          if ( *(_DWORD *)(v25 + 64) >= v76 )
            goto LABEL_102;
          v142 = 1;
          v73 = -1073741492;
          if ( (v74 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
          {
            v123 = 614;
            goto LABEL_359;
          }
          if ( (unsigned __int8)HvpMarkCellDirty(a1, v72) )
          {
            v75 = v129;
            *(_DWORD *)(v25 + 64) = v128;
            *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
LABEL_102:
            if ( (v74 & 0x20000) == 0 )
            {
              if ( *(_DWORD *)(v25 + 60) != v75 && (unsigned __int8)HvpMarkCellDirty(a1, v72) )
                *(_DWORD *)(v25 + 60) = v75;
              v77 = v128;
              if ( *(_DWORD *)(v25 + 64) != v128 && (unsigned __int8)HvpMarkCellDirty(a1, v72) )
                *(_DWORD *)(v25 + 64) = v77;
            }
            goto LABEL_105;
          }
          v123 = 616;
LABEL_358:
          v73 = -1073741443;
          goto LABEL_359;
        }
        if ( v73 != -1073741492 )
          goto LABEL_122;
        if ( a7 )
          *(_QWORD *)(a7 + 248) = v70;
        SetFailureLocation(a7, 1, 14, -1073741492, 560);
        v128 = v136;
        v129 = v137;
LABEL_343:
        v74 = a2;
        goto LABEL_351;
      }
      (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v132);
      v7 = a7;
      v73 = -1073741492;
      SetFailureLocation(a7, 1, 14, -1073741492, 544);
LABEL_341:
      v72 = a3;
      goto LABEL_343;
    }
    v55 = (unsigned int)v33 >> 31;
    if ( (v33 & 0x7FFFFFFF) < *(_DWORD *)(632LL * ((unsigned int)v33 >> 31) + a1 + 1400) && (v33 & 7) == 0 )
    {
      if ( !BitMapHeader || (v33 & 0x80000000) != 0LL )
        goto LABEL_76;
      if ( _bittest64((const signed __int64 *)BitMapHeader->Buffer, (unsigned int)v33 >> 3) )
      {
        RtlClearBits(BitMapHeader, (unsigned int)v33 >> 3, 1u);
LABEL_76:
        v56 = 632LL * v55;
        if ( (unsigned int)v33 + (v55 << 31) < *(_DWORD *)(v56 + a1 + 1400) )
        {
          v57 = *(_QWORD *)(*(_QWORD *)(v56 + a1 + 1408) + 8 * ((v33 >> 21) & 0x3FF));
          v58 = (struct _EX_RUNDOWN_REF *)(v57 + 40 * ((v33 >> 12) & 0x1FF));
          if ( v58 )
          {
            if ( !HvpMapEntryIsDiscardable(v57 + 40 * ((v33 >> 12) & 0x1FF)) )
            {
              v59 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, (unsigned int)v33, v138);
              if ( !v59 )
                goto LABEL_90;
              v61 = (int *)(v59 - 4);
              if ( v59 == 4 )
                goto LABEL_90;
              v63 = HvpMapEntryGetBinAddress(v60, v58, v127);
              v64 = (_DWORD)v61 - v63;
              v65 = -*v61;
              v67 = 0;
              if ( *v61 < 0 && v65 - 8 <= 0xFFFF8 )
              {
                v66 = *(unsigned int *)(v63 + 8);
                v62 = v66 - 32;
                if ( v65 <= (unsigned __int64)(v66 - 32) && v64 - *v61 <= (unsigned int)v66 && v64 >= 0x20 )
                  v67 = 1;
              }
              if ( v63 )
                HvpMapEntryReleaseBinAddress(v62, v58, v127);
              HvpReleaseHCell(a1);
              if ( v67 )
              {
LABEL_90:
                v54 = v135;
                goto LABEL_91;
              }
            }
          }
        }
      }
    }
    v122 = 512;
    goto LABEL_339;
  }
  v74 = a2;
  if ( (v53 & 0x1E) != 0 )
  {
    v142 = 1;
    v73 = -1073741492;
    if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 656);
      goto LABEL_122;
    }
    v72 = a3;
    if ( !(unsigned __int8)HvpMarkCellDirty(a1, a3) )
    {
      v73 = -1073741443;
      SetFailureLocation(a7, 0, 14, -1073741443, 640);
      goto LABEL_122;
    }
    *(_WORD *)(v25 + 2) &= 0xFFE1u;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
  }
  else
  {
    v72 = a3;
  }
  if ( *(int *)(v25 + 36) >= 0 )
  {
    v73 = -1073741492;
    SetFailureLocation(a7, 0, 14, -1073741492, 672);
    goto LABEL_122;
  }
  v7 = a7;
  v68 = -1;
LABEL_105:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v140);
  v78 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, v72, v140);
  v25 = v78;
  if ( !v78 )
  {
    v73 = -1073741670;
    v123 = 688;
    goto LABEL_359;
  }
  if ( v7 )
    *(_QWORD *)(v7 + 248) = v78;
  if ( v72 >= 0x80000000 )
  {
    if ( !*(_DWORD *)(v78 + 20) )
      goto LABEL_110;
    v73 = -1073741492;
    v123 = 704;
LABEL_359:
    v117 = v7;
LABEL_361:
    SetFailureLocation(v117, 0, 14, v73, v123);
    goto LABEL_122;
  }
  if ( !*(_DWORD *)(v78 + 20) )
  {
LABEL_110:
    v79 = v142;
    goto LABEL_111;
  }
  if ( (*(_BYTE *)(v78 + 13) & 3) == 1 )
  {
    v73 = -1073741492;
    SetFailureLocation(v7, 1, 14, -1073741492, 712);
    goto LABEL_417;
  }
  if ( !(unsigned __int8)HvIsCellAllocated(a1, *(unsigned int *)(v78 + 28), BitMapHeader) )
  {
    v73 = -1073741492;
    SetFailureLocation(v7, 1, 14, -1073741492, 720);
    goto LABEL_417;
  }
  v82 = (__int16 *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(
                     a1,
                     *(unsigned int *)(v25 + 28),
                     v131);
  v130 = v82;
  v83 = v82;
  if ( !v82 )
  {
    v73 = -1073741670;
    v119 = 736;
    goto LABEL_441;
  }
  v84 = -4 - *((_DWORD *)v82 - 1);
  if ( v84 < 8
    || ((v85 = *v82, ((*v82 - 26220) & 0xFDFF) != 0) ? (v86 = 4LL) : (v86 = 8LL),
        (v87 = (unsigned __int16)v83[1], (unsigned __int64)(v87 * v86 + 4) < 4)
     || (((v85 - 26220) & 0xFDFF) != 0 ? (v88 = 4LL) : (v88 = 8LL), v87 * v88 + 4 > (unsigned __int64)v84)) )
  {
    v73 = -1073741492;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v131);
    v124 = 752;
LABEL_415:
    v130 = 0LL;
    SetFailureLocation(v7, 1, 14, -1073741492, v124);
    goto LABEL_417;
  }
  if ( !(_WORD)v87 )
  {
    v73 = -1073741492;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v131);
    v124 = 784;
    goto LABEL_415;
  }
  if ( v7 )
    *(_QWORD *)(v7 + 256) = v83;
  v89 = *v83;
  if ( ((*v83 - 26220) & 0xFCFF) != 0 || v89 == 26476 )
  {
    if ( v89 != 26994 )
    {
      v73 = -1073741492;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v131);
      v125 = 992;
      goto LABEL_401;
    }
  }
  else if ( v89 != 26994 )
  {
    if ( (unsigned __int16)v83[1] == *(_DWORD *)(v25 + 20) )
    {
      v74 = a2;
      v90 = CmpCheckLeaf(a1, a2, v83, *(_DWORD *)(v25 + 28), v7);
      v73 = v90;
      if ( v90 == -2147483606 )
      {
        v142 = 1;
        goto LABEL_152;
      }
      if ( v90 >= 0 )
      {
LABEL_152:
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v131);
        v68 = -1;
        v130 = 0LL;
        goto LABEL_110;
      }
      if ( v90 != -1073741492 )
        goto LABEL_122;
      SetFailureLocation(v7, 1, 14, -1073741492, 832);
LABEL_417:
      if ( (v74 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
        goto LABEL_425;
      SetFailureLocation(v7, 1, 14, v73, 1008);
      if ( !(unsigned __int8)HvpMarkCellDirty(a1, v72) )
      {
        v73 = -1073741443;
        SetFailureLocation(v7, 0, 14, -1073741443, 1024);
        goto LABEL_122;
      }
      *(_DWORD *)(v25 + 28) = -1;
      *(_DWORD *)(v25 + 20) = 0;
      v79 = 1;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
LABEL_111:
      v80 = *(_DWORD *)(v25 + 32) != -1 || *(_DWORD *)(v25 + 24);
      if ( (v74 & 0x40000) == 0 || !v80 )
      {
        v118 = (v74 & 2) != 0;
        if ( (v74 & 0xD) != 0 && v80 )
          v118 = 1;
        if ( (v74 & 8) != 0 && *(_DWORD *)(a1 + 196) < 4u || v118 )
        {
          if ( !(unsigned __int8)HvpMarkCellDirty(a1, v72) )
          {
            v73 = -1073741443;
            SetFailureLocation(v7, 0, 14, -1073741443, 1056);
            goto LABEL_122;
          }
          *(_DWORD *)(v25 + 24) = 0;
          if ( (v74 & 4) != 0 && *(_DWORD *)(a1 + 196) >= 4u )
            v68 = -1163005939;
          *(_DWORD *)(v25 + 32) = v68;
        }
        if ( v79 )
          v73 = -2147483606;
        else
          v73 = 0;
        goto LABEL_122;
      }
      v73 = -1073741492;
LABEL_425:
      SetFailureLocation(v7, 0, 14, v73, 1040);
      goto LABEL_122;
    }
    v73 = -1073741492;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v131);
    v125 = 816;
LABEL_401:
    v130 = 0LL;
    SetFailureLocation(v7, 1, 14, -1073741492, v125);
LABEL_404:
    v74 = a2;
    goto LABEL_417;
  }
  v94 = v83[1] != 0;
  v95 = 0;
  for ( i = 0; ; v94 = i < (unsigned __int16)v130[1] )
  {
    if ( !v94 )
    {
      if ( *(_DWORD *)(v25 + 20) == v95 )
      {
        v72 = a3;
        v74 = a2;
        goto LABEL_152;
      }
      v73 = -1073741492;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v131);
      v126 = 960;
      goto LABEL_403;
    }
    if ( v7 )
      *(_DWORD *)(v7 + 264) = i;
    v97 = &v83[2 * i];
    if ( !(unsigned __int8)HvIsCellAllocated(a1, *((unsigned int *)v97 + 1), BitMapHeader) )
    {
      v73 = -1073741492;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v131);
      v126 = 848;
LABEL_403:
      v130 = 0LL;
      SetFailureLocation(v7, 1, 14, v73, v126);
      v72 = a3;
      v68 = -1;
      goto LABEL_404;
    }
    v98 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(
                     a1,
                     *((unsigned int *)v97 + 1),
                     v139);
    v99 = v98;
    if ( !v98 )
    {
      v117 = a7;
      v73 = -1073741670;
      v123 = 864;
      goto LABEL_361;
    }
    v100 = -4 - *((_DWORD *)v98 - 1);
    if ( v100 < 8
      || ((v101 = *v98, ((*v98 - 26220) & 0xFDFF) != 0) ? (v102 = 4LL) : (v102 = 8LL),
          (v103 = (unsigned __int16)v99[1], (unsigned __int64)(v103 * v102 + 4) < 4)
       || (((v101 - 26220) & 0xFDFF) != 0 ? (v104 = 4LL) : (v104 = 8LL), v103 * v104 + 4 > (unsigned __int64)v100)) )
    {
      v73 = -1073741492;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v139);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v131);
      v7 = a7;
      v126 = 880;
      goto LABEL_403;
    }
    if ( !(_WORD)v103 )
    {
      v73 = -1073741492;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v139);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v131);
      v7 = a7;
      v126 = 912;
      goto LABEL_403;
    }
    if ( ((v101 - 26220) & 0xFCFF) != 0 || v101 == 26476 )
    {
      v73 = -1073741492;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v139);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v131);
      v7 = a7;
      v126 = 944;
      goto LABEL_403;
    }
    v105 = CmpCheckLeaf(a1, a2, v99, *((_DWORD *)v97 + 1), a7);
    v73 = v105;
    if ( v105 != -2147483606 )
      break;
    v142 = 1;
LABEL_192:
    v95 += (unsigned __int16)v99[1];
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v139);
    v83 = v130;
    ++i;
    v7 = a7;
  }
  if ( v105 >= 0 )
    goto LABEL_192;
  if ( v105 == -1073741492 )
  {
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v139);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v131);
    v7 = a7;
    v126 = 952;
    goto LABEL_403;
  }
LABEL_122:
  if ( v130 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v131);
LABEL_124:
  if ( v25 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v140);
  return (unsigned int)v73;
}
