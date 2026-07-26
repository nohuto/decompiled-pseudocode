/*
 * XREFs of Duplicate802_11AttachAttributesCommon @ 0x1C00789FC
 * Callers:
 *     Duplicate802_11AttachAttributes @ 0x1C00789D8 (Duplicate802_11AttachAttributes.c)
 * Callees:
 *     NdisAllocateMemoryWithTag @ 0x1C0022270 (NdisAllocateMemoryWithTag.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     PrivateULongMult @ 0x1C007967C (PrivateULongMult.c)
 */

__int64 __fastcall Duplicate802_11AttachAttributesCommon(
        unsigned __int16 a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        size_t Size,
        unsigned int a7,
        size_t a8,
        _QWORD *a9)
{
  unsigned int v10; // esi
  __int64 v11; // r13
  char v12; // al
  __int64 v13; // rcx
  int v14; // r15d
  UINT v15; // ebx
  unsigned int v16; // edi
  unsigned int v17; // r10d
  int v18; // edi
  __int64 v19; // r14
  UINT v20; // r10d
  UINT v21; // r11d
  __int64 v22; // rcx
  int v23; // edi
  __int64 v24; // rcx
  int v25; // edi
  __int64 v26; // rcx
  int v27; // edi
  __int64 v28; // rcx
  int v29; // edi
  __int64 v30; // rcx
  int v31; // edi
  __int64 v32; // rcx
  int v33; // edi
  unsigned int v34; // ecx
  int v35; // eax
  UINT v36; // r10d
  UINT v37; // r11d
  int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  unsigned int v43; // eax
  int v44; // edi
  UINT v45; // ecx
  int v46; // eax
  UINT v47; // r10d
  UINT v48; // r11d
  __int64 v49; // rcx
  int v50; // edi
  __int64 v51; // rcx
  int v52; // edi
  __int64 v53; // rcx
  int v54; // edi
  int v55; // eax
  UINT v56; // ecx
  UINT v57; // r10d
  UINT v58; // r11d
  int v59; // eax
  __int64 v60; // rbx
  int v61; // eax
  __int64 v62; // rcx
  int v63; // edi
  __int64 v64; // rcx
  int v65; // edi
  unsigned int v66; // eax
  _DWORD *v67; // r15
  _QWORD *v68; // rax
  __int128 v69; // xmm0
  unsigned int v70; // ecx
  __int64 v71; // rbx
  char *v72; // rcx
  _QWORD *v73; // rsi
  unsigned int v74; // ecx
  char *v75; // rax
  __int64 v76; // rbx
  char *v77; // rax
  unsigned int v78; // ecx
  __int64 v79; // rbx
  char *v80; // rax
  unsigned int v81; // ecx
  __int64 v82; // rbx
  char *v83; // rax
  unsigned int v84; // ecx
  __int64 v85; // rbx
  char *v86; // rax
  unsigned int v87; // ecx
  __int64 v88; // rbx
  unsigned int v89; // ecx
  __int64 v90; // rbx
  __int64 v91; // r8
  int v92; // ecx
  unsigned int v93; // eax
  _BYTE *v94; // rsi
  _BYTE *v95; // rbx
  unsigned int v96; // r14d
  __int64 v97; // r15
  size_t v98; // r12
  _QWORD *v99; // rsi
  unsigned int v100; // ecx
  char *v101; // rax
  __int64 v102; // rbx
  char *v103; // rax
  unsigned int v104; // ecx
  __int64 v105; // rbx
  char *v106; // rax
  unsigned int v107; // ecx
  __int64 v108; // rbx
  __int64 v109; // rdx
  _QWORD *v110; // rsi
  unsigned int v111; // ecx
  char *v112; // rax
  __int64 v113; // rbx
  char *v114; // rax
  unsigned int v115; // ecx
  PVOID VirtualAddress; // [rsp+20h] [rbp-58h] BYREF
  size_t v118; // [rsp+28h] [rbp-50h] BYREF
  size_t v119; // [rsp+30h] [rbp-48h] BYREF
  size_t v120; // [rsp+38h] [rbp-40h] BYREF
  size_t v121; // [rsp+40h] [rbp-38h] BYREF
  size_t v122; // [rsp+48h] [rbp-30h] BYREF
  _DWORD *v123; // [rsp+50h] [rbp-28h] BYREF
  __int64 v124; // [rsp+58h] [rbp-20h]
  __int64 v125; // [rsp+60h] [rbp-18h]
  __int64 v126; // [rsp+68h] [rbp-10h]
  unsigned int v128; // [rsp+C8h] [rbp+50h]
  unsigned int v129; // [rsp+D0h] [rbp+58h]
  unsigned int v130; // [rsp+D8h] [rbp+60h]
  unsigned int v131; // [rsp+E0h] [rbp+68h]

  LODWORD(Size) = 0;
  v10 = 0;
  LODWORD(a8) = 0;
  v11 = 0LL;
  v118 = 0LL;
  v120 = 0LL;
  v119 = 0LL;
  v131 = 0;
  v121 = 0LL;
  v128 = 0;
  LODWORD(v123) = 0;
  a7 = 0;
  v122 = 0LL;
  v124 = 0LL;
  v126 = 0LL;
  v125 = 0LL;
  VirtualAddress = 0LL;
  if ( !a2 || !a9 || *(_BYTE *)a2 != 0xA1 )
    return (unsigned int)-1073741811;
  *a9 = 0LL;
  v12 = *((_BYTE *)a2 + 1);
  if ( v12 == 1 && *((_WORD *)a2 + 1) >= 0x28u )
  {
    v129 = 1;
  }
  else if ( v12 == 2 && *((_WORD *)a2 + 1) >= 0x38u )
  {
    v129 = 2;
  }
  else
  {
    if ( v12 != 3 || *((_WORD *)a2 + 1) < 0x40u )
      return (unsigned int)-1073741811;
    v129 = 3;
  }
  v13 = *((unsigned int *)a2 + 5);
  v14 = -1;
  v15 = 64;
  v130 = 64;
  if ( (_DWORD)v13 && *((_QWORD *)a2 + 3) )
  {
    v16 = PrivateULongMult(v13, 1092LL, &Size);
    if ( v16 )
      return v16;
    v15 = v17 + Size;
    v130 = v17 + Size;
    if ( v17 + (unsigned int)Size < v17 )
    {
      v15 = -1;
      v18 = -1073741675;
      v130 = -1;
    }
    else
    {
      v18 = 0;
    }
    v16 = (v18 >> 31) & 0xC0010015;
    if ( v16 )
      return v16;
  }
  v19 = *((_QWORD *)a2 + 4);
  v20 = v15;
  v21 = v15;
  if ( v19 )
  {
    v22 = *(unsigned int *)(v19 + 48);
    v10 = 160;
    if ( (_DWORD)v22 )
    {
      if ( *(_QWORD *)(v19 + 56) )
      {
        v16 = PrivateULongMult(v22, 3LL, &a8);
        if ( v16 )
          return v16;
        v10 = a8 + 160;
        if ( (unsigned int)a8 >= 0xFFFFFF60 )
        {
          v10 = -1;
          v23 = -1073741675;
        }
        else
        {
          v23 = 0;
        }
        v16 = (v23 >> 31) & 0xC0010015;
        if ( v16 )
          return v16;
      }
    }
    v24 = *(unsigned int *)(v19 + 64);
    if ( (_DWORD)v24 && *(_QWORD *)(v19 + 72) )
    {
      v16 = PrivateULongMult(v24, 8LL, &v118);
      if ( v16 )
        return v16;
      if ( v10 + (unsigned int)v118 < v10 )
      {
        v10 = -1;
        v25 = -1073741675;
      }
      else
      {
        v10 += v118;
        v25 = 0;
      }
      v16 = (v25 >> 31) & 0xC0010015;
      if ( v16 )
        return v16;
    }
    v26 = *(unsigned int *)(v19 + 80);
    if ( (_DWORD)v26 && *(_QWORD *)(v19 + 88) )
    {
      v16 = PrivateULongMult(v26, 8LL, (char *)&v118 + 4);
      if ( v16 )
        return v16;
      if ( v10 + HIDWORD(v118) < v10 )
      {
        v10 = -1;
        v27 = -1073741675;
      }
      else
      {
        v10 += HIDWORD(v118);
        v27 = 0;
      }
      v16 = (v27 >> 31) & 0xC0010015;
      if ( v16 )
        return v16;
    }
    v28 = *(unsigned int *)(v19 + 96);
    if ( (_DWORD)v28 && *(_QWORD *)(v19 + 104) )
    {
      v16 = PrivateULongMult(v28, 8LL, &v119);
      if ( v16 )
        return v16;
      if ( v10 + (unsigned int)v119 < v10 )
      {
        v10 = -1;
        v29 = -1073741675;
      }
      else
      {
        v10 += v119;
        v29 = 0;
      }
      v16 = (v29 >> 31) & 0xC0010015;
      if ( v16 )
        return v16;
    }
    v30 = *(unsigned int *)(v19 + 112);
    if ( (_DWORD)v30 && *(_QWORD *)(v19 + 120) )
    {
      v16 = PrivateULongMult(v30, 8LL, (char *)&v119 + 4);
      if ( v16 )
        return v16;
      if ( v10 + HIDWORD(v119) < v10 )
      {
        v10 = -1;
        v31 = -1073741675;
      }
      else
      {
        v10 += HIDWORD(v119);
        v31 = 0;
      }
      v16 = (v31 >> 31) & 0xC0010015;
      if ( v16 )
        return v16;
    }
    if ( v129 >= 3 )
    {
      v32 = *(unsigned int *)(v19 + 140);
      if ( (_DWORD)v32 )
      {
        if ( *(_QWORD *)(v19 + 144) && *(_BYTE *)(v19 + 1) >= 3u )
        {
          v16 = PrivateULongMult(v32, 8LL, &v120);
          if ( v16 )
            return v16;
          if ( v10 + (unsigned int)v120 < v10 )
          {
            v10 = -1;
            v33 = -1073741675;
          }
          else
          {
            v10 += v120;
            v33 = 0;
          }
          v16 = (v33 >> 31) & 0xC0010015;
          if ( v16 )
            return v16;
        }
      }
    }
    v34 = v10 + v15;
    v35 = -1;
    if ( v10 + v15 >= v15 )
      v35 = v10 + v15;
    v15 = v35;
    v130 = v35;
    v16 = v34 < v21 ? 0xC0010015 : 0;
    if ( v34 < v20 )
      return v16;
  }
  v36 = v15;
  v37 = v15;
  if ( v129 >= 2 )
  {
    v38 = *((_DWORD *)a2 + 1);
    v39 = *((_QWORD *)a2 + 5);
    v11 = *((_QWORD *)a2 + 6);
    v124 = v39;
    v126 = v11;
    v40 = v38 & 0x28;
    if ( v40 && !v11 || v11 && !v40 )
      return (unsigned int)-1073741811;
    if ( v39 )
    {
      v41 = *(unsigned int *)(v39 + 4);
      if ( (_DWORD)v41 )
      {
        v16 = PrivateULongMult(v41, 24LL, &v123);
        if ( v16 )
          return v16;
        v42 = (int)v123;
      }
      else
      {
        v42 = 16;
      }
      v43 = v42 + 8;
      v128 = v43;
      if ( v43 < 8 )
      {
        v43 = -1;
        v44 = -1073741675;
        v128 = -1;
      }
      else
      {
        v44 = 0;
      }
      v16 = (v44 >> 31) & 0xC0010015;
      if ( v16 )
        return v16;
      v45 = v43 + v15;
      v46 = -1;
      if ( v45 >= v15 )
        v46 = v45;
      v15 = v46;
      v130 = v46;
      v16 = v45 < v37 ? 0xC0010015 : 0;
      if ( v45 < v36 )
        return v16;
    }
  }
  v47 = v15;
  v48 = v15;
  if ( v11 )
  {
    v49 = *(unsigned int *)(v11 + 32);
    v131 = 80;
    if ( (_DWORD)v49 )
    {
      if ( *(_QWORD *)(v11 + 40) )
      {
        v16 = PrivateULongMult(v49, 3LL, (char *)&v120 + 4);
        if ( v16 )
          return v16;
        v131 = HIDWORD(v120) + 80;
        if ( HIDWORD(v120) >= 0xFFFFFFB0 )
        {
          v131 = -1;
          v50 = -1073741675;
        }
        else
        {
          v50 = 0;
        }
        v16 = (v50 >> 31) & 0xC0010015;
        if ( v16 )
          return v16;
      }
    }
    v51 = *(unsigned int *)(v11 + 48);
    if ( (_DWORD)v51 && *(_QWORD *)(v11 + 56) )
    {
      v16 = PrivateULongMult(v51, 8LL, &v121);
      if ( v16 )
        return v16;
      if ( v131 + (unsigned int)v121 < v131 )
      {
        v131 = -1;
        v52 = -1073741675;
      }
      else
      {
        v131 += v121;
        v52 = 0;
      }
      v16 = (v52 >> 31) & 0xC0010015;
      if ( v16 )
        return v16;
    }
    v53 = *(unsigned int *)(v11 + 64);
    if ( (_DWORD)v53 && *(_QWORD *)(v11 + 72) )
    {
      v16 = PrivateULongMult(v53, 8LL, (char *)&v121 + 4);
      if ( v16 )
        return v16;
      if ( v131 + HIDWORD(v121) < v131 )
      {
        v131 = -1;
        v54 = -1073741675;
      }
      else
      {
        v131 += HIDWORD(v121);
        v54 = 0;
      }
      v16 = (v54 >> 31) & 0xC0010015;
      if ( v16 )
        return v16;
    }
    v55 = -1;
    v56 = v15 + v131;
    if ( v15 + v131 >= v15 )
      v55 = v15 + v131;
    v15 = v55;
    v130 = v55;
    v16 = v56 < v48 ? 0xC0010015 : 0;
    if ( v56 < v47 )
      return v16;
  }
  v57 = v15;
  v58 = v15;
  if ( v129 < 3 )
    goto LABEL_134;
  v59 = *((_DWORD *)a2 + 1);
  v60 = *((_QWORD *)a2 + 7);
  v125 = v60;
  v61 = v59 & 0x70;
  if ( v61 && !v60 )
    return (unsigned int)-1073741811;
  if ( !v60 )
  {
    v15 = v130;
    goto LABEL_134;
  }
  if ( !v61 )
    return (unsigned int)-1073741811;
  v62 = *(unsigned int *)(v60 + 48);
  a7 = 72;
  if ( !(_DWORD)v62
    || !*(_QWORD *)(v60 + 56)
    || (v16 = PrivateULongMult(v62, 3LL, &v122)) == 0
    && ((a7 = v122 + 72, (unsigned int)v122 >= 0xFFFFFFB8) ? (a7 = -1, v63 = -1073741675) : (v63 = 0),
        (v16 = (v63 >> 31) & 0xC0010015) == 0) )
  {
    if ( (v64 = *(unsigned int *)(v60 + 32), !(_DWORD)v64)
      || !*(_QWORD *)(v60 + 40)
      || (v16 = PrivateULongMult(v64, 6LL, (char *)&v122 + 4)) == 0
      && (a7 + HIDWORD(v122) < a7 ? (a7 = -1, v65 = -1073741675) : (a7 += HIDWORD(v122), v65 = 0),
          (v16 = (v65 >> 31) & 0xC0010015) == 0) )
    {
      v66 = v130 + a7;
      if ( v130 + a7 >= v130 )
        v14 = v130 + a7;
      v15 = v14;
      v16 = v66 < v58 ? 0xC0010015 : 0;
      if ( v66 >= v57 )
      {
LABEL_134:
        v16 = NdisAllocateMemoryWithTag(&VirtualAddress, v15, 0x6D61444Eu);
        if ( v16 )
          return v16;
        memset(VirtualAddress, 0, v15);
        v67 = VirtualAddress;
        v68 = a9;
        v69 = *a2;
        v70 = Size;
        v123 = VirtualAddress;
        *(_OWORD *)VirtualAddress = v69;
        *v68 = v67;
        v67[4] = *((_DWORD *)a2 + 4);
        VirtualAddress = (char *)VirtualAddress + 64;
        *v67 = 4195233;
        if ( v70 && *((_DWORD *)a2 + 5) )
        {
          v71 = v70;
          *((_QWORD *)v67 + 3) = VirtualAddress;
          v67[5] = *((_DWORD *)a2 + 5);
          memmove(VirtualAddress, *((const void **)a2 + 3), v70);
          v72 = (char *)VirtualAddress + v71;
          VirtualAddress = (char *)VirtualAddress + v71;
        }
        else
        {
          *((_QWORD *)v67 + 3) = 0LL;
          v67[5] = 0;
          v72 = (char *)VirtualAddress;
        }
        if ( !v10 || !v19 )
          goto LABEL_171;
        *((_QWORD *)v67 + 4) = v72;
        v73 = VirtualAddress;
        *(_OWORD *)v72 = *(_OWORD *)v19;
        *((_OWORD *)v72 + 1) = *(_OWORD *)(v19 + 16);
        *((_OWORD *)v72 + 2) = *(_OWORD *)(v19 + 32);
        v74 = a8;
        v75 = (char *)VirtualAddress + 160;
        VirtualAddress = (char *)VirtualAddress + 160;
        if ( !(_DWORD)a8 )
          goto LABEL_144;
        if ( *(_DWORD *)(v19 + 48) )
        {
          v73[7] = v75;
          v76 = v74;
          *((_DWORD *)v73 + 12) = *(_DWORD *)(v19 + 48);
          memmove(VirtualAddress, *(const void **)(v19 + 56), v74);
          v77 = (char *)VirtualAddress + v76;
          VirtualAddress = (char *)VirtualAddress + v76;
        }
        else
        {
LABEL_144:
          v73[7] = 0LL;
          *((_DWORD *)v73 + 12) = 0;
          v77 = (char *)VirtualAddress;
        }
        v78 = v118;
        if ( (_DWORD)v118 && *(_DWORD *)(v19 + 64) )
        {
          v73[9] = v77;
          v79 = v78;
          *((_DWORD *)v73 + 16) = *(_DWORD *)(v19 + 64);
          memmove(VirtualAddress, *(const void **)(v19 + 72), v78);
          v80 = (char *)VirtualAddress + v79;
          VirtualAddress = (char *)VirtualAddress + v79;
        }
        else
        {
          v73[9] = 0LL;
          *((_DWORD *)v73 + 16) = 0;
          v80 = (char *)VirtualAddress;
        }
        v81 = HIDWORD(v118);
        if ( HIDWORD(v118) && *(_DWORD *)(v19 + 80) )
        {
          v73[11] = v80;
          v82 = v81;
          *((_DWORD *)v73 + 20) = *(_DWORD *)(v19 + 80);
          memmove(VirtualAddress, *(const void **)(v19 + 88), v81);
          v83 = (char *)VirtualAddress + v82;
          VirtualAddress = (char *)VirtualAddress + v82;
        }
        else
        {
          v73[11] = 0LL;
          *((_DWORD *)v73 + 20) = 0;
          v83 = (char *)VirtualAddress;
        }
        v84 = v119;
        if ( (_DWORD)v119 && *(_DWORD *)(v19 + 96) )
        {
          v73[13] = v83;
          v85 = v84;
          *((_DWORD *)v73 + 24) = *(_DWORD *)(v19 + 96);
          memmove(VirtualAddress, *(const void **)(v19 + 104), v84);
          v86 = (char *)VirtualAddress + v85;
          VirtualAddress = (char *)VirtualAddress + v85;
        }
        else
        {
          v73[13] = 0LL;
          *((_DWORD *)v73 + 24) = 0;
          v86 = (char *)VirtualAddress;
        }
        v87 = HIDWORD(v119);
        if ( HIDWORD(v119) && *(_DWORD *)(v19 + 112) )
        {
          v73[15] = v86;
          v88 = v87;
          *((_DWORD *)v73 + 28) = *(_DWORD *)(v19 + 112);
          memmove(VirtualAddress, *(const void **)(v19 + 120), v87);
          v72 = (char *)VirtualAddress + v88;
          VirtualAddress = (char *)VirtualAddress + v88;
        }
        else
        {
          v73[15] = 0LL;
          *((_DWORD *)v73 + 28) = 0;
          v72 = (char *)VirtualAddress;
        }
        if ( v129 < 3 )
          goto LABEL_171;
        *(_BYTE *)(*((_QWORD *)v67 + 4) + 128LL) = *(_BYTE *)(v19 + 128);
        *(_DWORD *)(*((_QWORD *)v67 + 4) + 132LL) = *(_DWORD *)(v19 + 132);
        *(_BYTE *)(*((_QWORD *)v67 + 4) + 136LL) = *(_BYTE *)(v19 + 136);
        if ( *(_DWORD *)(v19 + 140) && *(_QWORD *)(v19 + 144) && *(_BYTE *)(v19 + 1) >= 3u )
        {
          v89 = v120;
          if ( (_DWORD)v120 )
          {
            v90 = (unsigned int)v120;
            v73[18] = VirtualAddress;
            *((_DWORD *)v73 + 35) = *(_DWORD *)(v19 + 140);
            memmove(VirtualAddress, *(const void **)(v19 + 144), v89);
            v72 = (char *)VirtualAddress + v90;
            VirtualAddress = (char *)VirtualAddress + v90;
            goto LABEL_169;
          }
          v73[18] = 0LL;
          *((_DWORD *)v73 + 35) = 0;
        }
        v72 = (char *)VirtualAddress;
LABEL_169:
        if ( *(_BYTE *)(v19 + 1) >= 4u )
        {
          *(_BYTE *)(*((_QWORD *)v67 + 4) + 152LL) = *(_BYTE *)(v19 + 152);
          *(_BYTE *)(*((_QWORD *)v67 + 4) + 153LL) = *(_BYTE *)(v19 + 153);
          *(_BYTE *)(*((_QWORD *)v67 + 4) + 154LL) = *(_BYTE *)(v19 + 154);
          *(_BYTE *)(*((_QWORD *)v67 + 4) + 155LL) = *(_BYTE *)(v19 + 155);
          *(_BYTE *)(*((_QWORD *)v67 + 4) + 156LL) = *(_BYTE *)(v19 + 156);
          v72 = (char *)VirtualAddress;
        }
LABEL_171:
        if ( v128 )
        {
          v91 = v124;
          if ( v124 )
          {
            *((_QWORD *)v67 + 5) = v72;
            *(_QWORD *)v72 = *(_QWORD *)v91;
            if ( *(_DWORD *)(v91 + 4) )
            {
              v92 = *(unsigned __int8 *)(v91 + 9);
              if ( v92 == 3 )
              {
                v93 = 24;
              }
              else if ( v92 == 2 )
              {
                v93 = 20;
              }
              else
              {
                v93 = 0;
                if ( v92 == 1 )
                  v93 = 16;
              }
              v94 = (_BYTE *)(v91 + 8);
              v95 = (_BYTE *)(*((_QWORD *)v67 + 5) + 8LL);
              v96 = 0;
              v97 = v91;
              v98 = v93;
              do
              {
                memmove(v95, v94, v98);
                if ( a1 >= 0x61Eu )
                  *((_DWORD *)v95 + 4) = 0;
                ++v96;
                *v95 = *v94;
                v94 += v98;
                v95[1] = 3;
                *((_WORD *)v95 + 1) = 24;
                v95 += 24;
              }
              while ( v96 < *(_DWORD *)(v97 + 4) );
              v16 = 0;
              v67 = v123;
              v11 = v126;
            }
            v72 = (char *)VirtualAddress + v128;
            VirtualAddress = v72;
          }
        }
        if ( v131 && v11 )
        {
          *((_QWORD *)v67 + 6) = v72;
          v99 = VirtualAddress;
          *(_OWORD *)v72 = *(_OWORD *)v11;
          *((_OWORD *)v72 + 1) = *(_OWORD *)(v11 + 16);
          v100 = HIDWORD(v120);
          v101 = (char *)VirtualAddress + 80;
          VirtualAddress = (char *)VirtualAddress + 80;
          if ( HIDWORD(v120) && *(_DWORD *)(v11 + 32) )
          {
            v99[5] = v101;
            v102 = v100;
            *((_DWORD *)v99 + 8) = *(_DWORD *)(v11 + 32);
            memmove(VirtualAddress, *(const void **)(v11 + 40), v100);
            v103 = (char *)VirtualAddress + v102;
            VirtualAddress = (char *)VirtualAddress + v102;
          }
          else
          {
            v99[5] = 0LL;
            *((_DWORD *)v99 + 8) = 0;
            v103 = (char *)VirtualAddress;
          }
          v104 = v121;
          if ( (_DWORD)v121 && *(_DWORD *)(v11 + 48) )
          {
            v99[7] = v103;
            v105 = v104;
            *((_DWORD *)v99 + 12) = *(_DWORD *)(v11 + 48);
            memmove(VirtualAddress, *(const void **)(v11 + 56), v104);
            v106 = (char *)VirtualAddress + v105;
            VirtualAddress = (char *)VirtualAddress + v105;
          }
          else
          {
            v99[7] = 0LL;
            *((_DWORD *)v99 + 12) = 0;
            v106 = (char *)VirtualAddress;
          }
          v107 = HIDWORD(v121);
          if ( HIDWORD(v121) && *(_DWORD *)(v11 + 64) )
          {
            v99[9] = v106;
            v108 = v107;
            *((_DWORD *)v99 + 16) = *(_DWORD *)(v11 + 64);
            memmove(VirtualAddress, *(const void **)(v11 + 72), v107);
            v72 = (char *)VirtualAddress + v108;
            VirtualAddress = (char *)VirtualAddress + v108;
          }
          else
          {
            v99[9] = 0LL;
            *((_DWORD *)v99 + 16) = 0;
            v72 = (char *)VirtualAddress;
          }
        }
        if ( a7 )
        {
          v109 = v125;
          if ( v125 )
          {
            *((_QWORD *)v67 + 7) = v72;
            v110 = VirtualAddress;
            *(_OWORD *)v72 = *(_OWORD *)v109;
            *((_OWORD *)v72 + 1) = *(_OWORD *)(v109 + 16);
            *((_OWORD *)v72 + 2) = *(_OWORD *)(v109 + 32);
            *((_OWORD *)v72 + 3) = *(_OWORD *)(v109 + 48);
            *((_QWORD *)v72 + 8) = *(_QWORD *)(v109 + 64);
            v111 = v122;
            v112 = (char *)VirtualAddress + 72;
            VirtualAddress = (char *)VirtualAddress + 72;
            if ( (_DWORD)v122 && *(_DWORD *)(v109 + 48) )
            {
              v110[7] = v112;
              v113 = v111;
              *((_DWORD *)v110 + 12) = *(_DWORD *)(v109 + 48);
              memmove(VirtualAddress, *(const void **)(v109 + 56), v111);
              v109 = v125;
              v114 = (char *)VirtualAddress + v113;
              VirtualAddress = (char *)VirtualAddress + v113;
            }
            else
            {
              v110[7] = 0LL;
              *((_DWORD *)v110 + 12) = 0;
              v114 = (char *)VirtualAddress;
            }
            v115 = HIDWORD(v122);
            if ( HIDWORD(v122) && *(_DWORD *)(v109 + 32) )
            {
              v110[5] = v114;
              *((_DWORD *)v110 + 8) = *(_DWORD *)(v109 + 32);
              memmove(VirtualAddress, *(const void **)(v109 + 40), v115);
            }
            else
            {
              v110[5] = 0LL;
              *((_DWORD *)v110 + 8) = 0;
            }
          }
        }
      }
    }
  }
  return v16;
}
