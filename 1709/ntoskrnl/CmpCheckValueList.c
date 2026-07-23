/*
 * XREFs of CmpCheckValueList @ 0x1404A9D70
 * Callers:
 *     CmpCheckKey @ 0x1404AA8A0 (CmpCheckKey.c)
 * Callees:
 *     HvpGetBinContextInitialize @ 0x140080EC0 (HvpGetBinContextInitialize.c)
 *     RtlClearBits @ 0x140080ED0 (RtlClearBits.c)
 *     HvpMapEntryIsDiscardable @ 0x140080F80 (HvpMapEntryIsDiscardable.c)
 *     HvpMapEntryGetBinAddress @ 0x140080F90 (HvpMapEntryGetBinAddress.c)
 *     HvpReleaseHCell @ 0x1400811F0 (HvpReleaseHCell.c)
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 *     HvpMapEntryReleaseBinAddress @ 0x1400812E0 (HvpMapEntryReleaseBinAddress.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     SetFailureLocation @ 0x1401E2FD4 (SetFailureLocation.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     HvIsCellAllocated @ 0x14047D4B0 (HvIsCellAllocated.c)
 */

__int64 __fastcall CmpCheckValueList(
        ULONG_PTR BugCheckParameter2,
        char a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        _RTL_BITMAP *a7,
        __int64 a8,
        _DWORD *a9,
        unsigned int *a10)
{
  __int64 v10; // r15
  unsigned int v11; // r14d
  unsigned int v13; // edi
  char v14; // al
  unsigned __int64 v15; // rsi
  _DWORD *v16; // r13
  __int64 v17; // r9
  __int64 v18; // rdi
  __int64 v19; // rax
  struct _EX_RUNDOWN_REF *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rcx
  _DWORD *v23; // rbx
  unsigned __int64 BinAddress; // rax
  __int64 v25; // rcx
  unsigned int v26; // r8d
  unsigned int v27; // edx
  __int64 v28; // r9
  bool v29; // bl
  __int64 v30; // rax
  __int64 v31; // r13
  unsigned int v32; // ecx
  unsigned __int16 v33; // cx
  unsigned __int16 v34; // ax
  __int16 v35; // dx
  unsigned int v36; // r14d
  unsigned __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rdi
  __int64 v40; // rax
  struct _EX_RUNDOWN_REF *v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rcx
  _DWORD *v44; // rbx
  unsigned __int64 v45; // rax
  __int64 v46; // rcx
  unsigned int v47; // r9d
  unsigned int v48; // edx
  __int64 v49; // r8
  bool v50; // bl
  unsigned int v51; // eax
  unsigned int v52; // ebx
  unsigned int v54; // edx
  __int64 v55; // r15
  unsigned __int64 v56; // rax
  __int64 v57; // rsi
  __int64 v58; // rax
  unsigned __int64 v59; // rcx
  __int64 v60; // r13
  int v61; // eax
  __int64 v62; // r13
  int v63; // eax
  unsigned int v64; // esi
  __int64 v65; // rbx
  __int64 v66; // rax
  _DWORD *v67; // rdx
  __int64 v68; // r13
  __int64 v69; // r13
  int v70; // [rsp+20h] [rbp-B9h]
  int v71; // [rsp+20h] [rbp-B9h]
  unsigned int v72; // [rsp+30h] [rbp-A9h]
  char v73; // [rsp+34h] [rbp-A5h]
  char v74; // [rsp+35h] [rbp-A4h]
  int v75; // [rsp+38h] [rbp-A1h]
  _DWORD v76[2]; // [rsp+40h] [rbp-99h] BYREF
  _DWORD *v77; // [rsp+48h] [rbp-91h]
  _DWORD v78[2]; // [rsp+50h] [rbp-89h] BYREF
  _WORD v79[2]; // [rsp+58h] [rbp-81h] BYREF
  _WORD v80[2]; // [rsp+5Ch] [rbp-7Dh] BYREF
  int v81; // [rsp+60h] [rbp-79h]
  __int64 v82; // [rsp+68h] [rbp-71h]
  _DWORD v83[2]; // [rsp+70h] [rbp-69h] BYREF
  _DWORD v84[2]; // [rsp+78h] [rbp-61h] BYREF
  PRTL_BITMAP BitMapHeader; // [rsp+80h] [rbp-59h]
  _DWORD v86[2]; // [rsp+88h] [rbp-51h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+90h] [rbp-49h]
  __int64 v88; // [rsp+98h] [rbp-41h]
  char v89[8]; // [rsp+A0h] [rbp-39h] BYREF
  char v90[8]; // [rsp+A8h] [rbp-31h] BYREF
  _DWORD *v91; // [rsp+B0h] [rbp-29h]
  unsigned int *v92; // [rsp+B8h] [rbp-21h]
  _QWORD v93[3]; // [rsp+C0h] [rbp-19h] BYREF

  v10 = a8;
  v11 = a4;
  v76[1] = 0;
  v13 = 0;
  v14 = 0;
  v75 = a4;
  v88 = a3;
  v74 = a2;
  LODWORD(BugCheckParameter3) = a5;
  BitMapHeader = a7;
  v82 = a8;
  v91 = a9;
  v92 = a10;
  v72 = 0;
  v76[0] = -1;
  v78[0] = -1;
  v78[1] = 0;
  v86[0] = -1;
  v86[1] = 0;
  v84[0] = -1;
  v84[1] = 0;
  v83[0] = -1;
  v83[1] = 0;
  v73 = 0;
  strcpy((char *)v93, "SymbolicLinkValue");
  if ( a8 )
  {
    *(_QWORD *)(a8 + 272) = a3;
    *(_DWORD *)(a8 + 280) = -1;
    *(_DWORD *)(a8 + 284) = 0;
    *(_QWORD *)(a8 + 288) = 0LL;
  }
  *a9 = 0;
  *a10 = 0;
  while ( 1 )
  {
    if ( v13 >= v11 )
    {
      if ( v14 )
        return (unsigned int)-2147483606;
      else
        return 0;
    }
    v15 = *(unsigned int *)(a3 + 4LL * v13);
    v16 = (_DWORD *)(a3 + 4LL * v13);
    v81 = *v16;
    v77 = v16;
    if ( a2 )
    {
      if ( v11 != 1 )
        break;
    }
    if ( (_DWORD)v15 == -1 )
    {
      SetFailureLocation(v10, 1, 15, -1073741492, 80);
      if ( v10 )
      {
        *(_DWORD *)(v10 + 284) = -1;
        goto LABEL_168;
      }
LABEL_169:
      if ( (a6 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(v10, 0, 15, -1073741492, 48);
        return (unsigned int)-1073741492;
      }
      SetFailureLocation(v10, 1, 15, -1073741492, 0);
      v64 = BugCheckParameter3;
      v65 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              (unsigned int)BugCheckParameter3,
              v86);
      if ( !v65 )
      {
        v52 = -1073741670;
        SetFailureLocation(v10, 0, 15, -1073741670, 16);
        return v52;
      }
      if ( !HvpMarkCellDirty(BugCheckParameter2, v64, 0) )
      {
        v71 = 24;
LABEL_184:
        v52 = -1073741443;
        SetFailureLocation(v10, 0, 15, -1073741443, v71);
        v67 = v86;
        goto LABEL_185;
      }
      if ( !HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v65 + 40), 0) )
      {
        v71 = 40;
        goto LABEL_184;
      }
      v66 = v88;
      --*(_DWORD *)(v65 + 36);
      v75 = --v11;
      memmove(v16, (const void *)(v66 + 4LL * (v13 + 1)), 4LL * (v11 - v13));
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v86);
      v14 = 1;
      a3 = v88;
      a2 = v74;
      v73 = 1;
    }
    else
    {
      HvpGetCellContextReinitialize((__int64)v89);
      HvpGetBinContextInitialize(v79);
      if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 1) != 0 )
        goto LABEL_29;
      v18 = 632LL * ((unsigned int)v15 >> 31);
      if ( (v15 & 0x7FFFFFFF) >= *(_DWORD *)(v18 + BugCheckParameter2 + 1400) || (v15 & 7) != 0 )
        goto LABEL_102;
      if ( v17 && (v15 & 0x80000000) == 0LL )
      {
        if ( !_bittest64(*(const signed __int64 **)(v17 + 8), (unsigned int)v15 >> 3) )
          goto LABEL_102;
        RtlClearBits((PRTL_BITMAP)v17, (unsigned int)v15 >> 3, 1u);
      }
      if ( (unsigned int)v15 + ((unsigned int)v15 >> 31 << 31) >= *(_DWORD *)(v18 + BugCheckParameter2 + 1400) )
        goto LABEL_102;
      v19 = *(_QWORD *)(*(_QWORD *)(v18 + BugCheckParameter2 + 1408) + 8 * ((v15 >> 21) & 0x3FF));
      v20 = (struct _EX_RUNDOWN_REF *)(v19 + 40 * ((v15 >> 12) & 0x1FF));
      if ( !v20 || HvpMapEntryIsDiscardable(v19 + 40 * ((v15 >> 12) & 0x1FF)) )
        goto LABEL_102;
      v21 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              (unsigned int)v15,
              v89);
      if ( v21 )
      {
        v23 = (_DWORD *)(v21 - 4);
        if ( v21 != 4 )
        {
          BinAddress = HvpMapEntryGetBinAddress(v22, v20, v79);
          v25 = (unsigned int)*v23;
          v26 = (_DWORD)v23 - BinAddress;
          v27 = -*v23;
          v29 = 0;
          if ( (int)v25 < 0 )
          {
            v25 = v27 - 8;
            if ( (unsigned int)v25 <= 0xFFFF8 )
            {
              v28 = *(unsigned int *)(BinAddress + 8);
              v25 = v28 - 32;
              if ( v27 <= (unsigned __int64)(v28 - 32) && v26 - *v23 <= (unsigned int)v28 && v26 >= 0x20 )
                v29 = 1;
            }
          }
          if ( BinAddress )
            HvpMapEntryReleaseBinAddress(v25, v20, v79);
          HvpReleaseHCell(BugCheckParameter2);
          if ( !v29 )
          {
LABEL_102:
            SetFailureLocation(v10, 1, 15, -1073741492, 96);
            v13 = v72;
            if ( v10 )
            {
              *(_DWORD *)(v10 + 284) = v15;
LABEL_168:
              *(_DWORD *)(v10 + 280) = v13;
              goto LABEL_169;
            }
            goto LABEL_169;
          }
        }
      }
      v13 = v72;
LABEL_29:
      v30 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              (unsigned int)v15,
              v76);
      v31 = v30;
      if ( !v30 )
      {
        v52 = -1073741670;
        SetFailureLocation(v10, 0, 15, -1073741670, 112);
        goto LABEL_177;
      }
      v32 = -4 - *(_DWORD *)(v30 - 4);
      if ( v32 < 0x14 )
      {
        SetFailureLocation(v10, 1, 15, -1073741492, 128);
        if ( v10 )
        {
LABEL_163:
          *(_DWORD *)(v10 + 280) = v13;
          *(_DWORD *)(v10 + 284) = v15;
          *(_QWORD *)(v10 + 288) = v31;
        }
LABEL_164:
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v76);
LABEL_165:
        v16 = v77;
        goto LABEL_169;
      }
      if ( *(_WORD *)v30 != 27510 )
      {
        SetFailureLocation(v10, 1, 15, -1073741492, 136);
        if ( v10 )
          goto LABEL_163;
        goto LABEL_164;
      }
      if ( (unsigned int)*(unsigned __int16 *)(v30 + 2) + 20 > v32 )
      {
        SetFailureLocation(v10, 1, 15, -1073741492, 144);
        if ( v10 )
          goto LABEL_163;
        goto LABEL_164;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) & 2) == 0 && (*(_BYTE *)(v30 + 16) & 2) != 0 )
      {
        v73 = 1;
        v52 = -1073741492;
        if ( v10 )
        {
          *(_DWORD *)(v10 + 280) = v13;
          *(_DWORD *)(v10 + 284) = v15;
          *(_QWORD *)(v10 + 288) = v30;
        }
        if ( (a6 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
        {
          SetFailureLocation(v10, 0, 15, -1073741492, 156);
          goto LABEL_182;
        }
        SetFailureLocation(v10, 1, 15, -1073741492, 152);
        if ( !HvpMarkCellDirty(BugCheckParameter2, (unsigned int)v15, 0) )
        {
          v52 = -1073741443;
          SetFailureLocation(v10, 1, 15, -1073741443, 154);
          goto LABEL_182;
        }
        *(_WORD *)(v31 + 16) &= ~2u;
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
      }
      if ( v74 )
      {
        v59 = *(_QWORD *)(v31 + 20) - v93[0];
        if ( !v59 )
        {
          v59 = *(_QWORD *)(v31 + 28) - v93[1];
          if ( !v59 )
            v59 = *(unsigned __int8 *)(v31 + 36) - (unsigned __int64)LOBYTE(v93[2]);
        }
        if ( v59 )
        {
          v70 = 160;
          goto LABEL_188;
        }
        if ( *(_DWORD *)(v31 + 12) != 6 && (*(_BYTE *)(v31 + 16) & 2) == 0 )
        {
          v70 = 176;
LABEL_188:
          v52 = -1073741492;
          SetFailureLocation(v10, 0, 15, -1073741492, v70);
          if ( v10 )
          {
            *(_DWORD *)(v10 + 280) = v13;
            *(_DWORD *)(v10 + 284) = v15;
            *(_QWORD *)(v10 + 288) = v31;
          }
LABEL_182:
          v67 = v76;
LABEL_185:
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v67);
          return v52;
        }
      }
      v33 = *(_WORD *)(v31 + 2);
      v34 = v33;
      v35 = *(_WORD *)(v31 + 16) & 1;
      if ( v35 )
        v34 = 2 * v33;
      if ( *v91 < (unsigned int)v34 )
      {
        if ( v35 )
          v33 *= 2;
        *v91 = v33;
      }
      v36 = *(_DWORD *)(v31 + 4);
      if ( v74 )
      {
        if ( (v36 & 1) != 0 )
        {
          v70 = 192;
          goto LABEL_188;
        }
        if ( v36 > 0xFFFF )
        {
          v70 = 208;
          goto LABEL_188;
        }
      }
      if ( (*(_BYTE *)(v31 + 16) & 2) != 0 )
      {
        if ( v36 || *(_DWORD *)(v31 + 12) )
        {
          SetFailureLocation(v10, 1, 15, -1073741492, 224);
          if ( !v10 )
            goto LABEL_128;
          goto LABEL_124;
        }
      }
      else if ( v36 >= 0x80000000 )
      {
        if ( v36 + 0x80000000 <= 4 )
          goto LABEL_73;
        SetFailureLocation(v10, 1, 15, -1073741492, 416);
        if ( !v10 )
          goto LABEL_128;
LABEL_124:
        *(_DWORD *)(v10 + 284) = v15;
        goto LABEL_125;
      }
      v37 = *(unsigned int *)(v31 + 8);
      v38 = 0LL;
      if ( v36 )
      {
        HvpGetCellContextReinitialize((__int64)v90);
        HvpGetBinContextInitialize(v80);
        if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 1) == 0 )
        {
          v39 = 632LL * ((unsigned int)v37 >> 31);
          if ( (v37 & 0x7FFFFFFF) >= *(_DWORD *)(v39 + BugCheckParameter2 + 1400) || (v37 & 7) != 0 )
            goto LABEL_135;
          if ( BitMapHeader && (v37 & 0x80000000) == 0LL )
          {
            if ( !_bittest64((const signed __int64 *)BitMapHeader->Buffer, (unsigned int)v37 >> 3) )
              goto LABEL_135;
            RtlClearBits(BitMapHeader, (unsigned int)v37 >> 3, 1u);
          }
          if ( (unsigned int)v37 + ((unsigned int)v37 >> 31 << 31) >= *(_DWORD *)(v39 + BugCheckParameter2 + 1400) )
            goto LABEL_135;
          v40 = *(_QWORD *)(*(_QWORD *)(v39 + BugCheckParameter2 + 1408) + 8 * ((v37 >> 21) & 0x3FF));
          v41 = (struct _EX_RUNDOWN_REF *)(v40 + 40 * ((v37 >> 12) & 0x1FF));
          if ( !v41 || HvpMapEntryIsDiscardable(v40 + 40 * ((v37 >> 12) & 0x1FF)) )
            goto LABEL_135;
          v42 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  (unsigned int)v37,
                  v90);
          if ( v42 )
          {
            v44 = (_DWORD *)(v42 - 4);
            if ( v42 != 4 )
            {
              v45 = HvpMapEntryGetBinAddress(v43, v41, v80);
              v46 = (unsigned int)*v44;
              v47 = (_DWORD)v44 - v45;
              v48 = -*v44;
              v50 = 0;
              if ( (int)v46 < 0 )
              {
                v46 = v48 - 8;
                if ( (unsigned int)v46 <= 0xFFFF8 )
                {
                  v49 = *(unsigned int *)(v45 + 8);
                  v46 = v49 - 32;
                  if ( v48 <= (unsigned __int64)(v49 - 32) && v47 - *v44 <= (unsigned int)v49 && v47 >= 0x20 )
                    v50 = 1;
                }
              }
              if ( v45 )
                HvpMapEntryReleaseBinAddress(v46, v41, v80);
              HvpReleaseHCell(BugCheckParameter2);
              if ( !v50 )
              {
LABEL_135:
                SetFailureLocation(v10, 1, 15, -1073741492, 240);
                v13 = v72;
                if ( v10 )
                {
                  *(_DWORD *)(v10 + 284) = v81;
LABEL_125:
                  *(_DWORD *)(v10 + 280) = v13;
                  *(_QWORD *)(v10 + 288) = v31;
                }
                goto LABEL_128;
              }
            }
          }
        }
        v38 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                (unsigned int)v37,
                v78);
        if ( !v38 )
        {
          v52 = -1073741670;
          SetFailureLocation(v10, 0, 15, -1073741670, 256);
          if ( v10 )
          {
            *(_DWORD *)(v10 + 280) = v72;
            *(_DWORD *)(v10 + 284) = v37;
          }
          goto LABEL_182;
        }
      }
      else if ( (_DWORD)v37 != -1 )
      {
        SetFailureLocation(v10, 1, 15, -1073741492, 224);
        v13 = v72;
        if ( v10 )
        {
          *(_DWORD *)(v10 + 284) = v81;
          goto LABEL_125;
        }
LABEL_128:
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v76);
        goto LABEL_130;
      }
      if ( v36 > 0x3FD8 && *(_DWORD *)(BugCheckParameter2 + 196) >= 4u )
      {
        if ( (unsigned int)(-4 - *(_DWORD *)(v38 - 4)) >= 8 && *(_WORD *)v38 == 25188 )
        {
          if ( *(_WORD *)(v38 + 2) )
          {
            v54 = *(_DWORD *)(v38 + 4);
            if ( v54 != -1 )
            {
              if ( HvIsCellAllocated(BugCheckParameter2, v54) )
              {
                v55 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                        BugCheckParameter2,
                        *(unsigned int *)(v38 + 4),
                        v83);
                if ( !v55 )
                {
                  v69 = v82;
                  v52 = -1073741670;
                  SetFailureLocation(v82, 0, 15, -1073741670, 304);
                  if ( v69 )
                  {
                    *(_DWORD *)(v69 + 280) = v72;
                    *(_DWORD *)(v69 + 284) = *(_DWORD *)(v38 + 4);
                  }
LABEL_181:
                  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v78);
                  goto LABEL_182;
                }
                v56 = 4LL * *(unsigned __int16 *)(v38 + 2);
                if ( v56 < 4 || v56 > (unsigned int)(-4 - *(_DWORD *)(v55 - 4)) )
                {
                  v10 = v82;
                  SetFailureLocation(v82, 1, 15, -1073741492, 320);
                  v13 = v72;
                  if ( !v10 )
                    goto LABEL_149;
                }
                else
                {
                  if ( *(unsigned __int16 *)(v38 + 2) == (v36 + 16343) / 0x3FD8 )
                  {
                    v57 = 0LL;
                    if ( *(_WORD *)(v38 + 2) )
                    {
                      while ( 1 )
                      {
                        if ( !HvIsCellAllocated(BugCheckParameter2, *(_DWORD *)(v55 + 4 * v57)) )
                        {
                          v62 = v82;
                          SetFailureLocation(v82, 1, 15, -1073741492, 352);
                          if ( v62 )
                          {
                            *(_DWORD *)(v62 + 280) = v57;
                            v63 = *(_DWORD *)(v55 + 4 * v57);
                            v10 = v62;
                            *(_DWORD *)(v62 + 284) = v63;
                            *(_QWORD *)(v62 + 288) = v38;
                          }
                          else
                          {
                            v10 = 0LL;
                          }
LABEL_144:
                          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(
                            BugCheckParameter2,
                            v83);
                          goto LABEL_129;
                        }
                        v58 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                                BugCheckParameter2,
                                *(unsigned int *)(v55 + 4 * v57),
                                v84);
                        if ( !v58 )
                          break;
                        if ( (unsigned int)(-4 - *(_DWORD *)(v58 - 4)) < 0x3FD8 )
                        {
                          v60 = v82;
                          SetFailureLocation(v82, 1, 15, -1073741492, 384);
                          if ( v60 )
                          {
                            *(_DWORD *)(v60 + 280) = v57;
                            v61 = *(_DWORD *)(v55 + 4 * v57);
                            v10 = v60;
                            *(_DWORD *)(v60 + 284) = v61;
                            *(_QWORD *)(v60 + 288) = v38;
                          }
                          else
                          {
                            v10 = 0LL;
                          }
                          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(
                            BugCheckParameter2,
                            v84);
                          goto LABEL_144;
                        }
                        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v84);
                        v57 = (unsigned int)(v57 + 1);
                        if ( (unsigned int)v57 >= *(unsigned __int16 *)(v38 + 2) )
                          goto LABEL_98;
                      }
                      v68 = v82;
                      v52 = -1073741670;
                      SetFailureLocation(v82, 0, 15, -1073741670, 368);
                      if ( v68 )
                      {
                        *(_DWORD *)(v68 + 280) = v57;
                        *(_DWORD *)(v68 + 284) = *(_DWORD *)(v55 + 4 * v57);
                        *(_QWORD *)(v68 + 288) = v38;
                      }
                      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v83);
                      goto LABEL_181;
                    }
LABEL_98:
                    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v83);
                    v10 = v82;
                    goto LABEL_71;
                  }
                  v10 = v82;
                  SetFailureLocation(v82, 1, 15, -1073741492, 336);
                  v13 = v72;
                  if ( !v10 )
                  {
LABEL_149:
                    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v83);
                    goto LABEL_127;
                  }
                }
                *(_DWORD *)(v10 + 284) = v81;
                *(_DWORD *)(v10 + 280) = v13;
                *(_QWORD *)(v10 + 288) = v31;
                goto LABEL_149;
              }
              SetFailureLocation(v10, 1, 15, -1073741492, 288);
              if ( v10 )
              {
                *(_DWORD *)(v10 + 280) = v72;
                *(_DWORD *)(v10 + 284) = *(_DWORD *)(v38 + 4);
                *(_QWORD *)(v10 + 288) = v38;
              }
LABEL_129:
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v78);
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v76);
              v13 = v72;
LABEL_130:
              v11 = v75;
              goto LABEL_165;
            }
          }
        }
        SetFailureLocation(v10, 1, 15, -1073741492, 272);
        v13 = v72;
        if ( !v10 )
          goto LABEL_127;
        *(_DWORD *)(v10 + 284) = v37;
LABEL_126:
        *(_DWORD *)(v10 + 280) = v13;
LABEL_127:
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v78);
        goto LABEL_128;
      }
      if ( v36 && v36 > -4 - *(_DWORD *)(v38 - 4) )
      {
        SetFailureLocation(v10, 1, 15, -1073741492, 400);
        v13 = v72;
        if ( !v10 )
          goto LABEL_127;
        *(_DWORD *)(v10 + 284) = v81;
        *(_QWORD *)(v10 + 288) = v31;
        goto LABEL_126;
      }
LABEL_71:
      if ( v38 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v78);
LABEL_73:
      v51 = *(_DWORD *)(v31 + 4);
      if ( v51 >= 0x80000000 )
        v51 += 0x80000000;
      if ( *v92 < v51 )
        *v92 = v51;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v76);
      v11 = v75;
      v13 = v72 + 1;
      a3 = v88;
      a2 = v74;
      v14 = v73;
      ++v72;
    }
  }
  v52 = -1073741492;
  SetFailureLocation(v10, 0, 15, -1073741492, 64);
LABEL_177:
  if ( v10 )
  {
    *(_DWORD *)(v10 + 280) = v13;
    *(_DWORD *)(v10 + 284) = v15;
  }
  return v52;
}
