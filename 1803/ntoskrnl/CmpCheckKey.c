/*
 * XREFs of CmpCheckKey @ 0x14059FAB0
 * Callers:
 *     CmpCheckRegistry2 @ 0x1405A07D0 (CmpCheckRegistry2.c)
 * Callees:
 *     RtlClearBits @ 0x140072BD0 (RtlClearBits.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     SetFailureLocation @ 0x140221604 (SetFailureLocation.c)
 *     HvpMarkCellDirty @ 0x1404E3EC4 (HvpMarkCellDirty.c)
 *     HvIsCellAllocated @ 0x140516230 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x1405163C0 (CmpCheckValueList.c)
 *     CmpCheckLeaf @ 0x1405500E0 (CmpCheckLeaf.c)
 */

__int64 __fastcall CmpCheckKey(
        ULONG_PTR BugCheckParameter2,
        int a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        PRTL_BITMAP BitMapHeader,
        __int64 a7)
{
  unsigned __int64 v7; // r12
  __int64 v10; // rsi
  unsigned int v11; // ecx
  __int64 v12; // rbx
  __int64 v13; // rax
  int *v14; // rax
  int v15; // r8d
  int v16; // eax
  unsigned int v17; // r8d
  unsigned int v18; // edx
  __int64 v19; // r9
  bool v20; // bl
  __int64 v21; // rax
  __int64 v22; // rbx
  unsigned int v23; // ecx
  unsigned int v24; // edx
  unsigned int v25; // eax
  unsigned int v26; // r12d
  unsigned int v27; // esi
  unsigned __int64 v28; // r15
  int v29; // r14d
  __int64 v30; // rsi
  unsigned int v31; // ecx
  int v32; // edx
  __int64 v33; // rax
  __int64 v34; // r14
  unsigned __int16 v35; // dx
  int v36; // eax
  int v37; // ecx
  __int16 v38; // r14
  unsigned int v39; // r11d
  unsigned int v40; // r9d
  unsigned int v41; // edx
  int v42; // r10d
  __int64 v43; // rsi
  int v44; // eax
  int v45; // ecx
  __int16 v46; // ax
  unsigned int v47; // esi
  int v48; // r12d
  bool v49; // zf
  __int64 v50; // r14
  unsigned int v51; // ecx
  __int64 v52; // rsi
  __int64 v53; // rax
  int *v54; // rax
  int v55; // r8d
  int v56; // eax
  unsigned int v57; // r8d
  unsigned int v58; // edx
  __int64 v59; // r9
  bool v60; // si
  __int64 v61; // r14
  unsigned __int64 v62; // rax
  __int64 v63; // r13
  unsigned int v64; // r15d
  int v65; // esi
  int v66; // r14d
  unsigned int v67; // esi
  unsigned int v68; // eax
  __int64 v69; // rax
  char v70; // si
  bool v71; // cl
  unsigned int v73; // edx
  __int16 *v74; // rax
  __int16 *v75; // r10
  unsigned int v76; // r8d
  __int16 v77; // dx
  int v78; // eax
  int v79; // r9d
  int v80; // eax
  unsigned __int16 v81; // ax
  int v82; // eax
  __int16 v83; // ax
  __int64 v84; // rax
  bool v85; // cc
  void (__fastcall *v86)(ULONG_PTR, _DWORD *); // rax
  int v87; // r12d
  int v88; // r15d
  __int16 *v89; // rsi
  _WORD *v90; // rax
  _WORD *v91; // r14
  unsigned int v92; // edx
  __int16 v93; // r8
  int v94; // eax
  int v95; // r9d
  int v96; // eax
  int v97; // eax
  unsigned int v98; // edx
  unsigned int v99; // ecx
  int v100; // edx
  __int64 v101; // rax
  __int64 v102; // rsi
  __int64 v103; // r14
  __int16 v104; // cx
  __int16 v105; // ax
  int v106; // edx
  int *v107; // rdx
  __int64 v108; // rcx
  int v109; // eax
  bool v110; // al
  int v111; // [rsp+20h] [rbp-91h]
  int v112; // [rsp+20h] [rbp-91h]
  int v113; // [rsp+20h] [rbp-91h]
  int v114; // [rsp+20h] [rbp-91h]
  int v115; // [rsp+20h] [rbp-91h]
  __int64 v116; // [rsp+50h] [rbp-61h]
  __int64 v117; // [rsp+58h] [rbp-59h] BYREF
  __int16 *v118; // [rsp+60h] [rbp-51h]
  _DWORD v119[2]; // [rsp+68h] [rbp-49h] BYREF
  int v120; // [rsp+70h] [rbp-41h] BYREF
  int v121; // [rsp+74h] [rbp-3Dh]
  _DWORD v122[2]; // [rsp+78h] [rbp-39h] BYREF
  unsigned int v123; // [rsp+80h] [rbp-31h]
  __int64 v124; // [rsp+84h] [rbp-2Dh] BYREF
  _DWORD v125[2]; // [rsp+90h] [rbp-21h] BYREF
  _DWORD v126[2]; // [rsp+98h] [rbp-19h] BYREF
  _DWORD v127[6]; // [rsp+A0h] [rbp-11h] BYREF
  char v128; // [rsp+100h] [rbp+4Fh]

  v7 = a3;
  v125[0] = -1;
  v125[1] = 0;
  v116 = 0LL;
  v124 = 0LL;
  v126[0] = -1;
  v126[1] = 0;
  v122[0] = -1;
  v122[1] = 0;
  v119[0] = -1;
  v119[1] = 0;
  v127[0] = -1;
  v127[1] = 0;
  v128 = 0;
  v118 = 0LL;
  if ( a7 )
  {
    *(_DWORD *)(a7 + 240) = a3;
    *(_QWORD *)(a7 + 248) = 0LL;
    *(_QWORD *)(a7 + 256) = 0LL;
    *(_DWORD *)(a7 + 264) = -1;
  }
  v117 = 0xFFFFFFFFLL;
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) == 0 )
  {
    v10 = 632LL * (a3 >> 31);
    v11 = *(_DWORD *)(v10 + BugCheckParameter2 + 272);
    if ( (a3 & 0x7FFFFFFF) >= v11 || (a3 & 7) != 0 )
      goto LABEL_212;
    if ( BitMapHeader && (a3 & 0x80000000) == 0 )
    {
      if ( !_bittest64((const signed __int64 *)BitMapHeader->Buffer, a3 >> 3) )
        goto LABEL_212;
      RtlClearBits(BitMapHeader, a3 >> 3, 1u);
      v11 = *(_DWORD *)(v10 + BugCheckParameter2 + 272);
    }
    if ( (unsigned int)v7 + ((unsigned int)v7 >> 31 << 31) < v11 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(v10 + BugCheckParameter2 + 280) + 8 * ((v7 >> 21) & 0x3FF))
          + 24 * ((v7 >> 12) & 0x1FF);
      if ( v12 )
      {
        if ( (*(_BYTE *)(v12 + 8) & 2) == 0 )
        {
          v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  (unsigned int)v7,
                  &v117);
          if ( !v13 )
            goto LABEL_22;
          v14 = (int *)(v13 - 4);
          if ( !v14 )
            goto LABEL_22;
          v15 = (int)v14;
          v16 = *v14;
          v17 = v15 - (*(_DWORD *)(v12 + 8) & 0xFFFFFFF0);
          v18 = -v16;
          v20 = 0;
          if ( v16 < 0 && v18 - 8 <= 0xFFFF8 )
          {
            v19 = *(unsigned int *)((*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0uLL) + 8);
            if ( v18 <= (unsigned __int64)(v19 - 32) && v17 - v16 <= (unsigned int)v19 && v17 >= 0x20 )
              v20 = 1;
          }
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v117);
          if ( v20 )
            goto LABEL_22;
        }
      }
    }
LABEL_212:
    SetFailureLocation(a7, 0, 14, -1073741492, 0);
    return 3221225804LL;
  }
LABEL_22:
  v21 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          (unsigned int)v7,
          v126);
  v22 = v21;
  if ( !v21 )
  {
    SetFailureLocation(a7, 0, 14, -1073741670, 16);
    return 3221225626LL;
  }
  if ( a7 )
    *(_QWORD *)(a7 + 248) = v21;
  v23 = -4 - *(_DWORD *)(v21 - 4);
  if ( v23 - 76 > 0x410 )
  {
    v111 = 32;
    goto LABEL_429;
  }
  v24 = *(unsigned __int16 *)(v21 + 72);
  if ( !(_WORD)v24 || v24 + 76 > v23 )
  {
    v111 = 48;
    goto LABEL_429;
  }
  if ( (*(_BYTE *)(v21 + 2) & 0x20) != 0 )
  {
    if ( *(_BYTE *)(v21 + 76) )
    {
      v25 = 0;
      while ( *(_BYTE *)(v25 + v22 + 76) != 92 )
      {
        if ( ++v25 >= v24 )
          goto LABEL_33;
      }
      v111 = 1280;
    }
    else
    {
      v111 = 64;
    }
    goto LABEL_429;
  }
  if ( (v24 & 1) != 0 )
  {
    v111 = 80;
LABEL_429:
    v65 = -1073741492;
    goto LABEL_430;
  }
  if ( !*(_WORD *)(v21 + 76) )
  {
    v111 = 96;
    goto LABEL_429;
  }
  v98 = v24 >> 1;
  v99 = 0;
  if ( v98 )
  {
    while ( *(_WORD *)(v21 + 2LL * v99 + 76) != 92 )
    {
      if ( ++v99 >= v98 )
        goto LABEL_33;
    }
    v111 = 1296;
    goto LABEL_429;
  }
LABEL_33:
  if ( *(_WORD *)v22 != 27502 )
  {
    v65 = -1073741492;
    v128 = 1;
    if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      v111 = 144;
      v100 = 1;
LABEL_431:
      SetFailureLocation(a7, v100, 14, v65, v111);
      goto LABEL_120;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 112);
    if ( !HvpMarkCellDirty(BugCheckParameter2, (unsigned int)v7, 0) )
    {
      v65 = -1073741443;
      v111 = 128;
      goto LABEL_430;
    }
    *(_WORD *)v22 = 27502;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) & 2) == 0 && (*(_BYTE *)(v22 + 13) & 3) != 0 )
  {
    v65 = -1073741492;
    v128 = 1;
    if ( (a2 & 0x20000) == 0 && (CmpSelfHeal || (CmpBootType & 6) != 0) )
    {
      SetFailureLocation(a7, 1, 14, -1073741492, 146);
      if ( HvpMarkCellDirty(BugCheckParameter2, (unsigned int)v7, 0) )
      {
        *(_BYTE *)(v22 + 13) &= 0xFCu;
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
        goto LABEL_36;
      }
      v65 = -1073741443;
      v111 = 150;
    }
    else
    {
      v111 = 148;
    }
LABEL_430:
    v100 = 0;
    goto LABEL_431;
  }
LABEL_36:
  if ( a4 == -1 )
  {
    if ( (*(_BYTE *)(v22 + 13) & 1) == 0 )
      goto LABEL_39;
    v65 = -1073741492;
    v128 = 1;
    if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      v111 = 492;
      goto LABEL_430;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 484);
    if ( !HvpMarkCellDirty(BugCheckParameter2, (unsigned int)v7, 0) )
    {
      v65 = -1073741443;
      v111 = 488;
      goto LABEL_430;
    }
    *(_BYTE *)(v22 + 13) = *(_BYTE *)(v22 + 13) & 0xFC | 2;
  }
  else
  {
    if ( (*(_BYTE *)((*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                       BugCheckParameter2,
                       a4,
                       v122)
                   + 13) & 3) != 3
      || (((*(_BYTE *)(v22 + 13) & 3) - 1) & 0xFD) == 0 )
    {
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v122);
      goto LABEL_39;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v122);
    v65 = -1073741492;
    v128 = 1;
    if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      v111 = 156;
      goto LABEL_430;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 152);
    if ( !HvpMarkCellDirty(BugCheckParameter2, (unsigned int)v7, 0) )
    {
      v65 = -1073741443;
      v111 = 154;
      goto LABEL_430;
    }
    *(_BYTE *)(v22 + 13) |= 3u;
  }
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
LABEL_39:
  v26 = *(unsigned __int16 *)(v22 + 74);
  v27 = *(_DWORD *)(v22 + 48);
  v28 = *(unsigned int *)(v22 + 40);
  v29 = *(_DWORD *)(v22 + 44);
  v123 = *(_DWORD *)(v22 + 36);
  if ( !v26 )
  {
    if ( v27 != -1 )
    {
      v65 = -1073741492;
      v128 = 1;
      if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 228);
        goto LABEL_120;
      }
      v30 = a7;
      SetFailureLocation(a7, 1, 14, -1073741492, 232);
      if ( !HvpMarkCellDirty(BugCheckParameter2, a3, 0) )
      {
        v65 = -1073741443;
        SetFailureLocation(a7, 1, 14, -1073741443, 236);
        goto LABEL_120;
      }
      *(_DWORD *)(v22 + 48) = -1;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
      goto LABEL_42;
    }
    goto LABEL_41;
  }
  if ( v27 == -1 )
  {
    v65 = -1073741492;
    v128 = 1;
    if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 157);
      goto LABEL_120;
    }
    v30 = a7;
    SetFailureLocation(a7, 0, 14, -1073741492, 155);
    if ( !HvpMarkCellDirty(BugCheckParameter2, a3, 0) )
    {
      v65 = -1073741443;
      SetFailureLocation(a7, 0, 14, -1073741443, 159);
      goto LABEL_120;
    }
    v26 = 0;
    *(_WORD *)(v22 + 74) = 0;
    goto LABEL_42;
  }
  if ( (*(_BYTE *)(v22 + 13) & 3) == 1 )
  {
    v112 = 158;
LABEL_258:
    v30 = a7;
    SetFailureLocation(a7, 1, 14, -1073741492, v112);
    goto LABEL_261;
  }
  if ( !HvIsCellAllocated(BugCheckParameter2, v27, (__int64)BitMapHeader) )
  {
    v30 = a7;
LABEL_261:
    if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(v30, 0, 14, -1073741492, 192);
      v65 = -1073741492;
      goto LABEL_120;
    }
    SetFailureLocation(v30, 1, 14, -1073741492, 160);
    if ( !HvpMarkCellDirty(BugCheckParameter2, a3, 0) )
    {
      v65 = -1073741443;
      SetFailureLocation(a7, 0, 14, -1073741443, 176);
      goto LABEL_120;
    }
    v128 = 1;
    *(_DWORD *)(v22 + 48) = -1;
    *(_WORD *)(v22 + 74) = 0;
    v26 = 0;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    goto LABEL_42;
  }
  v84 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, v27, v127);
  if ( !v84 )
  {
    v65 = -1073741670;
    SetFailureLocation(a7, 0, 14, -1073741670, 208);
    goto LABEL_120;
  }
  v85 = v26 <= -4 - *(_DWORD *)(v84 - 4);
  v86 = *(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16);
  if ( !v85 )
  {
    v86(BugCheckParameter2, v127);
    v112 = 224;
    goto LABEL_258;
  }
  v86(BugCheckParameter2, v127);
LABEL_41:
  v30 = a7;
LABEL_42:
  if ( v29 == -1 )
  {
    SetFailureLocation(v30, 1, 14, -1073741492, 256);
    goto LABEL_280;
  }
  v31 = a4;
  v32 = a2;
  if ( a4 == -1 )
    goto LABEL_167;
  if ( (a2 & 0x20000) == 0 && (CmpSelfHeal || (CmpBootType & 6) != 0) && a5 )
    goto LABEL_281;
LABEL_47:
  if ( v31 == -1 )
  {
LABEL_167:
    v83 = *(_WORD *)(v22 + 2);
    if ( (v83 & 0x50) != 0 )
    {
      v65 = -1073741492;
      SetFailureLocation(a7, 0, 14, -1073741492, 432);
      goto LABEL_118;
    }
    if ( (v83 & 2) == 0 )
      goto LABEL_55;
    v128 = 1;
    v65 = -1073741492;
    if ( (v32 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 480);
      goto LABEL_118;
    }
    v30 = a7;
    SetFailureLocation(a7, 1, 14, -1073741492, 448);
    if ( !HvpMarkCellDirty(BugCheckParameter2, a3, 0) )
    {
      v65 = -1073741443;
      SetFailureLocation(a7, 0, 14, -1073741443, 464);
      goto LABEL_118;
    }
    v105 = -3;
    goto LABEL_317;
  }
  if ( *(_DWORD *)(v22 + 16) != v31 )
  {
    v128 = 1;
    v65 = -1073741492;
    if ( (v32 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 352);
      goto LABEL_118;
    }
    v30 = a7;
    SetFailureLocation(a7, 1, 14, -1073741492, 320);
    if ( !HvpMarkCellDirty(BugCheckParameter2, a3, 0) )
    {
      v65 = -1073741443;
      SetFailureLocation(a7, 0, 14, -1073741443, 336);
      goto LABEL_118;
    }
    v31 = a4;
    *(_DWORD *)(v22 + 16) = a4;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
  }
  v33 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, v31, v122);
  v34 = v33;
  if ( !v33 )
  {
    v65 = -1073741670;
    SetFailureLocation(a7, 0, 14, -1073741670, 368);
    goto LABEL_118;
  }
  v35 = *(_WORD *)(v22 + 72);
  if ( (*(_BYTE *)(v22 + 2) & 0x20) != 0 )
    v35 *= 2;
  if ( (unsigned __int16)*(_DWORD *)(v33 + 52) < (unsigned int)v35 )
  {
    v65 = -1073741492;
    v128 = 1;
    if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 370);
      goto LABEL_327;
    }
    v30 = a7;
    SetFailureLocation(a7, 1, 14, -1073741492, 372);
    if ( !HvpMarkCellDirty(BugCheckParameter2, a4, 0) )
    {
      v113 = 374;
      v106 = 1;
LABEL_324:
      v65 = -1073741443;
LABEL_326:
      SetFailureLocation(a7, v106, 14, v65, v113);
LABEL_327:
      v107 = v122;
      goto LABEL_423;
    }
    v104 = *(_WORD *)(v22 + 72);
    if ( (*(_BYTE *)(v22 + 2) & 0x20) != 0 )
      v104 *= 2;
    *(_WORD *)(v34 + 52) = v104;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
  }
  if ( *(_DWORD *)(v34 + 56) >= v26 )
    goto LABEL_54;
  v65 = -1073741492;
  v128 = 1;
  if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
  {
    v113 = 376;
    v106 = 0;
    goto LABEL_326;
  }
  v30 = a7;
  SetFailureLocation(a7, 1, 14, -1073741492, 378);
  if ( !HvpMarkCellDirty(BugCheckParameter2, a4, 0) )
  {
    v113 = 380;
    v106 = 0;
    goto LABEL_324;
  }
  *(_DWORD *)(v34 + 56) = v26;
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
LABEL_54:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v122);
  if ( (*(_BYTE *)(v22 + 2) & 0xE) != 0 )
  {
    v65 = -1073741492;
    v128 = 1;
    if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 416);
      goto LABEL_118;
    }
    v30 = a7;
    SetFailureLocation(a7, 1, 14, -1073741492, 384);
    if ( !HvpMarkCellDirty(BugCheckParameter2, a3, 0) )
    {
      v65 = -1073741443;
      SetFailureLocation(a7, 0, 14, -1073741443, 400);
      goto LABEL_118;
    }
    v105 = -15;
LABEL_317:
    *(_WORD *)(v22 + 2) &= v105;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
  }
LABEL_55:
  v36 = *(_DWORD *)(BugCheckParameter2 + 1864);
  v37 = *(_DWORD *)(v22 + 44);
  v38 = 0;
  if ( !v36 )
    goto LABEL_279;
  v39 = 0;
  v40 = v36 - 1;
  v41 = *(_DWORD *)(BugCheckParameter2 + 1872);
  if ( (v41 & 0x80000000) != 0 || v41 > v40 )
    v41 = v40 >> 1;
  v42 = v37 & 0x7FFFFFFF;
  if ( v37 < 0 )
    v42 = -v42;
  v43 = *(_QWORD *)(BugCheckParameter2 + 1880);
  while ( 1 )
  {
    v44 = *(_DWORD *)(v43 + 16LL * v41) & 0x7FFFFFFF;
    if ( *(int *)(v43 + 16LL * v41) < 0 )
      v44 = -v44;
    v45 = v42 - v44;
    if ( v42 == v44 )
      break;
    if ( v38 )
    {
      if ( v38 == 1 )
      {
        if ( v45 < 0 || v39 == v40 )
        {
LABEL_278:
          v30 = a7;
LABEL_279:
          SetFailureLocation(v30, 1, 14, -1073741492, 496);
LABEL_280:
          v32 = a2;
          v31 = a4;
LABEL_281:
          if ( (v32 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
          {
            SetFailureLocation(v30, 0, 14, -1073741492, 304);
            v65 = -1073741492;
            goto LABEL_118;
          }
          v120 = -1;
          v121 = 0;
          v117 = 0xFFFFFFFFLL;
          if ( v31 == -1 )
          {
            v65 = -1073741492;
            SetFailureLocation(a7, 0, 14, -1073741492, 272);
            goto LABEL_118;
          }
          v101 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                   BugCheckParameter2,
                   v31,
                   &v120);
          v102 = v101;
          if ( !v101 )
          {
            v65 = -1073741670;
            SetFailureLocation(a7, 0, 14, -1073741670, 276);
            goto LABEL_118;
          }
          v103 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
                   BugCheckParameter2,
                   *(unsigned int *)(v101 + 44),
                   &v117);
          if ( v103 )
          {
            if ( HvpMarkCellDirty(BugCheckParameter2, a3, 0) )
            {
              if ( HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v102 + 44), 0) )
              {
                *(_DWORD *)(v22 + 44) = *(_DWORD *)(v102 + 44);
                ++*(_DWORD *)(v103 + 12);
                *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
                (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v117);
                (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v120);
                v30 = a7;
                v31 = a4;
                v32 = a2;
                v128 = 1;
                goto LABEL_47;
              }
              v65 = -1073741443;
              SetFailureLocation(a7, 0, 14, -1073741443, 288);
              (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v117);
            }
            else
            {
              v65 = -1073741443;
              SetFailureLocation(a7, 0, 14, -1073741443, 284);
              (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v117);
            }
          }
          else
          {
            v65 = -1073741670;
            SetFailureLocation(a7, 0, 14, -1073741670, 280);
          }
          v107 = &v120;
LABEL_423:
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, v107);
          goto LABEL_118;
        }
        v38 = 2;
        v41 = v40;
      }
      else if ( v38 == 2 )
      {
        goto LABEL_278;
      }
    }
    else
    {
      if ( v45 >= 0 )
      {
        v39 = v41;
        v41 = v40;
      }
      v40 = v41;
      v73 = v41 - v39;
      if ( v73 <= 1 )
      {
        v41 = v39;
        v38 = 1;
      }
      else
      {
        v41 = v39 + (v73 >> 1);
      }
    }
  }
  *(_DWORD *)(BugCheckParameter2 + 1872) = v41;
  ++*(_DWORD *)(*(_QWORD *)(v43 + 16LL * v41 + 8) + 28LL);
  v46 = *(_WORD *)(v22 + 2);
  if ( (v46 & 0x40) == 0 )
  {
    v47 = v123;
    if ( !v123 )
    {
      v63 = a7;
      v48 = -1;
      v64 = a3;
      goto LABEL_93;
    }
    if ( (*(_BYTE *)(v22 + 13) & 3) == 1 )
    {
      v63 = a7;
      v65 = -1073741492;
      SetFailureLocation(a7, 1, 14, -1073741492, 504);
      v64 = a3;
      v48 = -1;
      v66 = a2;
      goto LABEL_347;
    }
    v48 = -1;
    v49 = (*(_BYTE *)(BugCheckParameter2 + 140) & 1) == 0;
    v117 = 0xFFFFFFFFLL;
    if ( !v49 )
      goto LABEL_87;
    v50 = 632LL * ((unsigned int)v28 >> 31);
    v51 = *(_DWORD *)(v50 + BugCheckParameter2 + 272);
    if ( (v28 & 0x7FFFFFFF) < v51 && (v28 & 7) == 0 )
    {
      if ( BitMapHeader && (v28 & 0x80000000) == 0LL )
      {
        if ( !_bittest64((const signed __int64 *)BitMapHeader->Buffer, (unsigned int)v28 >> 3) )
          goto LABEL_336;
        RtlClearBits(BitMapHeader, (unsigned int)v28 >> 3, 1u);
        v51 = *(_DWORD *)(v50 + BugCheckParameter2 + 272);
      }
      if ( (unsigned int)v28 + ((unsigned int)v28 >> 31 << 31) < v51 )
      {
        v52 = *(_QWORD *)(*(_QWORD *)(v50 + BugCheckParameter2 + 280) + 8 * ((v28 >> 21) & 0x3FF))
            + 24 * ((v28 >> 12) & 0x1FF);
        if ( v52 )
        {
          if ( (*(_BYTE *)(v52 + 8) & 2) == 0 )
          {
            v53 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
                    BugCheckParameter2,
                    (unsigned int)v28,
                    &v117);
            if ( !v53 )
              goto LABEL_86;
            v54 = (int *)(v53 - 4);
            if ( !v54 )
              goto LABEL_86;
            v55 = (int)v54;
            v56 = *v54;
            v57 = v55 - (*(_DWORD *)(v52 + 8) & 0xFFFFFFF0);
            v58 = -v56;
            v60 = 0;
            if ( v56 < 0 && v58 - 8 <= 0xFFFF8 )
            {
              v59 = *(unsigned int *)((*(_QWORD *)(v52 + 8) & 0xFFFFFFFFFFFFFFF0uLL) + 8);
              if ( v58 <= (unsigned __int64)(v59 - 32) && v57 - v56 <= (unsigned int)v59 && v57 >= 0x20 )
                v60 = 1;
            }
            (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v117);
            if ( v60 )
            {
LABEL_86:
              v47 = v123;
LABEL_87:
              v120 = -1;
              v121 = 0;
              v61 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                      BugCheckParameter2,
                      (unsigned int)v28,
                      &v120);
              if ( !v61 )
              {
                v65 = -1073741670;
                SetFailureLocation(a7, 0, 14, -1073741670, 528);
                goto LABEL_118;
              }
              v62 = 4LL * v47;
              if ( v62 <= 0xFFFFFFFF && (unsigned int)v62 <= -4 - *(_DWORD *)(v61 - 4) )
              {
                v63 = a7;
                v64 = a3;
                v65 = CmpCheckValueList(
                        BugCheckParameter2,
                        (*(_BYTE *)(v22 + 2) & 0x10) != 0,
                        v61,
                        v47,
                        a3,
                        a2,
                        BitMapHeader,
                        a7,
                        (_DWORD *)&v124 + 1,
                        (unsigned int *)&v124);
                (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v120);
                if ( v65 == -2147483606 )
                {
                  v116 = v124;
                  v128 = 1;
                  goto LABEL_93;
                }
                if ( v65 >= 0 )
                {
                  v116 = v124;
LABEL_93:
                  v66 = a2;
                  while ( 1 )
                  {
                    if ( *(_DWORD *)(v22 + 36) )
                    {
                      v67 = HIDWORD(v116);
                      v68 = v116;
                      goto LABEL_96;
                    }
                    if ( *(_DWORD *)(v22 + 40) == -1 )
                      break;
                    v65 = -1073741492;
                    SetFailureLocation(v63, 1, 14, -1073741492, 608);
LABEL_347:
                    if ( (v66 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
                    {
                      SetFailureLocation(v63, 0, 14, v65, 592);
                      goto LABEL_118;
                    }
                    if ( !HvpMarkCellDirty(BugCheckParameter2, v64, 0) )
                    {
                      v115 = 576;
                      goto LABEL_354;
                    }
                    *(_DWORD *)(v22 + 40) = -1;
                    *(_DWORD *)(v22 + 36) = 0;
                    v128 = 1;
                    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
                  }
                  v67 = 0;
                  v68 = 0;
                  v116 = 0LL;
LABEL_96:
                  if ( *(_DWORD *)(v22 + 60) < v67 )
                  {
                    v128 = 1;
                    v65 = -1073741492;
                    if ( (v66 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
                    {
                      v115 = 610;
                      goto LABEL_356;
                    }
                    if ( !HvpMarkCellDirty(BugCheckParameter2, v64, 0) )
                    {
                      v115 = 612;
LABEL_354:
                      v65 = -1073741443;
LABEL_356:
                      v108 = v63;
LABEL_358:
                      SetFailureLocation(v108, 0, 14, v65, v115);
                      goto LABEL_118;
                    }
                    v67 = HIDWORD(v116);
                    *(_DWORD *)(v22 + 60) = HIDWORD(v116);
                    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
                    v68 = v116;
                  }
                  if ( *(_DWORD *)(v22 + 64) >= v68 )
                    goto LABEL_98;
                  v128 = 1;
                  v65 = -1073741492;
                  if ( (v66 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
                  {
                    v115 = 614;
                    goto LABEL_356;
                  }
                  if ( HvpMarkCellDirty(BugCheckParameter2, v64, 0) )
                  {
                    v67 = HIDWORD(v116);
                    *(_DWORD *)(v22 + 64) = v116;
                    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
LABEL_98:
                    if ( (v66 & 0x20000) == 0 )
                    {
                      if ( *(_DWORD *)(v22 + 60) != v67 && HvpMarkCellDirty(BugCheckParameter2, v64, 0) )
                        *(_DWORD *)(v22 + 60) = v67;
                      if ( *(_DWORD *)(v22 + 64) != (_DWORD)v116 && HvpMarkCellDirty(BugCheckParameter2, v64, 0) )
                        *(_DWORD *)(v22 + 64) = v116;
                    }
                    goto LABEL_101;
                  }
                  v115 = 616;
                  goto LABEL_354;
                }
                if ( v65 != -1073741492 )
                  goto LABEL_118;
                if ( a7 )
                  *(_QWORD *)(a7 + 248) = v61;
                SetFailureLocation(a7, 1, 14, -1073741492, 560);
                v116 = v124;
LABEL_340:
                v66 = a2;
                goto LABEL_347;
              }
              (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v120);
              v114 = 544;
LABEL_338:
              v63 = a7;
              v65 = -1073741492;
              SetFailureLocation(a7, 1, 14, -1073741492, v114);
              v64 = a3;
              goto LABEL_340;
            }
          }
        }
      }
    }
LABEL_336:
    v114 = 512;
    goto LABEL_338;
  }
  v66 = a2;
  if ( (v46 & 0x1E) != 0 )
  {
    v128 = 1;
    v65 = -1073741492;
    if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 656);
      goto LABEL_118;
    }
    v64 = a3;
    if ( !HvpMarkCellDirty(BugCheckParameter2, a3, 0) )
    {
      v65 = -1073741443;
      SetFailureLocation(a7, 0, 14, -1073741443, 640);
      goto LABEL_118;
    }
    *(_WORD *)(v22 + 2) &= 0xFFE1u;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
  }
  else
  {
    v64 = a3;
  }
  if ( *(int *)(v22 + 36) >= 0 )
  {
    v108 = a7;
    v65 = -1073741492;
    v115 = 672;
    goto LABEL_358;
  }
  v63 = a7;
  v48 = -1;
LABEL_101:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v126);
  v69 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, v64, v126);
  v22 = v69;
  if ( !v69 )
  {
    v65 = -1073741670;
    v115 = 688;
    goto LABEL_356;
  }
  if ( v63 )
    *(_QWORD *)(v63 + 248) = v69;
  if ( (v64 & 0x80000000) != 0 )
  {
    if ( !*(_DWORD *)(v69 + 20) )
      goto LABEL_106;
    v65 = -1073741492;
    v115 = 704;
    goto LABEL_356;
  }
  if ( !*(_DWORD *)(v69 + 20) )
  {
LABEL_106:
    v70 = v128;
    v118 = 0LL;
    v48 = -1;
    goto LABEL_107;
  }
  if ( (*(_BYTE *)(v69 + 13) & 3) == 1 )
  {
    v65 = -1073741492;
    v109 = 712;
    goto LABEL_406;
  }
  if ( !HvIsCellAllocated(BugCheckParameter2, *(_DWORD *)(v69 + 28), (__int64)BitMapHeader) )
  {
    v65 = -1073741492;
    v109 = 720;
    goto LABEL_406;
  }
  v74 = (__int16 *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                     BugCheckParameter2,
                     *(unsigned int *)(v22 + 28),
                     v119);
  v118 = v74;
  v75 = v74;
  if ( !v74 )
  {
    v65 = -1073741670;
    SetFailureLocation(v63, 0, 14, -1073741670, 736);
    goto LABEL_120;
  }
  v76 = -4 - *((_DWORD *)v74 - 1);
  if ( v76 < 8
    || ((v77 = *v74, ((*v74 - 26220) & 0xFDFF) != 0) ? (v78 = 4) : (v78 = 8),
        (v79 = (unsigned __int16)v75[1], (unsigned __int64)(unsigned int)(v79 * v78) + 4 < 4)
     || (((v77 - 26220) & 0xFDFF) != 0 ? (v80 = 4) : (v80 = 8), (unsigned __int64)(unsigned int)(v79 * v80) + 4 > v76)) )
  {
    v65 = -1073741492;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v119);
    v118 = 0LL;
    v109 = 752;
    goto LABEL_406;
  }
  if ( !(_WORD)v79 )
  {
    v65 = -1073741492;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v119);
    v118 = 0LL;
    v109 = 784;
    goto LABEL_406;
  }
  if ( v63 )
  {
    *(_QWORD *)(v63 + 256) = v75;
    v77 = *v75;
  }
  if ( v77 != 26220 && v77 != 26988 && v77 != 26732 && v77 != 26994 )
  {
    v65 = -1073741492;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v119);
    v118 = 0LL;
    v109 = 992;
    goto LABEL_406;
  }
  v81 = v75[1];
  if ( v77 != 26994 )
  {
    if ( v81 != *(_DWORD *)(v22 + 20) )
    {
      v65 = -1073741492;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v119);
      v118 = 0LL;
      v109 = 816;
      goto LABEL_406;
    }
    v82 = CmpCheckLeaf(BugCheckParameter2, v66, v75, *(_DWORD *)(v22 + 28), v63);
    v65 = v82;
    if ( v82 == -2147483606 )
    {
      v128 = 1;
    }
    else if ( v82 < 0 )
    {
      if ( v82 == -1073741492 )
      {
        v109 = 832;
        goto LABEL_406;
      }
      goto LABEL_118;
    }
    goto LABEL_148;
  }
  v87 = 0;
  v88 = 0;
  if ( !v81 )
  {
LABEL_196:
    if ( *(_DWORD *)(v22 + 20) != v87 )
    {
      v65 = -1073741492;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v119);
      v64 = a3;
      v118 = 0LL;
      v48 = -1;
      v109 = 960;
      goto LABEL_406;
    }
    v64 = a3;
LABEL_148:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v119);
    goto LABEL_106;
  }
  while ( 1 )
  {
    if ( v63 )
      *(_DWORD *)(v63 + 264) = v88;
    v89 = &v75[2 * v88];
    if ( !HvIsCellAllocated(BugCheckParameter2, *((_DWORD *)v89 + 1), (__int64)BitMapHeader) )
    {
      v65 = -1073741492;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v119);
      v118 = 0LL;
      v109 = 848;
      goto LABEL_403;
    }
    v90 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                     BugCheckParameter2,
                     *((unsigned int *)v89 + 1),
                     v125);
    v91 = v90;
    if ( !v90 )
    {
      v65 = -1073741670;
      v115 = 864;
      goto LABEL_356;
    }
    v92 = -4 - *((_DWORD *)v90 - 1);
    if ( v92 < 8
      || ((v93 = *v90, ((*v90 - 26220) & 0xFDFF) != 0) ? (v94 = 4) : (v94 = 8),
          (v95 = (unsigned __int16)v91[1], (unsigned __int64)(unsigned int)(v95 * v94) + 4 < 4)
       || (((v93 - 26220) & 0xFDFF) != 0 ? (v96 = 4) : (v96 = 8), (unsigned __int64)(unsigned int)(v95 * v96) + 4 > v92)) )
    {
      v65 = -1073741492;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v125);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v119);
      v118 = 0LL;
      v109 = 880;
      goto LABEL_403;
    }
    if ( !(_WORD)v95 )
    {
      v65 = -1073741492;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v125);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v119);
      v118 = 0LL;
      v109 = 912;
      goto LABEL_403;
    }
    if ( ((v93 - 26220) & 0xFCFF) != 0 || v93 == 26476 )
    {
      v65 = -1073741492;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v125);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v119);
      v118 = 0LL;
      v109 = 944;
      goto LABEL_403;
    }
    v97 = CmpCheckLeaf(BugCheckParameter2, a2, v91, *((_DWORD *)v89 + 1), v63);
    v65 = v97;
    if ( v97 == -2147483606 )
    {
      v128 = 1;
      goto LABEL_194;
    }
    if ( v97 < 0 )
      break;
LABEL_194:
    v87 += (unsigned __int16)v91[1];
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v125);
    v75 = v118;
    if ( ++v88 >= (unsigned int)(unsigned __int16)v118[1] )
    {
      v66 = a2;
      goto LABEL_196;
    }
  }
  if ( v97 != -1073741492 )
    goto LABEL_118;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v125);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v119);
  v118 = 0LL;
  v109 = 952;
LABEL_403:
  v64 = a3;
  v48 = -1;
  v66 = a2;
LABEL_406:
  SetFailureLocation(v63, 1, 14, v65, v109);
  if ( (v66 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    goto LABEL_414;
  SetFailureLocation(v63, 1, 14, v65, 1008);
  if ( !HvpMarkCellDirty(BugCheckParameter2, v64, 0) )
  {
    v65 = -1073741443;
    SetFailureLocation(v63, 0, 14, -1073741443, 1024);
    goto LABEL_118;
  }
  *(_DWORD *)(v22 + 28) = -1;
  *(_DWORD *)(v22 + 20) = 0;
  v70 = 1;
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
LABEL_107:
  v71 = *(_DWORD *)(v22 + 32) != -1 || *(_DWORD *)(v22 + 24);
  if ( (v66 & 0x40000) != 0 && v71 )
  {
    v65 = -1073741492;
LABEL_414:
    SetFailureLocation(v63, 0, 14, v65, 1040);
    goto LABEL_118;
  }
  v110 = (v66 & 2) != 0;
  if ( (v66 & 0xD) != 0 && v71 )
    v110 = 1;
  if ( ((v66 & 8) == 0 || *(_DWORD *)(BugCheckParameter2 + 212) >= 4u) && !v110 )
  {
LABEL_116:
    if ( v70 )
      v65 = -2147483606;
    else
      v65 = 0;
    goto LABEL_118;
  }
  if ( HvpMarkCellDirty(BugCheckParameter2, v64, 0) )
  {
    *(_DWORD *)(v22 + 24) = 0;
    if ( (v66 & 4) != 0 && *(_DWORD *)(BugCheckParameter2 + 212) >= 4u )
      v48 = -1163005939;
    *(_DWORD *)(v22 + 32) = v48;
    goto LABEL_116;
  }
  v65 = -1073741443;
  SetFailureLocation(v63, 0, 14, -1073741443, 1056);
LABEL_118:
  if ( v118 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v119);
LABEL_120:
  if ( v22 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v126);
  return (unsigned int)v65;
}
