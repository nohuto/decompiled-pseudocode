/*
 * XREFs of LocalConvertAclToString @ 0x140795A60
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x1407964E0 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     _ultow_s @ 0x14018D640 (_ultow_s.c)
 *     wcscpy_s @ 0x14018EC10 (wcscpy_s.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     RtlNtStatusToDosError @ 0x1405B74B0 (RtlNtStatusToDosError.c)
 *     LookupAccessMaskInTable @ 0x140601690 (LookupAccessMaskInTable.c)
 *     LookupSidInTable @ 0x14060181C (LookupSidInTable.c)
 *     LookupAceTypeInTable @ 0x140601958 (LookupAceTypeInTable.c)
 *     SddlpAlloc @ 0x1406019F0 (SddlpAlloc.c)
 *     LocalConvertSidToStringSidW @ 0x140796AB4 (LocalConvertSidToStringSidW.c)
 *     LocalGetAceCondition @ 0x140796B58 (LocalGetAceCondition.c)
 *     LookupAceFlagsInTable @ 0x140796EB8 (LookupAceFlagsInTable.c)
 *     SddlpUuidToString @ 0x1407978E4 (SddlpUuidToString.c)
 */

__int64 __fastcall LocalConvertAclToString(
        __int64 a1,
        char a2,
        char a3,
        PVOID *a4,
        unsigned int *a5,
        __int64 a6,
        __int64 a7,
        int a8,
        char a9)
{
  _QWORD *v9; // rsi
  unsigned int v11; // edi
  wchar_t *v13; // rax
  unsigned int v14; // ecx
  unsigned __int16 v15; // ax
  PVOID v16; // rcx
  unsigned __int8 *v17; // r13
  unsigned __int8 *v18; // r15
  wchar_t **v19; // rax
  wchar_t *v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // ebx
  int v23; // edi
  __int64 *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned int v27; // eax
  bool v28; // cc
  unsigned int v29; // r9d
  __int64 v30; // r8
  int v31; // edx
  unsigned __int8 *v32; // rbx
  __int64 v33; // rcx
  int v34; // edi
  ULONG AceCondition; // r14d
  int v36; // r8d
  int v37; // ebx
  wchar_t **v38; // rax
  __int64 v39; // r9
  __int64 v40; // rbx
  unsigned int v41; // eax
  int v42; // edi
  int v43; // r8d
  wchar_t **v44; // rax
  wchar_t *v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  wchar_t **v48; // rbx
  wchar_t *v49; // rax
  NTSTATUS v50; // eax
  __int64 v51; // rcx
  __int64 v52; // rax
  unsigned __int64 v53; // rbx
  _WORD *v54; // rax
  _WORD *v55; // rdi
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
  int v77; // ecx
  unsigned int v78; // r8d
  __int64 v79; // rdx
  unsigned int v80; // esi
  int v81; // eax
  __int64 v82; // rax
  int v83; // r8d
  wchar_t **v84; // rax
  wchar_t **v85; // rsi
  unsigned __int8 *v86; // r12
  int v87; // r13d
  unsigned int v88; // eax
  int v89; // r8d
  wchar_t **v90; // rax
  wchar_t **v91; // r15
  __int64 v92; // rax
  rsize_t v93; // rbx
  wchar_t *v94; // rdi
  wchar_t *v95; // r15
  __int64 v96; // rsi
  rsize_t v97; // rbx
  wchar_t *v98; // rdi
  int v99; // eax
  wchar_t *v100; // r15
  __int64 v101; // rsi
  _QWORD *v102; // r12
  __int64 v103; // r15
  rsize_t v104; // rbx
  wchar_t *v105; // rdi
  const wchar_t *v106; // rsi
  __int64 v107; // rax
  const wchar_t *v108; // rsi
  wchar_t *v109; // rdi
  unsigned __int64 v110; // rbx
  rsize_t v111; // rbx
  wchar_t *v112; // rdi
  __int64 v113; // rax
  unsigned __int8 *v114; // rcx
  unsigned int v115; // r15d
  unsigned int v116; // ebx
  _BYTE *v117; // rsi
  void *v118; // rcx
  unsigned int Val; // [rsp+58h] [rbp-69h]
  wchar_t Str2[2]; // [rsp+5Ch] [rbp-65h] BYREF
  int v121; // [rsp+60h] [rbp-61h]
  PVOID v122; // [rsp+68h] [rbp-59h]
  ULONG v123; // [rsp+70h] [rbp-51h] BYREF
  PVOID P; // [rsp+78h] [rbp-49h] BYREF
  PSID Sid; // [rsp+80h] [rbp-41h]
  unsigned __int8 *v126; // [rsp+88h] [rbp-39h]
  wchar_t *Src; // [rsp+90h] [rbp-31h] BYREF
  PVOID v128; // [rsp+98h] [rbp-29h]
  int v129; // [rsp+A0h] [rbp-21h]
  unsigned __int8 *v130; // [rsp+A8h] [rbp-19h]
  PVOID v131; // [rsp+B0h] [rbp-11h]
  __int64 v132; // [rsp+B8h] [rbp-9h]
  unsigned int v135; // [rsp+140h] [rbp+7Fh]

  v9 = a4;
  v135 = 0;
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
    *v9 = v13;
    if ( v13 )
    {
      wcscpy(v13, L"NO_ACCESS_CONTROL");
      return 0LL;
    }
    v14 = 8;
    goto LABEL_12;
  }
  v15 = *(_WORD *)(a1 + 4);
  if ( !v15 )
  {
    *a4 = 0LL;
    v14 = 0;
LABEL_12:
    *a5 = 0;
    return v14;
  }
  v121 = 2 - (a3 != 0);
  v122 = SddlpAlloc(8LL * v15);
  if ( !v122 )
    return 8LL;
  v131 = SddlpAlloc(*(unsigned __int16 *)(a1 + 4));
  if ( !v131 )
  {
    v16 = v122;
LABEL_17:
    ExFreePoolWithTag(v16, 0);
    return 8LL;
  }
  v128 = SddlpAlloc(4LL * *(unsigned __int16 *)(a1 + 4));
  if ( !v128 )
  {
    ExFreePoolWithTag(v122, 0);
    v16 = v131;
    goto LABEL_17;
  }
  v126 = (unsigned __int8 *)(a1 + 8);
  v17 = 0LL;
  v18 = (unsigned __int8 *)(a1 + 8);
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_85;
  while ( 1 )
  {
    v11 += 2;
    v135 = v11;
    v19 = LookupAceTypeInTable(0LL, *v18, v121);
    if ( !v19 )
      break;
    v20 = *v19;
    v21 = -1LL;
    do
      ++v21;
    while ( v20[v21] );
    v22 = 0;
    v23 = v11 + 2 + 2 * v21;
    do
    {
      if ( ((unsigned __int8)(1 << v22) & v18[1]) != 0 )
      {
        v24 = (__int64 *)LookupAceFlagsInTable(0LL);
        if ( v24 )
        {
          v25 = *v24;
          v26 = -1LL;
          do
            ++v26;
          while ( *(_WORD *)(v25 + 2 * v26) );
          v23 += 2 * v26;
        }
      }
      ++v22;
    }
    while ( v22 < 8 );
    v27 = *v18;
    v11 = v23 + 2;
    v135 = v11;
    *(_DWORD *)Str2 = v11;
    if ( v27 > 0xB )
    {
      if ( v27 != 13 )
      {
        v28 = v27 - 17 <= 4;
        goto LABEL_56;
      }
LABEL_57:
      v34 = *((_DWORD *)v18 + 1);
      v32 = v18 + 8;
      Sid = v18 + 8;
      Val = v34;
      goto LABEL_45;
    }
    if ( v27 != 11 )
    {
      if ( v27 <= 3 )
        goto LABEL_57;
      if ( v27 <= 4 )
        break;
      if ( v27 > 8 )
      {
        v28 = v27 <= 0xA;
LABEL_56:
        if ( !v28 )
          break;
        goto LABEL_57;
      }
    }
    v29 = *((_DWORD *)v18 + 1);
    v30 = *((_DWORD *)v18 + 2) & 1;
    v31 = *((_DWORD *)v18 + 2) & 2;
    Val = v29;
    v32 = &v18[16 * (unsigned int)v30 + (v31 != 0 ? 28LL : 12LL)];
    Sid = v32;
    if ( (-(__int64)((_DWORD)v30 != 0) & (unsigned __int64)(v18 + 12)) != 0 )
    {
      v11 += 72;
      *(_DWORD *)Str2 = v11;
    }
    if ( v31 )
      v33 = (__int64)&v18[16 * v30 + 12];
    else
      v33 = 0LL;
    if ( v33 )
      *(_DWORD *)Str2 = v11 + 72;
    v34 = v29;
LABEL_45:
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      P = 0LL;
    }
    v123 = 0;
    AceCondition = LocalGetAceCondition(v18, v32, &P, &v123);
    if ( AceCondition )
    {
      v11 = *(_DWORD *)Str2;
      v135 = *(_DWORD *)Str2;
      goto LABEL_84;
    }
    v36 = v121;
    v37 = 0;
    *((_DWORD *)v128 + (unsigned int)v17) = 0;
    if ( *v18 == 17 )
      v36 = 4;
    v38 = LookupAccessMaskInTable(0LL, v34, v36);
    if ( !v38 )
    {
      v41 = Val;
      v42 = 0;
      while ( 1 )
      {
        if ( (v41 & (1 << v42)) != 0 )
        {
          v43 = v121;
          if ( *v18 == 17 )
            v43 = 4;
          v44 = LookupAccessMaskInTable(0LL, v41 & (1 << v42), v43);
          if ( !v44 )
          {
            v37 = 20;
            *((_DWORD *)v128 + (unsigned int)v17) = 2;
            goto LABEL_69;
          }
          v45 = *v44;
          v46 = -1LL;
          do
            ++v46;
          while ( v45[v46] );
          v37 += 2 * v46;
          v41 = Val;
        }
        if ( (unsigned int)++v42 >= 0x20 )
          goto LABEL_69;
      }
    }
    v40 = -1LL;
    *((_DWORD *)v128 + (unsigned int)v17) = 1;
    do
      ++v40;
    while ( (*v38)[v40] );
    v37 = 2 * v40;
LABEL_69:
    v11 = v37 + *(_DWORD *)Str2 + 6;
    v135 = v11;
    v47 = LookupSidInTable(0LL, Sid, a6, v39, Str2, a9, &Src);
    v48 = (wchar_t **)((char *)v122 + 8 * (unsigned int)v17);
    if ( v47 )
    {
      v51 = v47 + 2;
      *v48 = (wchar_t *)(v47 + 2);
    }
    else
    {
      if ( Src )
      {
        v49 = (wchar_t *)SddlpAlloc(6uLL);
        *v48 = v49;
        if ( !v49 )
        {
          AceCondition = 8;
          goto LABEL_84;
        }
        wcscpy_s(v49, 3uLL, L"SA");
      }
      else
      {
        v50 = LocalConvertSidToStringSidW(Sid);
        if ( v50 < 0 )
        {
          AceCondition = RtlNtStatusToDosError(v50);
          goto LABEL_84;
        }
      }
      *((_BYTE *)v131 + (unsigned int)v17) = 1;
      v51 = (__int64)*v48;
    }
    v52 = -1LL;
    do
      ++v52;
    while ( *(_WORD *)(v51 + 2 * v52) );
    LODWORD(v17) = (_DWORD)v17 + 1;
    v11 += 2 * v52 + 4;
    v18 += *((unsigned __int16 *)v18 + 1);
    v135 = v11;
    if ( (unsigned int)v17 >= *(unsigned __int16 *)(a1 + 4) )
      goto LABEL_84;
  }
  AceCondition = 1336;
LABEL_84:
  v9 = a4;
  v17 = 0LL;
  if ( !v11 )
LABEL_85:
    AceCondition = 1336;
  if ( !AceCondition )
  {
    if ( (v11 & 1) != 0 )
      v135 = ++v11;
    v53 = v11;
    v54 = SddlpAlloc(v11);
    *v9 = v54;
    v55 = v54;
    if ( !v54 )
    {
      AceCondition = 8;
      goto LABEL_168;
    }
    v56 = v53 >> 1;
    *(_DWORD *)Str2 = 0;
    if ( *(_WORD *)(a1 + 4) )
    {
      v57 = v126;
      while ( 1 )
      {
        if ( !v56 )
          goto LABEL_167;
        v58 = v121;
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
        if ( !v60 )
          goto LABEL_167;
        v64 = v126;
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
        if ( !v67 )
        {
LABEL_167:
          AceCondition = 1336;
          break;
        }
        v72 = v126;
        *v66 = 59;
        v73 = v67 - 1;
        v74 = v66 + 1;
        v132 = 0LL;
        v75 = 0LL;
        v130 = 0LL;
        v76 = *v72;
        if ( v76 > 0xB )
        {
          if ( v76 == 13 || v76 - 17 <= 4 )
            goto LABEL_114;
        }
        else
        {
          if ( v76 != 11 )
          {
            if ( v76 <= 3 )
              goto LABEL_114;
            if ( v76 <= 4 )
              goto LABEL_115;
            if ( v76 > 8 )
            {
LABEL_114:
              Val = *((_DWORD *)v72 + 1);
              Sid = v72 + 8;
              goto LABEL_115;
            }
          }
          v77 = *((_DWORD *)v72 + 2) & 2;
          v78 = *((_DWORD *)v72 + 2) & 1;
          v79 = 16LL * v78;
          Val = *((_DWORD *)v72 + 1);
          Sid = &v72[v79 + (v77 != 0 ? 28LL : 12LL)];
          if ( v77 )
            v17 = &v72[v79 + 12];
          else
            v17 = 0LL;
          v130 = v17;
          v75 = (unsigned __int64)(v72 + 12) & -(__int64)(v78 != 0);
          v132 = v75;
        }
LABEL_115:
        v80 = (unsigned int)P;
        if ( P )
        {
          ExFreePoolWithTag(P, 0);
          v80 = 0;
          P = 0LL;
        }
        v123 = v80;
        v123 = LocalGetAceCondition(v72, Sid, &P, &v123);
        AceCondition = v123;
        if ( v123 )
          break;
        v81 = *((_DWORD *)v128 + v71);
        if ( v81 == 2 )
        {
          wcscpy_s(v74, v73, L"0x");
          v74 += 2;
          v73 -= 2LL;
          ultow_s(Val, v74, v73, AceCondition + 16);
          v82 = -1LL;
          do
            ++v82;
          while ( v74[v82] != (_WORD)v80 );
          goto LABEL_127;
        }
        if ( v81 != 1 )
        {
          v86 = v126;
          v87 = v121;
          v88 = Val;
          do
          {
            if ( (v88 & (1 << v80)) != 0 )
            {
              v89 = v87;
              if ( *v86 == 17 )
                v89 = 4;
              v90 = LookupAccessMaskInTable(0LL, v88 & (1 << v80), v89);
              v91 = v90;
              if ( v90 )
              {
                wcscpy_s(v74, v73, *v90);
                v92 = *((unsigned int *)v91 + 2);
                v73 -= v92;
                v74 += v92;
              }
              v88 = Val;
            }
            ++v80;
          }
          while ( v80 < 0x20 );
          AceCondition = v123;
          v75 = v132;
          v17 = v130;
          goto LABEL_137;
        }
        v83 = v121;
        if ( *v126 == 17 )
          v83 = 4;
        v84 = LookupAccessMaskInTable(0LL, Val, v83);
        v85 = v84;
        if ( v84 )
        {
          wcscpy_s(v74, v73, *v84);
          v82 = *((unsigned int *)v85 + 2);
LABEL_127:
          v74 += v82;
          v73 -= v82;
        }
LABEL_137:
        if ( !v73 )
          goto LABEL_165;
        v93 = v73 - 1;
        *v74 = 59;
        v94 = v74 + 1;
        if ( v75 )
        {
          if ( !(unsigned int)SddlpUuidToString(v75, &Src) )
            break;
          v95 = Src;
          v96 = -1LL;
          do
            ++v96;
          while ( Src[v96] );
          wcscpy_s(v94, v93, Src);
          v93 -= v96;
          v94 += v96;
          if ( v95 )
            ExFreePoolWithTag(v95, 0);
        }
        if ( !v93 )
        {
LABEL_165:
          AceCondition = 1336;
          break;
        }
        *v94 = 59;
        v97 = v93 - 1;
        v98 = v94 + 1;
        if ( v17 )
        {
          v99 = SddlpUuidToString(v17, &Src);
          v17 = 0LL;
          if ( !v99 )
            break;
          v100 = Src;
          v101 = -1LL;
          do
            ++v101;
          while ( Src[v101] );
          wcscpy_s(v98, v97, Src);
          v97 -= v101;
          v98 += v101;
          if ( v100 )
            ExFreePoolWithTag(v100, 0);
        }
        v102 = v122;
        if ( !v97 )
          goto LABEL_163;
        v103 = *(unsigned int *)Str2;
        v104 = v97 - 1;
        *v98 = 59;
        v105 = v98 + 1;
        v106 = (const wchar_t *)v102[v103];
        wcscpy_s(v105, v104, v106);
        v107 = -1LL;
        do
          ++v107;
        while ( v106[v107] );
        v108 = (const wchar_t *)P;
        v109 = &v105[v107];
        v110 = v104 - v107;
        if ( P )
        {
          if ( !v110 )
            goto LABEL_163;
          v111 = v110 - 1;
          *v109 = 59;
          v112 = v109 + 1;
          wcscpy_s(v112, v111, v108);
          v113 = -1LL;
          do
            ++v113;
          while ( v108[v113] );
          v109 = &v112[v113];
          v110 = v111 - v113;
        }
        if ( v110 <= 1 )
        {
LABEL_163:
          AceCondition = 1336;
LABEL_164:
          v11 = v135;
          goto LABEL_170;
        }
        v114 = v126;
        *v109 = 41;
        v115 = v103 + 1;
        v55 = v109 + 1;
        *(_DWORD *)Str2 = v115;
        v56 = v110 - 1;
        *v55 = 0;
        v57 = &v114[*((unsigned __int16 *)v114 + 1)];
        v126 = v57;
        if ( v115 >= *(unsigned __int16 *)(a1 + 4) )
          goto LABEL_164;
      }
    }
LABEL_168:
    v11 = v135;
  }
  v102 = v122;
LABEL_170:
  v116 = 0;
  if ( *(_WORD *)(a1 + 4) )
  {
    v117 = v131;
    do
    {
      if ( v117[v116] )
      {
        v118 = (void *)v102[v116];
        if ( v118 )
          ExFreePoolWithTag(v118, 0);
      }
      ++v116;
    }
    while ( v116 < *(unsigned __int16 *)(a1 + 4) );
  }
  ExFreePoolWithTag(v102, 0);
  ExFreePoolWithTag(v131, 0);
  ExFreePoolWithTag(v128, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( AceCondition )
  {
    if ( *a4 )
      ExFreePoolWithTag(*a4, 0);
    *a4 = 0LL;
    *a5 = 0;
  }
  else
  {
    *a5 = v11;
  }
  return AceCondition;
}
