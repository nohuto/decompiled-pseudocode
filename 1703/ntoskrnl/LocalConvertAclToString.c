/*
 * XREFs of LocalConvertAclToString @ 0x1406FA724
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406FB220 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     _ultow_s @ 0x14016EFA0 (_ultow_s.c)
 *     wcscpy_s @ 0x1401704A0 (wcscpy_s.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlNtStatusToDosError @ 0x140430830 (RtlNtStatusToDosError.c)
 *     LookupAccessMaskInTable @ 0x14057FAF0 (LookupAccessMaskInTable.c)
 *     LookupSidInTable @ 0x14057FC7C (LookupSidInTable.c)
 *     LookupAceTypeInTable @ 0x14057FDB8 (LookupAceTypeInTable.c)
 *     SddlpAlloc @ 0x14057FE50 (SddlpAlloc.c)
 *     LocalConvertSidToStringSidW @ 0x1406FB81C (LocalConvertSidToStringSidW.c)
 *     LocalGetAceCondition @ 0x1406FB8C0 (LocalGetAceCondition.c)
 *     LookupAceFlagsInTable @ 0x1406FBC2C (LookupAceFlagsInTable.c)
 *     SddlpUuidToString @ 0x1406FC64C (SddlpUuidToString.c)
 */

__int64 __fastcall LocalConvertAclToString(
        __int64 a1,
        char a2,
        char a3,
        wchar_t **a4,
        unsigned int *a5,
        __int64 a6,
        __int64 a7,
        unsigned int Val,
        char a9)
{
  __int64 v10; // rsi
  unsigned int v11; // r13d
  wchar_t *v13; // rax
  unsigned int v14; // ecx
  unsigned __int16 v15; // ax
  int v16; // r14d
  PVOID v17; // rcx
  unsigned int v18; // edi
  unsigned __int8 *v19; // r15
  wchar_t **v20; // rax
  wchar_t *v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // ebx
  int v24; // r13d
  __int64 *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // eax
  bool v29; // cc
  int v30; // edx
  int v31; // r8d
  unsigned __int8 *v32; // rbx
  unsigned __int8 *v33; // rcx
  unsigned int v34; // eax
  ULONG AceCondition; // r14d
  int v36; // ebx
  int v37; // r8d
  __int64 v38; // rsi
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
  PVOID *v53; // r15
  wchar_t *v54; // rdi
  unsigned __int64 v55; // rbx
  unsigned __int8 *v56; // rcx
  rsize_t v57; // rbx
  wchar_t *v58; // rdi
  wchar_t **v59; // rax
  wchar_t **v60; // rsi
  __int64 v61; // rax
  unsigned __int8 *v62; // r15
  unsigned int v63; // esi
  wchar_t *v64; // rdi
  rsize_t v65; // rbx
  const wchar_t **v66; // rax
  const wchar_t **v67; // r14
  __int64 v68; // rax
  unsigned __int8 *v69; // r14
  rsize_t v70; // rbx
  wchar_t *v71; // rdi
  __int64 v72; // r12
  unsigned int v73; // eax
  int v74; // r8d
  int v75; // edx
  int v76; // eax
  wchar_t *v77; // rdi
  size_t v78; // rbx
  __int64 v79; // rax
  int v80; // r8d
  wchar_t **v81; // rax
  wchar_t **v82; // rsi
  __int64 v83; // rax
  unsigned __int8 *v84; // r12
  unsigned int v85; // esi
  unsigned int v86; // eax
  int v87; // r8d
  wchar_t **v88; // rax
  wchar_t **v89; // r15
  __int64 v90; // rax
  rsize_t v91; // rbx
  wchar_t *v92; // rdi
  wchar_t *v93; // r15
  __int64 v94; // rsi
  __int64 v95; // rax
  rsize_t v96; // rbx
  wchar_t *v97; // rdi
  wchar_t *v98; // r15
  __int64 v99; // rsi
  _QWORD *v100; // r12
  unsigned int v101; // r15d
  rsize_t v102; // rbx
  wchar_t *v103; // rdi
  const wchar_t *v104; // rsi
  __int64 v105; // rax
  const wchar_t *v106; // rsi
  wchar_t *v107; // rdi
  unsigned __int64 v108; // rbx
  rsize_t v109; // rbx
  wchar_t *v110; // rdi
  __int64 v111; // rax
  unsigned __int8 *v112; // rcx
  unsigned int v113; // ebx
  _BYTE *v114; // rsi
  void *v115; // rcx
  unsigned int v116; // [rsp+58h] [rbp-59h]
  unsigned int v117; // [rsp+5Ch] [rbp-55h]
  unsigned int v118; // [rsp+5Ch] [rbp-55h]
  char *v119; // [rsp+60h] [rbp-51h]
  int v120; // [rsp+68h] [rbp-49h]
  ULONG v121; // [rsp+6Ch] [rbp-45h] BYREF
  wchar_t Str2[4]; // [rsp+70h] [rbp-41h] BYREF
  PVOID P; // [rsp+78h] [rbp-39h] BYREF
  PSID Sid; // [rsp+80h] [rbp-31h]
  unsigned __int8 *v125; // [rsp+88h] [rbp-29h]
  wchar_t *Src; // [rsp+90h] [rbp-21h] BYREF
  PVOID v127; // [rsp+98h] [rbp-19h]
  PVOID v128; // [rsp+A0h] [rbp-11h]
  int v129; // [rsp+A8h] [rbp-9h]
  __int64 v130; // [rsp+B0h] [rbp-1h]
  unsigned int Vala; // [rsp+130h] [rbp+7Fh]

  v116 = 0;
  v10 = a1;
  v129 = 0;
  v11 = 0;
  Vala = 0;
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
  v119 = (char *)SddlpAlloc(8LL * v15);
  if ( !v119 )
    return 8LL;
  v128 = SddlpAlloc(*(unsigned __int16 *)(v10 + 4));
  if ( !v128 )
  {
    v17 = v119;
LABEL_17:
    ExFreePoolWithTag(v17, 0);
    return 8LL;
  }
  v127 = SddlpAlloc(4LL * *(unsigned __int16 *)(v10 + 4));
  if ( !v127 )
  {
    ExFreePoolWithTag(v119, 0);
    v17 = v128;
    goto LABEL_17;
  }
  v117 = 0;
  v18 = 0;
  v19 = (unsigned __int8 *)(v10 + 8);
  v125 = (unsigned __int8 *)(v10 + 8);
  if ( !*(_WORD *)(v10 + 4) )
    goto LABEL_86;
  while ( 2 )
  {
    v11 += 2;
    v116 = v11;
    v20 = LookupAceTypeInTable(0LL, *v19, v16);
    if ( !v20 )
    {
LABEL_84:
      AceCondition = 1336;
      goto LABEL_85;
    }
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
    v116 = v11;
    *(_DWORD *)Str2 = v11;
    if ( v28 > 0xB )
    {
      if ( v28 != 13 )
      {
        v29 = v28 - 17 <= 4;
LABEL_46:
        if ( !v29 )
          goto LABEL_84;
      }
    }
    else
    {
      if ( v28 == 11 )
        goto LABEL_37;
      if ( v28 > 3 )
      {
        if ( v28 <= 4 )
          goto LABEL_84;
        if ( v28 > 8 )
        {
          v29 = v28 <= 0xA;
          goto LABEL_46;
        }
LABEL_37:
        v30 = *((_DWORD *)v19 + 2) & 1;
        v31 = *((_DWORD *)v19 + 2) & 2;
        Vala = *((_DWORD *)v19 + 1);
        v32 = &v19[(v30 != 0 ? 28LL : 12LL) + (v31 != 0 ? 0x10 : 0)];
        Sid = v32;
        if ( (-(__int64)(v30 != 0) & (unsigned __int64)(v19 + 12)) != 0 )
        {
          v11 += 72;
          *(_DWORD *)Str2 = v11;
        }
        if ( v31 )
          v33 = &v19[v30 != 0 ? 28LL : 12LL];
        else
          v33 = 0LL;
        if ( v33 )
          *(_DWORD *)Str2 = v11 + 72;
        goto LABEL_48;
      }
    }
    v34 = *((_DWORD *)v19 + 1);
    v32 = v19 + 8;
    Sid = v19 + 8;
    Vala = v34;
LABEL_48:
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      P = 0LL;
    }
    v121 = 0;
    AceCondition = LocalGetAceCondition(v19, v32, &P, &v121);
    if ( AceCondition )
    {
      v11 = *(_DWORD *)Str2;
      v116 = *(_DWORD *)Str2;
      goto LABEL_81;
    }
    v36 = 0;
    v37 = v120;
    v38 = v18;
    *((_DWORD *)v127 + v18) = 0;
    if ( *v19 == 17 )
      v37 = 4;
    v39 = LookupAccessMaskInTable(0LL, Vala, v37);
    if ( v39 )
    {
      v41 = -1LL;
      *((_DWORD *)v127 + v18) = 1;
      do
        ++v41;
      while ( (*v39)[v41] );
      v36 = 2 * v41;
      goto LABEL_69;
    }
    v42 = Vala;
    v43 = 0;
    while ( (v42 & (1 << v43)) == 0 )
    {
LABEL_65:
      if ( (unsigned int)++v43 >= 0x20 )
        goto LABEL_68;
    }
    v44 = v120;
    if ( *v19 == 17 )
      v44 = 4;
    v45 = LookupAccessMaskInTable(0LL, v42 & (1 << v43), v44);
    if ( v45 )
    {
      v46 = *v45;
      v47 = -1LL;
      do
        ++v47;
      while ( v46[v47] );
      v36 += 2 * v47;
      v42 = Vala;
      goto LABEL_65;
    }
    v36 = 20;
    *((_DWORD *)v127 + v38) = 2;
LABEL_68:
    v18 = v117;
LABEL_69:
    v11 = v36 + *(_DWORD *)Str2 + 6;
    v116 = v11;
    v48 = LookupSidInTable(0LL, Sid, a6, v40, Str2, a9, &Src);
    if ( v48 )
    {
      v50 = (wchar_t **)&v119[8 * v38];
      *v50 = (wchar_t *)(v48 + 2);
      goto LABEL_76;
    }
    if ( Src )
    {
      v49 = (wchar_t *)SddlpAlloc(6uLL);
      v50 = (wchar_t **)&v119[8 * v38];
      *v50 = v49;
      if ( v49 )
      {
        wcscpy_s(v49, 3uLL, L"SA");
        *((_BYTE *)v128 + v38) = 1;
LABEL_76:
        v52 = -1LL;
        do
          ++v52;
        while ( (*v50)[v52] );
        v10 = a1;
        v11 += 2 * v52 + 4;
        v19 += *((unsigned __int16 *)v19 + 1);
        v116 = v11;
        v117 = ++v18;
        if ( v18 >= *(unsigned __int16 *)(a1 + 4) )
          goto LABEL_85;
        v16 = v120;
        continue;
      }
      AceCondition = 8;
LABEL_81:
      v10 = a1;
      goto LABEL_85;
    }
    break;
  }
  v50 = (wchar_t **)&v119[8 * v38];
  v51 = LocalConvertSidToStringSidW(Sid);
  if ( v51 >= 0 )
  {
    *((_BYTE *)v128 + v38) = 1;
    goto LABEL_76;
  }
  v10 = a1;
  AceCondition = RtlNtStatusToDosError(v51);
LABEL_85:
  if ( !v11 )
LABEL_86:
    AceCondition = 1336;
  if ( AceCondition )
    goto LABEL_166;
  if ( (v11 & 1) != 0 )
    v116 = ++v11;
  v53 = (PVOID *)a4;
  v54 = (wchar_t *)SddlpAlloc(v11);
  *a4 = v54;
  if ( !v54 )
  {
    AceCondition = 8;
    goto LABEL_167;
  }
  v55 = (unsigned __int64)v11 >> 1;
  v118 = 0;
  if ( !*(_WORD *)(v10 + 4) )
    goto LABEL_166;
  v56 = v125;
  while ( 2 )
  {
    if ( v55 )
    {
      *v54 = 40;
      v57 = v55 - 1;
      v58 = v54 + 1;
      v59 = LookupAceTypeInTable(0LL, *v56, v120);
      v60 = v59;
      if ( v59 )
      {
        wcscpy_s(v58, v57, *v59);
        v61 = *((unsigned int *)v60 + 2);
        v57 -= v61;
        v58 += v61;
      }
      if ( v57 )
      {
        v62 = v125;
        v63 = 0;
        *v58 = 59;
        v64 = v58 + 1;
        v65 = v57 - 1;
        do
        {
          if ( ((unsigned __int8)(1 << v63) & v62[1]) != 0 )
          {
            v66 = (const wchar_t **)LookupAceFlagsInTable(0LL);
            v67 = v66;
            if ( v66 )
            {
              wcscpy_s(v64, v65, *v66);
              v68 = *((unsigned int *)v67 + 2);
              v65 -= v68;
              v64 += v68;
            }
          }
          ++v63;
        }
        while ( v63 < 8 );
        v11 = v116;
        if ( v65 )
        {
          v69 = v125;
          *v64 = 59;
          v70 = v65 - 1;
          v71 = v64 + 1;
          v130 = 0LL;
          v72 = 0LL;
          *(_QWORD *)Str2 = 0LL;
          v73 = *v69;
          if ( v73 > 0xB )
          {
            if ( v73 == 13 || v73 - 17 <= 4 )
              goto LABEL_115;
          }
          else
          {
            if ( v73 == 11 )
              goto LABEL_109;
            if ( v73 <= 3 )
              goto LABEL_115;
            if ( v73 > 4 )
            {
              if ( v73 <= 8 )
              {
LABEL_109:
                v74 = *((_DWORD *)v69 + 2) & 1;
                v75 = *((_DWORD *)v69 + 2) & 2;
                Vala = *((_DWORD *)v69 + 1);
                Sid = &v69[(v74 != 0 ? 28LL : 12LL) + (v75 != 0 ? 0x10 : 0)];
                if ( v75 )
                  *(_QWORD *)Str2 = &v69[v74 != 0 ? 28LL : 12LL];
                else
                  *(_QWORD *)Str2 = 0LL;
                v72 = (unsigned __int64)(v69 + 12) & -(__int64)(v74 != 0);
                v130 = v72;
                goto LABEL_116;
              }
LABEL_115:
              Vala = *((_DWORD *)v69 + 1);
              Sid = v69 + 8;
            }
          }
LABEL_116:
          if ( P )
          {
            ExFreePoolWithTag(P, 0);
            P = 0LL;
          }
          v121 = 0;
          v121 = LocalGetAceCondition(v69, Sid, &P, &v121);
          AceCondition = v121;
          if ( v121 )
            goto LABEL_166;
          v76 = *((_DWORD *)v127 + v118);
          if ( v76 == 2 )
          {
            wcscpy_s(v71, v70, L"0x");
            v77 = v71 + 2;
            v78 = v70 - 2;
            ultow_s(Vala, v77, v78, AceCondition + 16);
            v79 = -1LL;
            do
              ++v79;
            while ( v77[v79] );
            v71 = &v77[v79];
            v70 = v78 - v79;
          }
          else if ( v76 == 1 )
          {
            v80 = v120;
            if ( *v125 == 17 )
              v80 = 4;
            v81 = LookupAccessMaskInTable(0LL, Vala, v80);
            v82 = v81;
            if ( v81 )
            {
              wcscpy_s(v71, v70, *v81);
              v83 = *((unsigned int *)v82 + 2);
              v70 -= v83;
              v71 += v83;
            }
          }
          else
          {
            v84 = v125;
            v85 = 0;
            v86 = Vala;
            do
            {
              if ( (v86 & (1 << v85)) != 0 )
              {
                v87 = v120;
                if ( *v84 == 17 )
                  v87 = 4;
                v88 = LookupAccessMaskInTable(0LL, v86 & (1 << v85), v87);
                v89 = v88;
                if ( v88 )
                {
                  wcscpy_s(v71, v70, *v88);
                  v90 = *((unsigned int *)v89 + 2);
                  v70 -= v90;
                  v71 += v90;
                }
                v86 = Vala;
              }
              ++v85;
            }
            while ( v85 < 0x20 );
            AceCondition = v121;
            v72 = v130;
            v11 = v116;
          }
          if ( !v70 )
            break;
          v91 = v70 - 1;
          *v71 = 59;
          v92 = v71 + 1;
          if ( v72 )
          {
            if ( !(unsigned int)SddlpUuidToString(v72, &Src) )
              goto LABEL_166;
            v93 = Src;
            v94 = -1LL;
            do
              ++v94;
            while ( Src[v94] );
            wcscpy_s(v92, v91, Src);
            v92 += v94;
            v91 -= v94;
            if ( v93 )
              ExFreePoolWithTag(v93, 0);
          }
          if ( !v91 )
            break;
          v95 = *(_QWORD *)Str2;
          v96 = v91 - 1;
          *v92 = 59;
          v97 = v92 + 1;
          if ( v95 )
          {
            if ( !(unsigned int)SddlpUuidToString(v95, &Src) )
              goto LABEL_166;
            v98 = Src;
            v99 = -1LL;
            do
              ++v99;
            while ( Src[v99] );
            wcscpy_s(v97, v96, Src);
            v97 += v99;
            v96 -= v99;
            if ( v98 )
              ExFreePoolWithTag(v98, 0);
          }
          v100 = v119;
          if ( !v96 )
            goto LABEL_163;
          v101 = v118;
          v102 = v96 - 1;
          *v97 = 59;
          v103 = v97 + 1;
          v104 = *(const wchar_t **)&v119[8 * v118];
          wcscpy_s(v103, v102, v104);
          v105 = -1LL;
          do
            ++v105;
          while ( v104[v105] );
          v106 = (const wchar_t *)P;
          v107 = &v103[v105];
          v108 = v102 - v105;
          if ( P )
          {
            if ( !v108 )
              goto LABEL_163;
            v109 = v108 - 1;
            *v107 = 59;
            v110 = v107 + 1;
            wcscpy_s(v110, v109, v106);
            v111 = -1LL;
            do
              ++v111;
            while ( v106[v111] );
            v107 = &v110[v111];
            v108 = v109 - v111;
          }
          if ( v108 <= 1 )
          {
LABEL_163:
            AceCondition = 1336;
LABEL_164:
            v53 = (PVOID *)a4;
            goto LABEL_168;
          }
          v112 = v125;
          *v107 = 41;
          v54 = v107 + 1;
          ++v118;
          v55 = v108 - 1;
          *v54 = 0;
          v56 = &v112[*((unsigned __int16 *)v112 + 1)];
          v125 = v56;
          if ( v101 + 1 >= *(unsigned __int16 *)(a1 + 4) )
            goto LABEL_164;
          continue;
        }
      }
    }
    break;
  }
  AceCondition = 1336;
LABEL_166:
  v53 = (PVOID *)a4;
LABEL_167:
  v100 = v119;
LABEL_168:
  v113 = 0;
  if ( *(_WORD *)(a1 + 4) )
  {
    v114 = v128;
    do
    {
      if ( v114[v113] )
      {
        v115 = (void *)v100[v113];
        if ( v115 )
          ExFreePoolWithTag(v115, 0);
      }
      ++v113;
    }
    while ( v113 < *(unsigned __int16 *)(a1 + 4) );
  }
  ExFreePoolWithTag(v100, 0);
  ExFreePoolWithTag(v128, 0);
  ExFreePoolWithTag(v127, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( AceCondition )
  {
    if ( *v53 )
      ExFreePoolWithTag(*v53, 0);
    *v53 = 0LL;
    *a5 = 0;
  }
  else
  {
    *a5 = v11;
  }
  return AceCondition;
}
