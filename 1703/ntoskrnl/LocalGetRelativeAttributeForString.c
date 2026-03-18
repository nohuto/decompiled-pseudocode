/*
 * XREFs of LocalGetRelativeAttributeForString @ 0x1406FEC78
 * Callers:
 *     LocalGetAclForString @ 0x14057F594 (LocalGetAclForString.c)
 * Callees:
 *     RtlLengthSid @ 0x140088130 (RtlLengthSid.c)
 *     iswspace @ 0x14016A7F0 (iswspace.c)
 *     wcstoxq @ 0x14016C5A8 (wcstoxq.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     LocalGetSidForString @ 0x14057FB88 (LocalGetSidForString.c)
 *     SddlpAlloc @ 0x14057FE50 (SddlpAlloc.c)
 *     DecodeAttributeName @ 0x1406FC80C (DecodeAttributeName.c)
 *     GetDigitFromChar @ 0x1406FCF80 (GetDigitFromChar.c)
 *     GetFlags @ 0x1406FCFFC (GetFlags.c)
 *     GetValueType @ 0x1406FE328 (GetValueType.c)
 *     IsLegalAttributeChar2 @ 0x1406FE488 (IsLegalAttributeChar2.c)
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
  bool v10; // zf
  unsigned int ValueType; // edi
  wint_t *v12; // rdi
  __int64 v13; // rdi
  unsigned __int16 *i; // rbx
  __int16 v15; // cx
  wint_t *v16; // rbx
  __int64 v17; // rax
  unsigned int v18; // r15d
  unsigned int v19; // r14d
  unsigned int v20; // r12d
  wint_t *j; // rbx
  wint_t *v22; // rsi
  PWSTR v24; // rsi
  int v25; // r13d
  wint_t *v26; // rbx
  int m; // eax
  unsigned int v28; // r8d
  unsigned int v29; // ecx
  unsigned int v30; // edx
  __int64 v31; // rcx
  int v32; // edx
  unsigned __int64 v33; // rcx
  unsigned int *v34; // rax
  char v35; // r12
  PSID v36; // r14
  ULONG v37; // eax
  unsigned int v38; // ecx
  int k; // eax
  unsigned int v40; // r14d
  int mm; // eax
  wint_t *v42; // rbx
  unsigned int v43; // ecx
  unsigned int v44; // edx
  int v45; // eax
  unsigned __int64 v46; // rax
  unsigned int v47; // ecx
  int v48; // eax
  unsigned __int16 v49; // r14
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  unsigned int v52; // ecx
  int v53; // eax
  bool v54; // cf
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rax
  unsigned int v57; // ecx
  unsigned int v58; // edx
  size_t v59; // r8
  unsigned int v60; // eax
  unsigned int v61; // r14d
  PVOID v62; // rdx
  unsigned int *v63; // r12
  int v64; // r13d
  int v65; // r13d
  int v66; // r13d
  int v67; // r13d
  int v68; // r13d
  wint_t v69; // ax
  int v70; // ebx
  __int16 *n; // r9
  int v72; // r8d
  wint_t *v73; // r9
  unsigned int v74; // eax
  __int16 *v75; // r8
  __int64 v76; // r8
  __int64 v77; // r8
  __int64 v78; // r10
  __int64 v79; // r11
  _BYTE *v80; // r10
  wint_t v81; // cx
  wint_t v82; // ax
  int v83; // r13d
  wint_t ii; // cx
  PSID v85; // rbx
  ULONG v86; // eax
  __int64 v87; // rcx
  wint_t v88; // ax
  unsigned int *v89; // r13
  wint_t jj; // cx
  WCHAR *v91; // r15
  unsigned int v92; // ecx
  WCHAR kk; // ax
  size_t v94; // rbx
  unsigned __int64 v95; // rax
  int v96; // edx
  unsigned __int64 v97; // rax
  int v98; // edx
  unsigned int *v99; // rcx
  int v100; // [rsp+30h] [rbp-69h]
  int v101; // [rsp+38h] [rbp-61h]
  unsigned int *v102; // [rsp+48h] [rbp-51h]
  unsigned int v103; // [rsp+50h] [rbp-49h]
  int v104; // [rsp+54h] [rbp-45h] BYREF
  unsigned __int16 v105[2]; // [rsp+58h] [rbp-41h] BYREF
  int v106; // [rsp+5Ch] [rbp-3Dh]
  PWSTR EndPointer; // [rsp+60h] [rbp-39h] BYREF
  char v108[8]; // [rsp+68h] [rbp-31h] BYREF
  unsigned int v109; // [rsp+70h] [rbp-29h] BYREF
  unsigned int v110; // [rsp+74h] [rbp-25h]
  PSID Sid; // [rsp+78h] [rbp-21h] BYREF
  PVOID P; // [rsp+80h] [rbp-19h] BYREF
  __int64 v113; // [rsp+88h] [rbp-11h]
  char v114; // [rsp+E8h] [rbp+4Fh] BYREF
  _QWORD *v115; // [rsp+F0h] [rbp+57h]
  unsigned int **v116; // [rsp+F8h] [rbp+5Fh]
  unsigned int *v117; // [rsp+100h] [rbp+67h]

  v117 = a4;
  v116 = a3;
  v115 = a2;
  EndPointer = 0LL;
  v8 = 0LL;
  v9 = 0;
  P = 0LL;
  v105[0] = 0;
  v109 = 0;
  v103 = 0;
  v106 = 0;
  a6 = 0;
  v114 = 0;
  a7 = 0;
  Sid = 0LL;
  if ( !a1 || !a2 || !a3 || !a4 )
  {
    ValueType = 87;
    goto LABEL_42;
  }
  v10 = *a1 == 40;
  *a3 = 0LL;
  *a4 = 0;
  if ( !v10 )
    return 1336;
  v12 = a1 + 1;
  if ( iswspace(a1[1]) )
  {
    do
      ++v12;
    while ( iswspace(*v12) );
    v8 = 0LL;
  }
  if ( *v12 != 34 )
    return 1336;
  v13 = (__int64)(v12 + 1);
  for ( i = (unsigned __int16 *)v13; IsLegalAttributeChar2(*i) && v15; ++i )
  {
    if ( v9 + 1 < v9 )
      return 534;
    ++v9;
  }
  if ( *i != 34 || !v9 )
    return 1336;
  v16 = i + 1;
  ValueType = DecodeAttributeName(v13, 2 * v9, &P);
  if ( !ValueType )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *((_WORD *)P + v17) );
    v18 = -1;
    v113 = (unsigned int)(v17 + 1);
    if ( (unsigned int)(2 * v113) < 0xFFFFFFEC )
      v18 = 2 * v113 + 20;
    v19 = v18;
    v110 = v18;
    v20 = v18;
    if ( (unsigned int)(2 * v113) >= 0xFFFFFFEC )
      goto LABEL_25;
    while ( iswspace(*v16) )
      ++v16;
    if ( *v16 != 44 )
    {
LABEL_30:
      ValueType = 1336;
      goto LABEL_26;
    }
    do
      ++v16;
    while ( iswspace(*v16) );
    ValueType = GetValueType(v16, &EndPointer, (__int16 *)v105);
    if ( ValueType )
      goto LABEL_41;
    for ( j = EndPointer; iswspace(*j); ++j )
      ;
    if ( *j != 44 )
      goto LABEL_30;
    do
      ++j;
    while ( iswspace(*j) );
    ValueType = GetFlags(j, &EndPointer, &v109);
    if ( ValueType )
    {
LABEL_41:
      v8 = 0LL;
      goto LABEL_42;
    }
    v22 = EndPointer;
    if ( (v109 & 0xFFC0) != 0 )
    {
      ValueType = 1336;
      goto LABEL_41;
    }
    if ( iswspace(*EndPointer) )
    {
      do
        ++v22;
      while ( iswspace(*v22) );
    }
    if ( *v22 != 44 )
      goto LABEL_30;
    v24 = v22 + 1;
    v25 = v105[0];
    v26 = v24;
    if ( v105[0] == 1 )
    {
      if ( *v24 )
      {
        while ( 1 )
        {
          v104 = 0;
          v55 = wcstoxq(0LL, v26, &EndPointer, 0, 0, &v104);
          if ( EndPointer == v26 && !v55 )
            goto LABEL_160;
          if ( v104 )
          {
            ValueType = 534;
            goto LABEL_41;
          }
          ++v103;
          v26 = EndPointer;
          if ( iswspace(*EndPointer) )
          {
            do
              ++v26;
            while ( iswspace(*v26) );
            v18 = v20;
          }
          if ( *v26 == 44 )
          {
            if ( *++v26 )
              continue;
          }
          break;
        }
      }
      if ( *v26 != 41 )
        goto LABEL_30;
      v30 = v103;
      v56 = 8LL * v103;
      if ( v56 > 0xFFFFFFFF )
        goto LABEL_25;
      v57 = v56 + v18;
      v53 = -1;
      if ( v57 >= v18 )
        v53 = v57;
      v54 = v57 < v19;
LABEL_158:
      v18 = v53;
      if ( v54 )
        goto LABEL_25;
      goto LABEL_73;
    }
    if ( v105[0] == 2 )
    {
LABEL_127:
      if ( *v24 )
      {
        v49 = v105[0];
        while ( 1 )
        {
          v104 = 0;
          v50 = wcstoxq(0LL, v26, &EndPointer, 0, 1, &v104);
          if ( EndPointer == v26 && !v50 )
            break;
          if ( v104 )
            goto LABEL_25;
          if ( v49 == 6 && v50 > 1 )
            goto LABEL_30;
          ++v103;
          v26 = EndPointer;
          if ( iswspace(*EndPointer) )
          {
            do
              ++v26;
            while ( iswspace(*v26) );
            v18 = v20;
          }
          if ( *v26 == 44 )
          {
            if ( *++v26 )
              continue;
          }
          goto LABEL_139;
        }
LABEL_160:
        ValueType = 1336;
        v8 = 0LL;
        goto LABEL_42;
      }
LABEL_139:
      if ( *v26 != 41 )
        goto LABEL_30;
      v30 = v103;
      v51 = 8LL * v103;
      if ( v51 > 0xFFFFFFFF )
        goto LABEL_25;
      v52 = v51 + v18;
      v53 = -1;
      if ( v52 >= v18 )
        v53 = v52;
      v54 = v52 < v20;
      goto LABEL_158;
    }
    if ( v105[0] != 3 )
    {
      if ( v105[0] == 5 )
      {
        if ( *v24 )
        {
          v35 = a8;
          while ( 1 )
          {
            while ( iswspace(*v26) )
              ++v26;
            ValueType = LocalGetSidForString(v26, &Sid, &EndPointer, &a6, a5, v100, v101, v35);
            if ( ValueType )
              goto LABEL_41;
            v36 = Sid;
            if ( !Sid )
              goto LABEL_41;
            v26 = EndPointer;
            ++v103;
            v37 = RtlLengthSid(Sid);
            v38 = v37 + v18;
            if ( v37 + v18 < v18 || v38 + 4 < v38 )
              goto LABEL_25;
            v18 = v38 + 4;
            if ( a6 )
            {
              ExFreePoolWithTag(v36, 0);
              Sid = 0LL;
            }
            for ( k = iswspace(*v26); k; k = iswspace(*v26) )
              ++v26;
            if ( *v26 != 44 )
              goto LABEL_96;
            if ( !*++v26 )
              goto LABEL_71;
          }
        }
        goto LABEL_71;
      }
      if ( v105[0] != 6 )
      {
        if ( v105[0] != 16 )
          goto LABEL_30;
        if ( *v24 )
        {
          while ( 1 )
          {
            for ( m = iswspace(*v26); m; m = iswspace(*v26) )
              ++v26;
            while ( GetDigitFromChar(*v26, v108) )
            {
              ++v26;
              if ( v28 + 1 < v28 )
                goto LABEL_63;
            }
            ++v103;
            v29 = v18 + ((v28 + 1) >> 1);
            if ( v29 < v18 || v29 + 4 < v29 )
            {
LABEL_63:
              ValueType = 534;
              goto LABEL_98;
            }
            v18 = v29 + 4;
            while ( iswspace(*v26) )
              ++v26;
            if ( *v26 != 44 )
              break;
            if ( !*++v26 )
              goto LABEL_71;
          }
LABEL_96:
          if ( *v26 != 41 )
          {
            ValueType = 1336;
LABEL_98:
            v8 = 0LL;
            goto LABEL_42;
          }
LABEL_72:
          v30 = v103;
LABEL_73:
          v31 = v30 - 1;
          v32 = -1;
          v33 = 4 * v31;
          if ( v33 <= 0xFFFFFFFF && (unsigned int)v33 + v18 >= v18 )
          {
            if ( (unsigned int)v33 + v18 + 3 < (unsigned int)v33 + v18 )
              ValueType = 534;
            else
              v32 = v33 + v18 + 3;
            v110 = v32 & 0xFFFFFFFC;
            v34 = (unsigned int *)SddlpAlloc(v32 & 0xFFFFFFFC);
            v102 = v34;
            v8 = v34;
            if ( !v34 )
            {
              ValueType = 8;
              goto LABEL_42;
            }
            v58 = v113;
            *((_WORD *)v34 + 2) = v105[0];
            *((_WORD *)v34 + 3) = 0;
            v34[2] = v109;
            v34[3] = v103;
            v59 = 2LL * v58;
            v60 = 4 * v103 + 16;
            v61 = v60 + 2 * v58;
            v62 = P;
            *v8 = v60;
            memmove((char *)v8 + v60, v62, v59);
            v63 = (unsigned int *)((char *)v8 + v61);
            v64 = v25 - 1;
            if ( v64 )
            {
              v65 = v64 - 1;
              if ( !v65 )
                goto LABEL_232;
              v66 = v65 - 1;
              if ( v66 )
              {
                v67 = v66 - 2;
                if ( v67 )
                {
                  v68 = v67 - 1;
                  if ( v68 )
                  {
                    if ( v68 != 10 )
                    {
LABEL_190:
                      ValueType = 1336;
                      goto LABEL_42;
                    }
                    v69 = *v24;
                    if ( *v24 )
                    {
                      v70 = 0;
                      do
                      {
                        if ( iswspace(v69) )
                        {
                          do
                            ++v24;
                          while ( iswspace(*v24) );
                          v8 = v102;
                        }
                        for ( n = (__int16 *)v24; GetDigitFromChar(*n, v108); n = (__int16 *)(v73 + 1) )
                          ;
                        v8[v70 + 4] = v61;
                        v74 = (unsigned int)(v72 + 1) >> 1;
                        v75 = (__int16 *)(v73 - 1);
                        *v63 = v74;
                        v61 += v74 + 4;
                        while ( v75 > (__int16 *)v24 )
                        {
                          if ( !GetDigitFromChar(*v75, &v114) || !GetDigitFromChar(*(_WORD *)(v76 - 2), &a7) )
                            goto LABEL_190;
                          v75 = (__int16 *)(v77 - 4);
                          *(_BYTE *)(v79 + v78) = v114 | (16 * a7);
                        }
                        if ( v75 == (__int16 *)v24 )
                        {
                          if ( !GetDigitFromChar(*v75, &v114) )
                            goto LABEL_190;
                          *v80 = v114;
                        }
                        v81 = *v73;
                        v24 = v73;
                        v63 = (unsigned int *)((char *)v8 + v61);
                        ++v70;
                        while ( iswspace(v81) )
                          v81 = *++v24;
                        if ( *v24 != 44 )
                          break;
                        v69 = *++v24;
                      }
                      while ( *v24 );
                    }
                  }
                  else
                  {
LABEL_232:
                    while ( *v24 )
                    {
                      v104 = 0;
                      v95 = wcstoxq(0LL, v24, &EndPointer, 0, 1, &v104);
                      if ( EndPointer == v24 && !v95 )
                        goto LABEL_190;
                      if ( v104 )
                        goto LABEL_244;
                      v96 = v106;
                      v8[v106 + 4] = v61;
                      v61 += 8;
                      *(_QWORD *)v63 = v95;
                      v24 = EndPointer;
                      v63 = (unsigned int *)((char *)v8 + v61);
                      v106 = v96 + 1;
                      while ( iswspace(*v24) )
                        ++v24;
                      if ( *v24 != 44 )
                        break;
                      ++v24;
                    }
                  }
                }
                else
                {
                  v82 = *v24;
                  if ( *v24 )
                  {
                    v83 = 0;
                    while ( 1 )
                    {
                      for ( ii = v82; iswspace(ii); ii = *v24 )
                        ++v24;
                      ValueType = LocalGetSidForString(v24, &Sid, &EndPointer, &a6, a5, v100, v101, a8);
                      if ( ValueType )
                        goto LABEL_42;
                      v85 = Sid;
                      if ( !Sid )
                        goto LABEL_42;
                      v86 = RtlLengthSid(Sid);
                      v8[v83 + 4] = v61;
                      v87 = v61 + 4;
                      v61 = v86 + v87;
                      *v63 = v86;
                      memmove((char *)v8 + v87, v85, v86);
                      v24 = EndPointer;
                      ++v83;
                      v63 = (unsigned int *)((char *)v8 + v61);
                      if ( a6 )
                      {
                        ExFreePoolWithTag(v85, 0);
                        Sid = 0LL;
                      }
                      if ( iswspace(*v24) )
                      {
                        do
                          ++v24;
                        while ( iswspace(*v24) );
                        v8 = v102;
                      }
                      if ( *v24 == 44 )
                      {
                        v82 = *++v24;
                        if ( *v24 )
                          continue;
                      }
                      break;
                    }
                  }
                }
              }
              else
              {
                v88 = *v24;
                if ( *v24 )
                {
                  v89 = v8;
                  while ( 1 )
                  {
                    for ( jj = v88; iswspace(jj); jj = *v24 )
                      ++v24;
                    if ( *v24 != 34 )
                      break;
                    v91 = v24 + 1;
                    v92 = 0;
                    for ( kk = v24[1]; kk != 34 && kk; kk = *v91 )
                    {
                      ++v91;
                      ++v92;
                    }
                    if ( *v91 != 34 )
                      break;
                    v89[v106 + 4] = v61;
                    v61 += 2 * v92 + 2;
                    v94 = 2LL * v92;
                    memmove(v63, v24 + 1, v94);
                    v24 = v91 + 1;
                    *(_WORD *)((char *)v63 + v94) = 0;
                    v63 = (unsigned int *)((char *)v89 + v61);
                    ++v106;
                    while ( iswspace(*v24) )
                      ++v24;
                    if ( *v24 == 44 )
                    {
                      v88 = *++v24;
                      if ( *v24 )
                        continue;
                    }
                    v8 = v89;
                    goto LABEL_189;
                  }
                  ValueType = 1336;
                  v8 = v89;
                  goto LABEL_42;
                }
              }
            }
            else
            {
              while ( *v24 )
              {
                v104 = 0;
                v97 = wcstoxq(0LL, v24, &EndPointer, 0, 0, &v104);
                if ( EndPointer == v24 && !v97 )
                  goto LABEL_190;
                if ( v104 )
                {
LABEL_244:
                  ValueType = 534;
                  goto LABEL_42;
                }
                v98 = v106;
                v8[v106 + 4] = v61;
                v61 += 8;
                *(_QWORD *)v63 = v97;
                v24 = EndPointer;
                v63 = (unsigned int *)((char *)v8 + v61);
                v106 = v98 + 1;
                while ( iswspace(*v24) )
                  ++v24;
                if ( *v24 != 44 )
                  break;
                ++v24;
              }
            }
LABEL_189:
            if ( *v24 == 41 )
            {
              v99 = v117;
              *v116 = v8;
              *v99 = v110;
              *v115 = v24 + 1;
              goto LABEL_42;
            }
            goto LABEL_190;
          }
LABEL_25:
          ValueType = 534;
LABEL_26:
          v8 = 0LL;
          goto LABEL_42;
        }
LABEL_71:
        if ( *v26 != 41 )
          goto LABEL_30;
        goto LABEL_72;
      }
      goto LABEL_127;
    }
    v40 = 0;
    if ( !*v24 )
      goto LABEL_117;
    while ( 2 )
    {
      for ( mm = iswspace(*v26); mm; mm = iswspace(*v26) )
        ++v26;
      if ( *v26 == 34 )
      {
        v42 = v26 + 1;
        while ( *v42 != 34 && *v42 )
        {
          ++v42;
          if ( v40 + 1 < v40 )
            goto LABEL_123;
          ++v40;
        }
        v43 = v40 + 1;
        v44 = v40;
        v45 = -1;
        if ( v40 + 1 >= v40 )
          v45 = v40 + 1;
        v40 = v45;
        if ( v43 < v44 )
        {
LABEL_123:
          ValueType = 534;
          goto LABEL_126;
        }
        if ( *v42 != 34 )
          break;
        ++v103;
        do
          ++v42;
        while ( iswspace(*v42) );
        if ( *v42 == 44 )
        {
          v26 = v42 + 1;
          if ( *v26 )
            continue;
LABEL_117:
          if ( *v26 != 41 )
            goto LABEL_30;
LABEL_118:
          v46 = 2LL * v40;
          if ( v46 > 0xFFFFFFFF )
            goto LABEL_25;
          v47 = v46 + v18;
          v48 = -1;
          if ( v47 >= v18 )
            v48 = v47;
          v18 = v48;
          if ( v47 < v110 )
            goto LABEL_25;
          goto LABEL_72;
        }
        if ( *v42 == 41 )
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
