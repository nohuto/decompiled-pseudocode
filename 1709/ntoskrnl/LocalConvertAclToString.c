/*
 * XREFs of LocalConvertAclToString @ 0x14073215C
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x140732C08 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     _ultow_s @ 0x1401637A0 (_ultow_s.c)
 *     wcscpy_s @ 0x140164CA0 (wcscpy_s.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     RtlNtStatusToDosError @ 0x14056B830 (RtlNtStatusToDosError.c)
 *     LookupAccessMaskInTable @ 0x14057C44C (LookupAccessMaskInTable.c)
 *     LookupSidInTable @ 0x14057C5D8 (LookupSidInTable.c)
 *     LookupAceTypeInTable @ 0x14057C714 (LookupAceTypeInTable.c)
 *     SddlpAlloc @ 0x14057C7AC (SddlpAlloc.c)
 *     LocalConvertSidToStringSidW @ 0x140733204 (LocalConvertSidToStringSidW.c)
 *     LocalGetAceCondition @ 0x1407332A8 (LocalGetAceCondition.c)
 *     LookupAceFlagsInTable @ 0x140733614 (LookupAceFlagsInTable.c)
 *     SddlpUuidToString @ 0x14073403C (SddlpUuidToString.c)
 */

__int64 __fastcall LocalConvertAclToString(
        __int64 a1,
        char a2,
        char a3,
        wchar_t **a4,
        unsigned int *a5,
        __int64 a6,
        __int64 a7,
        int a8,
        char a9)
{
  __int64 v10; // rsi
  unsigned int v11; // edi
  wchar_t *v13; // rax
  unsigned int v14; // ecx
  unsigned __int16 v15; // ax
  int v16; // r14d
  PVOID v17; // rcx
  __int64 v18; // r13
  unsigned __int8 *v19; // r15
  wchar_t **v20; // rax
  wchar_t *v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // ebx
  int v24; // edi
  __int64 *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // eax
  bool v29; // cc
  unsigned int v30; // r9d
  __int64 v31; // r8
  int v32; // edx
  unsigned __int8 *v33; // rbx
  __int64 v34; // rcx
  int v35; // edi
  ULONG AceCondition; // r14d
  int v37; // r8d
  int v38; // ebx
  wchar_t **v39; // rax
  __int64 v40; // r9
  __int64 v41; // rbx
  unsigned int v42; // eax
  int v43; // edi
  int v44; // r8d
  wchar_t **v45; // rax
  wchar_t *v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  wchar_t *v49; // rax
  wchar_t **v50; // rbx
  NTSTATUS v51; // eax
  __int64 v52; // rax
  unsigned __int64 v53; // rbx
  PVOID *v54; // r15
  wchar_t *v55; // rdi
  unsigned __int64 v56; // rbx
  unsigned __int8 *v57; // rcx
  int v58; // r14d
  wchar_t *v59; // rdi
  rsize_t v60; // rbx
  wchar_t **v61; // rax
  wchar_t **v62; // rsi
  __int64 v63; // rax
  unsigned __int8 *v64; // r15
  unsigned int v65; // esi
  wchar_t *v66; // rdi
  rsize_t v67; // rbx
  const wchar_t **v68; // rax
  const wchar_t **v69; // r14
  __int64 v70; // rax
  __int64 v71; // r15
  unsigned __int8 *v72; // r14
  rsize_t v73; // rbx
  wchar_t *v74; // rdi
  __int64 v75; // r12
  unsigned int v76; // eax
  int v77; // edx
  unsigned int v78; // r8d
  unsigned int v79; // esi
  int v80; // eax
  __int64 v81; // rax
  int v82; // r8d
  wchar_t **v83; // rax
  wchar_t **v84; // rsi
  unsigned __int8 *v85; // r12
  int v86; // r13d
  unsigned int v87; // eax
  int v88; // r8d
  wchar_t **v89; // rax
  wchar_t **v90; // r15
  __int64 v91; // rax
  rsize_t v92; // rbx
  wchar_t *v93; // rdi
  wchar_t *v94; // r15
  __int64 v95; // rsi
  rsize_t v96; // rbx
  wchar_t *v97; // rdi
  int v98; // eax
  wchar_t *v99; // r15
  __int64 v100; // rsi
  _QWORD *v101; // r12
  __int64 v102; // r15
  rsize_t v103; // rbx
  wchar_t *v104; // rdi
  const wchar_t *v105; // rsi
  __int64 v106; // rax
  const wchar_t *v107; // rsi
  wchar_t *v108; // rdi
  unsigned __int64 v109; // rbx
  rsize_t v110; // rbx
  wchar_t *v111; // rdi
  __int64 v112; // rax
  unsigned __int8 *v113; // rcx
  unsigned int v114; // r15d
  unsigned int v115; // ebx
  _BYTE *v116; // r13
  void *v117; // rcx
  unsigned int Val; // [rsp+58h] [rbp-69h]
  wchar_t Str2[2]; // [rsp+5Ch] [rbp-65h] BYREF
  int v120; // [rsp+60h] [rbp-61h]
  PVOID v121; // [rsp+68h] [rbp-59h]
  ULONG v122; // [rsp+70h] [rbp-51h] BYREF
  PVOID P; // [rsp+78h] [rbp-49h] BYREF
  PSID Sid; // [rsp+80h] [rbp-41h]
  unsigned __int8 *v125; // [rsp+88h] [rbp-39h]
  wchar_t *Src; // [rsp+90h] [rbp-31h] BYREF
  PVOID v127; // [rsp+98h] [rbp-29h]
  PVOID v128; // [rsp+A0h] [rbp-21h]
  int v129; // [rsp+A8h] [rbp-19h]
  __int64 v130; // [rsp+B0h] [rbp-11h]
  __int64 v131; // [rsp+B8h] [rbp-9h]
  unsigned int v134; // [rsp+140h] [rbp+7Fh]

  v134 = 0;
  v10 = a1;
  v129 = 0;
  v11 = 0;
  Val = 0;
  Sid = 0LL;
  Src = 0LL;
  P = 0LL;
  if ( !a4 || !a5 )
    return 87LL;
  if ( !a2 )
  {
    *a4 = 0LL;
    *a5 = 0;
    return 0LL;
  }
  if ( !a1 )
  {
    *a4 = 0LL;
    *a5 = 36;
    v13 = (wchar_t *)SddlpAlloc(0x24uLL);
    *a4 = v13;
    if ( v13 )
    {
      wcscpy(v13, L"NO_ACCESS_CONTROL");
      return 0LL;
    }
    v14 = 8;
LABEL_12:
    *a5 = 0;
    return v14;
  }
  v15 = *(_WORD *)(a1 + 4);
  if ( !v15 )
  {
    *a4 = 0LL;
    v14 = 0;
    goto LABEL_12;
  }
  v16 = 2 - (a3 != 0);
  v120 = v16;
  v121 = SddlpAlloc(8LL * v15);
  if ( !v121 )
    return 8LL;
  v128 = SddlpAlloc(*(unsigned __int16 *)(v10 + 4));
  if ( !v128 )
  {
    v17 = v121;
LABEL_17:
    ExFreePoolWithTag(v17, 0);
    return 8LL;
  }
  v127 = SddlpAlloc(4LL * *(unsigned __int16 *)(v10 + 4));
  if ( !v127 )
  {
    ExFreePoolWithTag(v121, 0);
    v17 = v128;
    goto LABEL_17;
  }
  v18 = 0LL;
  v125 = (unsigned __int8 *)(v10 + 8);
  v19 = (unsigned __int8 *)(v10 + 8);
  if ( !*(_WORD *)(v10 + 4) )
    goto LABEL_86;
  while ( 1 )
  {
    v11 += 2;
    v134 = v11;
    v20 = LookupAceTypeInTable(0LL, *v19, v16);
    if ( !v20 )
      break;
    v21 = *v20;
    v22 = -1LL;
    do
      ++v22;
    while ( v21[v22] );
    v23 = 0;
    v24 = v11 + 2 * v22 + 2;
    do
    {
      if ( ((unsigned __int8)(1 << v23) & v19[1]) != 0 )
      {
        v25 = (__int64 *)LookupAceFlagsInTable(0LL);
        if ( v25 )
        {
          v26 = *v25;
          v27 = -1LL;
          do
            ++v27;
          while ( *(_WORD *)(v26 + 2 * v27) );
          v24 += 2 * v27;
        }
      }
      ++v23;
    }
    while ( v23 < 8 );
    v28 = *v19;
    v11 = v24 + 2;
    v134 = v11;
    *(_DWORD *)Str2 = v11;
    if ( v28 > 0xB )
    {
      if ( v28 != 13 )
      {
        v29 = v28 - 17 <= 4;
        goto LABEL_56;
      }
LABEL_57:
      v35 = *((_DWORD *)v19 + 1);
      v33 = v19 + 8;
      Sid = v19 + 8;
      Val = v35;
      goto LABEL_45;
    }
    if ( v28 != 11 )
    {
      if ( v28 <= 3 )
        goto LABEL_57;
      if ( v28 <= 4 )
        break;
      if ( v28 > 8 )
      {
        v29 = v28 <= 0xA;
LABEL_56:
        if ( !v29 )
          break;
        goto LABEL_57;
      }
    }
    v30 = *((_DWORD *)v19 + 1);
    v31 = *((_DWORD *)v19 + 2) & 1;
    v32 = *((_DWORD *)v19 + 2) & 2;
    Val = v30;
    v33 = &v19[16 * (unsigned int)v31 + (v32 != 0 ? 28LL : 12LL)];
    Sid = v33;
    if ( (-(__int64)((_DWORD)v31 != 0) & (unsigned __int64)(v19 + 12)) != 0 )
    {
      v11 += 72;
      *(_DWORD *)Str2 = v11;
    }
    if ( v32 )
      v34 = (__int64)&v19[16 * v31 + 12];
    else
      v34 = 0LL;
    if ( v34 )
      *(_DWORD *)Str2 = v11 + 72;
    v35 = v30;
LABEL_45:
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      P = 0LL;
    }
    v122 = 0;
    AceCondition = LocalGetAceCondition(v19, v33, &P, &v122);
    if ( AceCondition )
    {
      v11 = *(_DWORD *)Str2;
      v134 = *(_DWORD *)Str2;
      goto LABEL_81;
    }
    v37 = v120;
    v38 = 0;
    *((_DWORD *)v127 + (unsigned int)v18) = 0;
    if ( *v19 == 17 )
      v37 = 4;
    v39 = LookupAccessMaskInTable(0LL, v35, v37);
    if ( !v39 )
    {
      v42 = Val;
      v43 = 0;
      while ( 1 )
      {
        if ( (v42 & (1 << v43)) != 0 )
        {
          v44 = v120;
          if ( *v19 == 17 )
            v44 = 4;
          v45 = LookupAccessMaskInTable(0LL, v42 & (1 << v43), v44);
          if ( !v45 )
          {
            v38 = 20;
            *((_DWORD *)v127 + (unsigned int)v18) = 2;
            goto LABEL_69;
          }
          v46 = *v45;
          v47 = -1LL;
          do
            ++v47;
          while ( v46[v47] );
          v38 += 2 * v47;
          v42 = Val;
        }
        if ( (unsigned int)++v43 >= 0x20 )
          goto LABEL_69;
      }
    }
    v41 = -1LL;
    *((_DWORD *)v127 + (unsigned int)v18) = 1;
    do
      ++v41;
    while ( (*v39)[v41] );
    v38 = 2 * v41;
LABEL_69:
    v11 = v38 + *(_DWORD *)Str2 + 6;
    v134 = v11;
    v48 = LookupSidInTable(0LL, Sid, a6, v40, Str2, a9, &Src);
    if ( v48 )
    {
      v50 = (wchar_t **)((char *)v121 + 8 * (unsigned int)v18);
      *v50 = (wchar_t *)(v48 + 2);
    }
    else if ( Src )
    {
      v49 = (wchar_t *)SddlpAlloc(6uLL);
      v50 = (wchar_t **)((char *)v121 + 8 * (unsigned int)v18);
      *v50 = v49;
      if ( !v49 )
      {
        AceCondition = 8;
LABEL_81:
        v10 = a1;
        goto LABEL_85;
      }
      wcscpy_s(v49, 3uLL, L"SA");
      *((_BYTE *)v128 + (unsigned int)v18) = 1;
    }
    else
    {
      v50 = (wchar_t **)((char *)v121 + 8 * (unsigned int)v18);
      v51 = LocalConvertSidToStringSidW(Sid);
      if ( v51 < 0 )
      {
        AceCondition = RtlNtStatusToDosError(v51);
        goto LABEL_81;
      }
      *((_BYTE *)v128 + (unsigned int)v18) = 1;
    }
    v52 = -1LL;
    do
      ++v52;
    while ( (*v50)[v52] );
    v10 = a1;
    v11 += 2 * v52 + 4;
    v19 += *((unsigned __int16 *)v19 + 1);
    v134 = v11;
    LODWORD(v18) = v18 + 1;
    if ( (unsigned int)v18 >= *(unsigned __int16 *)(a1 + 4) )
      goto LABEL_85;
    v16 = v120;
  }
  AceCondition = 1336;
LABEL_85:
  v18 = 0LL;
  if ( !v11 )
LABEL_86:
    AceCondition = 1336;
  if ( AceCondition )
    goto LABEL_170;
  if ( (v11 & 1) != 0 )
    v134 = ++v11;
  v53 = v11;
  v54 = (PVOID *)a4;
  v55 = (wchar_t *)SddlpAlloc(v11);
  *a4 = v55;
  if ( !v55 )
  {
    v11 = v134;
    AceCondition = 8;
    goto LABEL_171;
  }
  v56 = v53 >> 1;
  *(_DWORD *)Str2 = 0;
  if ( !*(_WORD *)(v10 + 4) )
    goto LABEL_169;
  v57 = v125;
  while ( 2 )
  {
    if ( v56 )
    {
      v58 = v120;
      *v55 = 40;
      v59 = v55 + 1;
      v60 = v56 - 1;
      v61 = LookupAceTypeInTable(0LL, *v57, v58);
      v62 = v61;
      if ( v61 )
      {
        wcscpy_s(v59, v60, *v61);
        v63 = *((unsigned int *)v62 + 2);
        v60 -= v63;
        v59 += v63;
      }
      if ( v60 )
      {
        v64 = v125;
        *v59 = 59;
        v65 = 0;
        v66 = v59 + 1;
        v67 = v60 - 1;
        do
        {
          if ( ((unsigned __int8)(1 << v65) & v64[1]) != 0 )
          {
            v68 = (const wchar_t **)LookupAceFlagsInTable(0LL);
            v69 = v68;
            if ( v68 )
            {
              wcscpy_s(v66, v67, *v68);
              v70 = *((unsigned int *)v69 + 2);
              v67 -= v70;
              v66 += v70;
            }
          }
          ++v65;
        }
        while ( v65 < 8 );
        v71 = *(unsigned int *)Str2;
        if ( v67 )
        {
          v72 = v125;
          *v66 = 59;
          v73 = v67 - 1;
          v74 = v66 + 1;
          v131 = 0LL;
          v75 = 0LL;
          v130 = 0LL;
          v76 = *v72;
          if ( v76 > 0xB )
          {
            if ( v76 != 13 && v76 - 17 > 4 )
              goto LABEL_116;
          }
          else
          {
            if ( v76 == 11 )
              goto LABEL_109;
            if ( v76 > 3 )
            {
              if ( v76 <= 4 )
                goto LABEL_116;
              if ( v76 <= 8 )
              {
LABEL_109:
                v77 = *((_DWORD *)v72 + 2) & 2;
                v78 = *((_DWORD *)v72 + 2) & 1;
                Val = *((_DWORD *)v72 + 1);
                Sid = &v72[16 * v78 + 12 + (v77 != 0 ? 0x10 : 0)];
                if ( v77 )
                  v18 = (__int64)&v72[16 * v78 + 12];
                else
                  v18 = 0LL;
                v130 = v18;
                v75 = (unsigned __int64)(v72 + 12) & -(__int64)(v78 != 0);
                v131 = v75;
LABEL_116:
                v79 = (unsigned int)P;
                if ( P )
                {
                  ExFreePoolWithTag(P, 0);
                  v79 = 0;
                  P = 0LL;
                }
                v122 = v79;
                v122 = LocalGetAceCondition(v72, Sid, &P, &v122);
                AceCondition = v122;
                if ( v122 )
                  goto LABEL_169;
                v80 = *((_DWORD *)v127 + v71);
                if ( v80 == 2 )
                {
                  wcscpy_s(v74, v73, L"0x");
                  v74 += 2;
                  v73 -= 2LL;
                  ultow_s(Val, v74, v73, AceCondition + 16);
                  v81 = -1LL;
                  do
                    ++v81;
                  while ( v74[v81] != (_WORD)v79 );
LABEL_128:
                  v74 += v81;
                  v73 -= v81;
                }
                else if ( v80 == 1 )
                {
                  v82 = v120;
                  if ( *v125 == 17 )
                    v82 = 4;
                  v83 = LookupAccessMaskInTable(0LL, Val, v82);
                  v84 = v83;
                  if ( v83 )
                  {
                    wcscpy_s(v74, v73, *v83);
                    v81 = *((unsigned int *)v84 + 2);
                    goto LABEL_128;
                  }
                }
                else
                {
                  v85 = v125;
                  v86 = v120;
                  v87 = Val;
                  do
                  {
                    if ( (v87 & (1 << v79)) != 0 )
                    {
                      v88 = v86;
                      if ( *v85 == 17 )
                        v88 = 4;
                      v89 = LookupAccessMaskInTable(0LL, v87 & (1 << v79), v88);
                      v90 = v89;
                      if ( v89 )
                      {
                        wcscpy_s(v74, v73, *v89);
                        v91 = *((unsigned int *)v90 + 2);
                        v73 -= v91;
                        v74 += v91;
                      }
                      v87 = Val;
                    }
                    ++v79;
                  }
                  while ( v79 < 0x20 );
                  AceCondition = v122;
                  v75 = v131;
                  v18 = v130;
                }
                if ( !v73 )
                  goto LABEL_166;
                v92 = v73 - 1;
                *v74 = 59;
                v93 = v74 + 1;
                if ( v75 )
                {
                  if ( !(unsigned int)SddlpUuidToString(v75, &Src) )
                    goto LABEL_169;
                  v94 = Src;
                  v95 = -1LL;
                  do
                    ++v95;
                  while ( Src[v95] );
                  wcscpy_s(v93, v92, Src);
                  v92 -= v95;
                  v93 += v95;
                  if ( v94 )
                    ExFreePoolWithTag(v94, 0);
                }
                if ( !v92 )
                {
LABEL_166:
                  AceCondition = 1336;
                  goto LABEL_169;
                }
                *v93 = 59;
                v96 = v92 - 1;
                v97 = v93 + 1;
                if ( v18 )
                {
                  v98 = SddlpUuidToString(v18, &Src);
                  v18 = 0LL;
                  if ( !v98 )
                    goto LABEL_169;
                  v99 = Src;
                  v100 = -1LL;
                  do
                    ++v100;
                  while ( Src[v100] );
                  wcscpy_s(v97, v96, Src);
                  v96 -= v100;
                  v97 += v100;
                  if ( v99 )
                    ExFreePoolWithTag(v99, 0);
                }
                v101 = v121;
                if ( !v96 )
                  goto LABEL_164;
                v102 = *(unsigned int *)Str2;
                v103 = v96 - 1;
                *v97 = 59;
                v104 = v97 + 1;
                v105 = (const wchar_t *)v101[v102];
                wcscpy_s(v104, v103, v105);
                v106 = -1LL;
                do
                  ++v106;
                while ( v105[v106] );
                v107 = (const wchar_t *)P;
                v108 = &v104[v106];
                v109 = v103 - v106;
                if ( P )
                {
                  if ( !v109 )
                    goto LABEL_164;
                  v110 = v109 - 1;
                  *v108 = 59;
                  v111 = v108 + 1;
                  wcscpy_s(v111, v110, v107);
                  v112 = -1LL;
                  do
                    ++v112;
                  while ( v107[v112] );
                  v108 = &v111[v112];
                  v109 = v110 - v112;
                }
                if ( v109 <= 1 )
                {
LABEL_164:
                  AceCondition = 1336;
LABEL_165:
                  v11 = v134;
                  v54 = (PVOID *)a4;
                  goto LABEL_172;
                }
                v113 = v125;
                *v108 = 41;
                v114 = v102 + 1;
                v55 = v108 + 1;
                *(_DWORD *)Str2 = v114;
                v56 = v109 - 1;
                *v55 = 0;
                v57 = &v113[*((unsigned __int16 *)v113 + 1)];
                v125 = v57;
                if ( v114 >= *(unsigned __int16 *)(a1 + 4) )
                  goto LABEL_165;
                continue;
              }
            }
          }
          Val = *((_DWORD *)v72 + 1);
          Sid = v72 + 8;
          goto LABEL_116;
        }
      }
    }
    break;
  }
  AceCondition = 1336;
LABEL_169:
  v11 = v134;
LABEL_170:
  v54 = (PVOID *)a4;
LABEL_171:
  v101 = v121;
LABEL_172:
  v115 = 0;
  if ( *(_WORD *)(a1 + 4) )
  {
    v116 = v128;
    do
    {
      if ( v116[v115] )
      {
        v117 = (void *)v101[v115];
        if ( v117 )
          ExFreePoolWithTag(v117, 0);
      }
      ++v115;
    }
    while ( v115 < *(unsigned __int16 *)(a1 + 4) );
  }
  ExFreePoolWithTag(v101, 0);
  ExFreePoolWithTag(v128, 0);
  ExFreePoolWithTag(v127, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( AceCondition )
  {
    if ( *v54 )
      ExFreePoolWithTag(*v54, 0);
    *v54 = 0LL;
    *a5 = 0;
  }
  else
  {
    *a5 = v11;
  }
  return AceCondition;
}
