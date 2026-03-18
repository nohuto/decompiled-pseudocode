/*
 * XREFs of PiDevCfgResolveVariableExpression @ 0x1406C78A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x1400DF084 (RtlStringCchPrintfW.c)
 *     PnpStringToDwordValue @ 0x140132148 (PnpStringToDwordValue.c)
 *     PnpValidateRegistryMultiSz @ 0x1401330B8 (PnpValidateRegistryMultiSz.c)
 *     PnpMultiSzContainsString @ 0x1401330EC (PnpMultiSzContainsString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memcmp @ 0x14015F370 (memcmp.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     IopGetRegistryValue @ 0x14051A5E4 (IopGetRegistryValue.c)
 *     RtlCompareUnicodeString @ 0x140523C80 (RtlCompareUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x14056CEE0 (RtlCompareUnicodeStrings.c)
 *     PiDevCfgResolveVariable @ 0x1405A096C (PiDevCfgResolveVariable.c)
 *     PiDevCfgCopyVariableData @ 0x1406C5620 (PiDevCfgCopyVariableData.c)
 */

__int64 __fastcall PiDevCfgResolveVariableExpression(__int64 a1, void *a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 *v4; // r12
  unsigned int v5; // r13d
  __int64 v6; // rsi
  int RegistryValue; // edi
  unsigned int *v8; // r14
  POOL_TYPE v9; // r10d
  UNICODE_STRING *v10; // rbx
  UNICODE_STRING *v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // r15
  __int64 *v14; // rdx
  wchar_t **v15; // rdx
  unsigned int v16; // ecx
  int v17; // eax
  unsigned int v18; // r8d
  unsigned int v19; // r9d
  __int64 v20; // rcx
  __int64 *v21; // r15
  __int64 v22; // r14
  int v23; // esi
  wchar_t *v24; // r13
  int v25; // ecx
  int v26; // edx
  unsigned int v27; // eax
  _WORD *v28; // rdx
  int v29; // ecx
  bool v30; // zf
  __int64 v31; // rax
  unsigned int v32; // ebx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  wchar_t *v36; // rax
  __int64 v37; // rax
  _WORD *v38; // r8
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  bool v42; // zf
  __int64 *v43; // rbx
  unsigned int v44; // eax
  int v45; // ecx
  SIZE_T v46; // r15
  const WCHAR *v47; // r14
  const WCHAR *v48; // r12
  size_t v49; // rsi
  int v50; // ecx
  int v51; // ecx
  int v52; // ecx
  int v53; // ecx
  int v54; // ecx
  int v55; // esi
  __int64 v56; // rax
  unsigned int v57; // ebx
  wchar_t *v58; // rax
  wchar_t *v59; // r13
  const WCHAR *v60; // rdx
  char *v61; // rcx
  BOOL v62; // ecx
  int v63; // ecx
  int v64; // ecx
  int v65; // ecx
  int v66; // ecx
  int v67; // r8d
  _WORD *v68; // rsi
  int v69; // ecx
  unsigned int v70; // ebx
  __int64 v71; // rax
  wchar_t *v72; // rax
  unsigned __int64 v73; // rsi
  const void *v74; // r13
  size_t v75; // r14
  PCWSTR v76; // r15
  wchar_t *v77; // rax
  __int64 v78; // rbx
  wchar_t *v79; // rax
  unsigned int v80; // r9d
  int v81; // ecx
  unsigned int v82; // r8d
  int v83; // ecx
  int v84; // ecx
  int v85; // ecx
  int v86; // ecx
  int v87; // ecx
  int v88; // ecx
  int v89; // ecx
  int v90; // ecx
  int v91; // r8d
  unsigned int v92; // r9d
  int v93; // eax
  int v94; // ecx
  int v95; // ecx
  int v96; // ecx
  int v97; // ecx
  int v98; // ecx
  int v99; // ecx
  int v100; // ecx
  const void *v101; // r11
  size_t v102; // r8
  int v103; // r9d
  int v104; // ecx
  const WCHAR *v105; // r14
  size_t v106; // rbx
  const WCHAR *v107; // r15
  wchar_t *v108; // rax
  wchar_t *v109; // r12
  wchar_t *v110; // r14
  unsigned __int16 v111; // si
  int v112; // ecx
  wchar_t *v113; // r15
  unsigned __int16 v114; // bx
  unsigned __int16 v115; // si
  int v116; // ecx
  int v117; // ecx
  int v118; // ecx
  int v119; // ecx
  int v120; // ecx
  int v121; // ecx
  int v122; // ecx
  int v123; // ecx
  BOOL v124; // ecx
  wchar_t *v125; // rax
  unsigned int v126; // eax
  bool v127; // al
  _BYTE *v128; // rdx
  int v129; // ecx
  int v131; // ebx
  wchar_t *v132; // rax
  __int64 v133; // r14
  __int64 *v134; // rsi
  _QWORD *v135; // rbx
  void *v136; // rcx
  __int64 v137; // rax
  __int64 *v138; // rbx
  _QWORD *v139; // rsi
  void *v140; // rcx
  PVOID *v141; // rbx
  __int64 v142; // rsi
  void *v143; // rcx
  wchar_t *v145; // [rsp+30h] [rbp-79h]
  wchar_t *v146; // [rsp+30h] [rbp-79h]
  unsigned __int16 v147; // [rsp+38h] [rbp-71h]
  int v148; // [rsp+3Ch] [rbp-6Dh]
  unsigned int v149; // [rsp+40h] [rbp-69h]
  __int64 *PoolWithTag; // [rsp+50h] [rbp-59h]
  unsigned int v151; // [rsp+60h] [rbp-49h]
  UNICODE_STRING *v152; // [rsp+68h] [rbp-41h] BYREF
  unsigned int v153; // [rsp+70h] [rbp-39h] BYREF
  unsigned int v154; // [rsp+74h] [rbp-35h]
  PVOID P; // [rsp+78h] [rbp-31h] BYREF
  UNICODE_STRING String2; // [rsp+80h] [rbp-29h] BYREF
  UNICODE_STRING String1; // [rsp+90h] [rbp-19h] BYREF
  __int64 v158; // [rsp+A0h] [rbp-9h]
  __int64 v159; // [rsp+A8h] [rbp-1h]
  __int64 v160; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v161; // [rsp+B8h] [rbp+Fh]
  __int64 v162; // [rsp+C0h] [rbp+17h]

  v159 = a3;
  v158 = a1;
  P = 0LL;
  v151 = 0;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  LODWORD(v6) = 0;
  RegistryValue = IopGetRegistryValue(a2, L"Tokens", 0, &P);
  if ( RegistryValue < 0 )
  {
LABEL_335:
    if ( (_DWORD)v3 )
      goto LABEL_336;
    goto LABEL_342;
  }
  v8 = (unsigned int *)P;
  if ( !PnpValidateRegistryMultiSz(P) )
    goto LABEL_3;
  v10 = (UNICODE_STRING *)((char *)v8 + v8[2]);
  v152 = v10;
  v11 = v10;
  if ( !v10->Length )
    goto LABEL_3;
  do
  {
    v5 += v9;
    v12 = -1LL;
    do
      ++v12;
    while ( *(&v11->Length + v12) );
    v11 = (UNICODE_STRING *)((char *)v11 + 2 * v12 + 2);
  }
  while ( v11->Length );
  v154 = v5;
  if ( !v5 )
  {
LABEL_3:
    RegistryValue = -1073741823;
    goto LABEL_352;
  }
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(v9, 8LL * v5, 0x63647050u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
  {
    RegistryValue = -1073741670;
    goto LABEL_352;
  }
  if ( !v10->Length )
    goto LABEL_358;
  while ( 1 )
  {
    v14 = 0LL;
    if ( !v10->Length )
      break;
    if ( !v10->MaximumLength || !*(&v10->MaximumLength + 1) )
    {
      v15 = &off_140791550;
      v16 = 1;
      while ( *(_DWORD *)&v10->Length != *(_DWORD *)*v15 )
      {
        ++v16;
        v15 += 3;
        if ( v16 >= 0x1B )
          goto LABEL_18;
      }
      v14 = &qword_140791530[3 * v16];
      break;
    }
LABEL_18:
    if ( (unsigned int)v6 >= v5 )
    {
      RegistryValue = -1073741571;
      goto LABEL_358;
    }
    v152 = 0LL;
    v17 = PiDevCfgResolveVariable(v158, &v10->Length, &v152);
    RegistryValue = v17;
    if ( v17 < 0 )
    {
      if ( v17 == -1073741772 )
        RegistryValue = -1073741823;
LABEL_358:
      v3 = 0LL;
      if ( RegistryValue >= 0 )
      {
        if ( (_DWORD)v6 != 1 )
        {
          v4 = PoolWithTag;
          RegistryValue = -1073741823;
          goto LABEL_342;
        }
        RegistryValue = PiDevCfgCopyVariableData(v159, *v13);
        v3 = 0LL;
      }
      goto LABEL_334;
    }
    v13[(unsigned int)v6] = (__int64)v152;
LABEL_322:
    LODWORD(v6) = v6 + 1;
    v151 = v6;
    v137 = -1LL;
    do
      ++v137;
    while ( *(&v10->Length + v137) );
    v10 = (UNICODE_STRING *)((char *)v10 + 2 * v137 + 2);
    v152 = v10;
    if ( !v10->Length )
    {
      v151 = v6;
      goto LABEL_358;
    }
  }
  if ( !v14 )
    goto LABEL_18;
  v18 = *((_DWORD *)v14 + 4);
  v19 = 0;
  v149 = 0;
  if ( v18 )
  {
    while ( (_DWORD)v6 )
    {
      v6 = (unsigned int)(v6 - 1);
      v20 = v19++;
      v151 = v6;
      v149 = v19;
      *(&v160 + v20) = v13[v6];
      if ( v19 >= v18 )
        goto LABEL_28;
    }
    RegistryValue = -1073741823;
  }
LABEL_28:
  if ( RegistryValue < 0 )
    goto LABEL_333;
  v21 = 0LL;
  v153 = 0;
  v148 = 0;
  LODWORD(v22) = 0;
  LOWORD(v23) = 0;
  v147 = 0;
  v24 = 0LL;
  v145 = 0LL;
  if ( v19 != 1 )
  {
    if ( v19 == 2 )
    {
      v43 = (__int64 *)v161;
      v44 = *(_DWORD *)(v161 + 32);
      if ( !v44 )
        goto LABEL_284;
      if ( v44 > 2 )
      {
        if ( v44 != 3 )
        {
          if ( v44 != 4 )
          {
            if ( v44 != 7 )
              goto LABEL_284;
            v45 = *(_DWORD *)(v160 + 32);
            if ( v45 == 7 )
            {
              v46 = *(unsigned int *)(v161 + 36);
              v47 = *(const WCHAR **)(v161 + 40);
              v48 = *(const WCHAR **)(v160 + 40);
              v49 = *(unsigned int *)(v160 + 36);
              if ( (unsigned int)v46 <= 0xFFFE && (unsigned int)v49 <= 0xFFFE )
              {
                v50 = *(_DWORD *)v14;
                if ( *(int *)v14 > 15 )
                {
                  v63 = v50 - 16;
                  if ( v63 )
                  {
                    v64 = v63 - 1;
                    if ( v64 )
                    {
                      v65 = v64 - 1;
                      if ( v65 )
                      {
                        v66 = v65 - 1;
                        if ( v66 )
                        {
                          if ( v66 != 1 )
                            goto LABEL_129;
                          v62 = RtlCompareUnicodeStrings(v47, v46 >> 1, v48, v49 >> 1, 1u) >= 0;
                        }
                        else
                        {
                          v62 = RtlCompareUnicodeStrings(v47, v46 >> 1, v48, v49 >> 1, 1u) <= 0;
                        }
                      }
                      else
                      {
                        v62 = RtlCompareUnicodeStrings(v47, v46 >> 1, v48, v49 >> 1, 1u) > 0;
                      }
                    }
                    else
                    {
                      v62 = RtlCompareUnicodeStrings(v47, v46 >> 1, v48, v49 >> 1, 1u) < 0;
                    }
                  }
                  else
                  {
                    v62 = RtlCompareUnicodeStrings(v47, v46 >> 1, v48, v49 >> 1, 1u) != 0;
                  }
                }
                else
                {
                  if ( v50 != 15 )
                  {
                    v51 = v50 - 1;
                    if ( v51 )
                    {
                      v52 = v51 - 7;
                      if ( !v52 )
                      {
                        v55 = 0;
                        if ( !*v47 )
                          goto LABEL_112;
                        while ( 1 )
                        {
                          v56 = -1LL;
                          do
                            ++v56;
                          while ( v47[v56] );
                          v57 = 2 * v56 + 2;
                          if ( PnpMultiSzContainsString(v48, v47) )
                          {
                            if ( v24 )
                            {
                              v55 = v148;
                            }
                            else
                            {
                              LOWORD(v148) = 0;
                              v145 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v46, 0x63647050u);
                              v24 = v145;
                              if ( !v145 )
                              {
                                RegistryValue = -1073741670;
LABEL_105:
                                if ( v24 )
                                {
                                  v21 = 0LL;
                                  LOWORD(v148) = v55 + 2;
                                  v147 = v148;
                                  v24[((unsigned __int64)(unsigned __int16)v148 >> 1) - 1] = 0;
                                  goto LABEL_160;
                                }
LABEL_112:
                                v21 = 0LL;
                                LODWORD(v22) = 0;
LABEL_161:
                                v24 = v145;
LABEL_162:
                                LOWORD(v4) = v148;
LABEL_163:
                                LOWORD(v23) = v147;
                                goto LABEL_303;
                              }
                            }
                            memmove((char *)v24 + (unsigned __int16)v55, v47, v57);
                            LOWORD(v55) = v57 + v55;
                            v148 = v55;
                          }
                          else
                          {
                            LOWORD(v55) = v148;
                          }
                          v47 += (unsigned __int64)v57 >> 1;
                          if ( !*v47 )
                            goto LABEL_105;
                          v55 = 0;
                        }
                      }
                      v53 = v52 - 1;
                      if ( v53 )
                      {
                        v54 = v53 - 4;
                        if ( !v54 )
                        {
                          if ( (unsigned int)v46 <= 2 )
                            goto LABEL_97;
                          goto LABEL_94;
                        }
                        if ( v54 == 1 )
                        {
                          if ( (unsigned int)v46 > 2 )
                          {
LABEL_95:
                            LODWORD(v22) = 1;
                            v21 = 0LL;
                            goto LABEL_162;
                          }
LABEL_94:
                          if ( (unsigned int)v49 > 2 )
                            goto LABEL_95;
LABEL_97:
                          LODWORD(v22) = 0;
                          v21 = 0LL;
                          v24 = 0LL;
                          goto LABEL_162;
                        }
LABEL_129:
                        LODWORD(v22) = 0;
                        v21 = qword_14078CA98;
                        goto LABEL_162;
                      }
                    }
                    if ( !*v47 )
                    {
                      v21 = (__int64 *)v160;
                      goto LABEL_121;
                    }
                    if ( !*v48 )
                    {
                      v21 = (__int64 *)v161;
                      goto LABEL_121;
                    }
                    if ( (unsigned __int64)(unsigned int)(v49 + v46) - 2 <= 0xFFFE )
                    {
                      v147 = v49 + v46 - 2;
                      v58 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v147, 0x63647050u);
                      v145 = v58;
                      v59 = v58;
                      if ( !v58 )
                        goto LABEL_326;
                      memmove(v58, v47, v46 - 2);
                      v60 = v48;
                      v61 = (char *)&v59[(v46 >> 1) - 1];
                      goto LABEL_120;
                    }
                    goto LABEL_328;
                  }
                  v62 = RtlCompareUnicodeStrings(v47, v46 >> 1, v48, v49 >> 1, 1u) == 0;
                }
                LOWORD(v4) = 0;
                LODWORD(v22) = v62;
                v21 = 0LL;
                v24 = 0LL;
LABEL_283:
                LOWORD(v23) = v147;
                goto LABEL_303;
              }
LABEL_328:
              RegistryValue = -2147483643;
              goto LABEL_329;
            }
            if ( (unsigned int)(v45 - 1) > 1 )
            {
              if ( v45 != 4 )
                goto LABEL_284;
              v67 = **(_DWORD **)(v160 + 40);
              if ( *(_DWORD *)v14 != 24 )
                goto LABEL_284;
              v68 = *(_WORD **)(v161 + 40);
              v69 = 0;
              v70 = 0;
              while ( *v68 )
              {
                v71 = -1LL;
                do
                  ++v71;
                while ( v68[v71] );
                v70 = 2 * v71 + 2;
                if ( v69 == v67 )
                  goto LABEL_146;
                ++v69;
                v68 += (unsigned __int64)v70 >> 1;
              }
              if ( v69 == v67 )
              {
LABEL_146:
                if ( *v68 && v70 > 2 )
                {
                  LOWORD(v4) = v70 - 16;
                  v147 = v70;
                  v72 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v70, 0x63647050u);
                  v24 = v72;
                  if ( !v72 )
                    goto LABEL_326;
                  memmove(v72, v68, v70);
                  goto LABEL_283;
                }
              }
              v21 = qword_14078CA98;
              goto LABEL_163;
            }
            v73 = *(unsigned int *)(v161 + 36);
            v4 = *(__int64 **)(v161 + 40);
            v74 = *(const void **)(v160 + 40);
            v75 = *(unsigned int *)(v160 + 36);
            if ( (unsigned int)v73 > 0xFFFE || (unsigned int)v75 > 0xFFFE )
              goto LABEL_330;
            if ( *(_DWORD *)v14 == 1 )
            {
LABEL_175:
              if ( (unsigned int)(v75 + v73) <= 0xFFFE )
              {
                v147 = v75 + v73;
                v79 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(v75 + v73), 0x63647050u);
                v146 = v79;
                if ( !v79 )
                  goto LABEL_326;
                memmove(v79, v4, v73 - 2);
                memmove(&v146[(v73 >> 1) - 1], v74, v75);
                v24 = v146;
                LOWORD(v4) = v75 + v73;
                v146[((unsigned __int64)(unsigned __int16)(v75 + v73) >> 1) - 1] = 0;
                v21 = 0LL;
                goto LABEL_282;
              }
LABEL_330:
              RegistryValue = -2147483643;
              goto LABEL_327;
            }
            if ( *(_DWORD *)v14 == 2 )
            {
              v24 = 0LL;
              v76 = PnpMultiSzContainsString(*(PCWSTR *)(v161 + 40), *(const WCHAR **)(v160 + 40));
              if ( v76 )
              {
                v147 = v73 - v75;
                v77 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(v73 - v75), 0x63647050u);
                v24 = v77;
                if ( !v77 )
                  goto LABEL_326;
                v78 = ((char *)v76 - (char *)v4) >> 1;
                if ( v78 > 0 )
                  memmove(v77, v4, ((char *)v76 - (char *)v4) >> 1);
                memmove((char *)v24 + v78, (char *)v76 + v75, (unsigned int)(v73 - v75) - v78);
                v21 = 0LL;
              }
              else
              {
                v21 = v43;
              }
              LOWORD(v23) = v147;
              LOWORD(v4) = v147;
              LODWORD(v22) = 0;
              goto LABEL_303;
            }
            if ( *(_DWORD *)v14 != 8 )
            {
              if ( *(_DWORD *)v14 != 9 )
              {
                v21 = qword_14078CA98;
LABEL_160:
                LODWORD(v22) = 0;
                goto LABEL_161;
              }
              if ( PnpMultiSzContainsString(*(PCWSTR *)(v161 + 40), *(const WCHAR **)(v160 + 40)) )
              {
                v21 = v43;
                goto LABEL_160;
              }
              goto LABEL_175;
            }
            LOWORD(v4) = 0;
            v24 = 0LL;
            if ( !PnpMultiSzContainsString(*(PCWSTR *)(v161 + 40), *(const WCHAR **)(v160 + 40)) )
            {
              LODWORD(v22) = 0;
              goto LABEL_163;
            }
            v21 = (__int64 *)v160;
LABEL_166:
            LODWORD(v22) = 0;
            goto LABEL_163;
          }
          if ( *(_DWORD *)(v160 + 32) != 4 )
            goto LABEL_284;
          v80 = **(_DWORD **)(v161 + 40);
          v81 = *(_DWORD *)v14;
          v82 = **(_DWORD **)(v160 + 40);
          if ( *(int *)v14 <= 10 )
          {
            if ( v81 == 10 )
            {
              v91 = v80 ^ v82;
              goto LABEL_200;
            }
            v83 = v81 - 1;
            if ( !v83 )
            {
              LODWORD(v22) = v82 + v80;
              goto LABEL_303;
            }
            v84 = v83 - 1;
            if ( !v84 )
            {
              v92 = v80 - v82;
              goto LABEL_202;
            }
            v85 = v84 - 1;
            if ( !v85 )
            {
              v91 = v80 * v82;
              goto LABEL_200;
            }
            v86 = v85 - 1;
            if ( v86 )
            {
              v87 = v86 - 1;
              if ( v87 )
              {
                v88 = v87 - 1;
                if ( v88 )
                {
                  v89 = v88 - 1;
                  if ( v89 )
                  {
                    v90 = v89 - 1;
                    if ( v90 )
                    {
                      if ( v90 != 1 )
                        goto LABEL_284;
                      v91 = v80 | v82;
                    }
                    else
                    {
                      v91 = v80 & v82;
                    }
LABEL_200:
                    LODWORD(v22) = v91;
                    goto LABEL_303;
                  }
                  v92 = v80 >> v82;
                }
                else
                {
                  v92 = v80 << v82;
                }
LABEL_202:
                LODWORD(v22) = v92;
                goto LABEL_303;
              }
              if ( v82 )
              {
                LODWORD(v22) = v80 % v82;
                goto LABEL_303;
              }
LABEL_198:
              RegistryValue = -1073741676;
              goto LABEL_303;
            }
            if ( !v82 )
              goto LABEL_198;
            v93 = v80 / v82;
LABEL_219:
            LODWORD(v22) = v93;
            goto LABEL_303;
          }
          v94 = v81 - 13;
          if ( v94 )
          {
            v95 = v94 - 1;
            if ( v95 )
            {
              v96 = v95 - 1;
              if ( v96 )
              {
                v97 = v96 - 1;
                if ( v97 )
                {
                  v98 = v97 - 1;
                  if ( v98 )
                  {
                    v99 = v98 - 1;
                    if ( v99 )
                    {
                      v100 = v99 - 1;
                      if ( v100 )
                      {
                        if ( v100 != 1 )
                          goto LABEL_284;
                        v93 = v80 >= v82;
                      }
                      else
                      {
                        v93 = v80 <= v82;
                      }
                    }
                    else
                    {
                      v93 = v80 > v82;
                    }
                  }
                  else
                  {
                    v93 = v80 < v82;
                  }
                }
                else
                {
                  v93 = v80 != v82;
                }
              }
              else
              {
                v93 = v80 == v82;
              }
              goto LABEL_219;
            }
            LODWORD(v22) = 0;
            if ( v80 )
            {
LABEL_76:
              LODWORD(v22) = 1;
              goto LABEL_303;
            }
          }
          else
          {
            LODWORD(v22) = 0;
            if ( !v80 )
              goto LABEL_303;
          }
          v42 = v82 == 0;
LABEL_75:
          if ( v42 )
            goto LABEL_303;
          goto LABEL_76;
        }
        if ( *(_DWORD *)(v160 + 32) != 3 )
          goto LABEL_284;
        v101 = *(const void **)(v160 + 40);
        v102 = *(unsigned int *)(v161 + 36);
        v103 = *(_DWORD *)(v160 + 36);
        if ( *(_DWORD *)v14 == 15 )
        {
          if ( (_DWORD)v102 != v103 )
          {
            LODWORD(v22) = 0;
            goto LABEL_303;
          }
          LODWORD(v22) = 0;
          if ( !memcmp(*(const void **)(v161 + 40), v101, v102) )
            goto LABEL_76;
        }
        else
        {
          if ( *(_DWORD *)v14 != 16 )
          {
            v21 = qword_14078CA98;
            goto LABEL_303;
          }
          if ( (_DWORD)v102 != v103 )
            goto LABEL_76;
          LODWORD(v22) = 0;
          if ( memcmp(*(const void **)(v161 + 40), v101, v102) )
            goto LABEL_76;
        }
LABEL_303:
        if ( RegistryValue < 0 )
          goto LABEL_333;
        if ( !v21 )
        {
          v21 = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x63647050u);
          if ( !v21 )
            goto LABEL_332;
          *((_DWORD *)v21 + 4) = 0;
          v21[3] = 0LL;
          if ( v24 )
          {
            v131 = 7;
            v23 = (unsigned __int16)v23;
            if ( (_WORD)v4 != v147 )
              v131 = 1;
          }
          else
          {
            v131 = 4;
            v23 = 4;
            v132 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 4uLL, 0x63647050u);
            v24 = v132;
            if ( !v132 )
            {
LABEL_332:
              RegistryValue = -1073741670;
LABEL_333:
              v3 = v149;
LABEL_334:
              v4 = PoolWithTag;
              goto LABEL_335;
            }
            *(_DWORD *)v132 = v22;
          }
          *((_DWORD *)v21 + 8) = v131;
          *((_DWORD *)v21 + 9) = v23;
          v21[5] = (__int64)v24;
        }
        LODWORD(v6) = v151;
        v133 = v149;
        PoolWithTag[v151] = (__int64)v21;
        LOWORD(v4) = 0;
        if ( v149 )
        {
          v134 = &v160;
          do
          {
            v135 = (_QWORD *)*v134;
            if ( !*(_QWORD *)(*v134 + 24) )
            {
              v136 = (void *)v135[5];
              if ( v136 )
                ExFreePoolWithTag(v136, 0);
              ExFreePoolWithTag(v135, 0);
            }
            ++v134;
            --v133;
          }
          while ( v133 );
          LODWORD(v6) = v151;
        }
        v5 = v154;
        v13 = PoolWithTag;
        v10 = v152;
        goto LABEL_322;
      }
      v104 = *(_DWORD *)(v160 + 32);
      if ( (unsigned int)(v104 - 1) > 1 )
      {
        if ( v104 != 7 )
          goto LABEL_284;
        v105 = *(const WCHAR **)(v161 + 40);
        v106 = *(unsigned int *)(v161 + 36);
        v107 = *(const WCHAR **)(v160 + 40);
        v49 = *(unsigned int *)(v160 + 36);
        if ( (unsigned int)v106 <= 0xFFFE && (unsigned int)v49 <= 0xFFFE )
        {
          if ( *(_DWORD *)v14 != 1 )
          {
            if ( *(_DWORD *)v14 == 8 )
            {
              if ( !PnpMultiSzContainsString(*(PCWSTR *)(v160 + 40), v105) )
              {
                LODWORD(v22) = 0;
                v21 = 0LL;
                goto LABEL_122;
              }
              v21 = (__int64 *)v161;
LABEL_121:
              LODWORD(v22) = 0;
LABEL_122:
              LOWORD(v23) = v147;
              LOWORD(v4) = v147;
              v24 = v145;
              goto LABEL_303;
            }
            if ( *(_DWORD *)v14 != 9 )
            {
              v21 = qword_14078CA98;
              goto LABEL_121;
            }
            if ( PnpMultiSzContainsString(*(PCWSTR *)(v160 + 40), v105) )
            {
              v21 = (__int64 *)v160;
              goto LABEL_121;
            }
          }
          if ( (unsigned int)(v49 + v106) <= 0xFFFE )
          {
            v147 = v49 + v106;
            v108 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(v49 + v106), 0x63647050u);
            v145 = v108;
            v109 = v108;
            if ( v108 )
            {
              memmove(v108, v105, v106);
              v60 = v107;
              v61 = (char *)&v109[v106 >> 1];
LABEL_120:
              memmove(v61, v60, v49);
              v21 = 0LL;
              goto LABEL_121;
            }
            RegistryValue = -1073741670;
LABEL_329:
            v3 = v149;
            v4 = PoolWithTag;
            goto LABEL_336;
          }
        }
        goto LABEL_328;
      }
      if ( *(_DWORD *)(v161 + 36) > 0xFFFEu || *(_DWORD *)(v160 + 36) > 0xFFFEu )
        goto LABEL_328;
      v110 = *(wchar_t **)(v161 + 40);
      v111 = *(_WORD *)(v160 + 36);
      v112 = *(_DWORD *)v14;
      v113 = *(wchar_t **)(v160 + 40);
      String1.MaximumLength = *(_WORD *)(v161 + 36);
      v114 = String1.MaximumLength - 2;
      String2.MaximumLength = v111;
      v115 = v111 - 2;
      String1.Buffer = v110;
      String1.Length = String1.MaximumLength - 2;
      String2.Buffer = v113;
      String2.Length = v115;
      v116 = v112 - 1;
      if ( !v116 )
      {
        if ( *v110 )
        {
          if ( *v113 )
          {
            if ( v114 + (unsigned int)v115 >= 0xFFFE )
              goto LABEL_328;
            LOWORD(v4) = v114 + v115;
            v147 = String1.MaximumLength + v115;
            v125 = (wchar_t *)ExAllocatePoolWithTag(
                                PagedPool,
                                (unsigned __int16)(String1.MaximumLength + v115),
                                0x63647050u);
            v24 = v125;
            if ( !v125 )
              goto LABEL_326;
            memmove(v125, v110, v114);
            memmove(&v24[(unsigned __int64)v114 >> 1], v113, v115 + 2LL);
            v21 = 0LL;
LABEL_282:
            LODWORD(v22) = 0;
            goto LABEL_283;
          }
          v21 = (__int64 *)v161;
        }
        else
        {
          v21 = (__int64 *)v160;
        }
        goto LABEL_166;
      }
      v117 = v116 - 12;
      if ( v117 )
      {
        v118 = v117 - 1;
        if ( v118 )
        {
          v119 = v118 - 1;
          if ( v119 )
          {
            v120 = v119 - 1;
            if ( v120 )
            {
              v121 = v120 - 1;
              if ( v121 )
              {
                v122 = v121 - 1;
                if ( v122 )
                {
                  v123 = v122 - 1;
                  if ( v123 )
                  {
                    if ( v123 != 1 )
                    {
                      v21 = qword_14078CA98;
                      goto LABEL_166;
                    }
                    v124 = RtlCompareUnicodeString(&String1, &String2, 1u) >= 0;
                  }
                  else
                  {
                    v124 = RtlCompareUnicodeString(&String1, &String2, 1u) <= 0;
                  }
                }
                else
                {
                  v124 = RtlCompareUnicodeString(&String1, &String2, 1u) > 0;
                }
              }
              else
              {
                v124 = RtlCompareUnicodeString(&String1, &String2, 1u) < 0;
              }
            }
            else
            {
              v124 = RtlCompareUnicodeString(&String1, &String2, 1u) != 0;
            }
          }
          else
          {
            v124 = RtlCompareUnicodeString(&String1, &String2, 1u) == 0;
          }
          LODWORD(v22) = v124;
          v21 = 0LL;
          v24 = 0LL;
          goto LABEL_283;
        }
        if ( v114 >= 2u )
        {
LABEL_272:
          LODWORD(v22) = 1;
          v21 = 0LL;
          goto LABEL_163;
        }
      }
      else if ( v114 < 2u )
      {
        goto LABEL_274;
      }
      if ( v115 >= 2u )
        goto LABEL_272;
LABEL_274:
      LODWORD(v22) = 0;
      v21 = 0LL;
      v24 = 0LL;
      goto LABEL_163;
    }
    if ( v19 != 3 )
      goto LABEL_303;
    v126 = *(_DWORD *)(v162 + 32);
    if ( v126 )
    {
      if ( v126 <= 2 )
      {
        v127 = *(_DWORD *)(v162 + 36) >= 2u;
      }
      else
      {
        switch ( v126 )
        {
          case 3u:
            v128 = *(_BYTE **)(v162 + 40);
            v129 = *(_DWORD *)(v162 + 36);
            if ( !v129 )
            {
LABEL_301:
              v21 = (__int64 *)v160;
              goto LABEL_303;
            }
            while ( !*v128++ )
            {
              if ( !--v129 )
                goto LABEL_301;
            }
LABEL_302:
            v21 = (__int64 *)v161;
            goto LABEL_303;
          case 4u:
            v127 = **(_DWORD **)(v162 + 40) != 0;
            break;
          case 7u:
            v127 = *(_DWORD *)(v162 + 36) > 4u;
            break;
          default:
            goto LABEL_302;
        }
      }
    }
    else
    {
      v127 = 0;
    }
    if ( !v127 )
      goto LABEL_301;
    goto LABEL_302;
  }
  v25 = *(_DWORD *)v14;
  v26 = *(_DWORD *)v14 - 22;
  if ( !v26 )
  {
    v42 = *(_DWORD *)(v160 + 32) == 0;
    goto LABEL_75;
  }
  if ( v26 == 1 )
  {
    if ( *(_DWORD *)(v160 + 32) )
      goto LABEL_303;
    goto LABEL_76;
  }
  v27 = *(_DWORD *)(v160 + 32);
  if ( !v27 )
    goto LABEL_284;
  if ( v27 <= 2 )
  {
    v38 = *(_WORD **)(v160 + 40);
    v39 = v25 - 11;
    if ( !v39 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( v38[v22] );
      goto LABEL_303;
    }
    v40 = v39 - 1;
    if ( !v40 )
    {
      v30 = *v38 == 0;
      goto LABEL_39;
    }
    v41 = v40 - 13;
    if ( !v41 )
    {
      if ( PnpStringToDwordValue(*(_QWORD *)(v160 + 40), &v153) )
        LODWORD(v22) = v153;
      else
        LODWORD(v22) = 0;
      goto LABEL_303;
    }
    if ( v41 == 1 )
    {
      v21 = (__int64 *)v160;
      goto LABEL_303;
    }
    goto LABEL_284;
  }
  if ( v27 != 4 )
  {
    if ( v27 == 7 )
    {
      v28 = *(_WORD **)(v160 + 40);
      v29 = v25 - 11;
      if ( !v29 )
      {
        LODWORD(v22) = 0;
        while ( *v28 )
        {
          LODWORD(v22) = v22 + 1;
          v31 = -1LL;
          do
            ++v31;
          while ( v28[v31] );
          v28 += v31 + 1;
        }
        goto LABEL_303;
      }
      if ( v29 == 1 )
      {
        v30 = *v28 == 0;
LABEL_39:
        LODWORD(v22) = v30;
        goto LABEL_303;
      }
    }
    goto LABEL_284;
  }
  v32 = **(_DWORD **)(v160 + 40);
  v33 = v25 - 11;
  if ( !v33 )
  {
    LODWORD(v22) = ~v32;
    goto LABEL_303;
  }
  v34 = v33 - 1;
  if ( !v34 )
  {
    v30 = v32 == 0;
    goto LABEL_39;
  }
  v35 = v34 - 13;
  if ( !v35 )
  {
    LODWORD(v22) = **(_DWORD **)(v160 + 40);
    goto LABEL_303;
  }
  if ( v35 != 1 )
  {
LABEL_284:
    v21 = qword_14078CA98;
    goto LABEL_303;
  }
  LOWORD(v4) = 20;
  v147 = 22;
  LOWORD(v23) = 22;
  v36 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x16uLL, 0x63647050u);
  v24 = v36;
  if ( v36 )
  {
    RegistryValue = RtlStringCchPrintfW(v36, 0xBuLL, L"%u", v32);
    if ( RegistryValue < 0 )
    {
      ExFreePoolWithTag(v24, 0);
      v24 = 0LL;
    }
    else
    {
      v37 = -1LL;
      do
        ++v37;
      while ( v24[v37] );
      LOWORD(v4) = 2 * v37;
      LOWORD(v23) = 2 * v37 + 2;
      v147 = v23;
    }
    goto LABEL_303;
  }
LABEL_326:
  RegistryValue = -1073741670;
LABEL_327:
  v3 = v149;
  v4 = PoolWithTag;
LABEL_336:
  v138 = &v160;
  do
  {
    v139 = (_QWORD *)*v138;
    if ( !*(_QWORD *)(*v138 + 24) )
    {
      v140 = (void *)v139[5];
      if ( v140 )
        ExFreePoolWithTag(v140, 0);
      ExFreePoolWithTag(v139, 0);
    }
    ++v138;
    --v3;
  }
  while ( v3 );
LABEL_342:
  if ( v4 )
  {
    if ( v151 )
    {
      v141 = (PVOID *)v4;
      v142 = v151;
      do
      {
        if ( !*((_QWORD *)*v141 + 3) )
        {
          v143 = (void *)*((_QWORD *)*v141 + 5);
          if ( v143 )
            ExFreePoolWithTag(v143, 0);
          ExFreePoolWithTag(*v141, 0);
        }
        ++v141;
        --v142;
      }
      while ( v142 );
    }
    ExFreePoolWithTag(v4, 0);
  }
  v8 = (unsigned int *)P;
LABEL_352:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)RegistryValue;
}
