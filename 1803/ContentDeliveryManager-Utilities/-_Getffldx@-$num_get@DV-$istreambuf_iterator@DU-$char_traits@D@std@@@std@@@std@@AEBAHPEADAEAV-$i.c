/*
 * XREFs of ?_Getffldx@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800A7D74
 * Callers:
 *     ?_Getffld@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800A7278 (-_Getffld@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180038E2C (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x1800A62F8 (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@D@std@@@std@@YAAEBV?$numpunct@D@0@AEBVlocale@0@@Z @ 0x1800A66A0 (--$use_facet@V-$numpunct@D@std@@@std@@YAAEBV-$numpunct@D@0@AEBVlocale@0@@Z.c)
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x1800A9044 (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x1800AB5A0 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800C0E7F (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
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
  void (__fastcall ***v10)(_QWORD, __int64); // r8
  struct std::_Facet_base *v11; // r14
  void (__fastcall ***v12)(_QWORD, __int64); // rax
  __int64 v13; // rbx
  struct std::_Facet_base *v14; // rsi
  void (__fastcall ***v15)(_QWORD, __int64); // rax
  _WORD *v16; // rsi
  __int64 v17; // rcx
  unsigned __int8 *v18; // r8
  int v19; // edx
  int v20; // eax
  char *v21; // rsi
  __int64 v22; // rbx
  int v23; // r15d
  __int64 v24; // rcx
  unsigned __int8 *v25; // r8
  int v26; // edx
  int v27; // eax
  __int64 v28; // rcx
  unsigned __int8 *v29; // r8
  int v30; // edx
  int v31; // eax
  void **v32; // r12
  char v33; // r13
  unsigned __int64 v34; // r15
  char v35; // al
  void **v36; // r14
  int v37; // r12d
  __int64 v38; // rcx
  unsigned __int8 *v39; // r8
  int v40; // edx
  int v41; // eax
  char *v42; // rax
  char j; // cl
  unsigned __int64 v44; // rax
  void **v45; // rax
  void **v46; // rax
  void **v47; // rax
  __int64 v48; // rcx
  unsigned __int8 *v49; // r8
  int v50; // edx
  int v51; // eax
  void **v52; // rax
  void **v53; // rdx
  char v54; // cl
  void **v55; // rax
  void **v56; // rax
  char v57; // r15
  __int64 v58; // rcx
  unsigned __int8 *v59; // r8
  int v60; // edx
  __int64 v61; // rcx
  unsigned __int8 *v62; // r8
  int v63; // edx
  int v64; // eax
  char *v65; // rax
  char i; // cl
  unsigned __int64 v67; // rax
  int v68; // eax
  int v69; // ebx
  __int64 v70; // rcx
  unsigned __int8 *v71; // r8
  int v72; // edx
  int v73; // eax
  int v74; // r14d
  __int64 v75; // rcx
  unsigned __int8 *v76; // r8
  int v77; // edx
  int v78; // eax
  char *v79; // rax
  char k; // cl
  unsigned __int64 v81; // rax
  __int64 v82; // rcx
  unsigned __int8 *v83; // r8
  int v84; // edx
  int v85; // eax
  int v86; // ebx
  __int64 v87; // rcx
  unsigned __int8 *v88; // r8
  int v89; // edx
  int v90; // eax
  __int64 v91; // rcx
  unsigned __int8 *v92; // r8
  int v93; // edx
  int v94; // eax
  __int64 v95; // rcx
  unsigned __int8 *v96; // r8
  int v97; // edx
  int v98; // eax
  char *v99; // rax
  char m; // cl
  unsigned __int64 v101; // rax
  char v103; // [rsp+38h] [rbp-99h]
  char v104; // [rsp+39h] [rbp-98h]
  int v105; // [rsp+3Ch] [rbp-95h]
  __int64 v106; // [rsp+40h] [rbp-91h] BYREF
  struct std::_Facet_base *v107; // [rsp+48h] [rbp-89h] BYREF
  __int64 v108; // [rsp+50h] [rbp-81h]
  void **v109; // [rsp+58h] [rbp-79h]
  char *v110; // [rsp+60h] [rbp-71h]
  int *v111; // [rsp+68h] [rbp-69h]
  __int64 v112; // [rsp+70h] [rbp-61h]
  void *v113[3]; // [rsp+78h] [rbp-59h] BYREF
  __int64 v114; // [rsp+90h] [rbp-41h]
  void *v115[3]; // [rsp+98h] [rbp-39h] BYREF
  unsigned __int64 v116; // [rsp+B0h] [rbp-21h]
  _BYTE v117[22]; // [rsp+B8h] [rbp-19h] BYREF
  char v118; // [rsp+CEh] [rbp-3h]
  char v119; // [rsp+CFh] [rbp-2h]
  char v120; // [rsp+D0h] [rbp-1h]
  char v121; // [rsp+D1h] [rbp+0h]
  char v122; // [rsp+D2h] [rbp+1h]
  char v123; // [rsp+D3h] [rbp+2h]

  v112 = -2LL;
  v6 = a4;
  v108 = a4;
  v110 = a2;
  v111 = a6;
  v9 = **(_QWORD **)(a5 + 64);
  v107 = (struct std::_Facet_base *)v9;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v11 = std::use_facet<std::numpunct<char>>((__int64 *)&v107);
  v107 = v11;
  if ( v9 )
  {
    v12 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v10 = v12;
    if ( v12 )
      (**v12)(v12, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, void **, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v11 + 40LL))(
    v11,
    v115,
    v10);
  v13 = **(_QWORD **)(a5 + 64);
  v106 = v13;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  v14 = std::use_facet<std::ctype<char>>(&v106);
  if ( v13 )
  {
    v15 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v15 )
      (**v15)(v15, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, const char *, char *, _BYTE *))(*(_QWORD *)v14 + 56LL))(
    v14,
    "0123456789ABCDEFabcdef-+XxPp",
    "",
    v117);
  v16 = a2;
  v104 = 0;
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
    if ( *((_BYTE *)a3 + 9) == v119 )
    {
      *a2 = 43;
    }
    else
    {
      if ( *((_BYTE *)a3 + 9) != v118 )
        goto LABEL_25;
      *a2 = 45;
    }
    v16 = a2 + 1;
    std::istreambuf_iterator<char>::_Inc(a3);
  }
LABEL_25:
  *v16 = 30768;
  v21 = (char *)(v16 + 1);
  v103 = 0;
  v22 = 0LL;
  LODWORD(v106) = 0;
  v23 = 0;
  v105 = 0;
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v24 = *a3;
      if ( !*a3
        || ((v25 = **(unsigned __int8 ***)(v24 + 56)) == 0LL ? (v26 = 0) : (v26 = **(_DWORD **)(v24 + 80)),
            v26 <= 0 ? (v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 48LL))(v24)) : (v27 = *v25),
            v27 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v27;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    if ( *((_BYTE *)a3 + 9) == v117[0] )
    {
      std::istreambuf_iterator<char>::_Inc(a3);
      if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
        goto LABEL_55;
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
      if ( *((_BYTE *)a3 + 9) == v121 || *((_BYTE *)a3 + 9) == v120 )
        std::istreambuf_iterator<char>::_Inc(a3);
      else
LABEL_55:
        v103 = 1;
    }
  }
  v32 = v115;
  if ( v116 >= 0x10 )
    v32 = (void **)v115[0];
  v109 = v32;
  if ( (unsigned __int8)(*(_BYTE *)v32 - 1) > 0x7Du )
  {
    if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
      goto LABEL_135;
    do
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v61 = *a3;
        if ( !*a3
          || ((v62 = **(unsigned __int8 ***)(v61 + 56)) == 0LL ? (v63 = 0) : (v63 = **(_DWORD **)(v61 + 80)),
              v63 <= 0 ? (v64 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v61 + 48LL))(v61)) : (v64 = *v62),
              v64 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v64;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      v65 = v117;
      for ( i = v117[0]; i && i != *((_BYTE *)a3 + 9); i = *v65 )
        ++v65;
      v67 = v65 - v117;
      if ( v67 >= 0x16 )
        break;
      if ( (int)v22 < 36 )
      {
        if ( v67 || (_DWORD)v22 )
        {
          *v21++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffldx'::`2'::_Src[v67];
          LODWORD(v22) = v22 + 1;
        }
      }
      else
      {
        ++v23;
      }
      v103 = 1;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
    v105 = v23;
    LODWORD(v106) = v22;
  }
  else
  {
    if ( v115[2] )
      v33 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v11 + 32LL))(v11);
    else
      v33 = 0;
    v34 = 15LL;
    v114 = 15LL;
    LOWORD(v113[0]) = 0;
    v113[2] = (void *)1;
    v35 = std::istreambuf_iterator<char>::equal(a3, v108);
    v36 = (void **)v113[0];
    if ( !v35 )
    {
      v37 = v106;
      while ( 1 )
      {
        if ( !*((_BYTE *)a3 + 8) )
        {
          v38 = *a3;
          if ( !*a3
            || ((v39 = **(unsigned __int8 ***)(v38 + 56)) == 0LL ? (v40 = 0) : (v40 = **(_DWORD **)(v38 + 80)),
                v40 <= 0 ? (v41 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 48LL))(v38)) : (v41 = *v39),
                v41 == -1) )
          {
            *a3 = 0LL;
          }
          else
          {
            *((_BYTE *)a3 + 9) = v41;
          }
          *((_BYTE *)a3 + 8) = 1;
        }
        v42 = v117;
        for ( j = v117[0]; j && j != *((_BYTE *)a3 + 9); j = *v42 )
          ++v42;
        v44 = v42 - v117;
        if ( v44 >= 0x16 )
        {
          v47 = v113;
          if ( v34 >= 0x10 )
            v47 = v36;
          if ( !*((_BYTE *)v47 + v22) || !v33 )
            goto LABEL_112;
          if ( !*((_BYTE *)a3 + 8) )
          {
            v48 = *a3;
            if ( !*a3
              || ((v49 = **(unsigned __int8 ***)(v48 + 56)) == 0LL ? (v50 = 0) : (v50 = **(_DWORD **)(v48 + 80)),
                  v50 <= 0 ? (v51 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v48 + 48LL))(v48)) : (v51 = *v49),
                  v51 == -1) )
            {
              *a3 = 0LL;
            }
            else
            {
              *((_BYTE *)a3 + 9) = v51;
            }
            *((_BYTE *)a3 + 8) = 1;
          }
          if ( *((_BYTE *)a3 + 9) != v33 )
          {
LABEL_112:
            LODWORD(v106) = v37;
            v32 = v109;
            if ( !v22 )
              break;
            v52 = v113;
            if ( v34 >= 0x10 )
              v52 = v36;
            if ( *((char *)v52 + v22) > 0 )
            {
              ++v22;
              break;
            }
LABEL_130:
            v104 = 1;
            goto LABEL_131;
          }
          std::string::append((size_t *)v113, 1uLL, 0);
          ++v22;
        }
        else
        {
          v103 = 1;
          if ( v37 < 36 )
          {
            if ( v44 || v37 )
            {
              *v21++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffldx'::`2'::_Src[v44];
              ++v37;
            }
          }
          else
          {
            ++v105;
          }
          v45 = v113;
          if ( v34 >= 0x10 )
            v45 = v36;
          if ( *((_BYTE *)v45 + v22) == 127 )
            goto LABEL_111;
          v46 = v113;
          if ( v34 >= 0x10 )
            v46 = v36;
          ++*((_BYTE *)v46 + v22);
        }
        v36 = (void **)v113[0];
        v34 = v114;
LABEL_111:
        std::istreambuf_iterator<char>::_Inc(a3);
        if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v108) )
          goto LABEL_112;
      }
    }
    while ( 1 )
    {
      v53 = v32;
      if ( !v22 )
        break;
      v54 = *(_BYTE *)v32;
      if ( *(_BYTE *)v32 == 127 )
        break;
      if ( --v22 )
      {
        v55 = v113;
        if ( v34 >= 0x10 )
          v55 = v36;
        if ( v54 != *((_BYTE *)v55 + v22) )
          goto LABEL_130;
      }
      if ( !v22 )
      {
        v56 = v113;
        if ( v34 >= 0x10 )
          v56 = v36;
        if ( v54 < *(char *)v56 )
          goto LABEL_130;
      }
      v32 = (void **)((char *)v32 + 1);
      if ( *(char *)v32 <= 0 )
        v32 = v53;
    }
LABEL_131:
    if ( v34 >= 0x10 )
      operator delete(v36);
    v6 = v108;
    LODWORD(v22) = v106;
  }
  v11 = v107;
LABEL_135:
  v57 = v103;
  if ( v103 && !(_DWORD)v22 )
    *v21++ = 48;
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v58 = *a3;
      if ( !*a3
        || ((v59 = **(unsigned __int8 ***)(v58 + 56)) == 0LL ? (v60 = 0) : (v60 = **(_DWORD **)(v58 + 80)),
            v60 <= 0 ? (v68 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v58 + 48LL))(v58)) : (v68 = *v59),
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
    if ( *((_BYTE *)a3 + 9) == (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v11 + 24LL))(v11) )
    {
      *v21++ = *localeconv()->decimal_point;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
  }
  if ( (_DWORD)v22 )
  {
    v74 = v105;
  }
  else
  {
    if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
    {
      v69 = v105;
      do
      {
        if ( !*((_BYTE *)a3 + 8) )
        {
          v70 = *a3;
          if ( !*a3
            || ((v71 = **(unsigned __int8 ***)(v70 + 56)) == 0LL ? (v72 = 0) : (v72 = **(_DWORD **)(v70 + 80)),
                v72 <= 0 ? (v73 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v70 + 48LL))(v70)) : (v73 = *v71),
                v73 == -1) )
          {
            *a3 = 0LL;
          }
          else
          {
            *((_BYTE *)a3 + 9) = v73;
          }
          *((_BYTE *)a3 + 8) = 1;
        }
        if ( *((_BYTE *)a3 + 9) != v117[0] )
          break;
        --v69;
        v57 = 1;
        std::istreambuf_iterator<char>::_Inc(a3);
      }
      while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
      v105 = v69;
      LODWORD(v22) = v106;
    }
    v74 = v105;
    if ( v105 < 0 )
    {
      *v21++ = 48;
      v74 = ++v105;
    }
  }
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    do
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v75 = *a3;
        if ( !*a3
          || ((v76 = **(unsigned __int8 ***)(v75 + 56)) == 0LL ? (v77 = 0) : (v77 = **(_DWORD **)(v75 + 80)),
              v77 <= 0 ? (v78 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v75 + 48LL))(v75)) : (v78 = *v76),
              v78 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v78;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      v79 = v117;
      for ( k = v117[0]; k && k != *((_BYTE *)a3 + 9); k = *v79 )
        ++v79;
      v81 = v79 - v117;
      if ( v81 >= 0x16 )
        break;
      if ( (int)v22 < 36 )
      {
        *v21++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffldx'::`2'::_Src[v81];
        LODWORD(v22) = v22 + 1;
      }
      v57 = 1;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
    v74 = v105;
  }
  if ( v57 && !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v82 = *a3;
      if ( !*a3
        || ((v83 = **(unsigned __int8 ***)(v82 + 56)) == 0LL ? (v84 = 0) : (v84 = **(_DWORD **)(v82 + 80)),
            v84 <= 0 ? (v85 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v82 + 48LL))(v82)) : (v85 = *v83),
            v85 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v85;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    if ( *((_BYTE *)a3 + 9) == v123 || *((_BYTE *)a3 + 9) == v122 )
    {
      *v21++ = 112;
      std::istreambuf_iterator<char>::_Inc(a3);
      v57 = 0;
      v86 = 0;
      if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
      {
        if ( !*((_BYTE *)a3 + 8) )
        {
          v87 = *a3;
          if ( !*a3
            || ((v88 = **(unsigned __int8 ***)(v87 + 56)) == 0LL ? (v89 = 0) : (v89 = **(_DWORD **)(v87 + 80)),
                v89 <= 0 ? (v90 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v87 + 48LL))(v87)) : (v90 = *v88),
                v90 == -1) )
          {
            *a3 = 0LL;
          }
          else
          {
            *((_BYTE *)a3 + 9) = v90;
          }
          *((_BYTE *)a3 + 8) = 1;
        }
        if ( *((_BYTE *)a3 + 9) == v119 )
        {
          *v21 = 43;
LABEL_254:
          ++v21;
          std::istreambuf_iterator<char>::_Inc(a3);
          goto LABEL_255;
        }
        if ( *((_BYTE *)a3 + 9) == v118 )
        {
          *v21 = 45;
          goto LABEL_254;
        }
      }
LABEL_255:
      if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
      {
        do
        {
          if ( !*((_BYTE *)a3 + 8) )
          {
            v91 = *a3;
            if ( !*a3
              || ((v92 = **(unsigned __int8 ***)(v91 + 56)) == 0LL ? (v93 = 0) : (v93 = **(_DWORD **)(v91 + 80)),
                  v93 <= 0 ? (v94 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v91 + 48LL))(v91)) : (v94 = *v92),
                  v94 == -1) )
            {
              *a3 = 0LL;
            }
            else
            {
              *((_BYTE *)a3 + 9) = v94;
            }
            *((_BYTE *)a3 + 8) = 1;
          }
          if ( *((_BYTE *)a3 + 9) != v117[0] )
            break;
          v57 = 1;
          std::istreambuf_iterator<char>::_Inc(a3);
        }
        while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
        if ( v57 )
          *v21++ = 48;
      }
      if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
      {
        do
        {
          if ( !*((_BYTE *)a3 + 8) )
          {
            v95 = *a3;
            if ( !*a3
              || ((v96 = **(unsigned __int8 ***)(v95 + 56)) == 0LL ? (v97 = 0) : (v97 = **(_DWORD **)(v95 + 80)),
                  v97 <= 0 ? (v98 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v95 + 48LL))(v95)) : (v98 = *v96),
                  v98 == -1) )
            {
              *a3 = 0LL;
            }
            else
            {
              *((_BYTE *)a3 + 9) = v98;
            }
            *((_BYTE *)a3 + 8) = 1;
          }
          v99 = v117;
          for ( m = v117[0]; m && m != *((_BYTE *)a3 + 9); m = *v99 )
            ++v99;
          v101 = v99 - v117;
          if ( v101 >= 0x16 )
            break;
          if ( v86 < 8 )
          {
            *v21++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffldx'::`2'::_Src[v101];
            ++v86;
          }
          v57 = 1;
          std::istreambuf_iterator<char>::_Inc(a3);
        }
        while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
        v74 = v105;
      }
    }
  }
  if ( v104 || !v57 )
    v21 = v110;
  *v21 = 0;
  *v111 = v74;
  if ( v116 >= 0x10 )
    operator delete(v115[0]);
  return 0LL;
}
