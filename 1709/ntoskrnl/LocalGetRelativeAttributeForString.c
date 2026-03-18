/*
 * XREFs of LocalGetRelativeAttributeForString @ 0x140736660
 * Callers:
 *     LocalGetAclForString @ 0x14057BEE8 (LocalGetAclForString.c)
 * Callees:
 *     RtlLengthSid @ 0x140019280 (RtlLengthSid.c)
 *     iswspace @ 0x14015F250 (iswspace.c)
 *     wcstoxq @ 0x140160E88 (wcstoxq.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     LocalGetSidForString @ 0x14057C4E4 (LocalGetSidForString.c)
 *     SddlpAlloc @ 0x14057C7AC (SddlpAlloc.c)
 *     DecodeAttributeName @ 0x1407341FC (DecodeAttributeName.c)
 *     GetDigitFromChar @ 0x140734978 (GetDigitFromChar.c)
 *     GetFlags @ 0x1407349F4 (GetFlags.c)
 *     GetValueType @ 0x140735D48 (GetValueType.c)
 *     IsLegalAttributeChar2 @ 0x140735EA8 (IsLegalAttributeChar2.c)
 */

__int64 __fastcall LocalGetRelativeAttributeForString(
        _WORD *a1,
        _QWORD *a2,
        unsigned int **a3,
        unsigned int *a4,
        __int64 a5,
        char a6,
        char a7,
        char a8)
{
  unsigned int *v8; // r15
  unsigned int v9; // esi
  unsigned int ValueType; // edi
  wint_t *v11; // rdi
  __int64 v12; // rdi
  unsigned __int16 *i; // rbx
  __int16 v14; // cx
  wint_t *v15; // rbx
  __int64 v16; // rax
  unsigned int v17; // r15d
  unsigned int v18; // r14d
  unsigned int v19; // r12d
  wint_t *j; // rbx
  wint_t *v21; // rsi
  PWSTR v23; // rsi
  int v24; // r13d
  wint_t *v25; // rbx
  int m; // eax
  unsigned int v27; // r8d
  wint_t v28; // r9
  unsigned int v29; // edx
  wint_t n; // cx
  wint_t v31; // ax
  unsigned int v32; // edx
  unsigned __int64 v33; // rcx
  int v34; // edx
  unsigned int *v35; // rax
  char v36; // r12
  PSID v37; // r14
  wint_t *v38; // rbx
  ULONG v39; // eax
  unsigned int v40; // ecx
  int k; // eax
  unsigned int v42; // r14d
  int nn; // eax
  wint_t *v44; // rbx
  unsigned int v45; // ecx
  unsigned int v46; // edx
  int v47; // eax
  unsigned __int64 v48; // rax
  unsigned int v49; // ecx
  int v50; // eax
  unsigned __int16 v51; // r14
  unsigned __int64 v52; // rax
  wint_t *v53; // rbx
  bool v54; // zf
  unsigned __int64 v55; // rax
  unsigned int v56; // ecx
  int v57; // eax
  bool v58; // cf
  unsigned __int64 v59; // rax
  wint_t *v60; // rbx
  bool v61; // zf
  unsigned __int64 v62; // rax
  unsigned int v63; // ecx
  unsigned int v64; // edx
  size_t v65; // r8
  unsigned int v66; // eax
  unsigned int v67; // r14d
  PVOID v68; // rdx
  unsigned int *v69; // r12
  int v70; // r13d
  int v71; // r13d
  int v72; // r13d
  int v73; // r13d
  int v74; // r13d
  wint_t v75; // ax
  int v76; // ebx
  __int16 *ii; // r9
  int v78; // r8d
  wint_t *v79; // r9
  unsigned int v80; // eax
  __int16 *v81; // r8
  __int64 v82; // r8
  __int64 v83; // r8
  __int64 v84; // r10
  __int64 v85; // r11
  _BYTE *v86; // r10
  wint_t v87; // cx
  wint_t v88; // ax
  bool v89; // zf
  wint_t v90; // ax
  int v91; // r13d
  wint_t jj; // cx
  PSID v93; // rbx
  ULONG v94; // eax
  __int64 v95; // rcx
  wint_t v96; // ax
  unsigned int *v97; // r13
  wint_t kk; // cx
  WCHAR *v99; // r15
  unsigned int v100; // ecx
  WCHAR mm; // ax
  size_t v102; // rbx
  unsigned __int64 v103; // rax
  int v104; // edx
  unsigned __int64 v105; // rax
  int v106; // edx
  unsigned int *v107; // rcx
  int v108; // [rsp+30h] [rbp-69h]
  int v109; // [rsp+38h] [rbp-61h]
  unsigned int *v110; // [rsp+48h] [rbp-51h]
  unsigned int v111; // [rsp+50h] [rbp-49h]
  int v112; // [rsp+54h] [rbp-45h] BYREF
  unsigned __int16 v113[2]; // [rsp+58h] [rbp-41h] BYREF
  int v114; // [rsp+5Ch] [rbp-3Dh]
  PWSTR EndPointer; // [rsp+60h] [rbp-39h] BYREF
  char v116[8]; // [rsp+68h] [rbp-31h] BYREF
  unsigned int v117; // [rsp+70h] [rbp-29h] BYREF
  unsigned int v118; // [rsp+74h] [rbp-25h]
  PSID Sid; // [rsp+78h] [rbp-21h] BYREF
  PVOID P; // [rsp+80h] [rbp-19h] BYREF
  __int64 v121; // [rsp+88h] [rbp-11h]
  char v122; // [rsp+E8h] [rbp+4Fh] BYREF
  _QWORD *v123; // [rsp+F0h] [rbp+57h]
  unsigned int **v124; // [rsp+F8h] [rbp+5Fh]
  unsigned int *v125; // [rsp+100h] [rbp+67h]

  v125 = a4;
  v124 = a3;
  v123 = a2;
  EndPointer = 0LL;
  v8 = 0LL;
  v9 = 0;
  P = 0LL;
  v113[0] = 0;
  v117 = 0;
  v111 = 0;
  v114 = 0;
  a6 = 0;
  v122 = 0;
  a7 = 0;
  Sid = 0LL;
  if ( !a1 || !a2 || !a3 || !a4 )
  {
    ValueType = 87;
    goto LABEL_42;
  }
  v54 = *a1 == 40;
  *a3 = 0LL;
  *a4 = 0;
  if ( !v54 )
    return 1336;
  v11 = a1 + 1;
  if ( iswspace(a1[1]) )
  {
    do
      ++v11;
    while ( iswspace(*v11) );
    v8 = 0LL;
  }
  if ( *v11 != 34 )
    return 1336;
  v12 = (__int64)(v11 + 1);
  for ( i = (unsigned __int16 *)v12; IsLegalAttributeChar2(*i) && v14; ++i )
  {
    if ( v9 + 1 < v9 )
      return 534;
    ++v9;
  }
  if ( *i != 34 || !v9 )
    return 1336;
  v15 = i + 1;
  ValueType = DecodeAttributeName(v12, 2 * v9, &P);
  if ( !ValueType )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *((_WORD *)P + v16) );
    v17 = -1;
    v121 = (unsigned int)(v16 + 1);
    if ( (unsigned int)(2 * v121) < 0xFFFFFFEC )
      v17 = 2 * v121 + 20;
    v18 = v17;
    v118 = v17;
    v19 = v17;
    if ( (unsigned int)(2 * v121) >= 0xFFFFFFEC )
      goto LABEL_25;
    while ( iswspace(*v15) )
      ++v15;
    if ( *v15 != 44 )
    {
LABEL_30:
      ValueType = 1336;
      goto LABEL_26;
    }
    do
      ++v15;
    while ( iswspace(*v15) );
    ValueType = GetValueType(v15, &EndPointer, (__int16 *)v113);
    if ( ValueType )
      goto LABEL_41;
    for ( j = EndPointer; iswspace(*j); ++j )
      ;
    if ( *j != 44 )
      goto LABEL_30;
    do
      ++j;
    while ( iswspace(*j) );
    ValueType = GetFlags(j, &EndPointer, &v117);
    if ( ValueType )
    {
LABEL_41:
      v8 = 0LL;
      goto LABEL_42;
    }
    v21 = EndPointer;
    if ( (v117 & 0xFFC0) != 0 )
    {
      ValueType = 1336;
      goto LABEL_41;
    }
    if ( iswspace(*EndPointer) )
    {
      do
        ++v21;
      while ( iswspace(*v21) );
    }
    if ( *v21 != 44 )
      goto LABEL_30;
    v23 = v21 + 1;
    v24 = v113[0];
    v25 = v23;
    if ( v113[0] == 1 )
    {
      if ( *v23 )
      {
        do
        {
          v112 = 0;
          v59 = wcstoxq(0LL, v25, &EndPointer, 0, 0, &v112);
          if ( EndPointer == v25 && !v59 )
            goto LABEL_156;
          if ( v112 )
          {
            ValueType = 534;
            goto LABEL_41;
          }
          ++v111;
          v60 = EndPointer;
          if ( iswspace(*EndPointer) )
          {
            do
              ++v60;
            while ( iswspace(*v60) );
            v17 = v19;
          }
          if ( *v60 != 44 )
          {
            v61 = *v60 == 41;
            goto LABEL_158;
          }
          v25 = v60 + 1;
        }
        while ( *v25 );
      }
      v61 = *v25 == 41;
LABEL_158:
      if ( !v61 )
        goto LABEL_30;
      v32 = v111;
      v62 = 8LL * v111;
      if ( v62 > 0xFFFFFFFF )
        goto LABEL_25;
      v63 = v17 + v62;
      v57 = -1;
      if ( v63 >= v17 )
        v57 = v63;
      v58 = v63 < v18;
LABEL_163:
      v17 = v57;
      if ( v58 )
        goto LABEL_25;
      goto LABEL_73;
    }
    if ( v113[0] == 2 )
    {
LABEL_127:
      if ( *v23 )
      {
        v51 = v113[0];
        while ( 1 )
        {
          v112 = 0;
          v52 = wcstoxq(0LL, v25, &EndPointer, 0, 1, &v112);
          if ( EndPointer == v25 && !v52 )
            break;
          if ( v112 )
            goto LABEL_25;
          if ( v51 == 6 && v52 > 1 )
            goto LABEL_30;
          ++v111;
          v53 = EndPointer;
          if ( iswspace(*EndPointer) )
          {
            do
              ++v53;
            while ( iswspace(*v53) );
            v17 = v19;
          }
          if ( *v53 != 44 )
          {
            v54 = *v53 == 41;
            goto LABEL_141;
          }
          v25 = v53 + 1;
          if ( !*v25 )
            goto LABEL_139;
        }
LABEL_156:
        ValueType = 1336;
        v8 = 0LL;
        goto LABEL_42;
      }
LABEL_139:
      v54 = *v25 == 41;
LABEL_141:
      if ( !v54 )
        goto LABEL_30;
      v32 = v111;
      v55 = 8LL * v111;
      if ( v55 > 0xFFFFFFFF )
        goto LABEL_25;
      v56 = v17 + v55;
      v57 = -1;
      if ( v56 >= v17 )
        v57 = v56;
      v58 = v56 < v19;
      goto LABEL_163;
    }
    if ( v113[0] != 3 )
    {
      if ( v113[0] == 5 )
      {
        if ( *v23 )
        {
          v36 = a8;
          while ( 1 )
          {
            while ( iswspace(*v25) )
              ++v25;
            ValueType = LocalGetSidForString(v25, &Sid, &EndPointer, &a6, a5, v108, v109, v36);
            if ( ValueType )
              goto LABEL_41;
            v37 = Sid;
            if ( !Sid )
              goto LABEL_41;
            v38 = EndPointer;
            ++v111;
            v39 = RtlLengthSid(Sid);
            v40 = v39 + v17;
            if ( v39 + v17 < v17 || v40 + 4 < v40 )
              goto LABEL_25;
            v17 = v40 + 4;
            if ( a6 )
            {
              ExFreePoolWithTag(v37, 0);
              Sid = 0LL;
            }
            for ( k = iswspace(*v38); k; k = iswspace(*v38) )
              ++v38;
            v31 = *v38;
            if ( *v38 != 44 )
              goto LABEL_96;
            v25 = v38 + 1;
            if ( !*v25 )
              goto LABEL_71;
          }
        }
        goto LABEL_71;
      }
      if ( v113[0] != 6 )
      {
        if ( v113[0] != 16 )
          goto LABEL_30;
        if ( *v23 )
        {
          while ( 1 )
          {
            for ( m = iswspace(*v25); m; m = iswspace(*v25) )
              ++v25;
            while ( GetDigitFromChar(*v25, v116) )
            {
              ++v25;
              if ( v27 + 1 < v27 )
                goto LABEL_63;
            }
            ++v111;
            v29 = v17 + ((v27 + 1) >> 1);
            if ( v29 < v17 || v29 + 4 < v29 )
            {
LABEL_63:
              ValueType = 534;
              goto LABEL_98;
            }
            v17 = v29 + 4;
            for ( n = v28; iswspace(n); n = *v25 )
              ++v25;
            v31 = *v25;
            if ( *v25 != 44 )
              break;
            if ( !*++v25 )
              goto LABEL_71;
          }
LABEL_96:
          if ( v31 != 41 )
          {
            ValueType = 1336;
LABEL_98:
            v8 = 0LL;
            goto LABEL_42;
          }
LABEL_72:
          v32 = v111;
LABEL_73:
          v33 = 4LL * (v32 - 1);
          if ( v33 <= 0xFFFFFFFF && v17 + (unsigned int)v33 >= v17 )
          {
            v34 = -1;
            if ( v17 + (unsigned int)v33 + 3 < v17 + (unsigned int)v33 )
              ValueType = 534;
            else
              v34 = v17 + v33 + 3;
            v118 = v34 & 0xFFFFFFFC;
            v35 = (unsigned int *)SddlpAlloc(v34 & 0xFFFFFFFC);
            v110 = v35;
            v8 = v35;
            if ( !v35 )
            {
              ValueType = 8;
              goto LABEL_42;
            }
            v64 = v121;
            *((_WORD *)v35 + 2) = v113[0];
            *((_WORD *)v35 + 3) = 0;
            v35[2] = v117;
            v35[3] = v111;
            v65 = 2LL * v64;
            v66 = 4 * v111 + 16;
            v67 = v66 + 2 * v64;
            v68 = P;
            *v8 = v66;
            memmove((char *)v8 + v66, v68, v65);
            v69 = (unsigned int *)((char *)v8 + v67);
            v70 = v24 - 1;
            if ( v70 )
            {
              v71 = v70 - 1;
              if ( !v71 )
                goto LABEL_239;
              v72 = v71 - 1;
              if ( v72 )
              {
                v73 = v72 - 2;
                if ( v73 )
                {
                  v74 = v73 - 1;
                  if ( v74 )
                  {
                    if ( v74 != 10 )
                    {
LABEL_229:
                      ValueType = 1336;
                      goto LABEL_42;
                    }
                    v75 = *v23;
                    if ( *v23 )
                    {
                      v76 = 0;
                      while ( 1 )
                      {
                        if ( iswspace(v75) )
                        {
                          do
                            ++v23;
                          while ( iswspace(*v23) );
                          v8 = v110;
                        }
                        for ( ii = (__int16 *)v23; GetDigitFromChar(*ii, v116); ii = (__int16 *)(v79 + 1) )
                          ;
                        v8[v76 + 4] = v67;
                        v80 = (unsigned int)(v78 + 1) >> 1;
                        v81 = (__int16 *)(v79 - 1);
                        *v69 = v80;
                        v67 += v80 + 4;
                        while ( v81 > (__int16 *)v23 )
                        {
                          if ( !GetDigitFromChar(*v81, &v122) || !GetDigitFromChar(*(_WORD *)(v82 - 2), &a7) )
                            goto LABEL_229;
                          v81 = (__int16 *)(v83 - 4);
                          *(_BYTE *)(v85 + v84) = v122 | (16 * a7);
                        }
                        if ( v81 == (__int16 *)v23 )
                        {
                          if ( !GetDigitFromChar(*v81, &v122) )
                            goto LABEL_229;
                          *v86 = v122;
                        }
                        v87 = *v79;
                        v23 = v79;
                        v69 = (unsigned int *)((char *)v8 + v67);
                        ++v76;
                        while ( iswspace(v87) )
                          v87 = *++v23;
                        v88 = *v23;
                        if ( *v23 != 44 )
                          break;
                        v75 = *++v23;
                        if ( !*v23 )
                          goto LABEL_193;
                      }
LABEL_227:
                      v89 = v88 == 41;
LABEL_228:
                      if ( v89 )
                      {
                        v107 = v125;
                        *v124 = v8;
                        *v107 = v118;
                        *v123 = v23 + 1;
                        goto LABEL_42;
                      }
                      goto LABEL_229;
                    }
                  }
                  else
                  {
LABEL_239:
                    while ( *v23 )
                    {
                      v112 = 0;
                      v103 = wcstoxq(0LL, v23, &EndPointer, 0, 1, &v112);
                      if ( EndPointer == v23 && !v103 )
                        goto LABEL_229;
                      if ( v112 )
                        goto LABEL_251;
                      v104 = v114;
                      v8[v114 + 4] = v67;
                      v67 += 8;
                      *(_QWORD *)v69 = v103;
                      v23 = EndPointer;
                      v69 = (unsigned int *)((char *)v8 + v67);
                      v114 = v104 + 1;
                      while ( iswspace(*v23) )
                        ++v23;
                      v88 = *v23;
                      if ( *v23 != 44 )
                        goto LABEL_227;
                      ++v23;
                    }
                  }
                }
                else
                {
                  v90 = *v23;
                  if ( *v23 )
                  {
                    v91 = 0;
                    do
                    {
                      for ( jj = v90; iswspace(jj); jj = *v23 )
                        ++v23;
                      ValueType = LocalGetSidForString(v23, &Sid, &EndPointer, &a6, a5, v108, v109, a8);
                      if ( ValueType )
                        goto LABEL_42;
                      v93 = Sid;
                      if ( !Sid )
                        goto LABEL_42;
                      v94 = RtlLengthSid(Sid);
                      v8[v91 + 4] = v67;
                      v95 = v67 + 4;
                      v67 = v94 + v95;
                      *v69 = v94;
                      memmove((char *)v8 + v95, v93, v94);
                      v23 = EndPointer;
                      ++v91;
                      v69 = (unsigned int *)((char *)v8 + v67);
                      if ( a6 )
                      {
                        ExFreePoolWithTag(v93, 0);
                        Sid = 0LL;
                      }
                      if ( iswspace(*v23) )
                      {
                        do
                          ++v23;
                        while ( iswspace(*v23) );
                        v8 = v110;
                      }
                      v88 = *v23;
                      if ( *v23 != 44 )
                        goto LABEL_227;
                      v90 = *++v23;
                    }
                    while ( *v23 );
                  }
                }
              }
              else
              {
                v96 = *v23;
                if ( *v23 )
                {
                  v97 = v8;
                  while ( 1 )
                  {
                    for ( kk = v96; iswspace(kk); kk = *v23 )
                      ++v23;
                    if ( *v23 != 34 )
                      break;
                    v99 = v23 + 1;
                    v100 = 0;
                    for ( mm = v23[1]; mm != 34 && mm; mm = *v99 )
                    {
                      ++v99;
                      ++v100;
                    }
                    if ( *v99 != 34 )
                      break;
                    v97[v114 + 4] = v67;
                    v67 += 2 * v100 + 2;
                    v102 = 2LL * v100;
                    memmove(v69, v23 + 1, v102);
                    v23 = v99 + 1;
                    *(_WORD *)((char *)v69 + v102) = 0;
                    v69 = (unsigned int *)((char *)v97 + v67);
                    ++v114;
                    while ( iswspace(*v23) )
                      ++v23;
                    v88 = *v23;
                    if ( *v23 != 44 )
                    {
                      v8 = v97;
                      goto LABEL_227;
                    }
                    v96 = *++v23;
                    if ( !*v23 )
                    {
                      v8 = v97;
                      goto LABEL_193;
                    }
                  }
                  ValueType = 1336;
                  v8 = v97;
                  goto LABEL_42;
                }
              }
            }
            else
            {
              while ( *v23 )
              {
                v112 = 0;
                v105 = wcstoxq(0LL, v23, &EndPointer, 0, 0, &v112);
                if ( EndPointer == v23 && !v105 )
                  goto LABEL_229;
                if ( v112 )
                {
LABEL_251:
                  ValueType = 534;
                  goto LABEL_42;
                }
                v106 = v114;
                v8[v114 + 4] = v67;
                v67 += 8;
                *(_QWORD *)v69 = v105;
                v23 = EndPointer;
                v69 = (unsigned int *)((char *)v8 + v67);
                v114 = v106 + 1;
                while ( iswspace(*v23) )
                  ++v23;
                v88 = *v23;
                if ( *v23 != 44 )
                  goto LABEL_227;
                ++v23;
              }
            }
LABEL_193:
            v89 = *v23 == 41;
            goto LABEL_228;
          }
LABEL_25:
          ValueType = 534;
LABEL_26:
          v8 = 0LL;
          goto LABEL_42;
        }
LABEL_71:
        if ( *v25 != 41 )
          goto LABEL_30;
        goto LABEL_72;
      }
      goto LABEL_127;
    }
    v42 = 0;
    if ( !*v23 )
      goto LABEL_117;
    while ( 2 )
    {
      for ( nn = iswspace(*v25); nn; nn = iswspace(*v25) )
        ++v25;
      if ( *v25 == 34 )
      {
        v44 = v25 + 1;
        while ( *v44 != 34 && *v44 )
        {
          ++v44;
          if ( v42 + 1 < v42 )
            goto LABEL_123;
          ++v42;
        }
        v45 = v42 + 1;
        v46 = v42;
        v47 = -1;
        if ( v42 + 1 >= v42 )
          v47 = v42 + 1;
        v42 = v47;
        if ( v45 < v46 )
        {
LABEL_123:
          ValueType = 534;
          goto LABEL_126;
        }
        if ( *v44 != 34 )
          break;
        ++v111;
        do
          ++v44;
        while ( iswspace(*v44) );
        if ( *v44 == 44 )
        {
          v25 = v44 + 1;
          if ( *v25 )
            continue;
LABEL_117:
          if ( *v25 != 41 )
            goto LABEL_30;
LABEL_118:
          v48 = 2LL * v42;
          if ( v48 > 0xFFFFFFFF )
            goto LABEL_25;
          v49 = v17 + v48;
          v50 = -1;
          if ( v49 >= v17 )
            v50 = v49;
          v17 = v50;
          if ( v49 < v118 )
            goto LABEL_25;
          goto LABEL_72;
        }
        if ( *v44 == 41 )
          goto LABEL_118;
      }
      break;
    }
    ValueType = 1336;
LABEL_126:
    v8 = 0LL;
  }
LABEL_42:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( ValueType && v8 )
    ExFreePoolWithTag(v8, 0);
  return ValueType;
}
