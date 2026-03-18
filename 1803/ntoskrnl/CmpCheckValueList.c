/*
 * XREFs of CmpCheckValueList @ 0x1405163C0
 * Callers:
 *     CmpCheckKey @ 0x14059FAB0 (CmpCheckKey.c)
 * Callees:
 *     RtlClearBits @ 0x140072BD0 (RtlClearBits.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     SetFailureLocation @ 0x140221604 (SetFailureLocation.c)
 *     HvpMarkCellDirty @ 0x1404E3EC4 (HvpMarkCellDirty.c)
 *     HvIsCellAllocated @ 0x140516230 (HvIsCellAllocated.c)
 */

__int64 __fastcall CmpCheckValueList(
        ULONG_PTR BugCheckParameter2,
        char a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        PRTL_BITMAP BitMapHeader,
        __int64 a8,
        _DWORD *a9,
        unsigned int *a10)
{
  __int64 v10; // r15
  __int64 v11; // rsi
  unsigned int v12; // edi
  char v14; // al
  unsigned int v15; // r14d
  PRTL_BITMAP v16; // r9
  unsigned __int64 v17; // r12
  bool v18; // zf
  __int64 v19; // rdi
  unsigned int v20; // ecx
  __int64 v21; // rbx
  __int64 v22; // rax
  int *v23; // rax
  int v24; // r8d
  int v25; // eax
  unsigned int v26; // r8d
  unsigned int v27; // edx
  __int64 v28; // r10
  bool v29; // bl
  _WORD *v30; // rax
  _WORD *v31; // rdi
  unsigned int v32; // ecx
  unsigned int v33; // eax
  __int16 v34; // r8
  unsigned __int16 v35; // cx
  __int16 v36; // dx
  unsigned __int16 v37; // ax
  unsigned int v38; // ebx
  unsigned int v39; // eax
  unsigned int v40; // ebx
  unsigned int v42; // r14d
  __int64 v43; // rsi
  unsigned int v44; // edx
  __int64 v45; // r12
  unsigned __int64 v46; // rax
  __int64 v47; // r14
  __int64 v48; // rax
  unsigned __int64 v49; // rcx
  __int64 v50; // rdi
  __int64 v51; // rdi
  unsigned int v52; // r12d
  __int64 v53; // rbx
  void *v54; // rcx
  _DWORD *v55; // rdx
  int v56; // eax
  __int64 v57; // rdi
  int v58; // [rsp+20h] [rbp-A9h]
  unsigned int v59; // [rsp+30h] [rbp-99h]
  int v60; // [rsp+34h] [rbp-95h]
  char v61; // [rsp+38h] [rbp-91h]
  char v62; // [rsp+39h] [rbp-90h]
  _DWORD v63[2]; // [rsp+40h] [rbp-89h] BYREF
  __int64 v64; // [rsp+48h] [rbp-81h]
  _DWORD v65[2]; // [rsp+50h] [rbp-79h] BYREF
  __int64 v66; // [rsp+58h] [rbp-71h]
  _DWORD v67[2]; // [rsp+60h] [rbp-69h] BYREF
  int v68; // [rsp+68h] [rbp-61h]
  PRTL_BITMAP v69; // [rsp+70h] [rbp-59h]
  __int64 v70; // [rsp+78h] [rbp-51h] BYREF
  _DWORD v71[2]; // [rsp+80h] [rbp-49h] BYREF
  _DWORD v72[3]; // [rsp+88h] [rbp-41h] BYREF
  _DWORD BugCheckParameter3[3]; // [rsp+94h] [rbp-35h]
  unsigned int *v74; // [rsp+A0h] [rbp-29h]
  void *v75; // [rsp+A8h] [rbp-21h]
  _QWORD v76[3]; // [rsp+B0h] [rbp-19h] BYREF

  v10 = a8;
  v11 = a3;
  v12 = a4;
  v63[1] = 0;
  v14 = 0;
  v64 = a3;
  v60 = a4;
  v15 = 0;
  v16 = BitMapHeader;
  v62 = a2;
  v66 = a8;
  BugCheckParameter3[0] = a5;
  v69 = BitMapHeader;
  *(_QWORD *)&BugCheckParameter3[1] = a9;
  v74 = a10;
  v59 = 0;
  v63[0] = -1;
  v65[0] = -1;
  v65[1] = 0;
  v72[0] = -1;
  v72[1] = 0;
  v71[0] = -1;
  v71[1] = 0;
  v67[0] = -1;
  v67[1] = 0;
  v61 = 0;
  strcpy((char *)v76, "SymbolicLinkValue");
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
    if ( v15 >= v12 )
    {
      if ( v14 )
        return (unsigned int)-2147483606;
      else
        return 0;
    }
    v17 = *(unsigned int *)(v11 + 4LL * v15);
    v68 = *(_DWORD *)(v11 + 4LL * v15);
    v75 = (void *)(v11 + 4LL * v15);
    if ( a2 )
    {
      if ( v12 != 1 )
        break;
    }
    if ( (_DWORD)v17 == -1 )
    {
      SetFailureLocation(v10, 1, 15, -1073741492, 80);
      if ( v10 )
      {
        *(_DWORD *)(v10 + 284) = -1;
        goto LABEL_141;
      }
LABEL_142:
      if ( (a6 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(v10, 0, 15, -1073741492, 48);
        return (unsigned int)-1073741492;
      }
      SetFailureLocation(v10, 1, 15, -1073741492, 0);
      v52 = BugCheckParameter3[0];
      v53 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              BugCheckParameter3[0],
              v72);
      if ( !v53 )
      {
        v40 = -1073741670;
        SetFailureLocation(v10, 0, 15, -1073741670, 16);
        return v40;
      }
      if ( !HvpMarkCellDirty(BugCheckParameter2, v52, 0) )
      {
        v56 = 24;
LABEL_157:
        v40 = -1073741443;
        SetFailureLocation(v10, 0, 15, -1073741443, v56);
        v55 = v72;
        goto LABEL_158;
      }
      if ( !HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v53 + 40), 0) )
      {
        v56 = 40;
        goto LABEL_157;
      }
      v54 = v75;
      --*(_DWORD *)(v53 + 36);
      v60 = --v12;
      memmove(v54, (const void *)(v11 + 4LL * (v15 + 1)), 4LL * (v12 - v15));
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v72);
      v16 = v69;
      v14 = 1;
      a2 = v62;
      v61 = 1;
    }
    else
    {
      v18 = (*(_BYTE *)(BugCheckParameter2 + 140) & 1) == 0;
      v70 = 0xFFFFFFFFLL;
      if ( !v18 )
        goto LABEL_26;
      v19 = 632LL * ((unsigned int)v17 >> 31);
      v20 = *(_DWORD *)(v19 + BugCheckParameter2 + 272);
      if ( (v17 & 0x7FFFFFFF) >= v20 || (v17 & 7) != 0 )
        goto LABEL_82;
      if ( v16 && (v17 & 0x80000000) == 0LL )
      {
        if ( !_bittest64((const signed __int64 *)v16->Buffer, (unsigned int)v17 >> 3) )
          goto LABEL_82;
        RtlClearBits(v16, (unsigned int)v17 >> 3, 1u);
        v20 = *(_DWORD *)(v19 + BugCheckParameter2 + 272);
      }
      if ( (unsigned int)v17 + ((unsigned int)v17 >> 31 << 31) >= v20 )
        goto LABEL_82;
      v21 = *(_QWORD *)(*(_QWORD *)(v19 + BugCheckParameter2 + 280) + 8 * ((v17 >> 21) & 0x3FF))
          + 24 * ((v17 >> 12) & 0x1FF);
      if ( !v21 || (*(_BYTE *)(v21 + 8) & 2) != 0 )
        goto LABEL_82;
      v22 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              (unsigned int)v17,
              &v70);
      if ( v22 )
      {
        v23 = (int *)(v22 - 4);
        if ( v23 )
        {
          v24 = (int)v23;
          v25 = *v23;
          v26 = v24 - (*(_DWORD *)(v21 + 8) & 0xFFFFFFF0);
          v27 = -v25;
          v29 = 0;
          if ( v25 < 0 && v27 - 8 <= 0xFFFF8 )
          {
            v28 = *(unsigned int *)((*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0uLL) + 8);
            if ( v27 <= (unsigned __int64)(v28 - 32) && v26 - v25 <= (unsigned int)v28 && v26 >= 0x20 )
              v29 = 1;
          }
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v70);
          if ( !v29 )
          {
LABEL_82:
            SetFailureLocation(v10, 1, 15, -1073741492, 96);
            v12 = v60;
            v11 = v64;
            if ( v10 )
            {
              *(_DWORD *)(v10 + 284) = v17;
LABEL_141:
              *(_DWORD *)(v10 + 280) = v15;
              goto LABEL_142;
            }
            goto LABEL_142;
          }
        }
      }
LABEL_26:
      v30 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                       BugCheckParameter2,
                       (unsigned int)v17,
                       v63);
      v31 = v30;
      if ( !v30 )
      {
        v40 = -1073741670;
        SetFailureLocation(v10, 0, 15, -1073741670, 112);
        goto LABEL_150;
      }
      v32 = -4 - *((_DWORD *)v30 - 1);
      if ( v32 < 0x14 )
      {
        SetFailureLocation(v10, 1, 15, -1073741492, 128);
        if ( v10 )
          goto LABEL_136;
        goto LABEL_137;
      }
      if ( *v30 != 27510 )
      {
        SetFailureLocation(v10, 1, 15, -1073741492, 136);
        if ( v10 )
          goto LABEL_136;
        goto LABEL_137;
      }
      v33 = (unsigned __int16)v30[1] + 20;
      if ( v33 < 0x14 || v33 > v32 )
      {
        SetFailureLocation(v10, 1, 15, -1073741492, 144);
        if ( v10 )
          goto LABEL_136;
        goto LABEL_137;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) & 2) == 0 && (v31[8] & 2) != 0 )
      {
        v61 = 1;
        v40 = -1073741492;
        if ( v10 )
        {
          *(_DWORD *)(v10 + 280) = v15;
          *(_DWORD *)(v10 + 284) = v17;
          *(_QWORD *)(v10 + 288) = v31;
        }
        if ( (a6 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
        {
          SetFailureLocation(v10, 0, 15, -1073741492, 156);
          goto LABEL_155;
        }
        SetFailureLocation(v10, 1, 15, -1073741492, 152);
        if ( !HvpMarkCellDirty(BugCheckParameter2, (unsigned int)v17, 0) )
        {
          v40 = -1073741443;
          SetFailureLocation(v10, 1, 15, -1073741443, 154);
          goto LABEL_155;
        }
        v31[8] &= ~2u;
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
      }
      if ( v62 )
      {
        v49 = *(_QWORD *)(v31 + 10) - v76[0];
        if ( !v49 )
        {
          v49 = *(_QWORD *)(v31 + 14) - v76[1];
          if ( !v49 )
            v49 = *((unsigned __int8 *)v31 + 36) - (unsigned __int64)LOBYTE(v76[2]);
        }
        if ( v49 )
        {
          v58 = 160;
          goto LABEL_161;
        }
        if ( *((_DWORD *)v31 + 3) != 6 && (v31[8] & 2) == 0 )
        {
          v58 = 176;
LABEL_161:
          v40 = -1073741492;
          SetFailureLocation(v10, 0, 15, -1073741492, v58);
          if ( v10 )
          {
            *(_DWORD *)(v10 + 280) = v15;
            *(_DWORD *)(v10 + 284) = v17;
            *(_QWORD *)(v10 + 288) = v31;
          }
LABEL_155:
          v55 = v63;
LABEL_158:
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v55);
          return v40;
        }
      }
      v34 = v31[1];
      v35 = 2 * v34;
      v36 = v31[8] & 1;
      if ( v36 )
        v37 = 2 * v34;
      else
        v37 = v31[1];
      if ( **(_DWORD **)&BugCheckParameter3[1] < (unsigned int)v37 )
      {
        if ( !v36 )
          v35 = v31[1];
        **(_DWORD **)&BugCheckParameter3[1] = v35;
      }
      v38 = *((_DWORD *)v31 + 1);
      if ( v62 )
      {
        if ( (v38 & 1) != 0 )
        {
          v58 = 192;
          goto LABEL_161;
        }
        if ( v38 > 0xFFFF )
        {
          v58 = 208;
          goto LABEL_161;
        }
      }
      if ( (v31[8] & 2) != 0 )
      {
        if ( v38 || *((_DWORD *)v31 + 3) )
        {
          SetFailureLocation(v10, 1, 15, -1073741492, 224);
          if ( v10 )
            goto LABEL_136;
          goto LABEL_137;
        }
      }
      else if ( v38 >= 0x80000000 )
      {
        if ( v38 + 0x80000000 <= 4 )
          goto LABEL_44;
        SetFailureLocation(v10, 1, 15, -1073741492, 416);
        if ( v10 )
        {
LABEL_136:
          *(_DWORD *)(v10 + 280) = v15;
          *(_DWORD *)(v10 + 284) = v17;
          *(_QWORD *)(v10 + 288) = v31;
        }
LABEL_137:
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v63);
LABEL_138:
        v12 = v60;
        v11 = v64;
        goto LABEL_142;
      }
      v42 = *((_DWORD *)v31 + 2);
      v43 = 0LL;
      if ( v38 )
      {
        if ( !HvIsCellAllocated(BugCheckParameter2, v42, (__int64)v69) )
        {
          SetFailureLocation(v10, 1, 15, -1073741492, 240);
          v15 = v59;
          if ( v10 )
            goto LABEL_136;
          goto LABEL_137;
        }
        v43 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                v42,
                v65);
        if ( !v43 )
        {
          v40 = -1073741670;
          SetFailureLocation(v10, 0, 15, -1073741670, 256);
          if ( v10 )
          {
            *(_DWORD *)(v10 + 280) = v59;
            *(_DWORD *)(v10 + 284) = v42;
          }
          goto LABEL_155;
        }
      }
      else if ( v42 != -1 )
      {
        SetFailureLocation(v10, 1, 15, -1073741492, 224);
        v15 = v59;
        if ( v10 )
          goto LABEL_136;
        goto LABEL_137;
      }
      if ( v38 <= 0x3FD8 || *(_DWORD *)(BugCheckParameter2 + 212) < 4u )
      {
        if ( v38 && v38 > -4 - *(_DWORD *)(v43 - 4) )
        {
          SetFailureLocation(v10, 1, 15, -1073741492, 400);
          v15 = v59;
          if ( v10 )
          {
            *(_DWORD *)(v10 + 280) = v59;
            *(_DWORD *)(v10 + 284) = v17;
            *(_QWORD *)(v10 + 288) = v31;
          }
          goto LABEL_123;
        }
      }
      else
      {
        if ( (unsigned int)(-4 - *(_DWORD *)(v43 - 4)) < 8
          || *(_WORD *)v43 != 25188
          || !*(_WORD *)(v43 + 2)
          || (v44 = *(_DWORD *)(v43 + 4), v44 == -1) )
        {
          SetFailureLocation(v10, 1, 15, -1073741492, 272);
          if ( v10 )
          {
            *(_DWORD *)(v10 + 280) = v59;
            *(_DWORD *)(v10 + 284) = v42;
          }
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v65);
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v63);
          v15 = v59;
          goto LABEL_138;
        }
        if ( !HvIsCellAllocated(BugCheckParameter2, v44, (__int64)v69) )
        {
          SetFailureLocation(v10, 1, 15, -1073741492, 288);
          v15 = v59;
          if ( v10 )
          {
            *(_DWORD *)(v10 + 280) = v59;
            *(_DWORD *)(v10 + 284) = *(_DWORD *)(v43 + 4);
            *(_QWORD *)(v10 + 288) = v43;
          }
          goto LABEL_123;
        }
        v45 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                *(unsigned int *)(v43 + 4),
                v67);
        if ( !v45 )
        {
          v40 = -1073741670;
          SetFailureLocation(v10, 0, 15, -1073741670, 304);
          if ( v10 )
          {
            *(_DWORD *)(v10 + 280) = v59;
            *(_DWORD *)(v10 + 284) = *(_DWORD *)(v43 + 4);
          }
LABEL_154:
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v65);
          goto LABEL_155;
        }
        v46 = 4LL * *(unsigned __int16 *)(v43 + 2);
        if ( v46 < 4 || v46 > (unsigned int)(-4 - *(_DWORD *)(v45 - 4)) )
        {
          SetFailureLocation(v10, 1, 15, -1073741492, 320);
          v15 = v59;
          if ( v10 )
          {
LABEL_119:
            *(_DWORD *)(v10 + 284) = v68;
            *(_DWORD *)(v10 + 280) = v15;
            *(_QWORD *)(v10 + 288) = v31;
          }
LABEL_120:
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v67);
LABEL_123:
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v65);
          goto LABEL_137;
        }
        if ( *(unsigned __int16 *)(v43 + 2) != (v38 + 16343) / 0x3FD8 )
        {
          SetFailureLocation(v10, 1, 15, -1073741492, 336);
          v15 = v59;
          if ( v10 )
            goto LABEL_119;
          goto LABEL_120;
        }
        v47 = 0LL;
        if ( *(_WORD *)(v43 + 2) )
        {
          while ( HvIsCellAllocated(BugCheckParameter2, *(_DWORD *)(v45 + 4 * v47), (__int64)v69) )
          {
            v48 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                    BugCheckParameter2,
                    *(unsigned int *)(v45 + 4 * v47),
                    v71);
            if ( !v48 )
            {
              v57 = v66;
              v40 = -1073741670;
              SetFailureLocation(v66, 0, 15, -1073741670, 368);
              if ( v57 )
              {
                *(_DWORD *)(v57 + 280) = v47;
                *(_DWORD *)(v57 + 284) = *(_DWORD *)(v45 + 4 * v47);
                *(_QWORD *)(v57 + 288) = v43;
              }
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v67);
              goto LABEL_154;
            }
            if ( (unsigned int)(-4 - *(_DWORD *)(v48 - 4)) < 0x3FD8 )
            {
              v50 = v66;
              SetFailureLocation(v66, 1, 15, -1073741492, 384);
              v10 = v50;
              if ( v50 )
              {
                *(_DWORD *)(v50 + 280) = v47;
                *(_DWORD *)(v50 + 284) = *(_DWORD *)(v45 + 4 * v47);
                *(_QWORD *)(v50 + 288) = v43;
              }
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v71);
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v67);
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v65);
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v63);
              v15 = v59;
              goto LABEL_138;
            }
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v71);
            v47 = (unsigned int)(v47 + 1);
            if ( (unsigned int)v47 >= *(unsigned __int16 *)(v43 + 2) )
            {
              v10 = v66;
              goto LABEL_78;
            }
          }
          v51 = v66;
          SetFailureLocation(v66, 1, 15, -1073741492, 352);
          v10 = v51;
          if ( v51 )
          {
            *(_DWORD *)(v51 + 280) = v47;
            *(_DWORD *)(v51 + 284) = *(_DWORD *)(v45 + 4 * v47);
            *(_QWORD *)(v51 + 288) = v43;
          }
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v67);
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v65);
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v63);
          v15 = v59;
          goto LABEL_138;
        }
LABEL_78:
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v67);
      }
      if ( v43 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v65);
      v38 = *((_DWORD *)v31 + 1);
      v15 = v59;
LABEL_44:
      v39 = v38 + 0x80000000;
      if ( v38 < 0x80000000 )
        v39 = v38;
      if ( *v74 < v39 )
        *v74 = v39;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v63);
      v12 = v60;
      ++v15;
      v11 = v64;
      v16 = v69;
      a2 = v62;
      v14 = v61;
      v59 = v15;
    }
  }
  v40 = -1073741492;
  SetFailureLocation(v10, 0, 15, -1073741492, 64);
LABEL_150:
  if ( v10 )
  {
    *(_DWORD *)(v10 + 280) = v15;
    *(_DWORD *)(v10 + 284) = v17;
  }
  return v40;
}
