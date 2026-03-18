/*
 * XREFs of PiDevCfgResolveVariableExpression @ 0x14069C3A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x14003DA94 (RtlStringCchPrintfW.c)
 *     PnpValidateRegistryMultiSz @ 0x14014FC24 (PnpValidateRegistryMultiSz.c)
 *     PnpMultiSzContainsString @ 0x14014FC94 (PnpMultiSzContainsString.c)
 *     PnpStringToDwordValue @ 0x1401505CC (PnpStringToDwordValue.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memcmp @ 0x14016A960 (memcmp.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlCompareUnicodeString @ 0x140427380 (RtlCompareUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x140485820 (RtlCompareUnicodeStrings.c)
 *     IopGetRegistryValue @ 0x1404D9A74 (IopGetRegistryValue.c)
 *     PiDevCfgResolveVariable @ 0x140594210 (PiDevCfgResolveVariable.c)
 *     PiDevCfgCopyVariableData @ 0x140699A98 (PiDevCfgCopyVariableData.c)
 */

__int64 __fastcall PiDevCfgResolveVariableExpression(__int64 a1, void *a2, __int64 a3)
{
  __int64 v3; // rsi
  PVOID *v4; // r15
  unsigned int v5; // r12d
  __int64 v6; // r14
  __int64 v7; // rdx
  int RegistryValue; // edi
  __int64 v9; // r8
  unsigned int *v10; // r15
  __int16 v11; // r10
  UNICODE_STRING *v12; // rbx
  UNICODE_STRING *v13; // rcx
  __int64 v14; // rax
  __int64 *v15; // r13
  __int64 v16; // r12
  __int64 *v17; // rdx
  wchar_t **v18; // rdx
  unsigned int v19; // ecx
  unsigned int v20; // r8d
  __int64 v21; // rcx
  size_t v22; // r14
  unsigned __int16 v23; // bx
  char *v24; // r13
  __int64 *v25; // r15
  int v26; // ecx
  int v27; // edx
  unsigned int v28; // eax
  _WORD *v29; // rdx
  int v30; // ecx
  __int64 *v31; // rax
  int v32; // esi
  int v33; // ebx
  bool v34; // zf
  __int64 v35; // rax
  unsigned int v36; // ebx
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  wchar_t *v40; // rax
  __int64 v41; // rax
  int v42; // esi
  _WORD *v43; // r8
  int v44; // ecx
  int v45; // ecx
  int v46; // ecx
  bool v47; // al
  __int64 *v48; // rbx
  unsigned int v49; // eax
  __int64 *v50; // r12
  int v51; // ecx
  SIZE_T v52; // r15
  const WCHAR *v53; // r14
  const WCHAR *v54; // r12
  size_t v55; // rsi
  int v56; // ecx
  int v57; // ecx
  int v58; // ecx
  int v59; // ecx
  int v60; // ecx
  __int64 v61; // rax
  unsigned int v62; // ebx
  int v63; // eax
  char *v64; // rax
  size_t v65; // r8
  char *v66; // rdx
  __int64 v67; // rcx
  char *v68; // rcx
  LONG v69; // eax
  BOOL v70; // ecx
  int v71; // ecx
  int v72; // ecx
  int v73; // ecx
  int v74; // ecx
  LONG v75; // eax
  LONG v76; // eax
  LONG v77; // eax
  LONG v78; // eax
  LONG v79; // eax
  int v80; // r8d
  _WORD *v81; // rsi
  int v82; // ecx
  unsigned int v83; // ebx
  __int64 v84; // rax
  char *v85; // rax
  unsigned __int64 v86; // rsi
  _BYTE *v87; // r15
  const void *v88; // r13
  PCWSTR v89; // r12
  char *v90; // rax
  __int64 v91; // rbx
  SIZE_T v92; // r12
  char *v93; // rax
  int v94; // ecx
  unsigned int v95; // r9d
  unsigned int v96; // r8d
  int v97; // ecx
  int v98; // ecx
  int v99; // ecx
  int v100; // ecx
  int v101; // ecx
  int v102; // ecx
  int v103; // ecx
  int v104; // ecx
  int v105; // r8d
  unsigned int v106; // r9d
  int v107; // ecx
  int v108; // ecx
  int v109; // ecx
  int v110; // ecx
  int v111; // ecx
  int v112; // ecx
  int v113; // ecx
  BOOL v114; // eax
  size_t v115; // r8
  int v116; // r9d
  __int64 *v117; // r12
  int v118; // ecx
  const WCHAR *v119; // r14
  size_t v120; // rbx
  wchar_t *v121; // r15
  size_t v122; // rsi
  PCWSTR v123; // rax
  char *v124; // rax
  wchar_t *v125; // r14
  int v126; // ecx
  int v127; // esi
  int v128; // ecx
  int v129; // ecx
  int v130; // ecx
  int v131; // ecx
  int v132; // ecx
  int v133; // ecx
  int v134; // ecx
  int v135; // ecx
  char *v136; // rax
  unsigned int v137; // eax
  bool v138; // al
  _BYTE *v139; // rdx
  int v140; // ecx
  char *v142; // rax
  __int64 v143; // r14
  __int64 *v144; // rsi
  _QWORD *v145; // rbx
  void *v146; // rcx
  __int64 v147; // rax
  __int64 *v148; // rbx
  _QWORD *v149; // rsi
  void *v150; // rcx
  PVOID *v151; // rbx
  void *v152; // rcx
  unsigned __int16 v154; // [rsp+30h] [rbp-79h]
  unsigned int v155; // [rsp+34h] [rbp-75h]
  unsigned int v156; // [rsp+38h] [rbp-71h]
  int v157; // [rsp+3Ch] [rbp-6Dh]
  __int64 *PoolWithTag; // [rsp+48h] [rbp-61h]
  char *v159; // [rsp+58h] [rbp-51h]
  UNICODE_STRING *v160; // [rsp+60h] [rbp-49h] BYREF
  unsigned int v161; // [rsp+68h] [rbp-41h] BYREF
  PVOID P; // [rsp+70h] [rbp-39h] BYREF
  UNICODE_STRING String2; // [rsp+78h] [rbp-31h] BYREF
  UNICODE_STRING String1; // [rsp+88h] [rbp-21h] BYREF
  unsigned int v165; // [rsp+98h] [rbp-11h]
  __int64 v166; // [rsp+A0h] [rbp-9h]
  __int64 v167; // [rsp+A8h] [rbp-1h]
  __int64 v168; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v169; // [rsp+B8h] [rbp+Fh]
  __int64 v170; // [rsp+C0h] [rbp+17h]

  P = 0LL;
  v167 = a3;
  v166 = a1;
  v3 = 0LL;
  v155 = 0;
  v4 = 0LL;
  v5 = 0;
  v6 = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"Tokens", 0, &P);
  if ( RegistryValue < 0 )
    goto LABEL_340;
  v10 = (unsigned int *)P;
  if ( !PnpValidateRegistryMultiSz(P, v7, v9) )
    goto LABEL_3;
  v12 = (UNICODE_STRING *)((char *)v10 + v10[2]);
  v160 = v12;
  v13 = v12;
  if ( v12->Length == v11 )
    goto LABEL_3;
  do
  {
    ++v5;
    v14 = -1LL;
    do
      ++v14;
    while ( *(&v13->Length + v14) != v11 );
    v13 = (UNICODE_STRING *)((char *)v13 + 2 * v14 + 2);
  }
  while ( v13->Length != v11 );
  v165 = v5;
  if ( !v5 )
  {
LABEL_3:
    RegistryValue = -1073741823;
    goto LABEL_358;
  }
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 8LL * v5, 0x63647050u);
  v15 = PoolWithTag;
  if ( !PoolWithTag )
  {
    RegistryValue = -1073741670;
    goto LABEL_358;
  }
  if ( !v12->Length )
    goto LABEL_366;
  v16 = v168;
  while ( 1 )
  {
    v17 = 0LL;
    if ( v12->Length )
    {
      if ( !v12->MaximumLength || !*(&v12->MaximumLength + 1) )
      {
        v18 = &off_14074EC50;
        v19 = 1;
        while ( *(_DWORD *)&v12->Length != *(_DWORD *)*v18 )
        {
          ++v19;
          v18 += 3;
          if ( v19 >= 0x1B )
            goto LABEL_19;
        }
        v17 = &qword_14074EC30[3 * v19];
        goto LABEL_23;
      }
LABEL_19:
      if ( (unsigned int)v3 >= v165 )
      {
        RegistryValue = -1073741571;
      }
      else
      {
        v160 = 0LL;
        RegistryValue = PiDevCfgResolveVariable(v166, &v12->Length, &v160);
        if ( RegistryValue >= 0 )
        {
          v15[v3] = (__int64)v160;
          goto LABEL_330;
        }
        if ( RegistryValue == -1073741772 )
          RegistryValue = -1073741823;
      }
LABEL_365:
      v6 = 0LL;
LABEL_366:
      if ( RegistryValue < 0 )
        goto LABEL_339;
      if ( (_DWORD)v3 == 1 )
      {
        RegistryValue = PiDevCfgCopyVariableData(v167, *v15);
        goto LABEL_339;
      }
      RegistryValue = -1073741823;
      v4 = (PVOID *)PoolWithTag;
      goto LABEL_348;
    }
LABEL_23:
    if ( !v17 )
      goto LABEL_19;
    v20 = *((_DWORD *)v17 + 4);
    v21 = 0LL;
    v156 = 0;
    if ( v20 )
    {
      while ( (_DWORD)v3 )
      {
        v3 = (unsigned int)(v3 - 1);
        v155 = v3;
        *(&v168 + v21) = v15[v3];
        v21 = v156 + 1;
        v156 = v21;
        if ( (unsigned int)v21 >= v20 )
          goto LABEL_29;
      }
      RegistryValue = -1073741823;
LABEL_29:
      v16 = v168;
    }
    if ( RegistryValue < 0 )
      goto LABEL_338;
    v161 = 0;
    LODWORD(v22) = 0;
    v23 = 0;
    v154 = 0;
    v24 = 0LL;
    LOWORD(v157) = 0;
    v25 = 0LL;
    if ( (_DWORD)v21 == 1 )
    {
      v26 = *(_DWORD *)v17;
      v27 = *(_DWORD *)v17 - 22;
      if ( v27 )
      {
        v16 = v168;
        if ( v27 != 1 )
        {
          v28 = *(_DWORD *)(v168 + 32);
          if ( !v28 )
            goto LABEL_40;
          if ( v28 <= 2 )
          {
            v43 = *(_WORD **)(v168 + 40);
            v44 = v26 - 11;
            if ( !v44 )
            {
              v22 = -1LL;
              do
                ++v22;
              while ( v43[v22] );
              goto LABEL_41;
            }
            v45 = v44 - 1;
            if ( v45 )
            {
              v46 = v45 - 13;
              if ( !v46 )
              {
                v47 = PnpStringToDwordValue(*(_QWORD *)(v168 + 40), &v161);
                v16 = v168;
                if ( v47 )
                  LODWORD(v22) = v161;
                else
                  LODWORD(v22) = 0;
                goto LABEL_42;
              }
              if ( v46 == 1 )
              {
                v25 = (__int64 *)v168;
                goto LABEL_41;
              }
LABEL_40:
              v25 = qword_14074A2D0;
              goto LABEL_41;
            }
            v34 = *v43 == 0;
LABEL_50:
            LOBYTE(v22) = v34;
            goto LABEL_41;
          }
          if ( v28 != 4 )
          {
            if ( v28 != 7 )
              goto LABEL_40;
            v29 = *(_WORD **)(v168 + 40);
            v30 = v26 - 11;
            if ( !v30 )
            {
              while ( *v29 )
              {
                LODWORD(v22) = v22 + 1;
                v35 = -1LL;
                do
                  ++v35;
                while ( v29[v35] );
                v29 += v35 + 1;
              }
              goto LABEL_41;
            }
            if ( v30 != 1 )
              goto LABEL_40;
            v34 = *v29 == 0;
            goto LABEL_50;
          }
          v36 = **(_DWORD **)(v168 + 40);
          v37 = v26 - 11;
          if ( !v37 )
          {
            LODWORD(v22) = ~v36;
            goto LABEL_61;
          }
          v38 = v37 - 1;
          if ( !v38 )
          {
            LOBYTE(v22) = v36 == 0;
            goto LABEL_61;
          }
          v39 = v38 - 13;
          if ( !v39 )
          {
            LODWORD(v22) = **(_DWORD **)(v168 + 40);
            goto LABEL_61;
          }
          if ( v39 != 1 )
          {
LABEL_60:
            v25 = qword_14074A2D0;
            goto LABEL_61;
          }
          v157 = 20;
          v154 = 22;
          v40 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x16uLL, 0x63647050u);
          v24 = (char *)v40;
          if ( v40 )
          {
            RegistryValue = RtlStringCchPrintfW(v40, 0xBuLL, L"%u", v36);
            if ( RegistryValue < 0 )
            {
              ExFreePoolWithTag(v24, 0);
              v24 = 0LL;
              goto LABEL_61;
            }
            v41 = -1LL;
            do
              ++v41;
            while ( *(_WORD *)&v24[2 * v41] );
            v42 = 2 * v41;
            v23 = 2 * v41 + 2;
LABEL_67:
            v157 = v42;
            LODWORD(v3) = v155;
            v154 = v23;
            goto LABEL_41;
          }
          goto LABEL_334;
        }
        if ( *(_DWORD *)(v168 + 32) )
          goto LABEL_42;
      }
      else if ( !*(_DWORD *)(v16 + 32) )
      {
        goto LABEL_42;
      }
      LODWORD(v22) = 1;
      goto LABEL_42;
    }
    if ( (_DWORD)v21 != 2 )
    {
      if ( (_DWORD)v21 != 3 )
        goto LABEL_42;
      v137 = *(_DWORD *)(v170 + 32);
      if ( !v137 )
      {
        v138 = 0;
        goto LABEL_315;
      }
      if ( v137 > 2 )
      {
        switch ( v137 )
        {
          case 3u:
            v139 = *(_BYTE **)(v170 + 40);
            v140 = *(_DWORD *)(v170 + 36);
            if ( v140 )
            {
              while ( !*v139++ )
              {
                if ( !--v140 )
                  goto LABEL_316;
              }
              goto LABEL_317;
            }
            break;
          case 4u:
            v138 = **(_DWORD **)(v170 + 40) != 0;
LABEL_315:
            if ( v138 )
              goto LABEL_317;
            break;
          case 7u:
            v138 = *(_DWORD *)(v170 + 36) > 4u;
            goto LABEL_315;
          default:
LABEL_317:
            v25 = (__int64 *)v169;
            goto LABEL_42;
        }
LABEL_316:
        v25 = (__int64 *)v16;
        goto LABEL_42;
      }
      v138 = *(_DWORD *)(v170 + 36) >= 2u;
      goto LABEL_315;
    }
    v48 = (__int64 *)v169;
    v49 = *(_DWORD *)(v169 + 32);
    if ( !v49 )
      goto LABEL_299;
    if ( v49 <= 2 )
    {
      v117 = (__int64 *)v168;
      v118 = *(_DWORD *)(v168 + 32);
      if ( (unsigned int)(v118 - 1) > 1 )
      {
        if ( v118 != 7 )
          goto LABEL_60;
        v119 = *(const WCHAR **)(v169 + 40);
        v120 = *(unsigned int *)(v169 + 36);
        v121 = *(wchar_t **)(v168 + 40);
        v122 = *(unsigned int *)(v168 + 36);
        if ( (unsigned int)v120 > 0xFFFE || (unsigned int)v122 > 0xFFFE )
          goto LABEL_336;
        switch ( *(_DWORD *)v17 )
        {
          case 1:
            goto LABEL_266;
          case 8:
            v123 = PnpMultiSzContainsString(*(PCWSTR *)(v168 + 40), v119);
            v16 = v168;
            LODWORD(v3) = v155;
            v23 = 0;
            if ( v123 )
            {
              v25 = (__int64 *)v169;
              LODWORD(v22) = 0;
            }
            else
            {
              LODWORD(v22) = 0;
              v25 = 0LL;
            }
            goto LABEL_42;
          case 9:
            if ( PnpMultiSzContainsString(*(PCWSTR *)(v168 + 40), v119) )
              goto LABEL_262;
LABEL_266:
            if ( (unsigned int)(v122 + v120) <= 0xFFFE )
            {
              v154 = v122 + v120;
              v157 = v122 + v120;
              v124 = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(v122 + v120), 0x63647050u);
              v24 = v124;
              if ( v124 )
              {
                memmove(v124, v119, v120);
                v65 = v122;
                goto LABEL_269;
              }
LABEL_334:
              RegistryValue = -1073741670;
LABEL_335:
              v6 = v156;
              v4 = (PVOID *)PoolWithTag;
              goto LABEL_341;
            }
LABEL_336:
            RegistryValue = -2147483643;
            goto LABEL_335;
        }
LABEL_148:
        v25 = qword_14074A2D0;
LABEL_130:
        LODWORD(v22) = 0;
        goto LABEL_108;
      }
      if ( *(_DWORD *)(v169 + 36) > 0xFFFEu || *(_DWORD *)(v168 + 36) > 0xFFFEu )
        goto LABEL_336;
      v125 = *(wchar_t **)(v169 + 40);
      LODWORD(v120) = *(unsigned __int16 *)(v169 + 36);
      v127 = *(unsigned __int16 *)(v168 + 36);
      v126 = *(_DWORD *)v17;
      v121 = *(wchar_t **)(v168 + 40);
      String1.MaximumLength = v120;
      LOWORD(v120) = v120 - 2;
      String2.MaximumLength = v127;
      LOWORD(v127) = v127 - 2;
      String1.Buffer = v125;
      String1.Length = v120;
      String2.Buffer = v121;
      String2.Length = v127;
      v128 = v126 - 1;
      if ( v128 )
      {
        v129 = v128 - 12;
        if ( !v129 )
        {
          if ( (unsigned __int16)v120 >= 2u && (unsigned __int16)v127 >= 2u )
            goto LABEL_105;
          goto LABEL_106;
        }
        v130 = v129 - 1;
        if ( v130 )
        {
          v131 = v130 - 1;
          if ( v131 )
          {
            v132 = v131 - 1;
            if ( v132 )
            {
              v133 = v132 - 1;
              if ( v133 )
              {
                v134 = v133 - 1;
                if ( v134 )
                {
                  v135 = v134 - 1;
                  if ( v135 )
                  {
                    if ( v135 != 1 )
                      goto LABEL_148;
                    v75 = RtlCompareUnicodeString(&String1, &String2, 1u);
LABEL_150:
                    v70 = v75 >= 0;
LABEL_142:
                    LODWORD(v22) = v70;
                    v25 = 0LL;
                    goto LABEL_108;
                  }
                  v76 = RtlCompareUnicodeString(&String1, &String2, 1u);
LABEL_152:
                  v70 = v76 <= 0;
                  goto LABEL_142;
                }
                v77 = RtlCompareUnicodeString(&String1, &String2, 1u);
LABEL_154:
                v70 = v77 > 0;
                goto LABEL_142;
              }
              v78 = RtlCompareUnicodeString(&String1, &String2, 1u);
LABEL_156:
              v70 = v78 < 0;
              goto LABEL_142;
            }
            v79 = RtlCompareUnicodeString(&String1, &String2, 1u);
LABEL_158:
            v70 = v79 != 0;
            goto LABEL_142;
          }
          v69 = RtlCompareUnicodeString(&String1, &String2, 1u);
LABEL_141:
          v70 = v69 == 0;
          goto LABEL_142;
        }
        if ( (unsigned __int16)v120 < 2u && (unsigned __int16)v127 < 2u )
          goto LABEL_106;
LABEL_105:
        LODWORD(v22) = 1;
LABEL_107:
        v25 = 0LL;
        goto LABEL_108;
      }
      if ( !*v125 )
      {
LABEL_262:
        v25 = v117;
        goto LABEL_130;
      }
      if ( !*v121 )
      {
        v25 = (__int64 *)v169;
        goto LABEL_130;
      }
      if ( (unsigned __int16)v120 + (unsigned int)(unsigned __int16)v127 >= 0xFFFE )
        goto LABEL_336;
      v157 = v120 + v127;
      v154 = v120 + v127 + 2;
      v136 = (char *)ExAllocatePoolWithTag(PagedPool, v154, 0x63647050u);
      v24 = v136;
      if ( !v136 )
        goto LABEL_334;
      v120 = (unsigned __int16)v120;
      memmove(v136, v125, (unsigned __int16)v120);
      v65 = (unsigned __int16)v127 + 2LL;
LABEL_269:
      v66 = (char *)v121;
      v67 = 2 * (v120 >> 1);
LABEL_136:
      v68 = &v24[v67];
LABEL_137:
      memmove(v68, v66, v65);
      LODWORD(v22) = 0;
      v25 = 0LL;
LABEL_138:
      LODWORD(v3) = v155;
LABEL_139:
      v23 = v154;
      goto LABEL_41;
    }
    if ( v49 == 3 )
    {
      if ( *(_DWORD *)(v168 + 32) != 3 )
        goto LABEL_60;
      v115 = *(unsigned int *)(v169 + 36);
      v116 = *(_DWORD *)(v168 + 36);
      if ( *(_DWORD *)v17 == 15 )
      {
        if ( (_DWORD)v115 != v116 || memcmp(*(const void **)(v169 + 40), *(const void **)(v168 + 40), v115) )
          goto LABEL_248;
      }
      else
      {
        if ( *(_DWORD *)v17 != 16 )
        {
          v25 = qword_14074A2D0;
          goto LABEL_139;
        }
        if ( (_DWORD)v115 == v116 && !memcmp(*(const void **)(v169 + 40), *(const void **)(v168 + 40), v115) )
        {
LABEL_248:
          LODWORD(v22) = 0;
          goto LABEL_61;
        }
      }
LABEL_239:
      LODWORD(v22) = 1;
      goto LABEL_61;
    }
    if ( v49 == 4 )
    {
      if ( *(_DWORD *)(v168 + 32) != 4 )
        goto LABEL_60;
      v94 = *(_DWORD *)v17;
      v95 = **(_DWORD **)(v169 + 40);
      v96 = **(_DWORD **)(v168 + 40);
      if ( *(int *)v17 > 10 )
      {
        v107 = v94 - 13;
        if ( v107 )
        {
          v108 = v107 - 1;
          if ( v108 )
          {
            v109 = v108 - 1;
            if ( v109 )
            {
              v110 = v109 - 1;
              if ( v110 )
              {
                v111 = v110 - 1;
                if ( v111 )
                {
                  v112 = v111 - 1;
                  if ( v112 )
                  {
                    v113 = v112 - 1;
                    if ( v113 )
                    {
                      if ( v113 != 1 )
                        goto LABEL_60;
                      v114 = v95 >= v96;
                    }
                    else
                    {
                      v114 = v95 <= v96;
                    }
                  }
                  else
                  {
                    v114 = v95 > v96;
                  }
                }
                else
                {
                  v114 = v95 < v96;
                }
              }
              else
              {
                v114 = v95 != v96;
              }
            }
            else
            {
              v114 = v95 == v96;
            }
            LODWORD(v22) = v114;
            goto LABEL_61;
          }
          if ( v95 )
            goto LABEL_239;
        }
        else if ( !v95 )
        {
          goto LABEL_61;
        }
        if ( !v96 )
          goto LABEL_61;
        goto LABEL_239;
      }
      if ( v94 == 10 )
      {
        v105 = v95 ^ v96;
        goto LABEL_208;
      }
      v97 = v94 - 1;
      if ( !v97 )
      {
        LODWORD(v22) = v96 + v95;
        goto LABEL_61;
      }
      v98 = v97 - 1;
      if ( v98 )
      {
        v99 = v98 - 1;
        if ( !v99 )
        {
          v105 = v95 * v96;
          goto LABEL_208;
        }
        v100 = v99 - 1;
        if ( v100 )
        {
          v101 = v100 - 1;
          if ( v101 )
          {
            v102 = v101 - 1;
            if ( v102 )
            {
              v103 = v102 - 1;
              if ( v103 )
              {
                v104 = v103 - 1;
                if ( v104 )
                {
                  if ( v104 != 1 )
                    goto LABEL_60;
                  v105 = v95 | v96;
                }
                else
                {
                  v105 = v95 & v96;
                }
LABEL_208:
                LODWORD(v22) = v105;
                goto LABEL_61;
              }
              v106 = v95 >> v96;
            }
            else
            {
              v106 = v95 << v96;
            }
LABEL_211:
            LODWORD(v22) = v106;
            goto LABEL_61;
          }
          v16 = v168;
          v23 = 0;
          if ( v96 )
          {
            LODWORD(v22) = v95 % v96;
            goto LABEL_42;
          }
        }
        else
        {
          v16 = v168;
          v23 = 0;
          if ( v96 )
          {
            LODWORD(v22) = v95 / v96;
            goto LABEL_42;
          }
        }
        RegistryValue = -1073741676;
        goto LABEL_42;
      }
      v106 = v95 - v96;
      goto LABEL_211;
    }
    if ( v49 != 7 )
    {
LABEL_299:
      v23 = 0;
      v25 = qword_14074A2D0;
      goto LABEL_42;
    }
    v50 = (__int64 *)v168;
    v51 = *(_DWORD *)(v168 + 32);
    if ( v51 != 7 )
    {
      if ( (unsigned int)(v51 - 1) > 1 )
      {
        if ( v51 != 4 )
          goto LABEL_60;
        v80 = **(_DWORD **)(v168 + 40);
        if ( *(_DWORD *)v17 != 24 )
          goto LABEL_60;
        v81 = *(_WORD **)(v169 + 40);
        v82 = 0;
        v83 = 0;
        while ( *v81 )
        {
          v84 = -1LL;
          do
            ++v84;
          while ( v81[v84] );
          v83 = 2 * v84 + 2;
          if ( v82 == v80 )
            goto LABEL_169;
          ++v82;
          v81 += (unsigned __int64)v83 >> 1;
        }
        if ( v82 == v80 )
        {
LABEL_169:
          if ( *v81 && v83 > 2 )
          {
            v154 = v83;
            LOWORD(v157) = v83 - 16;
            v85 = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v83, 0x63647050u);
            v24 = v85;
            if ( !v85 )
              goto LABEL_334;
            memmove(v85, v81, v83);
            goto LABEL_138;
          }
        }
        v25 = qword_14074A2D0;
        goto LABEL_108;
      }
      v86 = *(unsigned int *)(v169 + 36);
      v87 = *(_BYTE **)(v169 + 40);
      v88 = *(const void **)(v168 + 40);
      v22 = *(unsigned int *)(v168 + 36);
      if ( (unsigned int)v86 > 0xFFFE || (unsigned int)v22 > 0xFFFE )
        goto LABEL_336;
      if ( *(_DWORD *)v17 != 1 )
      {
        if ( *(_DWORD *)v17 == 2 )
        {
          v89 = PnpMultiSzContainsString(*(PCWSTR *)(v169 + 40), *(const WCHAR **)(v168 + 40));
          if ( v89 )
          {
            v154 = v86 - v22;
            v157 = (unsigned __int16)(v86 - v22);
            v90 = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(v86 - v22), 0x63647050u);
            v24 = v90;
            if ( !v90 )
              goto LABEL_334;
            v91 = ((char *)v89 - v87) >> 1;
            if ( v91 > 0 )
              memmove(v90, v87, ((char *)v89 - v87) >> 1);
            v66 = (char *)v89 + v22;
            v68 = &v24[v91];
            v65 = (unsigned int)(v86 - v22) - v91;
            goto LABEL_137;
          }
LABEL_182:
          LODWORD(v22) = 0;
          v25 = v48;
          v24 = 0LL;
          goto LABEL_108;
        }
        if ( *(_DWORD *)v17 == 8 )
        {
          LODWORD(v3) = v155;
          v23 = 0;
          if ( PnpMultiSzContainsString(*(PCWSTR *)(v169 + 40), *(const WCHAR **)(v168 + 40)) )
          {
            LODWORD(v22) = 0;
            v25 = v50;
          }
          else
          {
            v25 = 0LL;
            LODWORD(v22) = 0;
          }
          v24 = 0LL;
          goto LABEL_41;
        }
        if ( *(_DWORD *)v17 != 9 )
        {
          LODWORD(v22) = 0;
          v25 = qword_14074A2D0;
          v24 = 0LL;
          goto LABEL_108;
        }
        if ( PnpMultiSzContainsString(*(PCWSTR *)(v169 + 40), *(const WCHAR **)(v168 + 40)) )
          goto LABEL_182;
      }
      if ( (unsigned int)(v22 + v86) <= 0xFFFE )
      {
        v92 = (unsigned __int16)(v22 + v86);
        v154 = v22 + v86;
        v157 = v22 + v86;
        v93 = (char *)ExAllocatePoolWithTag(PagedPool, v92, 0x63647050u);
        v159 = v93;
        if ( v93 )
        {
          memmove(v93, v87, v86 - 2);
          memmove(&v159[2 * (v86 >> 1) - 2], v88, v22);
          v24 = v159;
          LODWORD(v22) = 0;
          *(_WORD *)&v159[2 * (v92 >> 1) - 2] = 0;
          goto LABEL_127;
        }
        goto LABEL_334;
      }
      goto LABEL_336;
    }
    v52 = *(unsigned int *)(v169 + 36);
    v53 = *(const WCHAR **)(v169 + 40);
    v54 = *(const WCHAR **)(v168 + 40);
    v55 = *(unsigned int *)(v168 + 36);
    if ( (unsigned int)v52 > 0xFFFE || (unsigned int)v55 > 0xFFFE )
      goto LABEL_336;
    v56 = *(_DWORD *)v17;
    if ( *(int *)v17 > 15 )
    {
      v71 = v56 - 16;
      if ( v71 )
      {
        v72 = v71 - 1;
        if ( v72 )
        {
          v73 = v72 - 1;
          if ( v73 )
          {
            v74 = v73 - 1;
            if ( v74 )
            {
              if ( v74 != 1 )
                goto LABEL_148;
              v75 = RtlCompareUnicodeStrings(v53, v52 >> 1, v54, v55 >> 1, 1u);
              goto LABEL_150;
            }
            v76 = RtlCompareUnicodeStrings(v53, v52 >> 1, v54, v55 >> 1, 1u);
            goto LABEL_152;
          }
          v77 = RtlCompareUnicodeStrings(v53, v52 >> 1, v54, v55 >> 1, 1u);
          goto LABEL_154;
        }
        v78 = RtlCompareUnicodeStrings(v53, v52 >> 1, v54, v55 >> 1, 1u);
        goto LABEL_156;
      }
      v79 = RtlCompareUnicodeStrings(v53, v52 >> 1, v54, v55 >> 1, 1u);
      goto LABEL_158;
    }
    if ( v56 == 15 )
    {
      v69 = RtlCompareUnicodeStrings(v53, v52 >> 1, v54, v55 >> 1, 1u);
      goto LABEL_141;
    }
    v57 = v56 - 1;
    if ( !v57 )
      goto LABEL_128;
    v58 = v57 - 7;
    if ( v58 )
    {
      v59 = v58 - 1;
      if ( v59 )
      {
        v60 = v59 - 4;
        if ( v60 )
        {
          if ( v60 != 1 )
            goto LABEL_148;
          if ( (unsigned int)v52 > 2 )
            goto LABEL_105;
LABEL_110:
          if ( (unsigned int)v55 > 2 )
            goto LABEL_105;
        }
        else if ( (unsigned int)v52 > 2 )
        {
          goto LABEL_110;
        }
LABEL_106:
        LODWORD(v22) = 0;
        goto LABEL_107;
      }
LABEL_128:
      if ( !*v53 )
      {
        v25 = (__int64 *)v168;
        goto LABEL_130;
      }
      if ( !*v54 )
      {
        v25 = (__int64 *)v169;
        goto LABEL_130;
      }
      if ( (unsigned __int64)(unsigned int)(v55 + v52) - 2 > 0xFFFE )
        goto LABEL_336;
      v63 = v55 + v52;
      LOWORD(v63) = v55 + v52 - 2;
      v154 = v63;
      v157 = v63;
      v64 = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v63, 0x63647050u);
      v24 = v64;
      if ( !v64 )
        goto LABEL_334;
      memmove(v64, v53, v52 - 2);
      v65 = v55;
      v66 = (char *)v54;
      v67 = 2 * (v52 >> 1) - 2;
      goto LABEL_136;
    }
    if ( !*v53 )
      goto LABEL_126;
    while ( 1 )
    {
      v61 = -1LL;
      do
        ++v61;
      while ( v53[v61] );
      v62 = 2 * v61 + 2;
      if ( !PnpMultiSzContainsString(v54, v53) )
      {
        v42 = v157;
        goto LABEL_124;
      }
      if ( v24 )
      {
        v42 = v157;
        goto LABEL_122;
      }
      v42 = 0;
      v157 = 0;
      v24 = (char *)ExAllocatePoolWithTag(PagedPool, v52, 0x63647050u);
      if ( !v24 )
        break;
LABEL_122:
      memmove(&v24[(unsigned __int16)v42], v53, v62);
      LOWORD(v42) = v62 + v42;
      v157 = v42;
LABEL_124:
      v53 += (unsigned __int64)v62 >> 1;
      if ( !*v53 )
        goto LABEL_119;
    }
    RegistryValue = -1073741670;
LABEL_119:
    if ( v24 )
    {
      LODWORD(v22) = 0;
      LOWORD(v42) = v42 + 2;
      v25 = 0LL;
      v23 = v42;
      *(_WORD *)&v24[2 * ((unsigned __int64)(unsigned __int16)v42 >> 1) - 2] = 0;
      goto LABEL_67;
    }
LABEL_126:
    LODWORD(v22) = 0;
LABEL_127:
    v25 = 0LL;
LABEL_108:
    LODWORD(v3) = v155;
LABEL_61:
    v23 = v154;
LABEL_41:
    v16 = v168;
LABEL_42:
    if ( RegistryValue < 0 )
      goto LABEL_338;
    if ( v25 )
      goto LABEL_321;
    v31 = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x63647050u);
    v25 = v31;
    if ( !v31 )
      goto LABEL_337;
    *((_DWORD *)v31 + 4) = 0;
    v31[3] = 0LL;
    if ( !v24 )
      break;
    v32 = v23;
    v33 = 1;
    if ( (_WORD)v157 == v154 )
      v33 = 7;
LABEL_320:
    *((_DWORD *)v25 + 9) = v32;
    LODWORD(v3) = v155;
    *((_DWORD *)v25 + 8) = v33;
    v25[5] = (__int64)v24;
LABEL_321:
    v15 = PoolWithTag;
    v143 = v156;
    PoolWithTag[(unsigned int)v3] = (__int64)v25;
    if ( v156 )
    {
      v144 = &v168;
      do
      {
        v145 = (_QWORD *)*v144;
        if ( !*(_QWORD *)(*v144 + 24) )
        {
          v146 = (void *)v145[5];
          if ( v146 )
            ExFreePoolWithTag(v146, 0);
          ExFreePoolWithTag(v145, 0);
        }
        ++v144;
        --v143;
      }
      while ( v143 );
      LODWORD(v3) = v155;
    }
    v12 = v160;
LABEL_330:
    v3 = (unsigned int)(v3 + 1);
    v155 = v3;
    v147 = -1LL;
    do
      ++v147;
    while ( *(&v12->Length + v147) );
    v12 = (UNICODE_STRING *)((char *)v12 + 2 * v147 + 2);
    v160 = v12;
    if ( !v12->Length )
    {
      v155 = v3;
      goto LABEL_365;
    }
  }
  v33 = 4;
  v32 = 4;
  v142 = (char *)ExAllocatePoolWithTag(PagedPool, 4uLL, 0x63647050u);
  v24 = v142;
  if ( v142 )
  {
    *(_DWORD *)v142 = v22;
    goto LABEL_320;
  }
LABEL_337:
  RegistryValue = -1073741670;
LABEL_338:
  v6 = v156;
LABEL_339:
  v4 = (PVOID *)PoolWithTag;
LABEL_340:
  if ( (_DWORD)v6 )
  {
LABEL_341:
    v148 = &v168;
    do
    {
      v149 = (_QWORD *)*v148;
      if ( !*(_QWORD *)(*v148 + 24) )
      {
        v150 = (void *)v149[5];
        if ( v150 )
          ExFreePoolWithTag(v150, 0);
        ExFreePoolWithTag(v149, 0);
      }
      ++v148;
      --v6;
    }
    while ( v6 );
  }
  v3 = v155;
LABEL_348:
  if ( v4 )
  {
    if ( (_DWORD)v3 )
    {
      v151 = v4;
      do
      {
        if ( !*((_QWORD *)*v151 + 3) )
        {
          v152 = (void *)*((_QWORD *)*v151 + 5);
          if ( v152 )
            ExFreePoolWithTag(v152, 0);
          ExFreePoolWithTag(*v151, 0);
        }
        ++v151;
        --v3;
      }
      while ( v3 );
    }
    ExFreePoolWithTag(v4, 0);
  }
  v10 = (unsigned int *)P;
LABEL_358:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)RegistryValue;
}
