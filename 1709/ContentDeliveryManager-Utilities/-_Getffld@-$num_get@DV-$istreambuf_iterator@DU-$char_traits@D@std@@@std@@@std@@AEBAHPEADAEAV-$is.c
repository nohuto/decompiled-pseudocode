/*
 * XREFs of ?_Getffld@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x18009A140
 * Callers:
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEAM@Z @ 0x18009D080 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18009D080.c)
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEAN@Z @ 0x18009D170 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18009D170.c)
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEAO@Z @ 0x18009D250 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18009D250.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180035938 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x180099238 (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@D@std@@@std@@YAAEBV?$numpunct@D@0@AEBVlocale@0@@Z @ 0x1800995EC (--$use_facet@V-$numpunct@D@std@@@std@@YAAEBV-$numpunct@D@0@AEBVlocale@0@@Z.c)
 *     ?_Getffldx@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x18009AC1C (-_Getffldx@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV-$i.c)
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x18009BE58 (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x18009E360 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800B3E2F (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::num_get<char,std::istreambuf_iterator<char>>::_Getffld(
        int a1,
        char *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r13
  __int64 v10; // rbx
  struct std::_Facet_base *v11; // r15
  void (__fastcall ***v12)(_QWORD, __int64); // rax
  void (__fastcall ***v13)(_QWORD, __int64); // r8
  char *v14; // r14
  __int64 v15; // rbx
  struct std::_Facet_base *v16; // rsi
  void (__fastcall ***v17)(_QWORD, __int64); // rax
  int v18; // ebx
  __int64 v19; // rcx
  unsigned __int8 *v20; // r8
  int v21; // edx
  int v22; // eax
  __int64 v23; // rcx
  unsigned __int8 *v24; // r8
  int v25; // edx
  int v26; // eax
  char v27; // si
  void **v28; // r12
  char v29; // r13
  unsigned __int64 v30; // r15
  __int64 v31; // rbx
  char v32; // al
  void **v33; // rsi
  int v34; // r12d
  __int64 v35; // rcx
  unsigned __int8 *v36; // r8
  int v37; // edx
  int v38; // eax
  char *v39; // rax
  char j; // cl
  unsigned __int64 v41; // rax
  void **v42; // rax
  void **v43; // rax
  void **v44; // rax
  __int64 v45; // rcx
  unsigned __int8 *v46; // r8
  int v47; // edx
  int v48; // eax
  void **v49; // rax
  void **v50; // rdx
  char v51; // cl
  void **v52; // rax
  void **v53; // rax
  int v54; // r15d
  __int64 v55; // rcx
  unsigned __int8 *v56; // r8
  int v57; // edx
  int v58; // eax
  char *v59; // rax
  char i; // cl
  unsigned __int64 v61; // rax
  __int64 v62; // rcx
  unsigned __int8 *v63; // r8
  int v64; // edx
  int v65; // eax
  int v66; // ebx
  __int64 v67; // rcx
  unsigned __int8 *v68; // r8
  int v69; // edx
  int v70; // eax
  unsigned int v71; // r15d
  __int64 v72; // rcx
  unsigned __int8 *v73; // r8
  int v74; // edx
  int v75; // eax
  char *v76; // rax
  char k; // cl
  unsigned __int64 v78; // rax
  __int64 v79; // rcx
  unsigned __int8 *v80; // r8
  int v81; // edx
  int v82; // eax
  __int64 v83; // rcx
  unsigned __int8 *v84; // r8
  int v85; // edx
  int v86; // eax
  int v87; // ebx
  __int64 v88; // rcx
  unsigned __int8 *v89; // r8
  int v90; // edx
  int v91; // eax
  __int64 v92; // rcx
  unsigned __int8 *v93; // r8
  int v94; // edx
  int v95; // eax
  __int64 v96; // rcx
  unsigned __int8 *v97; // r8
  int v98; // edx
  int v99; // eax
  __int64 v100; // rcx
  unsigned __int8 *v101; // r8
  int v102; // edx
  int v103; // eax
  char *v104; // rax
  char m; // cl
  unsigned __int64 v106; // rax
  char v107; // [rsp+38h] [rbp-79h]
  char v108; // [rsp+39h] [rbp-78h]
  int v109; // [rsp+3Ch] [rbp-75h]
  __int64 v110; // [rsp+40h] [rbp-71h] BYREF
  struct std::_Facet_base *v111; // [rsp+48h] [rbp-69h] BYREF
  __int64 v112; // [rsp+50h] [rbp-61h]
  void **v113; // [rsp+58h] [rbp-59h]
  char *v114; // [rsp+60h] [rbp-51h]
  __int64 v115; // [rsp+68h] [rbp-49h]
  void *v116[3]; // [rsp+70h] [rbp-41h] BYREF
  __int64 v117; // [rsp+88h] [rbp-29h]
  void *v118[3]; // [rsp+90h] [rbp-21h] BYREF
  unsigned __int64 v119; // [rsp+A8h] [rbp-9h]
  _BYTE v120[10]; // [rsp+B0h] [rbp-1h] BYREF
  char v121; // [rsp+BAh] [rbp+9h]
  char v122; // [rsp+BBh] [rbp+Ah]
  char v123; // [rsp+BCh] [rbp+Bh]
  char v124; // [rsp+BDh] [rbp+Ch]

  v115 = -2LL;
  v6 = a4;
  v112 = a4;
  v114 = a2;
  if ( (*(_DWORD *)(a5 + 24) & 0x3000) == 0x3000 )
    return std::num_get<char,std::istreambuf_iterator<char>>::_Getffldx(a1, (_DWORD)a2, (_DWORD)a3, a4, a5, a6);
  v10 = **(_QWORD **)(a5 + 64);
  v111 = (struct std::_Facet_base *)v10;
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v10 + 8LL))(v10, 12288LL, a6);
  v11 = std::use_facet<std::numpunct<char>>((__int64 *)&v111);
  v111 = v11;
  v12 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v13 = v12;
  if ( v12 )
    (**v12)(v12, 1LL);
  (*(void (__fastcall **)(struct std::_Facet_base *, void **, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v11 + 40LL))(
    v11,
    v118,
    v13);
  v14 = a2;
  v108 = 0;
  v15 = **(_QWORD **)(a5 + 64);
  v110 = v15;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v16 = std::use_facet<std::ctype<char>>(&v110);
  v17 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v18 = 0;
  if ( v17 )
    (**v17)(v17, 1LL);
  (*(void (__fastcall **)(struct std::_Facet_base *, const char *, char *, _BYTE *))(*(_QWORD *)v16 + 56LL))(
    v16,
    "0123456789-+Ee",
    "",
    v120);
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v19 = *a3;
      if ( !*a3
        || ((v20 = **(unsigned __int8 ***)(v19 + 56)) == 0LL ? (v21 = 0) : (v21 = **(_DWORD **)(v19 + 80)),
            v21 <= 0 ? (v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 48LL))(v19)) : (v22 = *v20),
            v22 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v22;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    if ( *((_BYTE *)a3 + 9) == v122 )
    {
      *a2 = 43;
LABEL_36:
      v14 = a2 + 1;
      std::istreambuf_iterator<char>::_Inc(a3);
      goto LABEL_37;
    }
    if ( !*((_BYTE *)a3 + 8) )
    {
      v23 = *a3;
      if ( !*a3
        || ((v24 = **(unsigned __int8 ***)(v23 + 56)) == 0LL ? (v25 = 0) : (v25 = **(_DWORD **)(v23 + 80)),
            v25 <= 0 ? (v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 48LL))(v23)) : (v26 = *v24),
            v26 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v26;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    if ( *((_BYTE *)a3 + 9) == v121 )
    {
      *a2 = 45;
      goto LABEL_36;
    }
  }
LABEL_37:
  v27 = 0;
  v107 = 0;
  LODWORD(v110) = 0;
  v109 = 0;
  v28 = v118;
  if ( v119 >= 0x10 )
    v28 = (void **)v118[0];
  v113 = v28;
  if ( (unsigned __int8)(*(_BYTE *)v28 - 1) > 0x7Du )
  {
    if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
      goto LABEL_144;
    v54 = 0;
    do
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v55 = *a3;
        if ( !*a3
          || ((v56 = **(unsigned __int8 ***)(v55 + 56)) == 0LL ? (v57 = 0) : (v57 = **(_DWORD **)(v55 + 80)),
              v57 <= 0 ? (v58 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 48LL))(v55)) : (v58 = *v56),
              v58 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v58;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      v59 = v120;
      for ( i = v120[0]; i && i != *((_BYTE *)a3 + 9); i = *v59 )
        ++v59;
      v61 = v59 - v120;
      if ( v61 >= 0xA )
        break;
      if ( v18 < 36 )
      {
        if ( v61 || v18 )
        {
          *v14++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffld'::`2'::_Src[v61];
          ++v18;
        }
      }
      else
      {
        ++v54;
      }
      v27 = 1;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
    v109 = v54;
    LODWORD(v110) = v18;
  }
  else
  {
    if ( v118[2] )
      v29 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v11 + 32LL))(v11);
    else
      v29 = 0;
    v30 = 15LL;
    v117 = 15LL;
    LOWORD(v116[0]) = 0;
    v116[2] = (void *)1;
    v31 = 0LL;
    v32 = std::istreambuf_iterator<char>::equal(a3, v112);
    v33 = (void **)v116[0];
    if ( !v32 )
    {
      v34 = 0;
      while ( 1 )
      {
        if ( !*((_BYTE *)a3 + 8) )
        {
          v35 = *a3;
          if ( !*a3
            || ((v36 = **(unsigned __int8 ***)(v35 + 56)) == 0LL ? (v37 = 0) : (v37 = **(_DWORD **)(v35 + 80)),
                v37 <= 0 ? (v38 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 48LL))(v35)) : (v38 = *v36),
                v38 == -1) )
          {
            *a3 = 0LL;
          }
          else
          {
            *((_BYTE *)a3 + 9) = v38;
          }
          *((_BYTE *)a3 + 8) = 1;
        }
        v39 = v120;
        for ( j = v120[0]; j && j != *((_BYTE *)a3 + 9); j = *v39 )
          ++v39;
        v41 = v39 - v120;
        if ( v41 >= 0xA )
        {
          v44 = v116;
          if ( v30 >= 0x10 )
            v44 = v33;
          if ( !*((_BYTE *)v44 + v31) || !v29 )
            goto LABEL_93;
          if ( !*((_BYTE *)a3 + 8) )
          {
            v45 = *a3;
            if ( !*a3
              || ((v46 = **(unsigned __int8 ***)(v45 + 56)) == 0LL ? (v47 = 0) : (v47 = **(_DWORD **)(v45 + 80)),
                  v47 <= 0 ? (v48 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 48LL))(v45)) : (v48 = *v46),
                  v48 == -1) )
            {
              *a3 = 0LL;
            }
            else
            {
              *((_BYTE *)a3 + 9) = v48;
            }
            *((_BYTE *)a3 + 8) = 1;
          }
          if ( *((_BYTE *)a3 + 9) != v29 )
          {
LABEL_93:
            LODWORD(v110) = v34;
            v28 = v113;
            if ( !v31 )
              break;
            v49 = v116;
            if ( v30 >= 0x10 )
              v49 = v33;
            if ( *((char *)v49 + v31) > 0 )
            {
              ++v31;
              break;
            }
LABEL_111:
            v108 = 1;
            goto LABEL_112;
          }
          std::string::append((size_t *)v116, 1uLL, 0);
          ++v31;
        }
        else
        {
          v107 = 1;
          if ( v34 < 36 )
          {
            if ( v41 || v34 )
            {
              *v14++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffld'::`2'::_Src[v41];
              ++v34;
            }
          }
          else
          {
            ++v109;
          }
          v42 = v116;
          if ( v30 >= 0x10 )
            v42 = v33;
          if ( *((_BYTE *)v42 + v31) == 127 )
            goto LABEL_92;
          v43 = v116;
          if ( v30 >= 0x10 )
            v43 = v33;
          ++*((_BYTE *)v43 + v31);
        }
        v33 = (void **)v116[0];
        v30 = v117;
LABEL_92:
        std::istreambuf_iterator<char>::_Inc(a3);
        if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v112) )
          goto LABEL_93;
      }
    }
    while ( 1 )
    {
      v50 = v28;
      if ( !v31 )
        break;
      v51 = *(_BYTE *)v28;
      if ( *(_BYTE *)v28 == 127 )
        break;
      if ( --v31 )
      {
        v52 = v116;
        if ( v30 >= 0x10 )
          v52 = v33;
        if ( v51 != *((_BYTE *)v52 + v31) )
          goto LABEL_111;
      }
      if ( !v31 )
      {
        v53 = v116;
        if ( v30 >= 0x10 )
          v53 = v33;
        if ( v51 < *(char *)v53 )
          goto LABEL_111;
      }
      v28 = (void **)((char *)v28 + 1);
      if ( *(char *)v28 <= 0 )
        v28 = v50;
    }
LABEL_112:
    if ( v30 >= 0x10 )
      operator delete(v33);
    v27 = v107;
    v6 = v112;
    v18 = v110;
  }
  v11 = v111;
  if ( v27 && !v18 )
    *v14++ = 48;
LABEL_144:
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v62 = *a3;
      if ( !*a3
        || ((v63 = **(unsigned __int8 ***)(v62 + 56)) == 0LL ? (v64 = 0) : (v64 = **(_DWORD **)(v62 + 80)),
            v64 <= 0 ? (v65 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v62 + 48LL))(v62)) : (v65 = *v63),
            v65 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v65;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    if ( *((_BYTE *)a3 + 9) == (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v11 + 24LL))(v11) )
    {
      *v14++ = *localeconv()->decimal_point;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
  }
  if ( v18 )
  {
    v71 = v109;
  }
  else
  {
    if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
    {
      v66 = v109;
      do
      {
        if ( !*((_BYTE *)a3 + 8) )
        {
          v67 = *a3;
          if ( !*a3
            || ((v68 = **(unsigned __int8 ***)(v67 + 56)) == 0LL ? (v69 = 0) : (v69 = **(_DWORD **)(v67 + 80)),
                v69 <= 0 ? (v70 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v67 + 48LL))(v67)) : (v70 = *v68),
                v70 == -1) )
          {
            *a3 = 0LL;
          }
          else
          {
            *((_BYTE *)a3 + 9) = v70;
          }
          *((_BYTE *)a3 + 8) = 1;
        }
        if ( *((_BYTE *)a3 + 9) != v120[0] )
          break;
        --v66;
        v27 = 1;
        std::istreambuf_iterator<char>::_Inc(a3);
      }
      while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
      v109 = v66;
      v18 = v110;
    }
    v71 = v109;
    if ( v109 < 0 )
    {
      *v14++ = 48;
      v71 = ++v109;
    }
  }
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    do
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v72 = *a3;
        if ( !*a3
          || ((v73 = **(unsigned __int8 ***)(v72 + 56)) == 0LL ? (v74 = 0) : (v74 = **(_DWORD **)(v72 + 80)),
              v74 <= 0 ? (v75 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v72 + 48LL))(v72)) : (v75 = *v73),
              v75 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v75;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      v76 = v120;
      for ( k = v120[0]; k && k != *((_BYTE *)a3 + 9); k = *v76 )
        ++v76;
      v78 = v76 - v120;
      if ( v78 >= 0xA )
        break;
      if ( v18 < 36 )
      {
        *v14++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffld'::`2'::_Src[v78];
        ++v18;
      }
      v27 = 1;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
    v71 = v109;
  }
  if ( !v27 || (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
    goto LABEL_299;
  if ( !*((_BYTE *)a3 + 8) )
  {
    v79 = *a3;
    if ( !*a3
      || ((v80 = **(unsigned __int8 ***)(v79 + 56)) == 0LL ? (v81 = 0) : (v81 = **(_DWORD **)(v79 + 80)),
          v81 <= 0 ? (v82 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v79 + 48LL))(v79)) : (v82 = *v80),
          v82 == -1) )
    {
      *a3 = 0LL;
    }
    else
    {
      *((_BYTE *)a3 + 9) = v82;
    }
    *((_BYTE *)a3 + 8) = 1;
  }
  if ( *((_BYTE *)a3 + 9) != v124 )
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
    if ( *((_BYTE *)a3 + 9) != v123 )
      goto LABEL_299;
  }
  *v14++ = 101;
  std::istreambuf_iterator<char>::_Inc(a3);
  v27 = 0;
  v87 = 0;
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v88 = *a3;
      if ( !*a3
        || ((v89 = **(unsigned __int8 ***)(v88 + 56)) == 0LL ? (v90 = 0) : (v90 = **(_DWORD **)(v88 + 80)),
            v90 <= 0 ? (v91 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v88 + 48LL))(v88)) : (v91 = *v89),
            v91 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v91;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    if ( *((_BYTE *)a3 + 9) == v122 )
    {
      *v14 = 43;
    }
    else
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v92 = *a3;
        if ( !*a3
          || ((v93 = **(unsigned __int8 ***)(v92 + 56)) == 0LL ? (v94 = 0) : (v94 = **(_DWORD **)(v92 + 80)),
              v94 <= 0 ? (v95 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v92 + 48LL))(v92)) : (v95 = *v93),
              v95 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v95;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      if ( *((_BYTE *)a3 + 9) != v121 )
        goto LABEL_260;
      *v14 = 45;
    }
    ++v14;
    std::istreambuf_iterator<char>::_Inc(a3);
  }
LABEL_260:
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    do
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v96 = *a3;
        if ( !*a3
          || ((v97 = **(unsigned __int8 ***)(v96 + 56)) == 0LL ? (v98 = 0) : (v98 = **(_DWORD **)(v96 + 80)),
              v98 <= 0 ? (v99 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v96 + 48LL))(v96)) : (v99 = *v97),
              v99 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v99;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      if ( *((_BYTE *)a3 + 9) != v120[0] )
        break;
      v27 = 1;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
    if ( v27 )
      *v14++ = 48;
  }
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    do
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v100 = *a3;
        if ( !*a3
          || ((v101 = **(unsigned __int8 ***)(v100 + 56)) == 0LL ? (v102 = 0) : (v102 = **(_DWORD **)(v100 + 80)),
              v102 <= 0 ? (v103 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v100 + 48LL))(v100)) : (v103 = *v101),
              v103 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v103;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      v104 = v120;
      for ( m = v120[0]; m && m != *((_BYTE *)a3 + 9); m = *v104 )
        ++v104;
      v106 = v104 - v120;
      if ( v106 >= 0xA )
        break;
      if ( v87 < 8 )
      {
        *v14++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffld'::`2'::_Src[v106];
        ++v87;
      }
      v27 = 1;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
    v71 = v109;
  }
LABEL_299:
  if ( v108 || !v27 )
    v14 = v114;
  *v14 = 0;
  if ( v119 >= 0x10 )
    operator delete(v118[0]);
  return v71;
}
