/*
 * XREFs of ?_Getffldx@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x18009AC1C
 * Callers:
 *     ?_Getffld@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x18009A140 (-_Getffld@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180035938 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x180099238 (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@D@std@@@std@@YAAEBV?$numpunct@D@0@AEBVlocale@0@@Z @ 0x1800995EC (--$use_facet@V-$numpunct@D@std@@@std@@YAAEBV-$numpunct@D@0@AEBVlocale@0@@Z.c)
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x18009BE58 (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x18009E360 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800B3E2F (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::num_get<char,std::istreambuf_iterator<char>>::_Getffldx(
        __int64 a1,
        _BYTE *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        int *a6)
{
  __int64 v6; // r13
  __int64 v9; // rbx
  struct std::_Facet_base *v10; // r14
  void (__fastcall ***v11)(_QWORD, __int64); // rax
  void (__fastcall ***v12)(_QWORD, __int64); // r8
  __int64 v13; // rbx
  struct std::_Facet_base *v14; // rsi
  void (__fastcall ***v15)(_QWORD, __int64); // rax
  _WORD *v16; // rsi
  __int64 v17; // rcx
  unsigned __int8 *v18; // r8
  int v19; // edx
  int v20; // eax
  __int64 v21; // rcx
  unsigned __int8 *v22; // r8
  int v23; // edx
  int v24; // eax
  char *v25; // rsi
  __int64 v26; // rbx
  int v27; // r15d
  __int64 v28; // rcx
  unsigned __int8 *v29; // r8
  int v30; // edx
  int v31; // eax
  __int64 v32; // rcx
  unsigned __int8 *v33; // r8
  int v34; // edx
  int v35; // eax
  __int64 v36; // rcx
  unsigned __int8 *v37; // r8
  int v38; // edx
  int v39; // eax
  void **v40; // r12
  char v41; // r13
  unsigned __int64 v42; // r15
  char v43; // al
  void **v44; // r14
  int v45; // r12d
  __int64 v46; // rcx
  unsigned __int8 *v47; // r8
  int v48; // edx
  int v49; // eax
  char *v50; // rax
  char i; // cl
  unsigned __int64 v52; // rax
  void **v53; // rax
  void **v54; // rax
  void **v55; // rax
  __int64 v56; // rcx
  unsigned __int8 *v57; // r8
  int v58; // edx
  int v59; // eax
  void **v60; // rax
  void **v61; // rdx
  char v62; // cl
  void **v63; // rax
  void **v64; // rax
  __int64 v65; // rcx
  unsigned __int8 *v66; // r8
  int v67; // edx
  int v68; // eax
  char *v69; // rax
  char j; // cl
  unsigned __int64 v71; // rax
  char v72; // r15
  __int64 v73; // rcx
  unsigned __int8 *v74; // r8
  int v75; // edx
  int v76; // eax
  int v77; // ebx
  __int64 v78; // rcx
  unsigned __int8 *v79; // r8
  int v80; // edx
  int v81; // eax
  int v82; // r14d
  __int64 v83; // rcx
  unsigned __int8 *v84; // r8
  int v85; // edx
  int v86; // eax
  char *v87; // rax
  char k; // cl
  unsigned __int64 v89; // rax
  __int64 v90; // rcx
  unsigned __int8 *v91; // r8
  int v92; // edx
  int v93; // eax
  __int64 v94; // rcx
  unsigned __int8 *v95; // r8
  int v96; // edx
  int v97; // eax
  int v98; // ebx
  __int64 v99; // rcx
  unsigned __int8 *v100; // r8
  int v101; // edx
  int v102; // eax
  __int64 v103; // rcx
  unsigned __int8 *v104; // r8
  int v105; // edx
  int v106; // eax
  __int64 v107; // rcx
  unsigned __int8 *v108; // r8
  int v109; // edx
  int v110; // eax
  __int64 v111; // rcx
  unsigned __int8 *v112; // r8
  int v113; // edx
  int v114; // eax
  char *v115; // rax
  char m; // cl
  unsigned __int64 v117; // rax
  char v119; // [rsp+38h] [rbp-99h]
  char v120; // [rsp+39h] [rbp-98h]
  int v121; // [rsp+3Ch] [rbp-95h]
  __int64 v122; // [rsp+40h] [rbp-91h] BYREF
  struct std::_Facet_base *v123; // [rsp+48h] [rbp-89h] BYREF
  __int64 v124; // [rsp+50h] [rbp-81h]
  void **v125; // [rsp+58h] [rbp-79h]
  char *v126; // [rsp+60h] [rbp-71h]
  int *v127; // [rsp+68h] [rbp-69h]
  __int64 v128; // [rsp+70h] [rbp-61h]
  void *v129[3]; // [rsp+78h] [rbp-59h] BYREF
  __int64 v130; // [rsp+90h] [rbp-41h]
  void *v131[3]; // [rsp+98h] [rbp-39h] BYREF
  unsigned __int64 v132; // [rsp+B0h] [rbp-21h]
  _BYTE v133[22]; // [rsp+B8h] [rbp-19h] BYREF
  char v134; // [rsp+CEh] [rbp-3h]
  char v135; // [rsp+CFh] [rbp-2h]
  char v136; // [rsp+D0h] [rbp-1h]
  char v137; // [rsp+D1h] [rbp+0h]
  char v138; // [rsp+D2h] [rbp+1h]
  char v139; // [rsp+D3h] [rbp+2h]

  v128 = -2LL;
  v6 = a4;
  v124 = a4;
  v126 = a2;
  v127 = a6;
  v9 = **(_QWORD **)(a5 + 64);
  v123 = (struct std::_Facet_base *)v9;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v10 = std::use_facet<std::numpunct<char>>((__int64 *)&v123);
  v123 = v10;
  v11 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v12 = v11;
  if ( v11 )
    (**v11)(v11, 1LL);
  (*(void (__fastcall **)(struct std::_Facet_base *, void **, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v10 + 40LL))(
    v10,
    v131,
    v12);
  v13 = **(_QWORD **)(a5 + 64);
  v122 = v13;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  v14 = std::use_facet<std::ctype<char>>(&v122);
  v15 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v15 )
    (**v15)(v15, 1LL);
  (*(void (__fastcall **)(struct std::_Facet_base *, const char *, char *, _BYTE *))(*(_QWORD *)v14 + 56LL))(
    v14,
    "0123456789ABCDEFabcdef-+XxPp",
    "",
    v133);
  v16 = a2;
  v120 = 0;
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v17 = *a3;
      if ( !*a3
        || ((v18 = **(unsigned __int8 ***)(v17 + 56)) == 0LL ? (v19 = 0) : (v19 = **(_DWORD **)(v17 + 80)),
            v19 <= 0 ? (v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 48LL))(v17)) : (v20 = *v18),
            v20 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v20;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    if ( *((_BYTE *)a3 + 9) == v135 )
    {
      *a2 = 43;
LABEL_34:
      v16 = a2 + 1;
      std::istreambuf_iterator<char>::_Inc(a3);
      goto LABEL_35;
    }
    if ( !*((_BYTE *)a3 + 8) )
    {
      v21 = *a3;
      if ( !*a3
        || ((v22 = **(unsigned __int8 ***)(v21 + 56)) == 0LL ? (v23 = 0) : (v23 = **(_DWORD **)(v21 + 80)),
            v23 <= 0 ? (v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 48LL))(v21)) : (v24 = *v22),
            v24 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v24;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    if ( *((_BYTE *)a3 + 9) == v134 )
    {
      *a2 = 45;
      goto LABEL_34;
    }
  }
LABEL_35:
  *v16 = 30768;
  v25 = (char *)(v16 + 1);
  v119 = 0;
  v26 = 0LL;
  LODWORD(v122) = 0;
  v27 = 0;
  v121 = 0;
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v28 = *a3;
      if ( !*a3
        || ((v29 = **(unsigned __int8 ***)(v28 + 56)) == 0LL ? (v30 = 0) : (v30 = **(_DWORD **)(v28 + 80)),
            v30 <= 0 ? (v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 48LL))(v28)) : (v31 = *v29),
            v31 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v31;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    if ( *((_BYTE *)a3 + 9) == v133[0] )
    {
      std::istreambuf_iterator<char>::_Inc(a3);
      if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
        goto LABEL_77;
      if ( !*((_BYTE *)a3 + 8) )
      {
        v32 = *a3;
        if ( !*a3
          || ((v33 = **(unsigned __int8 ***)(v32 + 56)) == 0LL ? (v34 = 0) : (v34 = **(_DWORD **)(v32 + 80)),
              v34 <= 0 ? (v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 48LL))(v32)) : (v35 = *v33),
              v35 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v35;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      if ( *((_BYTE *)a3 + 9) == v137 )
        goto LABEL_76;
      if ( !*((_BYTE *)a3 + 8) )
      {
        v36 = *a3;
        if ( !*a3
          || ((v37 = **(unsigned __int8 ***)(v36 + 56)) == 0LL ? (v38 = 0) : (v38 = **(_DWORD **)(v36 + 80)),
              v38 <= 0 ? (v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 48LL))(v36)) : (v39 = *v37),
              v39 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v39;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      if ( *((_BYTE *)a3 + 9) == v136 )
LABEL_76:
        std::istreambuf_iterator<char>::_Inc(a3);
      else
LABEL_77:
        v119 = 1;
    }
  }
  v40 = v131;
  if ( v132 >= 0x10 )
    v40 = (void **)v131[0];
  v125 = v40;
  if ( (unsigned __int8)(*(_BYTE *)v40 - 1) <= 0x7Du )
  {
    if ( v131[2] )
      v41 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v10 + 32LL))(v10);
    else
      v41 = 0;
    v42 = 15LL;
    v130 = 15LL;
    LOWORD(v129[0]) = 0;
    v129[2] = (void *)1;
    v43 = std::istreambuf_iterator<char>::equal(a3, v124);
    v44 = (void **)v129[0];
    if ( !v43 )
    {
      v45 = v122;
      while ( 1 )
      {
        if ( !*((_BYTE *)a3 + 8) )
        {
          v46 = *a3;
          if ( !*a3
            || ((v47 = **(unsigned __int8 ***)(v46 + 56)) == 0LL ? (v48 = 0) : (v48 = **(_DWORD **)(v46 + 80)),
                v48 <= 0 ? (v49 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46 + 48LL))(v46)) : (v49 = *v47),
                v49 == -1) )
          {
            *a3 = 0LL;
          }
          else
          {
            *((_BYTE *)a3 + 9) = v49;
          }
          *((_BYTE *)a3 + 8) = 1;
        }
        v50 = v133;
        for ( i = v133[0]; i && i != *((_BYTE *)a3 + 9); i = *v50 )
          ++v50;
        v52 = v50 - v133;
        if ( v52 >= 0x16 )
        {
          v55 = v129;
          if ( v42 >= 0x10 )
            v55 = v44;
          if ( !*((_BYTE *)v55 + v26) || !v41 )
            goto LABEL_134;
          if ( !*((_BYTE *)a3 + 8) )
          {
            v56 = *a3;
            if ( !*a3
              || ((v57 = **(unsigned __int8 ***)(v56 + 56)) == 0LL ? (v58 = 0) : (v58 = **(_DWORD **)(v56 + 80)),
                  v58 <= 0 ? (v59 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v56 + 48LL))(v56)) : (v59 = *v57),
                  v59 == -1) )
            {
              *a3 = 0LL;
            }
            else
            {
              *((_BYTE *)a3 + 9) = v59;
            }
            *((_BYTE *)a3 + 8) = 1;
          }
          if ( *((_BYTE *)a3 + 9) != v41 )
          {
LABEL_134:
            LODWORD(v122) = v45;
            v40 = v125;
            if ( !v26 )
              break;
            v60 = v129;
            if ( v42 >= 0x10 )
              v60 = v44;
            if ( *((char *)v60 + v26) > 0 )
            {
              ++v26;
              break;
            }
LABEL_152:
            v120 = 1;
            goto LABEL_153;
          }
          std::string::append((size_t *)v129, 1uLL, 0);
          ++v26;
        }
        else
        {
          v119 = 1;
          if ( v45 < 36 )
          {
            if ( v52 || v45 )
            {
              *v25++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffldx'::`2'::_Src[v52];
              ++v45;
            }
          }
          else
          {
            ++v121;
          }
          v53 = v129;
          if ( v42 >= 0x10 )
            v53 = v44;
          if ( *((_BYTE *)v53 + v26) == 127 )
            goto LABEL_133;
          v54 = v129;
          if ( v42 >= 0x10 )
            v54 = v44;
          ++*((_BYTE *)v54 + v26);
        }
        v44 = (void **)v129[0];
        v42 = v130;
LABEL_133:
        std::istreambuf_iterator<char>::_Inc(a3);
        if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v124) )
          goto LABEL_134;
      }
    }
    while ( 1 )
    {
      v61 = v40;
      if ( !v26 )
        break;
      v62 = *(_BYTE *)v40;
      if ( *(_BYTE *)v40 == 127 )
        break;
      if ( --v26 )
      {
        v63 = v129;
        if ( v42 >= 0x10 )
          v63 = v44;
        if ( v62 != *((_BYTE *)v63 + v26) )
          goto LABEL_152;
      }
      if ( !v26 )
      {
        v64 = v129;
        if ( v42 >= 0x10 )
          v64 = v44;
        if ( v62 < *(char *)v64 )
          goto LABEL_152;
      }
      v40 = (void **)((char *)v40 + 1);
      if ( *(char *)v40 <= 0 )
        v40 = v61;
    }
LABEL_153:
    if ( v42 >= 0x10 )
      operator delete(v44);
    v6 = v124;
    LODWORD(v26) = v122;
    goto LABEL_181;
  }
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    do
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v65 = *a3;
        if ( !*a3
          || ((v66 = **(unsigned __int8 ***)(v65 + 56)) == 0LL ? (v67 = 0) : (v67 = **(_DWORD **)(v65 + 80)),
              v67 <= 0 ? (v68 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v65 + 48LL))(v65)) : (v68 = *v66),
              v68 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v68;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      v69 = v133;
      for ( j = v133[0]; j && j != *((_BYTE *)a3 + 9); j = *v69 )
        ++v69;
      v71 = v69 - v133;
      if ( v71 >= 0x16 )
        break;
      if ( (int)v26 < 36 )
      {
        if ( v71 || (_DWORD)v26 )
        {
          *v25++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffldx'::`2'::_Src[v71];
          LODWORD(v26) = v26 + 1;
        }
      }
      else
      {
        ++v27;
      }
      v119 = 1;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
    v121 = v27;
    LODWORD(v122) = v26;
LABEL_181:
    v10 = v123;
  }
  v72 = v119;
  if ( v119 && !(_DWORD)v26 )
    *v25++ = 48;
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v73 = *a3;
      if ( !*a3
        || ((v74 = **(unsigned __int8 ***)(v73 + 56)) == 0LL ? (v75 = 0) : (v75 = **(_DWORD **)(v73 + 80)),
            v75 <= 0 ? (v76 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v73 + 48LL))(v73)) : (v76 = *v74),
            v76 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v76;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    if ( *((_BYTE *)a3 + 9) == (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v10 + 24LL))(v10) )
    {
      *v25++ = *localeconv()->decimal_point;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
  }
  if ( (_DWORD)v26 )
  {
    v82 = v121;
  }
  else
  {
    if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
    {
      v77 = v121;
      do
      {
        if ( !*((_BYTE *)a3 + 8) )
        {
          v78 = *a3;
          if ( !*a3
            || ((v79 = **(unsigned __int8 ***)(v78 + 56)) == 0LL ? (v80 = 0) : (v80 = **(_DWORD **)(v78 + 80)),
                v80 <= 0 ? (v81 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v78 + 48LL))(v78)) : (v81 = *v79),
                v81 == -1) )
          {
            *a3 = 0LL;
          }
          else
          {
            *((_BYTE *)a3 + 9) = v81;
          }
          *((_BYTE *)a3 + 8) = 1;
        }
        if ( *((_BYTE *)a3 + 9) != v133[0] )
          break;
        --v77;
        v72 = 1;
        std::istreambuf_iterator<char>::_Inc(a3);
      }
      while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
      v121 = v77;
      LODWORD(v26) = v122;
    }
    v82 = v121;
    if ( v121 < 0 )
    {
      *v25++ = 48;
      v82 = ++v121;
    }
  }
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    do
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v83 = *a3;
        if ( !*a3
          || ((v84 = **(unsigned __int8 ***)(v83 + 56)) == 0LL ? (v85 = 0) : (v85 = **(_DWORD **)(v83 + 80)),
              v85 <= 0 ? (v86 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v83 + 48LL))(v83)) : (v86 = *v84),
              v86 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v86;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      v87 = v133;
      for ( k = v133[0]; k && k != *((_BYTE *)a3 + 9); k = *v87 )
        ++v87;
      v89 = v87 - v133;
      if ( v89 >= 0x16 )
        break;
      if ( (int)v26 < 36 )
      {
        *v25++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffldx'::`2'::_Src[v89];
        LODWORD(v26) = v26 + 1;
      }
      v72 = 1;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
    v82 = v121;
  }
  if ( v72 && !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v90 = *a3;
      if ( !*a3
        || ((v91 = **(unsigned __int8 ***)(v90 + 56)) == 0LL ? (v92 = 0) : (v92 = **(_DWORD **)(v90 + 80)),
            v92 <= 0 ? (v93 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v90 + 48LL))(v90)) : (v93 = *v91),
            v93 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v93;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    if ( *((_BYTE *)a3 + 9) == v139 )
      goto LABEL_271;
    if ( !*((_BYTE *)a3 + 8) )
    {
      v94 = *a3;
      if ( !*a3
        || ((v95 = **(unsigned __int8 ***)(v94 + 56)) == 0LL ? (v96 = 0) : (v96 = **(_DWORD **)(v94 + 80)),
            v96 <= 0 ? (v97 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v94 + 48LL))(v94)) : (v97 = *v95),
            v97 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v97;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    if ( *((_BYTE *)a3 + 9) == v138 )
    {
LABEL_271:
      *v25++ = 112;
      std::istreambuf_iterator<char>::_Inc(a3);
      v72 = 0;
      v98 = 0;
      if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
      {
        if ( !*((_BYTE *)a3 + 8) )
        {
          v99 = *a3;
          if ( !*a3
            || ((v100 = **(unsigned __int8 ***)(v99 + 56)) == 0LL ? (v101 = 0) : (v101 = **(_DWORD **)(v99 + 80)),
                v101 <= 0 ? (v102 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v99 + 48LL))(v99)) : (v102 = *v100),
                v102 == -1) )
          {
            *a3 = 0LL;
          }
          else
          {
            *((_BYTE *)a3 + 9) = v102;
          }
          *((_BYTE *)a3 + 8) = 1;
        }
        if ( *((_BYTE *)a3 + 9) == v135 )
        {
          *v25 = 43;
        }
        else
        {
          if ( !*((_BYTE *)a3 + 8) )
          {
            v103 = *a3;
            if ( !*a3
              || ((v104 = **(unsigned __int8 ***)(v103 + 56)) == 0LL ? (v105 = 0) : (v105 = **(_DWORD **)(v103 + 80)),
                  v105 <= 0
                ? (v106 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v103 + 48LL))(v103))
                : (v106 = *v104),
                  v106 == -1) )
            {
              *a3 = 0LL;
            }
            else
            {
              *((_BYTE *)a3 + 9) = v106;
            }
            *((_BYTE *)a3 + 8) = 1;
          }
          if ( *((_BYTE *)a3 + 9) != v134 )
            goto LABEL_301;
          *v25 = 45;
        }
        ++v25;
        std::istreambuf_iterator<char>::_Inc(a3);
      }
LABEL_301:
      if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
      {
        do
        {
          if ( !*((_BYTE *)a3 + 8) )
          {
            v107 = *a3;
            if ( !*a3
              || ((v108 = **(unsigned __int8 ***)(v107 + 56)) == 0LL ? (v109 = 0) : (v109 = **(_DWORD **)(v107 + 80)),
                  v109 <= 0
                ? (v110 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v107 + 48LL))(v107))
                : (v110 = *v108),
                  v110 == -1) )
            {
              *a3 = 0LL;
            }
            else
            {
              *((_BYTE *)a3 + 9) = v110;
            }
            *((_BYTE *)a3 + 8) = 1;
          }
          if ( *((_BYTE *)a3 + 9) != v133[0] )
            break;
          v72 = 1;
          std::istreambuf_iterator<char>::_Inc(a3);
        }
        while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
        if ( v72 )
          *v25++ = 48;
      }
      if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
      {
        do
        {
          if ( !*((_BYTE *)a3 + 8) )
          {
            v111 = *a3;
            if ( !*a3
              || ((v112 = **(unsigned __int8 ***)(v111 + 56)) == 0LL ? (v113 = 0) : (v113 = **(_DWORD **)(v111 + 80)),
                  v113 <= 0
                ? (v114 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v111 + 48LL))(v111))
                : (v114 = *v112),
                  v114 == -1) )
            {
              *a3 = 0LL;
            }
            else
            {
              *((_BYTE *)a3 + 9) = v114;
            }
            *((_BYTE *)a3 + 8) = 1;
          }
          v115 = v133;
          for ( m = v133[0]; m && m != *((_BYTE *)a3 + 9); m = *v115 )
            ++v115;
          v117 = v115 - v133;
          if ( v117 >= 0x16 )
            break;
          if ( v98 < 8 )
          {
            *v25++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffldx'::`2'::_Src[v117];
            ++v98;
          }
          v72 = 1;
          std::istreambuf_iterator<char>::_Inc(a3);
        }
        while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
        v82 = v121;
      }
    }
  }
  if ( v120 || !v72 )
    v25 = v126;
  *v25 = 0;
  *v127 = v82;
  if ( v132 >= 0x10 )
    operator delete(v131[0]);
  return 0LL;
}
