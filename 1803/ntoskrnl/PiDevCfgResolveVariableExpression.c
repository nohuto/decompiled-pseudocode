/*
 * XREFs of PiDevCfgResolveVariableExpression @ 0x14072E820
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x14009F42C (RtlStringCchPrintfW.c)
 *     PnpStringToDwordValue @ 0x140147B54 (PnpStringToDwordValue.c)
 *     PnpValidateRegistryMultiSz @ 0x14015E3F4 (PnpValidateRegistryMultiSz.c)
 *     PnpMultiSzContainsString @ 0x140163168 (PnpMultiSzContainsString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memcmp @ 0x140189130 (memcmp.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlCompareUnicodeString @ 0x1405080C0 (RtlCompareUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x140557CF0 (RtlCompareUnicodeStrings.c)
 *     IopGetRegistryValue @ 0x1405D9B94 (IopGetRegistryValue.c)
 *     PiDevCfgResolveVariable @ 0x1405DA3E0 (PiDevCfgResolveVariable.c)
 *     PiDevCfgCopyVariableData @ 0x14072BE3C (PiDevCfgCopyVariableData.c)
 */

__int64 __fastcall PiDevCfgResolveVariableExpression(__int64 a1, void *a2, __int64 a3)
{
  __int64 v3; // r13
  unsigned int v4; // r15d
  __int64 v5; // rsi
  NTSTATUS RegistryValue; // eax
  unsigned int *v7; // r12
  int v8; // edi
  UNICODE_STRING *v9; // rbx
  UNICODE_STRING *v10; // rax
  __int64 v11; // rcx
  _QWORD *PoolWithTag; // r14
  unsigned __int16 Length; // ax
  __int64 v14; // r12
  wchar_t *v15; // r13
  __int64 *v16; // rdx
  wchar_t **v17; // rdx
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // r8d
  __int64 v21; // r9
  size_t v22; // r14
  int v23; // esi
  __int64 *v24; // r15
  int v25; // ecx
  int v26; // edx
  unsigned int v27; // eax
  _WORD *v28; // rdx
  int v29; // ecx
  int v30; // ebx
  bool v31; // zf
  __int64 v32; // rax
  unsigned int v33; // ebx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  wchar_t *v37; // rax
  __int64 v38; // rax
  __int16 v39; // ax
  _WORD *v40; // r8
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  __int64 *v44; // rbx
  unsigned int v45; // eax
  int v46; // ecx
  SIZE_T v47; // r15
  const WCHAR *v48; // r14
  const WCHAR *v49; // r12
  size_t v50; // rsi
  int v51; // ecx
  int v52; // ecx
  int v53; // ecx
  int v54; // ecx
  int v55; // ecx
  int v56; // eax
  __int64 v57; // rax
  unsigned int v58; // ebx
  wchar_t *v59; // rax
  wchar_t *v60; // r13
  BOOL v61; // ecx
  int v62; // ecx
  int v63; // ecx
  int v64; // ecx
  int v65; // ecx
  unsigned int v66; // eax
  int v67; // r8d
  _WORD *v68; // rsi
  unsigned int v69; // ebx
  int v70; // ecx
  __int64 v71; // rax
  wchar_t *v72; // rax
  unsigned __int64 v73; // rsi
  _BYTE *v74; // r12
  const void *v75; // r13
  PCWSTR v76; // rax
  PCWSTR v77; // r15
  wchar_t *v78; // rax
  __int64 v79; // rbx
  SIZE_T v80; // r15
  wchar_t *v81; // rax
  int v82; // ecx
  unsigned int v83; // r9d
  unsigned int v84; // r8d
  int v85; // ecx
  int v86; // ecx
  int v87; // ecx
  int v88; // ecx
  int v89; // ecx
  int v90; // ecx
  int v91; // ecx
  int v92; // ecx
  int v93; // r8d
  unsigned int v94; // r9d
  int v95; // eax
  int v96; // ecx
  int v97; // ecx
  int v98; // ecx
  int v99; // ecx
  int v100; // ecx
  int v101; // ecx
  int v102; // ecx
  const void *v103; // r11
  size_t v104; // r8
  int v105; // r9d
  int v106; // eax
  int v107; // ecx
  const WCHAR *v108; // r14
  size_t v109; // rbx
  const void *v110; // r15
  size_t v111; // rsi
  PCWSTR v112; // rax
  wchar_t *v113; // rax
  wchar_t *v114; // r12
  unsigned int v115; // r8d
  unsigned int v116; // esi
  int v117; // ecx
  wchar_t *v118; // r15
  unsigned __int16 v119; // bx
  unsigned __int16 v120; // si
  int v121; // ecx
  int v122; // ecx
  int v123; // ecx
  int v124; // ecx
  int v125; // ecx
  int v126; // ecx
  int v127; // ecx
  int v128; // ecx
  BOOL v129; // ecx
  int v130; // eax
  wchar_t *v131; // rax
  unsigned int v132; // eax
  bool v133; // al
  _BYTE *v134; // rdx
  int v135; // ecx
  wchar_t *v137; // rax
  __int64 v138; // r14
  __int64 *v139; // rsi
  _QWORD *v140; // rbx
  void *v141; // rcx
  __int64 v142; // rax
  unsigned int v143; // eax
  __int64 *v144; // rbx
  __int64 v145; // r14
  _QWORD *v146; // rsi
  void *v147; // rcx
  PVOID v148; // r14
  PVOID **v149; // rbx
  __int64 v150; // rsi
  PVOID *v151; // rcx
  wchar_t *v153; // [rsp+30h] [rbp-79h]
  wchar_t *v154; // [rsp+30h] [rbp-79h]
  __int16 v155; // [rsp+38h] [rbp-71h]
  unsigned int v156; // [rsp+3Ch] [rbp-6Dh]
  int v157; // [rsp+40h] [rbp-69h]
  unsigned int v158; // [rsp+58h] [rbp-51h]
  UNICODE_STRING *v159; // [rsp+60h] [rbp-49h] BYREF
  unsigned int v160; // [rsp+68h] [rbp-41h] BYREF
  unsigned int v161; // [rsp+6Ch] [rbp-3Dh]
  __int64 v162; // [rsp+70h] [rbp-39h]
  PVOID P; // [rsp+78h] [rbp-31h]
  PVOID v164; // [rsp+80h] [rbp-29h] BYREF
  UNICODE_STRING String2; // [rsp+88h] [rbp-21h] BYREF
  UNICODE_STRING String1; // [rsp+98h] [rbp-11h] BYREF
  __int64 v167; // [rsp+A8h] [rbp-1h]
  __int64 v168; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v169; // [rsp+B8h] [rbp+Fh]
  __int64 v170; // [rsp+C0h] [rbp+17h]

  v162 = a3;
  v167 = a1;
  v3 = a3;
  v164 = 0LL;
  v158 = 0;
  v4 = 0;
  LODWORD(v5) = 0;
  RegistryValue = IopGetRegistryValue(a2, L"Tokens", 0, &v164);
  v7 = (unsigned int *)v164;
  v8 = RegistryValue;
  if ( RegistryValue < 0 )
    goto LABEL_368;
  if ( !PnpValidateRegistryMultiSz(v164) )
    goto LABEL_367;
  v9 = (UNICODE_STRING *)((char *)v7 + v7[2]);
  v159 = v9;
  v10 = v9;
  if ( !v9->Length )
    goto LABEL_367;
  do
  {
    ++v4;
    v11 = -1LL;
    do
      ++v11;
    while ( *(&v10->Length + v11) );
    v10 = (UNICODE_STRING *)((char *)v10 + 2 * v11 + 2);
  }
  while ( v10->Length );
  v161 = v4;
  if ( !v4 )
  {
LABEL_367:
    v8 = -1073741823;
    goto LABEL_368;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v4, 0x63647050u);
  P = PoolWithTag;
  if ( !PoolWithTag )
  {
    v8 = -1073741670;
    goto LABEL_368;
  }
  Length = v9->Length;
  if ( !v9->Length )
    goto LABEL_355;
  v14 = v168;
  v15 = 0LL;
  while ( 1 )
  {
    v16 = 0LL;
    if ( Length )
    {
      if ( !v9->MaximumLength || !*(&v9->MaximumLength + 1) )
      {
        v17 = &off_1407FDB70;
        v18 = 1;
        while ( *(_DWORD *)&v9->Length != *(_DWORD *)*v17 )
        {
          ++v18;
          v17 += 3;
          if ( v18 >= 0x1B )
            goto LABEL_18;
        }
        v16 = &qword_1407FDB50[3 * v18];
        goto LABEL_22;
      }
LABEL_18:
      if ( (unsigned int)v5 >= v4 )
      {
        v8 = -1073741571;
      }
      else
      {
        v159 = 0LL;
        v19 = PiDevCfgResolveVariable(v167, &v9->Length, &v159);
        v8 = v19;
        if ( v19 >= 0 )
        {
          PoolWithTag[(unsigned int)v5] = v159;
          goto LABEL_331;
        }
        if ( v19 == -1073741772 )
          v8 = -1073741823;
      }
LABEL_354:
      v3 = v162;
LABEL_355:
      if ( v8 >= 0 )
      {
        if ( (_DWORD)v5 == 1 )
        {
          v8 = PiDevCfgCopyVariableData(v3, *PoolWithTag);
          v143 = 0;
          goto LABEL_343;
        }
        v8 = -1073741823;
      }
      goto LABEL_358;
    }
LABEL_22:
    if ( !v16 )
      goto LABEL_18;
    v20 = *((_DWORD *)v16 + 4);
    v21 = 0LL;
    v156 = 0;
    if ( v20 )
    {
      v156 = 0;
      while ( (_DWORD)v5 )
      {
        v5 = (unsigned int)(v5 - 1);
        v158 = v5;
        *(&v168 + v21) = PoolWithTag[v5];
        v21 = (unsigned int)(v21 + 1);
        v156 = v21;
        if ( (unsigned int)v21 >= v20 )
          goto LABEL_29;
      }
      v8 = -1073741823;
LABEL_29:
      v14 = v168;
    }
    if ( v8 < 0 )
      goto LABEL_342;
    v160 = 0;
    LOWORD(v157) = 0;
    LODWORD(v22) = 0;
    LOWORD(v23) = 0;
    v155 = 0;
    v24 = 0LL;
    v153 = 0LL;
    if ( (_DWORD)v21 == 1 )
    {
      v25 = *(_DWORD *)v16;
      v26 = *(_DWORD *)v16 - 22;
      if ( v26 )
      {
        if ( v26 != 1 )
        {
          v27 = *(_DWORD *)(v168 + 32);
          if ( !v27 )
            goto LABEL_40;
          if ( v27 > 2 )
          {
            if ( v27 != 4 )
            {
              if ( v27 == 7 )
              {
                v28 = *(_WORD **)(v168 + 40);
                v29 = v25 - 11;
                if ( v29 )
                {
                  if ( v29 != 1 )
                    goto LABEL_40;
                  v31 = *v28 == 0;
LABEL_51:
                  LODWORD(v22) = v31;
                  goto LABEL_41;
                }
                LODWORD(v22) = 0;
                while ( *v28 )
                {
                  LODWORD(v22) = v22 + 1;
                  v32 = -1LL;
                  do
                    ++v32;
                  while ( v28[v32] );
                  v28 += v32 + 1;
                }
LABEL_41:
                v15 = v153;
                goto LABEL_42;
              }
LABEL_40:
              v24 = qword_1407F8FD0;
              goto LABEL_41;
            }
            v33 = **(_DWORD **)(v168 + 40);
            v34 = v25 - 11;
            if ( !v34 )
            {
              LODWORD(v22) = ~v33;
              goto LABEL_41;
            }
            v35 = v34 - 1;
            if ( !v35 )
            {
              v31 = v33 == 0;
              goto LABEL_51;
            }
            v36 = v35 - 13;
            if ( !v36 )
            {
              LODWORD(v22) = **(_DWORD **)(v168 + 40);
              goto LABEL_41;
            }
            if ( v36 != 1 )
              goto LABEL_40;
            v157 = 20;
            v155 = 22;
            LOWORD(v23) = 22;
            v37 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x16uLL, 0x63647050u);
            v15 = v37;
            if ( v37 )
            {
              v8 = RtlStringCchPrintfW(v37, 0xBuLL, L"%u", v33);
              if ( v8 < 0 )
              {
                ExFreePoolWithTag(v15, 0);
                v15 = 0LL;
              }
              else
              {
                v38 = -1LL;
                do
                  ++v38;
                while ( v15[v38] );
                v39 = 2 * v38;
                LOWORD(v23) = v39 + 2;
                LOWORD(v157) = v39;
                v155 = v39 + 2;
              }
              goto LABEL_42;
            }
            goto LABEL_335;
          }
          v40 = *(_WORD **)(v168 + 40);
          v41 = v25 - 11;
          if ( !v41 )
          {
            v22 = -1LL;
            do
              ++v22;
            while ( v40[v22] );
            goto LABEL_41;
          }
          v42 = v41 - 1;
          if ( !v42 )
          {
            v31 = *v40 == 0;
            goto LABEL_51;
          }
          v43 = v42 - 13;
          if ( v43 )
          {
            v15 = 0LL;
            v14 = v168;
            if ( v43 == 1 )
              v24 = (__int64 *)v168;
            else
              v24 = qword_1407F8FD0;
            goto LABEL_43;
          }
          v15 = 0LL;
          if ( PnpStringToDwordValue(*(_QWORD *)(v168 + 40), &v160) )
            LODWORD(v22) = v160;
          else
            LODWORD(v22) = 0;
LABEL_79:
          v14 = v168;
          goto LABEL_43;
        }
        v15 = 0LL;
        if ( *(_DWORD *)(v14 + 32) )
          goto LABEL_43;
      }
      else
      {
        v15 = 0LL;
        if ( !*(_DWORD *)(v14 + 32) )
          goto LABEL_43;
      }
      LODWORD(v22) = 1;
      goto LABEL_43;
    }
    if ( (_DWORD)v21 != 2 )
    {
      if ( (_DWORD)v21 != 3 )
        goto LABEL_43;
      v132 = *(_DWORD *)(v170 + 32);
      if ( !v132 )
      {
        v133 = 0;
        goto LABEL_316;
      }
      if ( v132 > 2 )
      {
        switch ( v132 )
        {
          case 3u:
            v134 = *(_BYTE **)(v170 + 40);
            v135 = *(_DWORD *)(v170 + 36);
            if ( v135 )
            {
              while ( !*v134++ )
              {
                if ( !--v135 )
                  goto LABEL_317;
              }
              goto LABEL_318;
            }
            break;
          case 4u:
            v133 = **(_DWORD **)(v170 + 40) != 0;
LABEL_316:
            if ( v133 )
              goto LABEL_318;
            break;
          case 7u:
            v133 = *(_DWORD *)(v170 + 36) > 4u;
            goto LABEL_316;
          default:
LABEL_318:
            v24 = (__int64 *)v169;
            goto LABEL_43;
        }
LABEL_317:
        v24 = (__int64 *)v14;
        goto LABEL_43;
      }
      v133 = *(_DWORD *)(v170 + 36) >= 2u;
      goto LABEL_316;
    }
    v44 = (__int64 *)v169;
    v45 = *(_DWORD *)(v169 + 32);
    if ( !v45 )
      goto LABEL_227;
    if ( v45 <= 2 )
    {
      v107 = *(_DWORD *)(v168 + 32);
      if ( (unsigned int)(v107 - 1) > 1 )
      {
        if ( v107 == 7 )
        {
          v108 = *(const WCHAR **)(v169 + 40);
          v109 = *(unsigned int *)(v169 + 36);
          v110 = *(const void **)(v168 + 40);
          v111 = *(unsigned int *)(v168 + 36);
          if ( (unsigned int)v109 <= 0xFFFE && (unsigned int)v111 <= 0xFFFE )
          {
            if ( *(_DWORD *)v16 == 1 )
              goto LABEL_263;
            if ( *(_DWORD *)v16 == 8 )
            {
              v112 = PnpMultiSzContainsString(*(PCWSTR *)(v168 + 40), v108);
              v14 = v168;
              if ( v112 )
              {
                v24 = (__int64 *)v169;
                goto LABEL_267;
              }
              LODWORD(v22) = 0;
              v24 = 0LL;
LABEL_268:
              LOWORD(v23) = v157;
              v15 = v153;
              v155 = v157;
              goto LABEL_43;
            }
            if ( *(_DWORD *)v16 != 9 )
            {
              v24 = qword_1407F8FD0;
              goto LABEL_266;
            }
            if ( PnpMultiSzContainsString(*(PCWSTR *)(v168 + 40), v108) )
            {
              v14 = v168;
              v24 = (__int64 *)v168;
              goto LABEL_267;
            }
LABEL_263:
            if ( (unsigned int)(v111 + v109) <= 0xFFFE )
            {
              LOWORD(v157) = v111 + v109;
              v113 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(v111 + v109), 0x63647050u);
              v153 = v113;
              v114 = v113;
              if ( v113 )
              {
                memmove(v113, v108, v109);
                memmove(&v114[v109 >> 1], v110, v111);
                v24 = 0LL;
LABEL_266:
                v14 = v168;
LABEL_267:
                LODWORD(v22) = 0;
                goto LABEL_268;
              }
LABEL_337:
              v8 = -1073741670;
LABEL_339:
              v143 = v156;
              goto LABEL_344;
            }
LABEL_340:
            v8 = -2147483643;
            goto LABEL_336;
          }
LABEL_338:
          v8 = -2147483643;
          goto LABEL_339;
        }
LABEL_155:
        v24 = qword_1407F8FD0;
        goto LABEL_42;
      }
      v115 = *(_DWORD *)(v169 + 36);
      if ( v115 > 0xFFFE )
        goto LABEL_338;
      v116 = *(_DWORD *)(v168 + 36);
      if ( v116 > 0xFFFE )
        goto LABEL_338;
      v22 = *(_QWORD *)(v169 + 40);
      v117 = *(_DWORD *)v16;
      v118 = *(wchar_t **)(v168 + 40);
      v119 = v115 - 2;
      String2.MaximumLength = *(_DWORD *)(v168 + 36);
      v120 = v116 - 2;
      String1.Buffer = (wchar_t *)v22;
      String1.MaximumLength = v115;
      String1.Length = v115 - 2;
      String2.Buffer = v118;
      String2.Length = v120;
      v121 = v117 - 1;
      if ( v121 )
      {
        v122 = v121 - 12;
        if ( v122 )
        {
          v123 = v122 - 1;
          if ( v123 )
          {
            v124 = v123 - 1;
            if ( v124 )
            {
              v125 = v124 - 1;
              if ( v125 )
              {
                v126 = v125 - 1;
                if ( v126 )
                {
                  v127 = v126 - 1;
                  if ( v127 )
                  {
                    v128 = v127 - 1;
                    if ( v128 )
                    {
                      if ( v128 != 1 )
                        goto LABEL_174;
                      v129 = RtlCompareUnicodeString(&String1, &String2, 1u) >= 0;
                    }
                    else
                    {
                      v129 = RtlCompareUnicodeString(&String1, &String2, 1u) <= 0;
                    }
                  }
                  else
                  {
                    v129 = RtlCompareUnicodeString(&String1, &String2, 1u) > 0;
                  }
                }
                else
                {
                  v129 = RtlCompareUnicodeString(&String1, &String2, 1u) < 0;
                }
              }
              else
              {
                v129 = RtlCompareUnicodeString(&String1, &String2, 1u) != 0;
              }
            }
            else
            {
              v129 = RtlCompareUnicodeString(&String1, &String2, 1u) == 0;
            }
            LODWORD(v22) = v129;
            v24 = 0LL;
            goto LABEL_129;
          }
          if ( v119 >= 2u || (v130 = 0, v120 >= 2u) )
            v130 = 1;
        }
        else if ( v119 < 2u || (v130 = 1, v120 < 2u) )
        {
          v130 = 0;
        }
        LODWORD(v22) = v130;
        v24 = 0LL;
        goto LABEL_129;
      }
      if ( *(_WORD *)v22 )
      {
        if ( *v118 )
        {
          if ( v119 + (unsigned int)v120 >= 0xFFFE )
            goto LABEL_340;
          LOWORD(v157) = v119 + v120;
          v155 = v120 + v115;
          v131 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(v120 + v115), 0x63647050u);
          v15 = v131;
          if ( v131 )
          {
            memmove(v131, (const void *)v22, v119);
            memmove(&v15[(unsigned __int64)v119 >> 1], v118, v120 + 2LL);
            LODWORD(v22) = 0;
            v24 = 0LL;
            goto LABEL_110;
          }
LABEL_335:
          v8 = -1073741670;
LABEL_336:
          v143 = v156;
          goto LABEL_344;
        }
        v24 = (__int64 *)v169;
      }
      else
      {
        v24 = (__int64 *)v168;
      }
LABEL_175:
      LODWORD(v22) = 0;
      goto LABEL_129;
    }
    if ( v45 == 3 )
    {
      if ( *(_DWORD *)(v168 + 32) == 3 )
      {
        v103 = *(const void **)(v168 + 40);
        v104 = *(unsigned int *)(v169 + 36);
        v105 = *(_DWORD *)(v168 + 36);
        if ( *(_DWORD *)v16 == 15 )
        {
          if ( (_DWORD)v104 != v105 || memcmp(*(const void **)(v169 + 40), v103, v104) )
          {
            LODWORD(v22) = 0;
            goto LABEL_42;
          }
          LODWORD(v22) = 1;
          goto LABEL_79;
        }
        if ( *(_DWORD *)v16 == 16 )
        {
          if ( (_DWORD)v104 != v105 || (v31 = memcmp(*(const void **)(v169 + 40), v103, v104) == 0, v106 = 0, !v31) )
            v106 = 1;
          LODWORD(v22) = v106;
          goto LABEL_42;
        }
      }
      goto LABEL_155;
    }
    if ( v45 == 4 )
    {
      if ( *(_DWORD *)(v14 + 32) != 4 )
        goto LABEL_227;
      v82 = *(_DWORD *)v16;
      v83 = **(_DWORD **)(v169 + 40);
      v84 = **(_DWORD **)(v14 + 40);
      if ( *(int *)v16 > 10 )
      {
        v96 = v82 - 13;
        if ( !v96 )
        {
          LODWORD(v22) = 0;
          if ( v83 )
            LODWORD(v22) = v84 != 0;
          goto LABEL_43;
        }
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
                v101 = v100 - 1;
                if ( v101 )
                {
                  v102 = v101 - 1;
                  if ( v102 )
                  {
                    if ( v102 != 1 )
                      goto LABEL_227;
                    v95 = v83 >= v84;
                  }
                  else
                  {
                    v95 = v83 <= v84;
                  }
                }
                else
                {
                  v95 = v83 > v84;
                }
              }
              else
              {
                v95 = v83 < v84;
              }
            }
            else
            {
              v95 = v83 != v84;
            }
          }
          else
          {
            v95 = v83 == v84;
          }
        }
        else
        {
          v95 = 0;
          if ( v83 || v84 )
            v95 = 1;
        }
      }
      else
      {
        if ( v82 == 10 )
        {
          v93 = v83 ^ v84;
          goto LABEL_204;
        }
        v85 = v82 - 1;
        if ( !v85 )
        {
          LODWORD(v22) = v84 + v83;
          goto LABEL_43;
        }
        v86 = v85 - 1;
        if ( !v86 )
        {
          v94 = v83 - v84;
          goto LABEL_207;
        }
        v87 = v86 - 1;
        if ( !v87 )
        {
          v93 = v83 * v84;
          goto LABEL_204;
        }
        v88 = v87 - 1;
        if ( v88 )
        {
          v89 = v88 - 1;
          if ( v89 )
          {
            v90 = v89 - 1;
            if ( v90 )
            {
              v91 = v90 - 1;
              if ( v91 )
              {
                v92 = v91 - 1;
                if ( !v92 )
                {
                  v93 = v83 & v84;
                  goto LABEL_204;
                }
                if ( v92 == 1 )
                {
                  v93 = v83 | v84;
LABEL_204:
                  LODWORD(v22) = v93;
                  goto LABEL_43;
                }
LABEL_227:
                v24 = qword_1407F8FD0;
                goto LABEL_43;
              }
              v94 = v83 >> v84;
            }
            else
            {
              v94 = v83 << v84;
            }
LABEL_207:
            LODWORD(v22) = v94;
            goto LABEL_43;
          }
          if ( v84 )
          {
            LODWORD(v22) = v83 % v84;
            goto LABEL_43;
          }
LABEL_211:
          v8 = -1073741676;
          goto LABEL_43;
        }
        if ( !v84 )
          goto LABEL_211;
        v95 = v83 / v84;
      }
      LODWORD(v22) = v95;
      goto LABEL_43;
    }
    if ( v45 != 7 )
      goto LABEL_227;
    v46 = *(_DWORD *)(v168 + 32);
    if ( v46 != 7 )
    {
      if ( (unsigned int)(v46 - 1) > 1 )
      {
        if ( v46 != 4 )
          goto LABEL_155;
        v67 = **(_DWORD **)(v168 + 40);
        if ( *(_DWORD *)v16 != 24 )
          goto LABEL_155;
        v68 = *(_WORD **)(v169 + 40);
        v69 = 0;
        v70 = 0;
        while ( *v68 )
        {
          v71 = -1LL;
          do
            ++v71;
          while ( v68[v71] );
          v69 = 2 * v71 + 2;
          if ( v70 == v67 )
            goto LABEL_163;
          ++v70;
          v68 += (unsigned __int64)v69 >> 1;
        }
        if ( v70 == v67 )
        {
LABEL_163:
          if ( *v68 && v69 > 2 )
          {
            LOWORD(v157) = v69 - 16;
            v155 = v69;
            v72 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v69, 0x63647050u);
            v15 = v72;
            if ( v72 )
            {
              memmove(v72, v68, v69);
              goto LABEL_110;
            }
            goto LABEL_335;
          }
        }
        v24 = qword_1407F8FD0;
        goto LABEL_110;
      }
      v73 = *(unsigned int *)(v169 + 36);
      v74 = *(_BYTE **)(v169 + 40);
      v75 = *(const void **)(v168 + 40);
      v22 = *(unsigned int *)(v168 + 36);
      if ( (unsigned int)v73 > 0xFFFE || (unsigned int)v22 > 0xFFFE )
        goto LABEL_338;
      if ( *(_DWORD *)v16 != 1 )
      {
        if ( *(_DWORD *)v16 == 2 )
        {
          v77 = PnpMultiSzContainsString(*(PCWSTR *)(v169 + 40), *(const WCHAR **)(v168 + 40));
          if ( v77 )
          {
            LOWORD(v157) = v73 - v22;
            v78 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(v73 - v22), 0x63647050u);
            v15 = v78;
            if ( !v78 )
              goto LABEL_337;
            v79 = ((char *)v77 - v74) >> 1;
            if ( v79 > 0 )
              memmove(v78, v74, ((char *)v77 - v74) >> 1);
            memmove((char *)v15 + v79, (char *)v77 + v22, (unsigned int)(v73 - v22) - v79);
            v24 = 0LL;
          }
          else
          {
            v15 = 0LL;
            v24 = v44;
          }
          LOWORD(v23) = v157;
          LODWORD(v22) = 0;
          v155 = v157;
          goto LABEL_42;
        }
        if ( *(_DWORD *)v16 == 8 )
        {
          v76 = PnpMultiSzContainsString(*(PCWSTR *)(v169 + 40), *(const WCHAR **)(v168 + 40));
          v14 = v168;
          v15 = 0LL;
          LODWORD(v22) = 0;
          if ( v76 )
            v24 = (__int64 *)v168;
          LOWORD(v23) = 0;
          goto LABEL_43;
        }
        if ( *(_DWORD *)v16 != 9 )
        {
LABEL_174:
          v24 = qword_1407F8FD0;
          goto LABEL_175;
        }
        if ( PnpMultiSzContainsString(*(PCWSTR *)(v169 + 40), *(const WCHAR **)(v168 + 40)) )
        {
          v24 = v44;
          goto LABEL_175;
        }
      }
      if ( (unsigned int)(v22 + v73) <= 0xFFFE )
      {
        v80 = (unsigned __int16)(v22 + v73);
        v157 = (unsigned __int16)v80;
        v155 = v22 + v73;
        v81 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v80, 0x63647050u);
        v154 = v81;
        if ( v81 )
        {
          memmove(v81, v74, v73 - 2);
          memmove(&v154[(v73 >> 1) - 1], v75, v22);
          v15 = v154;
          LODWORD(v22) = 0;
          v154[(v80 >> 1) - 1] = 0;
          v24 = 0LL;
          goto LABEL_110;
        }
        goto LABEL_337;
      }
      goto LABEL_338;
    }
    v47 = *(unsigned int *)(v169 + 36);
    v48 = *(const WCHAR **)(v169 + 40);
    v49 = *(const WCHAR **)(v168 + 40);
    v50 = *(unsigned int *)(v168 + 36);
    if ( (unsigned int)v47 > 0xFFFE || (unsigned int)v50 > 0xFFFE )
      goto LABEL_338;
    v51 = *(_DWORD *)v16;
    if ( *(int *)v16 > 15 )
    {
      v62 = v51 - 16;
      if ( v62 )
      {
        v63 = v62 - 1;
        if ( !v63 )
        {
          v66 = RtlCompareUnicodeStrings(v48, v47 >> 1, v49, v50 >> 1, 1u);
          goto LABEL_147;
        }
        v64 = v63 - 1;
        if ( v64 )
        {
          v65 = v64 - 1;
          if ( v65 )
          {
            if ( v65 != 1 )
              goto LABEL_145;
            v66 = ~RtlCompareUnicodeStrings(v48, v47 >> 1, v49, v50 >> 1, 1u);
LABEL_147:
            v24 = 0LL;
            v56 = v66 >> 31;
LABEL_109:
            LODWORD(v22) = v56;
            goto LABEL_110;
          }
          v61 = RtlCompareUnicodeStrings(v48, v47 >> 1, v49, v50 >> 1, 1u) <= 0;
        }
        else
        {
          v61 = RtlCompareUnicodeStrings(v48, v47 >> 1, v49, v50 >> 1, 1u) > 0;
        }
      }
      else
      {
        v61 = RtlCompareUnicodeStrings(v48, v47 >> 1, v49, v50 >> 1, 1u) != 0;
      }
LABEL_139:
      LODWORD(v22) = v61;
      v24 = 0LL;
      goto LABEL_110;
    }
    if ( v51 == 15 )
    {
      v61 = RtlCompareUnicodeStrings(v48, v47 >> 1, v49, v50 >> 1, 1u) == 0;
      goto LABEL_139;
    }
    v52 = v51 - 1;
    if ( !v52 )
      goto LABEL_130;
    v53 = v52 - 7;
    if ( v53 )
    {
      v54 = v53 - 1;
      if ( !v54 )
      {
LABEL_130:
        if ( *v48 )
        {
          if ( *v49 )
          {
            if ( (unsigned __int64)(unsigned int)(v50 + v47) - 2 > 0xFFFE )
              goto LABEL_338;
            LOWORD(v157) = v50 + v47 - 2;
            v59 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v157, 0x63647050u);
            v153 = v59;
            v60 = v59;
            if ( !v59 )
              goto LABEL_337;
            memmove(v59, v48, v47 - 2);
            memmove(&v60[(v47 >> 1) - 1], v49, v50);
            v24 = 0LL;
          }
          else
          {
            v24 = (__int64 *)v169;
          }
        }
        else
        {
          v24 = (__int64 *)v168;
        }
        LOWORD(v23) = v157;
        LODWORD(v22) = 0;
        v155 = v157;
        goto LABEL_41;
      }
      v55 = v54 - 4;
      if ( v55 )
      {
        if ( v55 != 1 )
        {
LABEL_145:
          LODWORD(v22) = 0;
          v24 = qword_1407F8FD0;
          goto LABEL_110;
        }
        if ( (unsigned int)v47 > 2 || (v56 = 0, (unsigned int)v50 > 2) )
          v56 = 1;
      }
      else if ( (unsigned int)v47 <= 2 || (v56 = 1, (unsigned int)v50 <= 2) )
      {
        v56 = 0;
      }
      v24 = 0LL;
      goto LABEL_109;
    }
    v23 = 0;
    if ( !*v48 )
      goto LABEL_128;
    while ( 1 )
    {
      v57 = -1LL;
      do
        ++v57;
      while ( v48[v57] );
      v58 = 2 * v57 + 2;
      if ( PnpMultiSzContainsString(v49, v48) )
        break;
      v23 = v157;
LABEL_126:
      v48 += (unsigned __int64)v58 >> 1;
      if ( !*v48 )
        goto LABEL_121;
      v23 = 0;
    }
    if ( v15 )
    {
      v23 = v157;
LABEL_124:
      memmove((char *)v15 + (unsigned __int16)v23, v48, v58);
      LOWORD(v23) = v58 + v23;
      v157 = v23;
      goto LABEL_126;
    }
    v157 = 0;
    v153 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v47, 0x63647050u);
    v15 = v153;
    if ( v153 )
      goto LABEL_124;
    v8 = -1073741670;
LABEL_121:
    if ( v15 )
    {
      v24 = 0LL;
      LOWORD(v23) = v23 + 2;
      v157 = v23;
      v155 = v23;
      v15[((unsigned __int64)(unsigned __int16)v23 >> 1) - 1] = 0;
      LODWORD(v22) = 0;
      goto LABEL_41;
    }
LABEL_128:
    v24 = 0LL;
    LODWORD(v22) = 0;
LABEL_129:
    v15 = v153;
LABEL_110:
    LOWORD(v23) = v155;
LABEL_42:
    v14 = v168;
LABEL_43:
    if ( v8 < 0 )
      goto LABEL_342;
    if ( v24 )
      goto LABEL_322;
    v24 = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x63647050u);
    if ( !v24 )
      goto LABEL_341;
    *((_DWORD *)v24 + 4) = 0;
    v24[3] = 0LL;
    if ( !v15 )
      break;
    v30 = 7;
    v23 = (unsigned __int16)v23;
    if ( (_WORD)v157 != v155 )
      v30 = 1;
LABEL_321:
    *((_DWORD *)v24 + 8) = v30;
    *((_DWORD *)v24 + 9) = v23;
    v24[5] = (__int64)v15;
LABEL_322:
    LODWORD(v5) = v158;
    v15 = 0LL;
    PoolWithTag = P;
    *((_QWORD *)P + v158) = v24;
    if ( v156 )
    {
      v138 = v156;
      v139 = &v168;
      do
      {
        v140 = (_QWORD *)*v139;
        if ( !*(_QWORD *)(*v139 + 24) )
        {
          v141 = (void *)v140[5];
          if ( v141 )
            ExFreePoolWithTag(v141, 0);
          ExFreePoolWithTag(v140, 0);
        }
        ++v139;
        --v138;
      }
      while ( v138 );
      LODWORD(v5) = v158;
      PoolWithTag = P;
    }
    v4 = v161;
    v9 = v159;
LABEL_331:
    LODWORD(v5) = v5 + 1;
    v158 = v5;
    v142 = -1LL;
    do
      ++v142;
    while ( *(&v9->Length + v142) );
    v9 = (UNICODE_STRING *)((char *)v9 + 2 * v142 + 2);
    v159 = v9;
    Length = v9->Length;
    if ( !v9->Length )
    {
      v158 = v5;
      goto LABEL_354;
    }
  }
  v30 = 4;
  v23 = 4;
  v137 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 4uLL, 0x63647050u);
  v15 = v137;
  if ( v137 )
  {
    *(_DWORD *)v137 = v22;
    goto LABEL_321;
  }
LABEL_341:
  v8 = -1073741670;
LABEL_342:
  v143 = v156;
LABEL_343:
  if ( v143 )
  {
LABEL_344:
    v144 = &v168;
    v145 = v143;
    do
    {
      v146 = (_QWORD *)*v144;
      if ( !*(_QWORD *)(*v144 + 24) )
      {
        v147 = (void *)v146[5];
        if ( v147 )
          ExFreePoolWithTag(v147, 0);
        ExFreePoolWithTag(v146, 0);
      }
      ++v144;
      --v145;
    }
    while ( v145 );
  }
LABEL_358:
  v148 = P;
  if ( v158 )
  {
    v149 = (PVOID **)P;
    v150 = v158;
    do
    {
      v151 = *v149;
      if ( !(*v149)[3] )
      {
        if ( v151[5] )
        {
          ExFreePoolWithTag(v151[5], 0);
          v151 = *v149;
        }
        ExFreePoolWithTag(v151, 0);
      }
      ++v149;
      --v150;
    }
    while ( v150 );
  }
  ExFreePoolWithTag(v148, 0);
  v7 = (unsigned int *)v164;
LABEL_368:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v8;
}
