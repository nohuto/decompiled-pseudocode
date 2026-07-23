/*
 * XREFs of CmpCheckValueList @ 0x140504990
 * Callers:
 *     CmpCheckKey @ 0x140505100 (CmpCheckKey.c)
 * Callees:
 *     HvpGetBinContextInitialize @ 0x14008CF2C (HvpGetBinContextInitialize.c)
 *     RtlClearBits @ 0x14008CF40 (RtlClearBits.c)
 *     HvpMapEntryIsDiscardable @ 0x14008CFF0 (HvpMapEntryIsDiscardable.c)
 *     HvpMapEntryGetBinAddress @ 0x14008D010 (HvpMapEntryGetBinAddress.c)
 *     HvpReleaseHCell @ 0x14008D080 (HvpReleaseHCell.c)
 *     HvpGetCellContextReinitialize @ 0x14008D150 (HvpGetCellContextReinitialize.c)
 *     HvpMapEntryReleaseBinAddress @ 0x14008D170 (HvpMapEntryReleaseBinAddress.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     SetFailureLocation @ 0x1401DEAE4 (SetFailureLocation.c)
 *     HvIsCellAllocated @ 0x1405153D0 (HvIsCellAllocated.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
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
  __int64 v10; // r14
  unsigned int v11; // r15d
  unsigned int v13; // edi
  char v14; // al
  unsigned __int64 v15; // rsi
  _DWORD *v16; // r13
  __int64 v17; // r9
  unsigned int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // rax
  struct _EX_RUNDOWN_REF *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rcx
  _DWORD *v24; // rbx
  unsigned __int64 BinAddress; // rax
  __int64 v26; // rcx
  unsigned int v27; // r8d
  unsigned int v28; // edx
  __int64 v29; // r9
  bool v30; // bl
  __int64 v31; // rax
  __int64 v32; // r13
  unsigned int v33; // ecx
  unsigned __int16 v34; // cx
  unsigned __int16 v35; // ax
  __int16 v36; // dx
  unsigned int v37; // r15d
  unsigned __int64 v38; // rsi
  __int64 v39; // rdi
  unsigned int v40; // ebx
  __int64 v41; // rax
  __int64 v42; // rax
  struct _EX_RUNDOWN_REF *v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rcx
  _DWORD *v46; // rbx
  unsigned __int64 v47; // rax
  __int64 v48; // rcx
  unsigned int v49; // r9d
  unsigned int v50; // edx
  __int64 v51; // r8
  bool v52; // bl
  unsigned int v53; // eax
  unsigned int v54; // ebx
  __int64 v56; // rdx
  __int64 v57; // r14
  int v58; // r8d
  unsigned __int64 v59; // rax
  unsigned int v60; // esi
  __int64 v61; // rax
  unsigned __int64 v62; // rcx
  __int64 v63; // r15
  int v64; // ecx
  __int64 v65; // r15
  int v66; // ecx
  unsigned int v67; // esi
  __int64 v68; // rbx
  __int64 v69; // rax
  _DWORD *v70; // rdx
  __int64 v71; // r15
  __int64 v72; // r15
  int v73; // [rsp+20h] [rbp-B9h]
  int v74; // [rsp+20h] [rbp-B9h]
  unsigned int v75; // [rsp+30h] [rbp-A9h]
  char v76; // [rsp+34h] [rbp-A5h]
  char v77; // [rsp+35h] [rbp-A4h]
  int v78; // [rsp+38h] [rbp-A1h]
  _DWORD v79[2]; // [rsp+40h] [rbp-99h] BYREF
  _DWORD *v80; // [rsp+48h] [rbp-91h]
  _DWORD v81[2]; // [rsp+50h] [rbp-89h] BYREF
  _WORD v82[2]; // [rsp+58h] [rbp-81h] BYREF
  _WORD v83[2]; // [rsp+5Ch] [rbp-7Dh] BYREF
  int v84; // [rsp+60h] [rbp-79h]
  __int64 v85; // [rsp+68h] [rbp-71h]
  _DWORD v86[2]; // [rsp+70h] [rbp-69h] BYREF
  PRTL_BITMAP BitMapHeader; // [rsp+78h] [rbp-61h]
  _DWORD v88[2]; // [rsp+80h] [rbp-59h] BYREF
  _DWORD v89[2]; // [rsp+88h] [rbp-51h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+90h] [rbp-49h]
  __int64 v91; // [rsp+98h] [rbp-41h]
  char v92[8]; // [rsp+A0h] [rbp-39h] BYREF
  char v93[8]; // [rsp+A8h] [rbp-31h] BYREF
  _DWORD *v94; // [rsp+B0h] [rbp-29h]
  unsigned int *v95; // [rsp+B8h] [rbp-21h]
  _QWORD v96[3]; // [rsp+C0h] [rbp-19h] BYREF

  v10 = a8;
  v11 = a4;
  v79[1] = 0;
  v13 = 0;
  v14 = 0;
  v78 = a4;
  v91 = a3;
  v77 = a2;
  LODWORD(BugCheckParameter3) = a5;
  BitMapHeader = a7;
  v85 = a8;
  v94 = a9;
  v95 = a10;
  v75 = 0;
  v79[0] = -1;
  v81[0] = -1;
  v81[1] = 0;
  v89[0] = -1;
  v89[1] = 0;
  v88[0] = -1;
  v88[1] = 0;
  v86[0] = -1;
  v86[1] = 0;
  v76 = 0;
  strcpy((char *)v96, "SymbolicLinkValue");
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
    v84 = *v16;
    v80 = v16;
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
        *(_DWORD *)(v10 + 280) = v13;
        *(_DWORD *)(v10 + 284) = -1;
      }
LABEL_172:
      if ( (a6 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(v10, 0, 15, -1073741492, 48);
        return (unsigned int)-1073741492;
      }
      SetFailureLocation(v10, 1, 15, -1073741492, 0);
      v67 = BugCheckParameter3;
      v68 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              (unsigned int)BugCheckParameter3,
              v89);
      if ( !v68 )
      {
        v54 = -1073741670;
        SetFailureLocation(v10, 0, 15, -1073741670, 16);
        return v54;
      }
      if ( !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, v67) )
      {
        v74 = 24;
LABEL_187:
        v54 = -1073741443;
        SetFailureLocation(v10, 0, 15, -1073741443, v74);
        v70 = v89;
        goto LABEL_188;
      }
      if ( !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v68 + 40)) )
      {
        v74 = 40;
        goto LABEL_187;
      }
      v69 = v91;
      --*(_DWORD *)(v68 + 36);
      v78 = --v11;
      memmove(v16, (const void *)(v69 + 4LL * (v13 + 1)), 4LL * (v11 - v13));
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v89);
      v14 = 1;
      a3 = v91;
      a2 = v77;
      v76 = 1;
    }
    else
    {
      HvpGetCellContextReinitialize((__int64)v92);
      HvpGetBinContextInitialize(v82);
      if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 1) != 0 )
        goto LABEL_28;
      v18 = (unsigned int)v15 >> 31;
      if ( (v15 & 0x7FFFFFFF) >= *(_DWORD *)(632LL * ((unsigned int)v15 >> 31) + BugCheckParameter2 + 1400)
        || (v15 & 7) != 0 )
      {
        goto LABEL_102;
      }
      if ( v17 && (v15 & 0x80000000) == 0LL )
      {
        if ( !_bittest64(*(const signed __int64 **)(v17 + 8), (unsigned int)v15 >> 3) )
          goto LABEL_102;
        RtlClearBits((PRTL_BITMAP)v17, (unsigned int)v15 >> 3, 1u);
      }
      v19 = 632LL * v18;
      if ( (unsigned int)v15 + (v18 << 31) >= *(_DWORD *)(v19 + BugCheckParameter2 + 1400) )
        goto LABEL_102;
      v20 = *(_QWORD *)(*(_QWORD *)(v19 + BugCheckParameter2 + 1408) + 8 * ((v15 >> 21) & 0x3FF));
      v21 = (struct _EX_RUNDOWN_REF *)(v20 + 40 * ((v15 >> 12) & 0x1FF));
      if ( !v21 || HvpMapEntryIsDiscardable(v20 + 40 * ((v15 >> 12) & 0x1FF)) )
      {
        v13 = v75;
LABEL_102:
        SetFailureLocation(v10, 1, 15, -1073741492, 96);
        if ( v10 )
        {
          *(_DWORD *)(v10 + 280) = v13;
          *(_DWORD *)(v10 + 284) = v15;
        }
        goto LABEL_172;
      }
      v22 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              (unsigned int)v15,
              v92);
      if ( !v22 || (v24 = (_DWORD *)(v22 - 4), v22 == 4) )
      {
        v13 = v75;
        goto LABEL_28;
      }
      BinAddress = HvpMapEntryGetBinAddress(v23, v21, v82);
      v26 = (unsigned int)*v24;
      v27 = (_DWORD)v24 - BinAddress;
      v28 = -*v24;
      v30 = 0;
      if ( (int)v26 < 0 )
      {
        v26 = v28 - 8;
        if ( (unsigned int)v26 <= 0xFFFF8 )
        {
          v29 = *(unsigned int *)(BinAddress + 8);
          v26 = v29 - 32;
          if ( v28 <= (unsigned __int64)(v29 - 32) && v27 - *v24 <= (unsigned int)v29 && v27 >= 0x20 )
            v30 = 1;
        }
      }
      if ( BinAddress )
        HvpMapEntryReleaseBinAddress(v26, v21, v82);
      HvpReleaseHCell(BugCheckParameter2);
      v13 = v75;
      if ( !v30 )
        goto LABEL_102;
LABEL_28:
      v31 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              (unsigned int)v15,
              v79);
      v32 = v31;
      if ( !v31 )
      {
        v54 = -1073741670;
        SetFailureLocation(v10, 0, 15, -1073741670, 112);
        goto LABEL_180;
      }
      v33 = -4 - *(_DWORD *)(v31 - 4);
      if ( v33 < 0x14 )
      {
        SetFailureLocation(v10, 1, 15, -1073741492, 128);
        if ( v10 )
        {
LABEL_132:
          *(_DWORD *)(v10 + 280) = v13;
          *(_DWORD *)(v10 + 284) = v15;
          *(_QWORD *)(v10 + 288) = v32;
        }
LABEL_133:
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v79);
LABEL_134:
        v16 = v80;
        goto LABEL_172;
      }
      if ( *(_WORD *)v31 != 27510 )
      {
        SetFailureLocation(v10, 1, 15, -1073741492, 136);
        if ( v10 )
          goto LABEL_132;
        goto LABEL_133;
      }
      if ( (unsigned int)*(unsigned __int16 *)(v31 + 2) + 20 > v33 )
      {
        SetFailureLocation(v10, 1, 15, -1073741492, 144);
        if ( v10 )
          goto LABEL_132;
        goto LABEL_133;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) & 2) == 0 && (*(_BYTE *)(v31 + 16) & 2) != 0 )
      {
        v76 = 1;
        v54 = -1073741492;
        if ( v10 )
        {
          *(_DWORD *)(v10 + 280) = v13;
          *(_DWORD *)(v10 + 284) = v15;
          *(_QWORD *)(v10 + 288) = v31;
        }
        if ( (a6 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
        {
          SetFailureLocation(v10, 0, 15, -1073741492, 156);
          goto LABEL_185;
        }
        SetFailureLocation(v10, 1, 15, -1073741492, 152);
        if ( !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, (unsigned int)v15) )
        {
          v54 = -1073741443;
          SetFailureLocation(v10, 1, 15, -1073741443, 154);
          goto LABEL_185;
        }
        *(_WORD *)(v32 + 16) &= ~2u;
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
      }
      if ( v77 )
      {
        v62 = *(_QWORD *)(v32 + 20) - v96[0];
        if ( !v62 )
        {
          v62 = *(_QWORD *)(v32 + 28) - v96[1];
          if ( !v62 )
            v62 = *(unsigned __int8 *)(v32 + 36) - (unsigned __int64)LOBYTE(v96[2]);
        }
        if ( v62 )
        {
          v73 = 160;
          goto LABEL_191;
        }
        if ( *(_DWORD *)(v32 + 12) != 6 && (*(_BYTE *)(v32 + 16) & 2) == 0 )
        {
          v73 = 176;
LABEL_191:
          v54 = -1073741492;
          SetFailureLocation(v10, 0, 15, -1073741492, v73);
          if ( v10 )
          {
            *(_DWORD *)(v10 + 280) = v13;
            *(_DWORD *)(v10 + 284) = v15;
            *(_QWORD *)(v10 + 288) = v32;
          }
LABEL_185:
          v70 = v79;
LABEL_188:
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v70);
          return v54;
        }
      }
      v34 = *(_WORD *)(v32 + 2);
      v35 = v34;
      v36 = *(_WORD *)(v32 + 16) & 1;
      if ( v36 )
        v35 = 2 * v34;
      if ( *v94 < (unsigned int)v35 )
      {
        if ( v36 )
          v34 *= 2;
        *v94 = v34;
      }
      v37 = *(_DWORD *)(v32 + 4);
      if ( v77 )
      {
        if ( (v37 & 1) != 0 )
        {
          v73 = 192;
          goto LABEL_191;
        }
        if ( v37 > 0xFFFF )
        {
          v73 = 208;
          goto LABEL_191;
        }
      }
      if ( (*(_BYTE *)(v32 + 16) & 2) != 0 )
      {
        if ( v37 || *(_DWORD *)(v32 + 12) )
        {
          SetFailureLocation(v10, 1, 15, -1073741492, 224);
          if ( v10 )
            goto LABEL_125;
LABEL_127:
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v79);
LABEL_131:
          v11 = v78;
          goto LABEL_134;
        }
      }
      else if ( v37 >= 0x80000000 )
      {
        if ( v37 + 0x80000000 <= 4 )
          goto LABEL_72;
        SetFailureLocation(v10, 1, 15, -1073741492, 416);
        if ( !v10 )
          goto LABEL_127;
LABEL_125:
        *(_DWORD *)(v10 + 284) = v15;
        goto LABEL_126;
      }
      v38 = *(unsigned int *)(v32 + 8);
      v39 = 0LL;
      if ( v37 )
      {
        HvpGetCellContextReinitialize((__int64)v93);
        HvpGetBinContextInitialize(v83);
        if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 1) != 0 )
          goto LABEL_66;
        v40 = (unsigned int)v38 >> 31;
        if ( (v38 & 0x7FFFFFFF) < *(_DWORD *)(632LL * ((unsigned int)v38 >> 31) + BugCheckParameter2 + 1400)
          && (v38 & 7) == 0 )
        {
          if ( BitMapHeader && (v38 & 0x80000000) == 0LL )
          {
            if ( _bittest64((const signed __int64 *)BitMapHeader->Buffer, (unsigned int)v38 >> 3) )
            {
              RtlClearBits(BitMapHeader, (unsigned int)v38 >> 3, 1u);
              goto LABEL_52;
            }
          }
          else
          {
LABEL_52:
            v41 = 632LL * v40;
            if ( (unsigned int)v38 + (v40 << 31) < *(_DWORD *)(v41 + BugCheckParameter2 + 1400) )
            {
              v42 = *(_QWORD *)(*(_QWORD *)(v41 + BugCheckParameter2 + 1408) + 8 * ((v38 >> 21) & 0x3FF));
              v43 = (struct _EX_RUNDOWN_REF *)(v42 + 40 * ((v38 >> 12) & 0x1FF));
              if ( v43 )
              {
                if ( !HvpMapEntryIsDiscardable(v42 + 40 * ((v38 >> 12) & 0x1FF)) )
                {
                  v44 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *))(BugCheckParameter2 + 8))(
                          BugCheckParameter2,
                          (unsigned int)v38,
                          v93);
                  if ( !v44 )
                    goto LABEL_66;
                  v46 = (_DWORD *)(v44 - 4);
                  if ( v44 == 4 )
                    goto LABEL_66;
                  v47 = HvpMapEntryGetBinAddress(v45, v43, v83);
                  v48 = (unsigned int)*v46;
                  v49 = (_DWORD)v46 - v47;
                  v50 = -*v46;
                  v52 = 0;
                  if ( (int)v48 < 0 )
                  {
                    v48 = v50 - 8;
                    if ( (unsigned int)v48 <= 0xFFFF8 )
                    {
                      v51 = *(unsigned int *)(v47 + 8);
                      v48 = v51 - 32;
                      if ( v50 <= (unsigned __int64)(v51 - 32) && v49 - *v46 <= (unsigned int)v51 && v49 >= 0x20 )
                        v52 = 1;
                    }
                  }
                  if ( v47 )
                    HvpMapEntryReleaseBinAddress(v48, v43, v83);
                  HvpReleaseHCell(BugCheckParameter2);
                  if ( v52 )
                  {
LABEL_66:
                    v39 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                            BugCheckParameter2,
                            (unsigned int)v38,
                            v81);
                    if ( !v39 )
                    {
                      v54 = -1073741670;
                      SetFailureLocation(v10, 0, 15, -1073741670, 256);
                      if ( v10 )
                      {
                        *(_DWORD *)(v10 + 280) = v75;
                        *(_DWORD *)(v10 + 284) = v38;
                      }
                      goto LABEL_185;
                    }
                    goto LABEL_67;
                  }
                }
              }
            }
          }
        }
        SetFailureLocation(v10, 1, 15, -1073741492, 240);
        v13 = v75;
        if ( !v10 )
          goto LABEL_127;
        *(_DWORD *)(v10 + 284) = v84;
LABEL_126:
        *(_DWORD *)(v10 + 280) = v13;
        *(_QWORD *)(v10 + 288) = v32;
        goto LABEL_127;
      }
      if ( (_DWORD)v38 != -1 )
      {
        SetFailureLocation(v10, 1, 15, -1073741492, 224);
        v13 = v75;
        if ( v10 )
        {
          *(_DWORD *)(v10 + 284) = v84;
          *(_DWORD *)(v10 + 280) = v75;
          *(_QWORD *)(v10 + 288) = v32;
        }
        goto LABEL_140;
      }
LABEL_67:
      if ( v37 > 0x3FD8 && *(_DWORD *)(BugCheckParameter2 + 196) >= 4u )
      {
        if ( (unsigned int)(-4 - *(_DWORD *)(v39 - 4)) >= 8 && *(_WORD *)v39 == 25188 )
        {
          if ( *(_WORD *)(v39 + 2) )
          {
            v56 = *(unsigned int *)(v39 + 4);
            if ( (_DWORD)v56 != -1 )
            {
              if ( (unsigned __int8)HvIsCellAllocated(BugCheckParameter2, v56, BitMapHeader) )
              {
                v57 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                        BugCheckParameter2,
                        *(unsigned int *)(v39 + 4),
                        v86);
                if ( !v57 )
                {
                  v72 = v85;
                  v54 = -1073741670;
                  SetFailureLocation(v85, 0, 15, -1073741670, 304);
                  if ( v72 )
                  {
                    *(_DWORD *)(v72 + 280) = v75;
                    *(_DWORD *)(v72 + 284) = *(_DWORD *)(v39 + 4);
                  }
LABEL_184:
                  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v81);
                  goto LABEL_185;
                }
                v58 = *(unsigned __int16 *)(v39 + 2);
                v59 = 4LL * *(unsigned __int16 *)(v39 + 2);
                if ( v59 < 4 || v59 > (unsigned int)(-4 - *(_DWORD *)(v57 - 4)) )
                {
                  v10 = v85;
                  SetFailureLocation(v85, 1, 15, -1073741492, 320);
                  v13 = v75;
                  if ( !v10 )
                    goto LABEL_155;
                }
                else
                {
                  if ( v58 == (v37 + 16343) / 0x3FD8 )
                  {
                    v60 = 0;
                    if ( (_WORD)v58 )
                    {
                      while ( 1 )
                      {
                        if ( !(unsigned __int8)HvIsCellAllocated(
                                                 BugCheckParameter2,
                                                 *(unsigned int *)(v57 + 4LL * v60),
                                                 BitMapHeader) )
                        {
                          v65 = v85;
                          SetFailureLocation(v85, 1, 15, -1073741492, 352);
                          if ( v65 )
                          {
                            *(_DWORD *)(v65 + 280) = v60;
                            v66 = *(_DWORD *)(v57 + 4LL * v60);
                            v10 = v65;
                            *(_DWORD *)(v65 + 284) = v66;
                            *(_QWORD *)(v65 + 288) = v39;
                          }
                          else
                          {
                            v10 = 0LL;
                          }
LABEL_130:
                          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(
                            BugCheckParameter2,
                            v86);
                          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(
                            BugCheckParameter2,
                            v81);
                          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(
                            BugCheckParameter2,
                            v79);
                          v13 = v75;
                          goto LABEL_131;
                        }
                        v61 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                                BugCheckParameter2,
                                *(unsigned int *)(v57 + 4LL * v60),
                                v88);
                        if ( !v61 )
                          break;
                        if ( (unsigned int)(-4 - *(_DWORD *)(v61 - 4)) < 0x3FD8 )
                        {
                          v63 = v85;
                          SetFailureLocation(v85, 1, 15, -1073741492, 384);
                          if ( v63 )
                          {
                            *(_DWORD *)(v63 + 280) = v60;
                            v64 = *(_DWORD *)(v57 + 4LL * v60);
                            v10 = v63;
                            *(_DWORD *)(v63 + 284) = v64;
                            *(_QWORD *)(v63 + 288) = v39;
                          }
                          else
                          {
                            v10 = 0LL;
                          }
                          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(
                            BugCheckParameter2,
                            v88);
                          goto LABEL_130;
                        }
                        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v88);
                        if ( ++v60 >= *(unsigned __int16 *)(v39 + 2) )
                          goto LABEL_97;
                      }
                      v71 = v85;
                      v54 = -1073741670;
                      SetFailureLocation(v85, 0, 15, -1073741670, 368);
                      if ( v71 )
                      {
                        *(_DWORD *)(v71 + 280) = v60;
                        *(_DWORD *)(v71 + 284) = *(_DWORD *)(v57 + 4LL * v60);
                        *(_QWORD *)(v71 + 288) = v39;
                      }
                      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v86);
                      goto LABEL_184;
                    }
LABEL_97:
                    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v86);
                    v10 = v85;
                    goto LABEL_70;
                  }
                  v10 = v85;
                  SetFailureLocation(v85, 1, 15, -1073741492, 336);
                  v13 = v75;
                  if ( !v10 )
                  {
LABEL_155:
                    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v86);
                    goto LABEL_139;
                  }
                }
                *(_DWORD *)(v10 + 284) = v84;
                *(_DWORD *)(v10 + 280) = v13;
                *(_QWORD *)(v10 + 288) = v32;
                goto LABEL_155;
              }
              SetFailureLocation(v10, 1, 15, -1073741492, 288);
              if ( v10 )
              {
                *(_DWORD *)(v10 + 280) = v75;
                *(_DWORD *)(v10 + 284) = *(_DWORD *)(v39 + 4);
                *(_QWORD *)(v10 + 288) = v39;
              }
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v81);
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v79);
              v13 = v75;
LABEL_142:
              v11 = v78;
              v16 = v80;
              goto LABEL_172;
            }
          }
        }
        SetFailureLocation(v10, 1, 15, -1073741492, 272);
        v13 = v75;
        if ( v10 )
        {
          *(_DWORD *)(v10 + 284) = v38;
LABEL_138:
          *(_DWORD *)(v10 + 280) = v13;
          goto LABEL_139;
        }
        goto LABEL_139;
      }
      if ( v37 && v37 > -4 - *(_DWORD *)(v39 - 4) )
      {
        SetFailureLocation(v10, 1, 15, -1073741492, 400);
        v13 = v75;
        if ( v10 )
        {
          *(_DWORD *)(v10 + 284) = v84;
          *(_QWORD *)(v10 + 288) = v32;
          goto LABEL_138;
        }
LABEL_139:
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v81);
LABEL_140:
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v79);
        goto LABEL_142;
      }
LABEL_70:
      if ( v39 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v81);
LABEL_72:
      v53 = *(_DWORD *)(v32 + 4);
      if ( v53 >= 0x80000000 )
        v53 += 0x80000000;
      if ( *v95 < v53 )
        *v95 = v53;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v79);
      v13 = v75 + 1;
      v11 = v78;
      a3 = v91;
      a2 = v77;
      v14 = v76;
      ++v75;
    }
  }
  v54 = -1073741492;
  SetFailureLocation(v10, 0, 15, -1073741492, 64);
LABEL_180:
  if ( v10 )
  {
    *(_DWORD *)(v10 + 280) = v13;
    *(_DWORD *)(v10 + 284) = v15;
  }
  return v54;
}
