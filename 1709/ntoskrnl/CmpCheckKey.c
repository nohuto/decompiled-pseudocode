/*
 * XREFs of CmpCheckKey @ 0x1404AA8A0
 * Callers:
 *     CmpCheckRegistry2 @ 0x1404AB5E0 (CmpCheckRegistry2.c)
 * Callees:
 *     HvpGetBinContextInitialize @ 0x140080EC0 (HvpGetBinContextInitialize.c)
 *     RtlClearBits @ 0x140080ED0 (RtlClearBits.c)
 *     HvpMapEntryIsDiscardable @ 0x140080F80 (HvpMapEntryIsDiscardable.c)
 *     HvpMapEntryGetBinAddress @ 0x140080F90 (HvpMapEntryGetBinAddress.c)
 *     HvpReleaseHCell @ 0x1400811F0 (HvpReleaseHCell.c)
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 *     HvpMapEntryReleaseBinAddress @ 0x1400812E0 (HvpMapEntryReleaseBinAddress.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     SetFailureLocation @ 0x1401E2FD4 (SetFailureLocation.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     HvIsCellAllocated @ 0x14047D4B0 (HvIsCellAllocated.c)
 *     CmpCheckLeaf @ 0x14047FD10 (CmpCheckLeaf.c)
 *     CmpCheckValueList @ 0x1404A9D70 (CmpCheckValueList.c)
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
  __int64 v7; // r15
  unsigned __int64 v8; // r12
  __int64 v11; // rdi
  __int64 v12; // rax
  struct _EX_RUNDOWN_REF *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  _DWORD *v16; // rdi
  unsigned __int64 BinAddress; // rax
  __int64 v18; // rcx
  unsigned int v19; // r8d
  unsigned int v20; // edx
  __int64 v21; // r10
  bool v22; // di
  __int64 v23; // rax
  __int64 v24; // rbx
  unsigned int v25; // ecx
  unsigned int v26; // edx
  unsigned int v27; // eax
  unsigned int v28; // r12d
  unsigned int v29; // edi
  unsigned __int64 v30; // r15
  int v31; // r14d
  __int64 v32; // rdi
  unsigned int v33; // ecx
  int v34; // edx
  __int64 v35; // rax
  __int64 v36; // r14
  unsigned __int16 v37; // dx
  int v38; // eax
  int v39; // ecx
  __int16 v40; // r14
  unsigned int v41; // edi
  unsigned int v42; // r11d
  unsigned int v43; // edx
  int v44; // r9d
  __int64 v45; // r10
  int v46; // eax
  int v47; // ecx
  __int16 v48; // ax
  unsigned int v49; // edi
  __int64 v50; // r14
  __int64 v51; // rax
  struct _EX_RUNDOWN_REF *v52; // r14
  __int64 v53; // rax
  __int64 v54; // rcx
  int *v55; // rdi
  __int64 v56; // rcx
  unsigned __int64 v57; // r9
  unsigned int v58; // r8d
  unsigned int v59; // edx
  __int64 v60; // r10
  bool v61; // di
  int v62; // r12d
  __int64 (__fastcall *v63)(ULONG_PTR, _QWORD, int *); // rax
  __int64 v64; // r14
  unsigned __int64 v65; // rax
  unsigned int v66; // r13d
  int v67; // edi
  int v68; // r14d
  unsigned int v69; // ecx
  unsigned int v70; // edi
  int v71; // edi
  __int64 v72; // rax
  char v73; // di
  bool v74; // cl
  __int16 *v76; // rax
  __int16 *v77; // r10
  unsigned int v78; // edx
  __int16 v79; // cx
  int v80; // eax
  int v81; // r8d
  int v82; // eax
  __int16 v83; // cx
  int v84; // eax
  __int64 v85; // rax
  bool v86; // cc
  void (__fastcall *v87)(ULONG_PTR, _DWORD *); // rax
  __int16 v88; // ax
  bool v89; // cf
  int v90; // r13d
  unsigned int i; // r12d
  __int16 *v92; // rdi
  _WORD *v93; // rax
  _WORD *v94; // r15
  unsigned int v95; // edx
  __int16 v96; // r8
  int v97; // eax
  int v98; // r9d
  int v99; // eax
  int v100; // eax
  unsigned int v101; // edx
  unsigned int v102; // ecx
  int v103; // edx
  __int64 v104; // rax
  __int64 v105; // rdi
  __int64 v106; // r14
  __int16 v107; // ax
  __int16 v108; // ax
  int v109; // edx
  _DWORD *v110; // rdx
  __int64 v111; // rcx
  bool v112; // al
  int v113; // [rsp+20h] [rbp-91h]
  int v114; // [rsp+20h] [rbp-91h]
  int v115; // [rsp+20h] [rbp-91h]
  int v116; // [rsp+20h] [rbp-91h]
  int v117; // [rsp+20h] [rbp-91h]
  int v118; // [rsp+20h] [rbp-91h]
  int v119; // [rsp+20h] [rbp-91h]
  int v120; // [rsp+20h] [rbp-91h]
  _WORD v121[2]; // [rsp+50h] [rbp-61h] BYREF
  __int64 v122; // [rsp+54h] [rbp-5Dh]
  __int16 *v123; // [rsp+60h] [rbp-51h]
  _DWORD v124[2]; // [rsp+68h] [rbp-49h] BYREF
  int v125; // [rsp+70h] [rbp-41h] BYREF
  int v126; // [rsp+74h] [rbp-3Dh]
  _DWORD v127[2]; // [rsp+78h] [rbp-39h] BYREF
  unsigned int v128; // [rsp+80h] [rbp-31h]
  __int64 v129; // [rsp+84h] [rbp-2Dh] BYREF
  _DWORD v130[2]; // [rsp+90h] [rbp-21h] BYREF
  _DWORD v131[2]; // [rsp+98h] [rbp-19h] BYREF
  _DWORD v132[2]; // [rsp+A0h] [rbp-11h] BYREF
  _DWORD v133[4]; // [rsp+A8h] [rbp-9h] BYREF
  char v134; // [rsp+100h] [rbp+4Fh]

  v7 = a7;
  v8 = a3;
  v131[0] = -1;
  v131[1] = 0;
  v122 = 0LL;
  v129 = 0LL;
  v132[0] = -1;
  v132[1] = 0;
  v127[0] = -1;
  v127[1] = 0;
  v124[0] = -1;
  v124[1] = 0;
  v133[0] = -1;
  v133[1] = 0;
  v134 = 0;
  v123 = 0LL;
  if ( a7 )
  {
    *(_DWORD *)(a7 + 240) = a3;
    *(_QWORD *)(a7 + 248) = 0LL;
    *(_QWORD *)(a7 + 256) = 0LL;
    *(_DWORD *)(a7 + 264) = -1;
  }
  HvpGetCellContextReinitialize((__int64)&v125);
  HvpGetBinContextInitialize(v121);
  if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 1) == 0 )
  {
    v11 = 632LL * ((unsigned int)v8 >> 31);
    if ( (v8 & 0x7FFFFFFF) >= *(_DWORD *)(v11 + BugCheckParameter2 + 1400) || (v8 & 7) != 0 )
      goto LABEL_213;
    if ( BitMapHeader && (v8 & 0x80000000) == 0LL )
    {
      if ( !_bittest64((const signed __int64 *)BitMapHeader->Buffer, (unsigned int)v8 >> 3) )
        goto LABEL_213;
      RtlClearBits(BitMapHeader, (unsigned int)v8 >> 3, 1u);
    }
    if ( (unsigned int)v8 + ((unsigned int)v8 >> 31 << 31) < *(_DWORD *)(v11 + BugCheckParameter2 + 1400) )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(v11 + BugCheckParameter2 + 1408) + 8 * ((v8 >> 21) & 0x3FF));
      v13 = (struct _EX_RUNDOWN_REF *)(v12 + 40 * ((v8 >> 12) & 0x1FF));
      if ( v13 )
      {
        if ( !HvpMapEntryIsDiscardable(v12 + 40 * ((v8 >> 12) & 0x1FF)) )
        {
          v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  (unsigned int)v8,
                  &v125);
          if ( !v14 )
            goto LABEL_24;
          v16 = (_DWORD *)(v14 - 4);
          if ( v14 == 4 )
            goto LABEL_24;
          BinAddress = HvpMapEntryGetBinAddress(v15, v13, v121);
          v18 = (unsigned int)*v16;
          v19 = (_DWORD)v16 - BinAddress;
          v20 = -*v16;
          v22 = 0;
          if ( (int)v18 < 0 )
          {
            v18 = v20 - 8;
            if ( (unsigned int)v18 <= 0xFFFF8 )
            {
              v21 = *(unsigned int *)(BinAddress + 8);
              v18 = v21 - 32;
              if ( v20 <= (unsigned __int64)(v21 - 32) && v19 - *v16 <= (unsigned int)v21 && v19 >= 0x20 )
                v22 = 1;
            }
          }
          if ( BinAddress )
            HvpMapEntryReleaseBinAddress(v18, v13, v121);
          HvpReleaseHCell(BugCheckParameter2);
          if ( v22 )
            goto LABEL_24;
        }
      }
    }
LABEL_213:
    SetFailureLocation(a7, 0, 14, -1073741492, 0);
    return 3221225804LL;
  }
LABEL_24:
  v23 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          (unsigned int)v8,
          v132);
  v24 = v23;
  if ( !v23 )
  {
    SetFailureLocation(a7, 0, 14, -1073741670, 16);
    return 3221225626LL;
  }
  if ( a7 )
    *(_QWORD *)(a7 + 248) = v23;
  v25 = -4 - *(_DWORD *)(v23 - 4);
  if ( v25 - 76 > 0x410 )
  {
    v113 = 32;
    goto LABEL_438;
  }
  v26 = *(unsigned __int16 *)(v23 + 72);
  if ( !(_WORD)v26 || v26 + 76 > v25 )
  {
    v113 = 48;
    goto LABEL_438;
  }
  if ( (*(_BYTE *)(v23 + 2) & 0x20) != 0 )
  {
    if ( *(_BYTE *)(v23 + 76) )
    {
      v27 = 0;
      while ( *(_BYTE *)(v27 + v24 + 76) != 92 )
      {
        if ( ++v27 >= v26 )
          goto LABEL_35;
      }
      v113 = 1280;
    }
    else
    {
      v113 = 64;
    }
    goto LABEL_438;
  }
  if ( (v26 & 1) != 0 )
  {
    v113 = 80;
LABEL_438:
    v67 = -1073741492;
    goto LABEL_439;
  }
  if ( !*(_WORD *)(v23 + 76) )
  {
    v113 = 96;
    goto LABEL_438;
  }
  v101 = v26 >> 1;
  v102 = 0;
  if ( v101 )
  {
    while ( *(_WORD *)(v23 + 2LL * v102 + 76) != 92 )
    {
      if ( ++v102 >= v101 )
        goto LABEL_35;
    }
    v113 = 1296;
    goto LABEL_438;
  }
LABEL_35:
  if ( *(_WORD *)v24 != 27502 )
  {
    v67 = -1073741492;
    v134 = 1;
    if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      v113 = 144;
      v103 = 1;
LABEL_440:
      SetFailureLocation(v7, v103, 14, v67, v113);
      goto LABEL_129;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 112);
    if ( !HvpMarkCellDirty(BugCheckParameter2, (unsigned int)v8, 0) )
    {
      v67 = -1073741443;
      v113 = 128;
      goto LABEL_439;
    }
    *(_WORD *)v24 = 27502;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) & 2) == 0 && (*(_BYTE *)(v24 + 13) & 3) != 0 )
  {
    v67 = -1073741492;
    v134 = 1;
    if ( (a2 & 0x20000) == 0 && (CmpSelfHeal || (CmpBootType & 6) != 0) )
    {
      SetFailureLocation(a7, 1, 14, -1073741492, 146);
      if ( HvpMarkCellDirty(BugCheckParameter2, (unsigned int)v8, 0) )
      {
        *(_BYTE *)(v24 + 13) &= 0xFCu;
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
        goto LABEL_38;
      }
      v67 = -1073741443;
      v113 = 150;
    }
    else
    {
      v113 = 148;
    }
LABEL_439:
    v103 = 0;
    goto LABEL_440;
  }
LABEL_38:
  if ( a4 == -1 )
  {
    if ( (*(_BYTE *)(v24 + 13) & 1) == 0 )
      goto LABEL_41;
    v67 = -1073741492;
    v134 = 1;
    if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      v113 = 492;
      goto LABEL_439;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 484);
    if ( !HvpMarkCellDirty(BugCheckParameter2, (unsigned int)v8, 0) )
    {
      v67 = -1073741443;
      v113 = 488;
      goto LABEL_439;
    }
    *(_BYTE *)(v24 + 13) = *(_BYTE *)(v24 + 13) & 0xFC | 2;
  }
  else
  {
    if ( (*(_BYTE *)((*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                       BugCheckParameter2,
                       a4,
                       v127)
                   + 13) & 3) != 3
      || (((*(_BYTE *)(v24 + 13) & 3) - 1) & 0xFD) == 0 )
    {
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v127);
      goto LABEL_41;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v127);
    v67 = -1073741492;
    v134 = 1;
    if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      v113 = 156;
      goto LABEL_439;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 152);
    if ( !HvpMarkCellDirty(BugCheckParameter2, (unsigned int)v8, 0) )
    {
      v67 = -1073741443;
      v113 = 154;
      goto LABEL_439;
    }
    *(_BYTE *)(v24 + 13) |= 3u;
  }
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
LABEL_41:
  v28 = *(unsigned __int16 *)(v24 + 74);
  v29 = *(_DWORD *)(v24 + 48);
  v30 = *(unsigned int *)(v24 + 40);
  v31 = *(_DWORD *)(v24 + 44);
  v128 = *(_DWORD *)(v24 + 36);
  if ( !v28 )
  {
    if ( v29 != -1 )
    {
      v67 = -1073741492;
      v134 = 1;
      if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 228);
        goto LABEL_129;
      }
      v32 = a7;
      SetFailureLocation(a7, 1, 14, -1073741492, 232);
      if ( !HvpMarkCellDirty(BugCheckParameter2, a3, 0) )
      {
        v67 = -1073741443;
        SetFailureLocation(a7, 1, 14, -1073741443, 236);
        goto LABEL_129;
      }
      *(_DWORD *)(v24 + 48) = -1;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
      goto LABEL_44;
    }
    goto LABEL_43;
  }
  if ( v29 == -1 )
  {
    v67 = -1073741492;
    v134 = 1;
    if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 157);
      goto LABEL_129;
    }
    v32 = a7;
    SetFailureLocation(a7, 0, 14, -1073741492, 155);
    if ( !HvpMarkCellDirty(BugCheckParameter2, a3, 0) )
    {
      v67 = -1073741443;
      SetFailureLocation(a7, 0, 14, -1073741443, 159);
      goto LABEL_129;
    }
    v28 = 0;
    *(_WORD *)(v24 + 74) = 0;
    goto LABEL_44;
  }
  if ( (*(_BYTE *)(v24 + 13) & 3) == 1 )
  {
    v114 = 158;
LABEL_259:
    v32 = a7;
    SetFailureLocation(a7, 1, 14, -1073741492, v114);
    goto LABEL_262;
  }
  if ( !HvIsCellAllocated(BugCheckParameter2, v29) )
  {
    v32 = a7;
LABEL_262:
    if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(v32, 0, 14, -1073741492, 192);
      v67 = -1073741492;
      goto LABEL_129;
    }
    SetFailureLocation(v32, 1, 14, -1073741492, 160);
    if ( !HvpMarkCellDirty(BugCheckParameter2, a3, 0) )
    {
      v67 = -1073741443;
      SetFailureLocation(a7, 0, 14, -1073741443, 176);
      goto LABEL_129;
    }
    v134 = 1;
    *(_DWORD *)(v24 + 48) = -1;
    *(_WORD *)(v24 + 74) = 0;
    v28 = 0;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    goto LABEL_44;
  }
  v85 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, v29, v133);
  if ( !v85 )
  {
    v67 = -1073741670;
    SetFailureLocation(a7, 0, 14, -1073741670, 208);
    goto LABEL_129;
  }
  v86 = v28 <= -4 - *(_DWORD *)(v85 - 4);
  v87 = *(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16);
  if ( !v86 )
  {
    v87(BugCheckParameter2, v133);
    v114 = 224;
    goto LABEL_259;
  }
  v87(BugCheckParameter2, v133);
LABEL_43:
  v32 = a7;
LABEL_44:
  if ( v31 == -1 )
  {
    SetFailureLocation(v32, 1, 14, -1073741492, 256);
    goto LABEL_281;
  }
  v33 = a4;
  v34 = a2;
  if ( a4 == -1 )
    goto LABEL_178;
  if ( (a2 & 0x20000) == 0 && (CmpSelfHeal || (CmpBootType & 6) != 0) && a5 )
    goto LABEL_282;
LABEL_49:
  if ( v33 == -1 )
  {
LABEL_178:
    v88 = *(_WORD *)(v24 + 2);
    if ( (v88 & 0x50) != 0 )
    {
      v67 = -1073741492;
      SetFailureLocation(a7, 0, 14, -1073741492, 432);
      goto LABEL_127;
    }
    if ( (v88 & 2) == 0 )
      goto LABEL_57;
    v134 = 1;
    v67 = -1073741492;
    if ( (v34 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 480);
      goto LABEL_127;
    }
    v32 = a7;
    SetFailureLocation(a7, 1, 14, -1073741492, 448);
    if ( !HvpMarkCellDirty(BugCheckParameter2, a3, 0) )
    {
      v67 = -1073741443;
      SetFailureLocation(a7, 0, 14, -1073741443, 464);
      goto LABEL_127;
    }
    v108 = -3;
    goto LABEL_318;
  }
  if ( *(_DWORD *)(v24 + 16) != v33 )
  {
    v134 = 1;
    v67 = -1073741492;
    if ( (v34 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 352);
      goto LABEL_127;
    }
    v32 = a7;
    SetFailureLocation(a7, 1, 14, -1073741492, 320);
    if ( !HvpMarkCellDirty(BugCheckParameter2, a3, 0) )
    {
      v67 = -1073741443;
      SetFailureLocation(a7, 0, 14, -1073741443, 336);
      goto LABEL_127;
    }
    v33 = a4;
    *(_DWORD *)(v24 + 16) = a4;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
  }
  v35 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, v33, v127);
  v36 = v35;
  if ( !v35 )
  {
    v67 = -1073741670;
    SetFailureLocation(a7, 0, 14, -1073741670, 368);
    goto LABEL_127;
  }
  v37 = *(_WORD *)(v24 + 72);
  if ( (*(_BYTE *)(v24 + 2) & 0x20) != 0 )
    v37 *= 2;
  if ( (unsigned __int16)*(_DWORD *)(v35 + 52) < (unsigned int)v37 )
  {
    v67 = -1073741492;
    v134 = 1;
    if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 370);
      goto LABEL_328;
    }
    v32 = a7;
    SetFailureLocation(a7, 1, 14, -1073741492, 372);
    if ( !HvpMarkCellDirty(BugCheckParameter2, a4, 0) )
    {
      v115 = 374;
      v109 = 1;
LABEL_325:
      v67 = -1073741443;
LABEL_327:
      SetFailureLocation(a7, v109, 14, v67, v115);
LABEL_328:
      v110 = v127;
      goto LABEL_432;
    }
    v107 = *(_WORD *)(v24 + 72);
    if ( (*(_BYTE *)(v24 + 2) & 0x20) != 0 )
      v107 *= 2;
    *(_WORD *)(v36 + 52) = v107;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
  }
  if ( *(_DWORD *)(v36 + 56) >= v28 )
    goto LABEL_56;
  v67 = -1073741492;
  v134 = 1;
  if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
  {
    v115 = 376;
    v109 = 0;
    goto LABEL_327;
  }
  v32 = a7;
  SetFailureLocation(a7, 1, 14, -1073741492, 378);
  if ( !HvpMarkCellDirty(BugCheckParameter2, a4, 0) )
  {
    v115 = 380;
    v109 = 0;
    goto LABEL_325;
  }
  *(_DWORD *)(v36 + 56) = v28;
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
LABEL_56:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v127);
  if ( (*(_BYTE *)(v24 + 2) & 0xE) != 0 )
  {
    v67 = -1073741492;
    v134 = 1;
    if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 416);
      goto LABEL_127;
    }
    v32 = a7;
    SetFailureLocation(a7, 1, 14, -1073741492, 384);
    if ( !HvpMarkCellDirty(BugCheckParameter2, a3, 0) )
    {
      v67 = -1073741443;
      SetFailureLocation(a7, 0, 14, -1073741443, 400);
      goto LABEL_127;
    }
    v108 = -15;
LABEL_318:
    *(_WORD *)(v24 + 2) &= v108;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
  }
LABEL_57:
  v38 = *(_DWORD *)(BugCheckParameter2 + 3040);
  v39 = *(_DWORD *)(v24 + 44);
  v40 = 0;
  if ( !v38 )
    goto LABEL_280;
  v41 = 0;
  v42 = v38 - 1;
  v43 = *(_DWORD *)(BugCheckParameter2 + 3048);
  if ( (v43 & 0x80000000) != 0 || v43 > v42 )
    v43 = v42 >> 1;
  v44 = v39 & 0x7FFFFFFF;
  if ( v39 < 0 )
    v44 = -v44;
  v45 = *(_QWORD *)(BugCheckParameter2 + 3056);
  while ( 1 )
  {
    v46 = *(_DWORD *)(v45 + 16LL * v43) & 0x7FFFFFFF;
    if ( *(int *)(v45 + 16LL * v43) < 0 )
      v46 = -v46;
    v47 = v44 - v46;
    if ( v44 == v46 )
      break;
    if ( v40 )
    {
      if ( v40 == 1 )
      {
        if ( v47 < 0 || v41 == v42 )
        {
LABEL_279:
          v32 = a7;
LABEL_280:
          SetFailureLocation(v32, 1, 14, -1073741492, 496);
LABEL_281:
          v34 = a2;
          v33 = a4;
LABEL_282:
          if ( (v34 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
          {
            SetFailureLocation(v32, 0, 14, -1073741492, 304);
            v67 = -1073741492;
            goto LABEL_127;
          }
          v130[0] = -1;
          v130[1] = 0;
          v125 = -1;
          v126 = 0;
          if ( v33 == -1 )
          {
            v67 = -1073741492;
            SetFailureLocation(a7, 0, 14, -1073741492, 272);
            goto LABEL_127;
          }
          v104 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                   BugCheckParameter2,
                   v33,
                   v130);
          v105 = v104;
          if ( !v104 )
          {
            v67 = -1073741670;
            SetFailureLocation(a7, 0, 14, -1073741670, 276);
            goto LABEL_127;
          }
          v106 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                   BugCheckParameter2,
                   *(unsigned int *)(v104 + 44),
                   &v125);
          if ( v106 )
          {
            if ( HvpMarkCellDirty(BugCheckParameter2, a3, 0) )
            {
              if ( HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v105 + 44), 0) )
              {
                *(_DWORD *)(v24 + 44) = *(_DWORD *)(v105 + 44);
                ++*(_DWORD *)(v106 + 12);
                *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
                (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v125);
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v130);
                v32 = a7;
                v33 = a4;
                v34 = a2;
                v134 = 1;
                goto LABEL_49;
              }
              v67 = -1073741443;
              SetFailureLocation(a7, 0, 14, -1073741443, 288);
              (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v125);
            }
            else
            {
              v67 = -1073741443;
              SetFailureLocation(a7, 0, 14, -1073741443, 284);
              (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v125);
            }
          }
          else
          {
            v67 = -1073741670;
            SetFailureLocation(a7, 0, 14, -1073741670, 280);
          }
          v110 = v130;
LABEL_432:
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v110);
          goto LABEL_127;
        }
        v40 = 2;
        v43 = v42;
      }
      else if ( v40 == 2 )
      {
        goto LABEL_279;
      }
    }
    else
    {
      if ( v47 >= 0 )
        v41 = v43;
      else
        v42 = v43;
      if ( v42 - v41 <= 1 )
      {
        v43 = v41;
        v40 = 1;
      }
      else
      {
        v43 = v41 + ((v42 - v41) >> 1);
      }
    }
  }
  *(_DWORD *)(BugCheckParameter2 + 3048) = v43;
  ++*(_DWORD *)(*(_QWORD *)(v45 + 16LL * v43 + 8) + 28LL);
  v48 = *(_WORD *)(v24 + 2);
  if ( (v48 & 0x40) == 0 )
  {
    v49 = v128;
    if ( !v128 )
    {
      v7 = a7;
      v62 = -1;
      v66 = a3;
      goto LABEL_102;
    }
    if ( (*(_BYTE *)(v24 + 13) & 3) == 1 )
    {
      v116 = 504;
LABEL_337:
      v7 = a7;
      v67 = -1073741492;
      SetFailureLocation(a7, 1, 14, -1073741492, v116);
      v62 = -1;
      goto LABEL_339;
    }
    HvpGetCellContextReinitialize((__int64)v130);
    HvpGetBinContextInitialize(v121);
    if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 1) != 0 )
    {
LABEL_96:
      v126 = 0;
      v62 = -1;
      v63 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8);
      v125 = -1;
      v64 = v63(BugCheckParameter2, (unsigned int)v30, &v125);
      if ( !v64 )
      {
        v67 = -1073741670;
        SetFailureLocation(a7, 0, 14, -1073741670, 528);
        goto LABEL_127;
      }
      v65 = 4LL * v49;
      if ( v65 <= 0xFFFFFFFF && (unsigned int)v65 <= -4 - *(_DWORD *)(v64 - 4) )
      {
        v7 = a7;
        v66 = a3;
        v67 = CmpCheckValueList(
                BugCheckParameter2,
                (*(_BYTE *)(v24 + 2) & 0x10) != 0,
                v64,
                v49,
                a3,
                a2,
                BitMapHeader,
                a7,
                (_DWORD *)&v129 + 1,
                (unsigned int *)&v129);
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v125);
        if ( v67 == -2147483606 )
        {
          v122 = v129;
          v134 = 1;
          goto LABEL_102;
        }
        if ( v67 >= 0 )
        {
          v122 = v129;
LABEL_102:
          v68 = a2;
          v69 = 0;
          while ( 1 )
          {
            if ( *(_DWORD *)(v24 + 36) )
            {
              v70 = HIDWORD(v122);
              v69 = v122;
              goto LABEL_105;
            }
            if ( *(_DWORD *)(v24 + 40) == -1 )
              break;
            v67 = -1073741492;
            SetFailureLocation(v7, 1, 14, -1073741492, 608);
LABEL_349:
            if ( (v68 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
            {
              SetFailureLocation(v7, 0, 14, v67, 592);
              goto LABEL_127;
            }
            if ( !HvpMarkCellDirty(BugCheckParameter2, v66, 0) )
            {
              v117 = 576;
              goto LABEL_356;
            }
            v69 = 0;
            *(_DWORD *)(v24 + 40) = -1;
            *(_DWORD *)(v24 + 36) = 0;
            v134 = 1;
            *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
          }
          v70 = 0;
          v122 = 0LL;
LABEL_105:
          if ( *(_DWORD *)(v24 + 60) < v70 )
          {
            v134 = 1;
            v67 = -1073741492;
            if ( (v68 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
            {
              v117 = 610;
              goto LABEL_357;
            }
            if ( !HvpMarkCellDirty(BugCheckParameter2, v66, 0) )
            {
              v117 = 612;
              goto LABEL_356;
            }
            v70 = HIDWORD(v122);
            v69 = v122;
            *(_DWORD *)(v24 + 60) = HIDWORD(v122);
            *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
          }
          if ( *(_DWORD *)(v24 + 64) >= v69 )
            goto LABEL_107;
          v134 = 1;
          v67 = -1073741492;
          if ( (v68 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
          {
            v117 = 614;
            goto LABEL_357;
          }
          if ( HvpMarkCellDirty(BugCheckParameter2, v66, 0) )
          {
            v70 = HIDWORD(v122);
            *(_DWORD *)(v24 + 64) = v122;
            *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
LABEL_107:
            if ( (v68 & 0x20000) == 0 )
            {
              if ( *(_DWORD *)(v24 + 60) != v70 && HvpMarkCellDirty(BugCheckParameter2, v66, 0) )
                *(_DWORD *)(v24 + 60) = v70;
              v71 = v122;
              if ( *(_DWORD *)(v24 + 64) != (_DWORD)v122 && HvpMarkCellDirty(BugCheckParameter2, v66, 0) )
                *(_DWORD *)(v24 + 64) = v71;
            }
            goto LABEL_110;
          }
          v117 = 616;
LABEL_356:
          v67 = -1073741443;
          goto LABEL_357;
        }
        if ( v67 != -1073741492 )
          goto LABEL_127;
        if ( a7 )
          *(_QWORD *)(a7 + 248) = v64;
        SetFailureLocation(a7, 1, 14, -1073741492, 560);
        v122 = v129;
LABEL_341:
        v68 = a2;
        goto LABEL_349;
      }
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v125);
      v7 = a7;
      v67 = -1073741492;
      SetFailureLocation(a7, 1, 14, -1073741492, 544);
LABEL_339:
      v66 = a3;
      goto LABEL_341;
    }
    v50 = 632LL * ((unsigned int)v30 >> 31);
    if ( (v30 & 0x7FFFFFFF) < *(_DWORD *)(v50 + BugCheckParameter2 + 1400) && (v30 & 7) == 0 )
    {
      if ( !BitMapHeader || (v30 & 0x80000000) != 0LL )
        goto LABEL_81;
      if ( _bittest64((const signed __int64 *)BitMapHeader->Buffer, (unsigned int)v30 >> 3) )
      {
        RtlClearBits(BitMapHeader, (unsigned int)v30 >> 3, 1u);
LABEL_81:
        if ( (unsigned int)v30 + ((unsigned int)v30 >> 31 << 31) < *(_DWORD *)(v50 + BugCheckParameter2 + 1400) )
        {
          v51 = *(_QWORD *)(*(_QWORD *)(v50 + BugCheckParameter2 + 1408) + 8 * ((v30 >> 21) & 0x3FF));
          v52 = (struct _EX_RUNDOWN_REF *)(v51 + 40 * ((v30 >> 12) & 0x1FF));
          if ( v52 )
          {
            if ( !HvpMapEntryIsDiscardable(v51 + 40 * ((v30 >> 12) & 0x1FF)) )
            {
              v53 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                      BugCheckParameter2,
                      (unsigned int)v30,
                      v130);
              if ( !v53 )
                goto LABEL_95;
              v55 = (int *)(v53 - 4);
              if ( v53 == 4 )
                goto LABEL_95;
              v57 = HvpMapEntryGetBinAddress(v54, v52, v121);
              v58 = (_DWORD)v55 - v57;
              v59 = -*v55;
              v61 = 0;
              if ( *v55 < 0 && v59 - 8 <= 0xFFFF8 )
              {
                v60 = *(unsigned int *)(v57 + 8);
                v56 = v60 - 32;
                if ( v59 <= (unsigned __int64)(v60 - 32) && v58 - *v55 <= (unsigned int)v60 && v58 >= 0x20 )
                  v61 = 1;
              }
              if ( v57 )
                HvpMapEntryReleaseBinAddress(v56, v52, v121);
              HvpReleaseHCell(BugCheckParameter2);
              if ( v61 )
              {
LABEL_95:
                v49 = v128;
                goto LABEL_96;
              }
            }
          }
        }
      }
    }
    v116 = 512;
    goto LABEL_337;
  }
  v68 = a2;
  if ( (v48 & 0x1E) != 0 )
  {
    v134 = 1;
    v67 = -1073741492;
    if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 656);
      goto LABEL_127;
    }
    v66 = a3;
    if ( !HvpMarkCellDirty(BugCheckParameter2, a3, 0) )
    {
      v67 = -1073741443;
      SetFailureLocation(a7, 0, 14, -1073741443, 640);
      goto LABEL_127;
    }
    *(_WORD *)(v24 + 2) &= 0xFFE1u;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
  }
  else
  {
    v66 = a3;
  }
  if ( *(int *)(v24 + 36) >= 0 )
  {
    v67 = -1073741492;
    SetFailureLocation(a7, 0, 14, -1073741492, 672);
    goto LABEL_127;
  }
  v7 = a7;
  v62 = -1;
LABEL_110:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v132);
  v72 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, v66, v132);
  v24 = v72;
  if ( !v72 )
  {
    v67 = -1073741670;
    v117 = 688;
    goto LABEL_357;
  }
  if ( v7 )
    *(_QWORD *)(v7 + 248) = v72;
  if ( (v66 & 0x80000000) != 0 )
  {
    if ( !*(_DWORD *)(v72 + 20) )
      goto LABEL_115;
    v67 = -1073741492;
    v117 = 704;
LABEL_357:
    v111 = v7;
LABEL_359:
    SetFailureLocation(v111, 0, 14, v67, v117);
    goto LABEL_127;
  }
  if ( !*(_DWORD *)(v72 + 20) )
  {
LABEL_115:
    v73 = v134;
    v123 = 0LL;
    v62 = -1;
    goto LABEL_116;
  }
  if ( (*(_BYTE *)(v72 + 13) & 3) == 1 )
  {
    v67 = -1073741492;
    SetFailureLocation(v7, 1, 14, -1073741492, 712);
    goto LABEL_415;
  }
  if ( !HvIsCellAllocated(BugCheckParameter2, *(_DWORD *)(v72 + 28)) )
  {
    v67 = -1073741492;
    SetFailureLocation(v7, 1, 14, -1073741492, 720);
    goto LABEL_415;
  }
  v76 = (__int16 *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                     BugCheckParameter2,
                     *(unsigned int *)(v24 + 28),
                     v124);
  v123 = v76;
  v77 = v76;
  if ( !v76 )
  {
    v67 = -1073741670;
    v113 = 736;
    goto LABEL_439;
  }
  v78 = -4 - *((_DWORD *)v76 - 1);
  if ( v78 < 8
    || ((v79 = *v76, ((*v76 - 26220) & 0xFDFF) != 0) ? (v80 = 4) : (v80 = 8),
        (v81 = (unsigned __int16)v77[1], (unsigned __int64)(unsigned int)(v81 * v80) + 4 < 4)
     || (((v79 - 26220) & 0xFDFF) != 0 ? (v82 = 4) : (v82 = 8), (unsigned __int64)(unsigned int)(v81 * v82) + 4 > v78)) )
  {
    v67 = -1073741492;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v124);
    v118 = 752;
LABEL_413:
    v123 = 0LL;
    SetFailureLocation(v7, 1, 14, -1073741492, v118);
    goto LABEL_415;
  }
  if ( !(_WORD)v81 )
  {
    v67 = -1073741492;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v124);
    v118 = 784;
    goto LABEL_413;
  }
  if ( v7 )
    *(_QWORD *)(v7 + 256) = v77;
  v83 = *v77;
  if ( ((*v77 - 26220) & 0xFCFF) != 0 || v83 == 26476 )
  {
    if ( v83 != 26994 )
    {
      v67 = -1073741492;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v124);
      v119 = 992;
      goto LABEL_399;
    }
  }
  else if ( v83 != 26994 )
  {
    if ( (unsigned __int16)v77[1] == *(_DWORD *)(v24 + 20) )
    {
      v68 = a2;
      v84 = CmpCheckLeaf(BugCheckParameter2, a2, v77, *(_DWORD *)(v24 + 28), v7);
      v67 = v84;
      if ( v84 == -2147483606 )
      {
        v134 = 1;
        goto LABEL_152;
      }
      if ( v84 >= 0 )
      {
LABEL_152:
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v124);
        goto LABEL_115;
      }
      if ( v84 != -1073741492 )
        goto LABEL_127;
      SetFailureLocation(v7, 1, 14, -1073741492, 832);
LABEL_415:
      if ( (v68 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
        goto LABEL_423;
      SetFailureLocation(v7, 1, 14, v67, 1008);
      if ( !HvpMarkCellDirty(BugCheckParameter2, v66, 0) )
      {
        v67 = -1073741443;
        SetFailureLocation(v7, 0, 14, -1073741443, 1024);
        goto LABEL_127;
      }
      *(_DWORD *)(v24 + 28) = -1;
      *(_DWORD *)(v24 + 20) = 0;
      v73 = 1;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
LABEL_116:
      v74 = *(_DWORD *)(v24 + 32) != -1 || *(_DWORD *)(v24 + 24);
      if ( (v68 & 0x40000) == 0 || !v74 )
      {
        v112 = (v68 & 2) != 0;
        if ( (v68 & 0xD) != 0 && v74 )
          v112 = 1;
        if ( (v68 & 8) != 0 && *(_DWORD *)(BugCheckParameter2 + 196) < 4u || v112 )
        {
          if ( !HvpMarkCellDirty(BugCheckParameter2, v66, 0) )
          {
            v67 = -1073741443;
            SetFailureLocation(v7, 0, 14, -1073741443, 1056);
            goto LABEL_127;
          }
          *(_DWORD *)(v24 + 24) = 0;
          if ( (v68 & 4) != 0 && *(_DWORD *)(BugCheckParameter2 + 196) >= 4u )
            v62 = -1163005939;
          *(_DWORD *)(v24 + 32) = v62;
        }
        if ( v73 )
          v67 = -2147483606;
        else
          v67 = 0;
        goto LABEL_127;
      }
      v67 = -1073741492;
LABEL_423:
      SetFailureLocation(v7, 0, 14, v67, 1040);
      goto LABEL_127;
    }
    v67 = -1073741492;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v124);
    v119 = 816;
LABEL_399:
    v123 = 0LL;
    SetFailureLocation(v7, 1, 14, -1073741492, v119);
LABEL_402:
    v68 = a2;
    goto LABEL_415;
  }
  v89 = v77[1] != 0;
  v90 = 0;
  for ( i = 0; ; v89 = i < (unsigned __int16)v123[1] )
  {
    if ( !v89 )
    {
      if ( *(_DWORD *)(v24 + 20) == v90 )
      {
        v66 = a3;
        v68 = a2;
        goto LABEL_152;
      }
      v67 = -1073741492;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v124);
      v120 = 960;
      goto LABEL_401;
    }
    if ( v7 )
      *(_DWORD *)(v7 + 264) = i;
    v92 = &v77[2 * i];
    if ( !HvIsCellAllocated(BugCheckParameter2, *((_DWORD *)v92 + 1)) )
    {
      v67 = -1073741492;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v124);
      v120 = 848;
LABEL_401:
      v123 = 0LL;
      SetFailureLocation(v7, 1, 14, v67, v120);
      v66 = a3;
      v62 = -1;
      goto LABEL_402;
    }
    v93 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                     BugCheckParameter2,
                     *((unsigned int *)v92 + 1),
                     v131);
    v94 = v93;
    if ( !v93 )
    {
      v111 = a7;
      v67 = -1073741670;
      v117 = 864;
      goto LABEL_359;
    }
    v95 = -4 - *((_DWORD *)v93 - 1);
    if ( v95 < 8
      || ((v96 = *v93, ((*v93 - 26220) & 0xFDFF) != 0) ? (v97 = 4) : (v97 = 8),
          (v98 = (unsigned __int16)v94[1], (unsigned __int64)(unsigned int)(v98 * v97) + 4 < 4)
       || (((v96 - 26220) & 0xFDFF) != 0 ? (v99 = 4) : (v99 = 8), (unsigned __int64)(unsigned int)(v98 * v99) + 4 > v95)) )
    {
      v67 = -1073741492;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v131);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v124);
      v7 = a7;
      v120 = 880;
      goto LABEL_401;
    }
    if ( !(_WORD)v98 )
    {
      v67 = -1073741492;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v131);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v124);
      v7 = a7;
      v120 = 912;
      goto LABEL_401;
    }
    if ( ((v96 - 26220) & 0xFCFF) != 0 || v96 == 26476 )
    {
      v67 = -1073741492;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v131);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v124);
      v7 = a7;
      v120 = 944;
      goto LABEL_401;
    }
    v100 = CmpCheckLeaf(BugCheckParameter2, a2, v94, *((_DWORD *)v92 + 1), a7);
    v67 = v100;
    if ( v100 != -2147483606 )
      break;
    v134 = 1;
LABEL_201:
    v90 += (unsigned __int16)v94[1];
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v131);
    v77 = v123;
    ++i;
    v7 = a7;
  }
  if ( v100 >= 0 )
    goto LABEL_201;
  if ( v100 == -1073741492 )
  {
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v131);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v124);
    v7 = a7;
    v120 = 952;
    goto LABEL_401;
  }
LABEL_127:
  if ( v123 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v124);
LABEL_129:
  if ( v24 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v132);
  return (unsigned int)v67;
}
