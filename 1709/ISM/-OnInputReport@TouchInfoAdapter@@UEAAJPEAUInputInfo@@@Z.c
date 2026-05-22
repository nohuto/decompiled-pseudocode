/*
 * XREFs of ?OnInputReport@TouchInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x1800721E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z @ 0x180009424 (-GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TouchInfoAdapter::OnInputReport(TouchInfoAdapter *this, struct InputInfo *a2)
{
  unsigned int v4; // esi
  __int64 v5; // rdx
  int PointersFromInput; // eax
  __int64 v7; // rcx
  __int16 v8; // r11
  int v9; // r9d
  __int64 v10; // rcx
  char v11; // cl
  unsigned __int8 v12; // r12
  unsigned int v13; // r15d
  unsigned int v14; // r10d
  char *v15; // r15
  struct Pointer *v16; // r12
  int v17; // r9d
  __int64 v18; // rcx
  int v19; // edx
  _DWORD *v20; // rax
  char *v21; // rcx
  __int64 v22; // rax
  char v23; // al
  __int16 v24; // si
  unsigned int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int16 v29; // ax
  bool v30; // zf
  __int16 v31; // ax
  unsigned int v32; // r9d
  char v33; // dl
  int v34; // r8d
  int v35; // r10d
  __int64 v36; // rax
  _DWORD *v37; // rcx
  __int64 v38; // rcx
  unsigned int v39; // eax
  _DWORD *v40; // rcx
  char v41; // al
  char v42; // si
  unsigned int i; // r8d
  __int64 v44; // rcx
  __int16 v45; // r9
  __int128 v46; // xmm1
  __int64 v47; // rdx
  __int128 v48; // xmm0
  char *v49; // rdx
  char v50; // r9
  __int64 v51; // r10
  __int16 v52; // dx
  int v53; // r8d
  int v54; // eax
  char v55; // al
  __int64 v56; // r9
  _OWORD *v57; // rcx
  struct Pointer **v58; // rax
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  struct Pointer *v69; // rax
  char v71; // al
  __int64 v72; // r8
  __int64 v73; // rcx
  __int16 v74; // ax
  __int64 v75; // rcx
  unsigned __int8 v76; // r10
  unsigned int v77; // ecx
  unsigned int k; // r9d
  __int64 v79; // r8
  int v80; // eax
  __int16 v81; // ax
  __int16 v82; // cx
  __int64 v83; // rcx
  unsigned __int8 v84; // r10
  unsigned int v85; // r8d
  unsigned int j; // r9d
  __int64 v87; // rdx
  int v88; // eax
  unsigned __int8 v89; // [rsp+31h] [rbp-307h]
  char v90; // [rsp+32h] [rbp-306h]
  char v91; // [rsp+33h] [rbp-305h]
  unsigned int v92; // [rsp+34h] [rbp-304h]
  unsigned int v93; // [rsp+38h] [rbp-300h] BYREF
  __int64 v94; // [rsp+40h] [rbp-2F8h]
  struct Pointer *v95[74]; // [rsp+50h] [rbp-2E8h] BYREF
  struct Pointer *v96[10]; // [rsp+2A0h] [rbp-98h] BYREF
  _QWORD v97[2]; // [rsp+2F0h] [rbp-48h]
  int v98; // [rsp+300h] [rbp-38h]

  v4 = 0;
  if ( (*(_BYTE *)a2 & 0x3B) == 0 )
    return v4;
  memset(v95, 0, 0x248uLL);
  v91 = 0;
  v93 = 0;
  PointersFromInput = GetPointersFromInput(a2, v5, v96, &v93);
  v8 = 0;
  v4 = PointersFromInput;
  if ( PointersFromInput >= 0 )
  {
    if ( *((_BYTE *)a2 + 689) )
    {
      if ( v93 == 1 && !*((_BYTE *)this + 712) )
      {
        LODWORD(v95[2]) = *((_DWORD *)this + 30);
        HIDWORD(v95[0]) = *((_DWORD *)a2 + 2);
        LODWORD(v95[0]) = 327760;
        *(_WORD *)((char *)&v95[2] + 5) = 0;
        HIBYTE(v95[2]) = 1;
        LOWORD(v95[3]) = *(_WORD *)v96[0];
        WORD1(v95[3]) = 5;
        WORD2(v95[3]) = *((_WORD *)v96[0] + 6);
        HIWORD(v95[3]) = *((_WORD *)v96[0] + 8);
        LOWORD(v95[4]) = *((_WORD *)v96[0] + 10);
        v10 = *((_QWORD *)this + 3);
        WORD1(v95[4]) = *((_WORD *)v96[0] + 12);
        (*(void (__fastcall **)(__int64, struct Pointer **))(*(_QWORD *)v10 + 24LL))(v10, v95);
        ++*((_DWORD *)this + 30);
        return v4;
      }
      LOBYTE(PointersFromInput) = -1;
      v4 = -2147418113;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v4;
      v9 = 135;
      goto LABEL_5;
    }
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v90 = 0;
    v14 = 0;
    v89 = 0;
    v92 = 0;
    LODWORD(v94) = 0;
    if ( v93 )
    {
      v15 = (char *)this + 36;
      while ( 1 )
      {
        v16 = v96[v14];
        if ( (*(_BYTE *)a2 & 2) != 0 && (*((_BYTE *)a2 + 544) & 0x10) == 0 )
          *((_DWORD *)v16 + 1) &= ~2u;
        if ( (*((_BYTE *)v16 + 4) & 1) != 0 && !*((_BYTE *)this + 32) )
        {
          v8 = 8;
          v90 = v11 + 1;
        }
        v17 = *((_DWORD *)v16 + 1) & 2;
        v18 = (unsigned __int8)(v89 + 1);
        if ( !v17 )
          v18 = v89;
        v19 = *(_DWORD *)v16;
        v89 = v18;
        if ( *(_DWORD *)v16 == *((_DWORD *)this + 29) )
        {
LABEL_26:
          if ( v17 )
          {
            v8 |= 1u;
          }
          else if ( *((_BYTE *)this + 32) )
          {
            v8 = 0;
            goto LABEL_81;
          }
          v24 = *((_WORD *)this + 62);
          v32 = 0;
          v33 = 0;
          *((_WORD *)this + 62) = v24 + 1;
          v34 = *(_DWORD *)v16;
          v35 = *((_DWORD *)this + 29);
          if ( *(_DWORD *)v16 == v35 )
          {
            v42 = 87;
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              goto LABEL_90;
            McTemplateU0qqq(v18, &MinInput_Warning_CheckResult, 0, 152, 87);
            goto LABEL_88;
          }
          LODWORD(v36) = 0;
          v37 = (_DWORD *)((char *)this + 36);
          while ( *v37 != v34 )
          {
            if ( !v33 && *v37 == v35 )
            {
              v32 = v36;
              v33 = 1;
            }
            LODWORD(v36) = v36 + 1;
            v37 += 2;
            if ( (unsigned int)v36 >= 0xA )
            {
              if ( v33 )
              {
                v36 = v32;
                *(_DWORD *)&v15[8 * v32] = v34;
                goto LABEL_68;
              }
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                McTemplateU0qqq((__int64)v37, &MinInput_Warning_CheckResult, 0, 182, 5);
              v42 = 5;
LABEL_88:
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                McTemplateU0qqq((__int64)v37, &MinInput_Warning_CheckResult, 0, 221, v42);
LABEL_90:
              if ( IsDebuggerPresent() )
                __debugbreak();
              __fastfail(7u);
            }
          }
          v36 = (unsigned int)v36;
LABEL_68:
          v14 = v94;
          *(_WORD *)&v15[8 * v36 + 4] = v24;
        }
        else
        {
          LODWORD(v18) = 0;
          v20 = (_DWORD *)((char *)this + 36);
          while ( *v20 != v19 )
          {
            v18 = (unsigned int)(v18 + 1);
            v20 += 2;
            if ( (unsigned int)v18 >= 0xA )
              goto LABEL_26;
          }
          v94 = 0LL;
          v21 = (char *)this + 36;
          v22 = 0LL;
          while ( *(_DWORD *)v21 != v19 )
          {
            v22 = (unsigned int)(v22 + 1);
            v21 += 8;
            if ( (unsigned int)v22 >= 0xA )
            {
              v23 = Microsoft_OneCore_MinInputEnableBits;
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              {
                McTemplateU0qqq((__int64)v21, &MinInput_Warning_CheckResult, 0, 132, 5);
                v23 = Microsoft_OneCore_MinInputEnableBits;
              }
              if ( (v23 & 2) != 0 )
                McTemplateU0qqq((__int64)v21, &MinInput_Warning_CheckResult, 0, 230, 5);
              goto LABEL_90;
            }
          }
          v24 = *(_WORD *)&v15[8 * v22 + 4];
          if ( !*((_BYTE *)this + 712) || (v25 = 0, v26 = 0LL, !*((_BYTE *)this + 151)) )
          {
LABEL_40:
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              McTemplateU0qqq((__int64)v21, &MinInput_Warning_CheckResult, 0, 234, 255);
            goto LABEL_90;
          }
          v21 = (char *)this + 152;
          while ( v24 != *(_WORD *)v21 )
          {
            ++v25;
            ++v26;
            v21 += 56;
            if ( v25 >= *((unsigned __int8 *)this + 151) )
              goto LABEL_40;
          }
          v27 = 56 * v26;
          if ( *((_BYTE *)this + 32) )
          {
            if ( (*((_BYTE *)this + v27 + 154) & 4) != 0 )
              goto LABEL_40;
          }
          else if ( (*((_BYTE *)this + v27 + 154) & 8) == 0 )
          {
            goto LABEL_40;
          }
          v28 = 56LL * v25;
          v29 = *(_WORD *)((char *)this + v28 + 154);
          if ( v17 )
          {
            if ( (v29 & 1) != 0 || (v30 = (v29 & 2) == 0, v31 = 1, !v30) )
              v31 = 2;
            v8 |= v31;
          }
          else if ( (v29 & 1) != 0 || (v29 & 2) != 0 )
          {
            v8 |= 4u;
          }
          if ( (*((_BYTE *)v16 + 4) & 4) != 0 )
          {
            v91 = 1;
            v8 |= 0x2000u;
          }
          *(_WORD *)((char *)this + v28 + 170) = 1;
        }
        v38 = 7LL * v92++;
        WORD1(v95[v38 + 3]) = v8;
        v8 = 0;
        LOWORD(v95[v38 + 3]) = v24;
        WORD2(v95[v38 + 3]) = *((_WORD *)v16 + 6);
        HIWORD(v95[v38 + 3]) = *((_WORD *)v16 + 8);
        LOWORD(v95[v38 + 4]) = *((_WORD *)v16 + 10);
        WORD1(v95[v38 + 4]) = *((_WORD *)v16 + 12);
        if ( (*((_BYTE *)v16 + 4) & 1) == 0 || (v4 = 0, *((_BYTE *)this + 32)) && (*((_BYTE *)v16 + 4) & 2) == 0 )
        {
          v39 = 0;
          v40 = (_DWORD *)((char *)this + 36);
          while ( *v40 != *(_DWORD *)v16 )
          {
            ++v39;
            v40 += 2;
            if ( v39 >= 0xA )
            {
              v41 = Microsoft_OneCore_MinInputEnableBits;
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              {
                McTemplateU0qqq((__int64)v40, &MinInput_Warning_CheckResult, 0, 212, 5);
                v41 = Microsoft_OneCore_MinInputEnableBits;
              }
              if ( (v41 & 2) != 0 )
                McTemplateU0qqq((__int64)v40, &MinInput_Warning_CheckResult, 0, 284, 5);
              goto LABEL_90;
            }
          }
          v4 = 0;
          *(_DWORD *)&v15[8 * v39] = *((_DWORD *)this + 29);
        }
LABEL_81:
        LODWORD(v94) = ++v14;
        if ( v14 >= v93 )
        {
          v12 = v89;
          v13 = v92;
          break;
        }
        v11 = v90;
      }
    }
    if ( *((_BYTE *)this + 712) )
    {
      for ( i = 0; i < *((unsigned __int8 *)this + 151); ++i )
      {
        v44 = 56LL * i;
        v45 = *(_WORD *)((char *)this + v44 + 154);
        if ( (v45 & 0xB) != 0 && *(_WORD *)((char *)this + v44 + 170) != 1 )
        {
          v46 = *(_OWORD *)((char *)this + v44 + 168);
          v47 = 7LL * v13;
          *(_OWORD *)&v95[v47 + 3] = *(_OWORD *)((char *)this + v44 + 152);
          v48 = *(_OWORD *)((char *)this + v44 + 184);
          *(_OWORD *)&v95[v47 + 5] = v46;
          *(_QWORD *)&v46 = *(_QWORD *)((char *)this + v44 + 200);
          *(_OWORD *)&v95[v47 + 7] = v48;
          v95[v47 + 9] = (struct Pointer *)v46;
          if ( (v45 & 3) != 0 )
            WORD1(v95[7 * v13 + 3]) = 4;
          else
            WORD1(v95[7 * v13 + 3]) = 0;
          ++v13;
          v49 = (char *)this + 36;
          LOBYTE(v92) = v13;
          v50 = 0;
          v51 = 10LL;
          do
          {
            if ( *((_WORD *)v49 + 2) == *(_WORD *)((char *)this + v44 + 152) )
            {
              v50 = 1;
              *(_DWORD *)v49 = *((_DWORD *)this + 29);
            }
            v49 += 8;
            --v51;
          }
          while ( v51 );
          if ( !v50 )
          {
            v71 = Microsoft_OneCore_MinInputEnableBits;
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            {
              McTemplateU0qqq(v44, &MinInput_Warning_CheckResult, 0, 238, 5);
              v71 = Microsoft_OneCore_MinInputEnableBits;
            }
            if ( (v71 & 2) != 0 )
              McTemplateU0qqq(v44, &MinInput_Warning_CheckResult, 0, 329, 5);
            goto LABEL_90;
          }
          v4 = 0;
        }
      }
    }
    v52 = 0;
    v53 = *((_DWORD *)this + 30);
    HIDWORD(v95[0]) = *((_DWORD *)a2 + 2);
    HIBYTE(v95[2]) = v13;
    v54 = (unsigned __int16)(v13 - 1);
    v7 = (unsigned int)(56 * v54);
    LODWORD(v95[2]) = v53;
    BYTE5(v95[2]) = v90;
    BYTE6(v95[2]) = v12;
    LOWORD(v7) = 56 * v54 + 80;
    LODWORD(v95[0]) = (unsigned __int16)v7;
    if ( !*((_BYTE *)this + 712) )
    {
      *((_BYTE *)this + 712) = 1;
      if ( v12 )
      {
        v52 = 1;
        WORD1(v95[0]) = 1;
      }
      else
      {
        if ( !v90 )
        {
          if ( !*((_BYTE *)this + 32) )
          {
            LOBYTE(PointersFromInput) = -1;
            v4 = -2147418113;
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              return v4;
            v9 = 369;
            goto LABEL_5;
          }
          *((_BYTE *)this + 712) = 0;
          v55 = 1;
          goto LABEL_112;
        }
        v52 = 257;
        WORD1(v95[0]) = 257;
      }
      goto LABEL_111;
    }
    if ( *((_BYTE *)this + 32) || (*((_WORD *)this + 65) & 0x100) == 0 )
    {
      if ( v12 )
      {
LABEL_111:
        v55 = 0;
LABEL_112:
        v56 = 4LL;
LABEL_113:
        if ( *((_BYTE *)a2 + 690) )
        {
          v52 |= 0x200u;
          WORD1(v95[0]) = v52;
        }
        if ( v91 )
        {
          v52 |= 0x8000u;
          WORD1(v95[0]) = v52;
        }
        if ( (*(_BYTE *)a2 & 0x20) != 0 )
          WORD1(v95[0]) = v52 | 0x1000;
        if ( !v55 )
        {
          v57 = (_OWORD *)((char *)this + 128);
          v58 = v95;
          do
          {
            v59 = *((_OWORD *)v58 + 1);
            *v57 = *(_OWORD *)v58;
            v60 = *((_OWORD *)v58 + 2);
            v57[1] = v59;
            v61 = *((_OWORD *)v58 + 3);
            v57[2] = v60;
            v62 = *((_OWORD *)v58 + 4);
            v57[3] = v61;
            v63 = *((_OWORD *)v58 + 5);
            v57[4] = v62;
            v64 = *((_OWORD *)v58 + 6);
            v57[5] = v63;
            v65 = *((_OWORD *)v58 + 7);
            v58 += 16;
            v57[6] = v64;
            v57 += 8;
            *(v57 - 1) = v65;
            --v56;
          }
          while ( v56 );
          v66 = *((_OWORD *)v58 + 1);
          *v57 = *(_OWORD *)v58;
          v67 = *((_OWORD *)v58 + 2);
          v57[1] = v66;
          v68 = *((_OWORD *)v58 + 3);
          v69 = v58[8];
          v57[2] = v67;
          v57[3] = v68;
          *((_QWORD *)v57 + 8) = v69;
          (*(void (__fastcall **)(_QWORD, struct Pointer **))(**((_QWORD **)this + 3) + 24LL))(
            *((_QWORD *)this + 3),
            v95);
        }
        return v4;
      }
      if ( v90 )
      {
        v83 = *((_QWORD *)this + 3);
        WORD1(v95[0]) = 4;
        (*(void (__fastcall **)(__int64, struct Pointer **))(*(_QWORD *)v83 + 24LL))(v83, v95);
        v84 = HIBYTE(v95[2]);
        v85 = 0;
        for ( j = 0; j < v84; ++j )
        {
          v87 = 7LL * v85;
          if ( (BYTE2(v95[7 * j + 3]) & 8) != 0 )
          {
            WORD1(v95[7 * v85++ + 3]) = WORD1(v95[7 * j + 3]) & 0xFFFB;
            LOWORD(v95[v87 + 3]) = v95[7 * j + 3];
            WORD2(v95[v87 + 3]) = WORD2(v95[7 * j + 3]);
            HIWORD(v95[v87 + 3]) = HIWORD(v95[7 * j + 3]);
            LOWORD(v95[v87 + 4]) = v95[7 * j + 4];
            WORD1(v95[v87 + 4]) = WORD1(v95[7 * j + 4]);
            v84 = HIBYTE(v95[2]);
          }
        }
        v88 = *((_DWORD *)this + 30) + 1;
        HIBYTE(v95[2]) = v85;
        *((_DWORD *)this + 30) = v88;
        LODWORD(v95[2]) = v88;
        WORD1(v95[0]) = WORD1(v95[0]) & 0xFEFA | 0x101;
        v52 = WORD1(v95[0]);
        v81 = v85 - 1;
        goto LABEL_145;
      }
      v56 = 4LL;
      v52 = 4;
      WORD1(v95[0]) = 4;
    }
    else
    {
      if ( v12 )
      {
        v72 = 0LL;
        v97[0] = 0LL;
        v97[1] = 0LL;
        v98 = 0;
        if ( (_BYTE)v92 )
        {
          do
          {
            v73 = (unsigned int)v72;
            v72 = (unsigned int)(v72 + 1);
            v74 = WORD1(v95[7 * v73 + 3]);
            *((_WORD *)v97 + v73) = v74;
            WORD1(v95[7 * v73 + 3]) = v74 & 0xFFFE;
          }
          while ( (unsigned int)v72 < HIBYTE(v95[2]) );
          v52 = WORD1(v95[0]);
        }
        v75 = *((_QWORD *)this + 3);
        BYTE6(v95[2]) = 0;
        WORD1(v95[0]) = v52 | 0x104;
        (*(void (__fastcall **)(__int64, struct Pointer **, __int64))(*(_QWORD *)v75 + 24LL))(v75, v95, v72);
        v76 = HIBYTE(v95[2]);
        v77 = 0;
        for ( k = 0; k < v76; ++k )
        {
          v79 = 7LL * v77;
          if ( (BYTE2(v95[7 * k + 3]) & 8) != 0 )
          {
            ++v77;
            WORD1(v95[v79 + 3]) = *((_WORD *)v97 + k);
            LOWORD(v95[v79 + 3]) = v95[7 * k + 3];
            WORD2(v95[v79 + 3]) = WORD2(v95[7 * k + 3]);
            HIWORD(v95[v79 + 3]) = HIWORD(v95[7 * k + 3]);
            LOWORD(v95[v79 + 4]) = v95[7 * k + 4];
            WORD1(v95[v79 + 4]) = WORD1(v95[7 * k + 4]);
            v76 = HIBYTE(v95[2]);
          }
        }
        v80 = *((_DWORD *)this + 30) + 1;
        HIBYTE(v95[2]) = v77;
        *((_DWORD *)this + 30) = v80;
        LODWORD(v95[2]) = v80;
        BYTE6(v95[2]) = v12;
        WORD1(v95[0]) = WORD1(v95[0]) & 0xFEFA | 1;
        v52 = WORD1(v95[0]);
        v81 = v77 - 1;
LABEL_145:
        v82 = 56 * v81;
        v55 = 0;
        LOWORD(v95[0]) = v82 + 80;
        goto LABEL_112;
      }
      v56 = 4LL;
      if ( v90 )
      {
        v52 = 256;
        WORD1(v95[0]) = 256;
LABEL_150:
        v55 = 0;
        goto LABEL_113;
      }
      v52 = 260;
      WORD1(v95[0]) = 260;
    }
    *((_BYTE *)this + 712) = 0;
    *((_DWORD *)this + 30) = v53 + 1;
    *((_WORD *)this + 62) = 0;
    goto LABEL_150;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v9 = 129;
LABEL_5:
    McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, v9, PointersFromInput);
  }
  return v4;
}
