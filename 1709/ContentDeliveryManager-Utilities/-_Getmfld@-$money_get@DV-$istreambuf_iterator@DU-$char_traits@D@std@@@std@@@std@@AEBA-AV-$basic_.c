/*
 * XREFs of ?_Getmfld@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0_NAEAVios_base@2@PEAD@Z @ 0x1800AEC04
 * Callers:
 *     ?do_get@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAO@Z @ 0x1800B0E50 (-do_get@-$money_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$istreamb.c)
 *     ?do_get@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z @ 0x1800B0F50 (-do_get@-$money_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA_ea_1800B0F50.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180035938 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18004A6C8 (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x180099238 (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x18009BE58 (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x18009E360 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z @ 0x18009E43C (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z.c)
 *     ??$use_facet@V?$moneypunct@D$00@std@@@std@@YAAEBV?$moneypunct@D$00@0@AEBVlocale@0@@Z @ 0x1800AD9CC (--$use_facet@V-$moneypunct@D$00@std@@@std@@YAAEBV-$moneypunct@D$00@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$moneypunct@D$0A@@std@@@std@@YAAEBV?$moneypunct@D$0A@@0@AEBVlocale@0@@Z @ 0x1800ADB08 (--$use_facet@V-$moneypunct@D$0A@@std@@@std@@YAAEBV-$moneypunct@D$0A@@0@AEBVlocale@0@@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800B3E2F (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
size_t *__fastcall std::money_get<char,std::istreambuf_iterator<char>>::_Getmfld(
        __int64 a1,
        size_t *a2,
        __int64 a3,
        __int64 *a4,
        char a5,
        __int64 a6,
        char *a7)
{
  size_t *v8; // r15
  __int64 v9; // rbx
  int v10; // esi
  struct std::_Facet_base *v11; // r12
  void (__fastcall ***v12)(_QWORD, __int64); // rax
  char v13; // r13
  __int64 v14; // rbx
  int v15; // r14d
  struct std::_Facet_base *v16; // rsi
  void (__fastcall ***v17)(_QWORD, __int64); // rax
  unsigned __int64 v18; // rsi
  char v19; // al
  int v20; // r13d
  int v21; // r12d
  struct std::_Facet_base *v22; // rbx
  char v23; // r15
  void **v24; // rcx
  unsigned __int64 v25; // r14
  __int64 v26; // rbx
  char v27; // al
  void **v28; // rsi
  size_t *v29; // r12
  __int64 *v30; // r13
  __int64 v31; // rcx
  unsigned __int8 *v32; // r8
  int v33; // edx
  int v34; // eax
  char *v35; // rax
  char k; // cl
  unsigned __int64 v37; // rax
  void **v38; // rax
  void **v39; // rax
  void **v40; // rax
  __int64 v41; // rcx
  unsigned __int8 *v42; // r8
  int v43; // edx
  int v44; // eax
  void **v45; // rax
  char v46; // r15
  void **v47; // rcx
  void *v48; // r9
  unsigned __int64 v49; // r8
  void **v50; // r10
  char v51; // dl
  void **v52; // rax
  void **v53; // rax
  __int64 *v54; // rsi
  char *v55; // r14
  __int64 v56; // rcx
  unsigned __int8 *v57; // r8
  int v58; // edx
  int v59; // eax
  char *v60; // rax
  char i; // cl
  unsigned __int64 v62; // rax
  char v63; // bl
  __int64 v64; // rcx
  unsigned __int8 *v65; // r8
  int v66; // edx
  int v67; // eax
  __int64 v68; // rcx
  unsigned __int8 *v69; // r8
  int v70; // edx
  int v71; // eax
  char *v72; // rax
  char j; // cl
  unsigned __int64 v74; // rax
  __int64 v75; // rbx
  int v76; // r14d
  void **v77; // rbx
  __int64 v78; // rcx
  unsigned __int8 *v79; // r8
  int v80; // edx
  int v81; // eax
  char v82; // bl
  unsigned int v83; // r14d
  int v84; // r14d
  void **v85; // rbx
  __int64 v86; // rcx
  unsigned __int8 *v87; // r8
  int v88; // edx
  int v89; // eax
  char v90; // bl
  unsigned int v91; // r14d
  int v92; // r14d
  __int64 v93; // rbx
  __int64 v94; // rbx
  __int64 *v95; // rsi
  __int64 v96; // rcx
  unsigned __int8 *v97; // r8
  int v98; // edx
  int v99; // eax
  void **v100; // rax
  __int64 v101; // rcx
  unsigned __int8 *v102; // r8
  int v103; // edx
  int v104; // eax
  void **v105; // rax
  void **v106; // rax
  void **v107; // rbx
  void **v108; // rcx
  __int64 v109; // rcx
  unsigned __int8 *v110; // r9
  int v111; // edx
  int v112; // eax
  unsigned __int64 v113; // r10
  void **v114; // r8
  char v115; // al
  void **v116; // rdx
  char v117; // bl
  __int64 *v118; // rsi
  struct std::_Facet_base *v119; // r15
  __int64 v120; // rcx
  unsigned __int8 *v121; // r8
  int v122; // edx
  int v123; // eax
  char v124; // al
  unsigned __int64 v125; // rcx
  void **v126; // rbx
  void **v127; // rax
  __int64 v128; // rcx
  unsigned __int8 *v129; // r8
  int v130; // edx
  int v131; // eax
  void **v132; // rax
  _BYTE *v133; // rax
  char v135; // [rsp+3Ch] [rbp-BDh]
  char v136; // [rsp+40h] [rbp-B9h]
  int v137; // [rsp+44h] [rbp-B5h]
  unsigned __int64 v138; // [rsp+48h] [rbp-B1h] BYREF
  struct std::_Facet_base *v139; // [rsp+50h] [rbp-A9h]
  __int64 *v140; // [rsp+58h] [rbp-A1h]
  size_t *v141; // [rsp+60h] [rbp-99h]
  char *v142; // [rsp+68h] [rbp-91h]
  int v143; // [rsp+70h] [rbp-89h] BYREF
  int v144; // [rsp+74h] [rbp-85h]
  int v145; // [rsp+78h] [rbp-81h]
  struct std::_Facet_base *v146; // [rsp+80h] [rbp-79h]
  __int64 v147; // [rsp+88h] [rbp-71h]
  size_t *v148; // [rsp+90h] [rbp-69h]
  void *v149[2]; // [rsp+98h] [rbp-61h] BYREF
  __int64 v150; // [rsp+A8h] [rbp-51h]
  unsigned __int64 v151; // [rsp+B0h] [rbp-49h]
  void *Src[2]; // [rsp+B8h] [rbp-41h] BYREF
  __int64 v153; // [rsp+C8h] [rbp-31h]
  unsigned __int64 v154; // [rsp+D0h] [rbp-29h]
  void *v155[2]; // [rsp+D8h] [rbp-21h] BYREF
  unsigned __int64 v156; // [rsp+E8h] [rbp-11h]
  unsigned __int64 v157; // [rsp+F0h] [rbp-9h]

  v147 = -2LL;
  v140 = a4;
  v8 = a2;
  v141 = a2;
  v148 = a2;
  v142 = a7;
  v9 = **(_QWORD **)(a6 + 64);
  v138 = v9;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  if ( a5 )
  {
    v10 = 32;
    v11 = std::use_facet<std::moneypunct<char,1>>((__int64 *)&v138);
  }
  else
  {
    v10 = 64;
    v11 = std::use_facet<std::moneypunct<char,0>>((__int64 *)&v138);
  }
  v139 = v11;
  v12 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v12 )
    (**v12)(v12, 1LL);
  v13 = 0;
  v136 = 0;
  v135 = 0;
  v157 = 15LL;
  v156 = 0LL;
  LOBYTE(v155[0]) = 0;
  (*(void (__fastcall **)(struct std::_Facet_base *, int *))(*(_QWORD *)v11 + 88LL))(v11, &v143);
  v8[3] = 15LL;
  v8[2] = 0LL;
  *(_BYTE *)v8 = 0;
  v14 = **(_QWORD **)(a6 + 64);
  v138 = v14;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  v15 = v10 | 0x81;
  v137 = v10 | 0x81;
  v16 = std::use_facet<std::ctype<char>>((__int64 *)&v138);
  v146 = v16;
  v17 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v17 )
    (**v17)(v17, 1LL);
  (*(void (__fastcall **)(struct std::_Facet_base *, const char *, char *, char *))(*(_QWORD *)v16 + 56LL))(
    v16,
    "0123456789-",
    "",
    v142);
  v18 = 0LL;
  v138 = 0LL;
  do
  {
    if ( v18 >= 4 )
      break;
    v19 = *((_BYTE *)&v143 + v18);
    switch ( v19 )
    {
      case ' ':
        goto LABEL_297;
      case '$':
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v11 + 48LL))(v11, v149);
        v137 = v15 | 0x100;
        v95 = v140;
        if ( (*(_BYTE *)(a6 + 24) & 8) == 0 && !std::istreambuf_iterator<char>::equal((__int64 *)a3, v140) )
        {
          if ( !*(_BYTE *)(a3 + 8) )
          {
            v96 = *(_QWORD *)a3;
            if ( !*(_QWORD *)a3
              || ((v97 = **(unsigned __int8 ***)(v96 + 56)) == 0LL ? (v98 = 0) : (v98 = **(_DWORD **)(v96 + 80)),
                  v98 <= 0 ? (v99 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v96 + 48LL))(v96)) : (v99 = *v97),
                  v99 == -1) )
            {
              *(_QWORD *)a3 = 0LL;
            }
            else
            {
              *(_BYTE *)(a3 + 9) = v99;
            }
            *(_BYTE *)(a3 + 8) = 1;
          }
          v100 = v149;
          if ( v151 >= 0x10 )
            v100 = (void **)v149[0];
          if ( *(_BYTE *)(a3 + 9) != *(_BYTE *)v100 )
            goto LABEL_267;
        }
        if ( v138 == 3 && v156 <= 1 )
        {
          if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, v95) )
            goto LABEL_267;
          if ( !*(_BYTE *)(a3 + 8) )
          {
            v101 = *(_QWORD *)a3;
            if ( !*(_QWORD *)a3
              || ((v102 = **(unsigned __int8 ***)(v101 + 56)) == 0LL ? (v103 = 0) : (v103 = **(_DWORD **)(v101 + 80)),
                  v103 <= 0
                ? (v104 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v101 + 48LL))(v101))
                : (v104 = *v102),
                  v104 == -1) )
            {
              *(_QWORD *)a3 = 0LL;
            }
            else
            {
              *(_BYTE *)(a3 + 9) = v104;
            }
            *(_BYTE *)(a3 + 8) = 1;
          }
          v105 = v149;
          if ( v151 >= 0x10 )
            v105 = (void **)v149[0];
          if ( *(_BYTE *)(a3 + 9) != *(_BYTE *)v105 )
          {
LABEL_267:
            v106 = v149;
            v150 = 0LL;
            if ( v151 >= 0x10 )
              v106 = (void **)v149[0];
            *(_BYTE *)v106 = 0;
          }
        }
        v107 = v149;
        if ( v151 >= 0x10 )
          v107 = (void **)v149[0];
        while ( 1 )
        {
          v115 = std::istreambuf_iterator<char>::equal((__int64 *)a3, v95);
          v113 = v151;
          v114 = (void **)v149[0];
          if ( v115 )
            break;
          v108 = v149;
          if ( v151 >= 0x10 )
            v108 = (void **)v149[0];
          if ( v107 == (void **)((char *)v108 + v150) )
            break;
          if ( !*(_BYTE *)(a3 + 8) )
          {
            v109 = *(_QWORD *)a3;
            if ( !*(_QWORD *)a3
              || ((v110 = **(unsigned __int8 ***)(v109 + 56)) == 0LL ? (v111 = 0) : (v111 = **(_DWORD **)(v109 + 80)),
                  v111 <= 0
                ? (v112 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v109 + 48LL))(v109),
                   v113 = v151,
                   v114 = (void **)v149[0])
                : (void **)(v112 = *v110),
                  v112 == -1) )
            {
              *(_QWORD *)a3 = 0LL;
            }
            else
            {
              *(_BYTE *)(a3 + 9) = v112;
            }
            *(_BYTE *)(a3 + 8) = 1;
          }
          if ( *(_BYTE *)(a3 + 9) != *(_BYTE *)v107 )
            break;
          v107 = (void **)((char *)v107 + 1);
          std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
        }
        v116 = v149;
        if ( v113 >= 0x10 )
          v116 = v114;
        if ( v107 != (void **)((char *)v116 + v150) )
          v13 = 1;
        v136 = v13;
        if ( v113 >= 0x10 )
          operator delete(v114);
        goto LABEL_319;
      case '+':
        if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, v140) )
          goto LABEL_320;
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v11 + 56LL))(v11, v149);
        v76 = v15 | 0x202;
        if ( !v150 )
          goto LABEL_187;
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v11 + 56LL))(v11, Src);
        v76 |= 0x404u;
        v77 = Src;
        if ( v154 >= 0x10 )
          v77 = (void **)Src[0];
        if ( !*(_BYTE *)(a3 + 8) )
        {
          v78 = *(_QWORD *)a3;
          if ( !*(_QWORD *)a3
            || ((v79 = **(unsigned __int8 ***)(v78 + 56)) == 0LL ? (v80 = 0) : (v80 = **(_DWORD **)(v78 + 80)),
                v80 <= 0 ? (v81 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v78 + 48LL))(v78)) : (v81 = *v79),
                v81 == -1) )
          {
            *(_QWORD *)a3 = 0LL;
          }
          else
          {
            *(_BYTE *)(a3 + 9) = v81;
          }
          *(_BYTE *)(a3 + 8) = 1;
        }
        if ( *(_BYTE *)v77 == *(_BYTE *)(a3 + 9) )
          v82 = 1;
        else
LABEL_187:
          v82 = 0;
        if ( (v76 & 4) != 0 )
        {
          v76 &= ~4u;
          if ( v154 >= 0x10 )
            operator delete(Src[0]);
          v154 = 15LL;
          v153 = 0LL;
          LOBYTE(Src[0]) = 0;
        }
        v83 = v76 & 0xFFFFFFFD;
        if ( v151 >= 0x10 )
          operator delete(v149[0]);
        if ( v82 )
        {
          std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v11 + 56LL))(v11, Src);
          v137 = v83 | 0x800;
          std::string::operator=(v155, Src);
          if ( v154 >= 0x10 )
            operator delete(Src[0]);
          goto LABEL_320;
        }
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v11 + 64LL))(v11, v149);
        v84 = v83 | 0x1008;
        if ( !v150 )
          goto LABEL_214;
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v11 + 64LL))(v11, Src);
        v84 |= 0x2010u;
        v85 = Src;
        if ( v154 >= 0x10 )
          v85 = (void **)Src[0];
        if ( !*(_BYTE *)(a3 + 8) )
        {
          v86 = *(_QWORD *)a3;
          if ( !*(_QWORD *)a3
            || ((v87 = **(unsigned __int8 ***)(v86 + 56)) == 0LL ? (v88 = 0) : (v88 = **(_DWORD **)(v86 + 80)),
                v88 <= 0 ? (v89 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v86 + 48LL))(v86)) : (v89 = *v87),
                v89 == -1) )
          {
            *(_QWORD *)a3 = 0LL;
          }
          else
          {
            *(_BYTE *)(a3 + 9) = v89;
          }
          *(_BYTE *)(a3 + 8) = 1;
        }
        if ( *(_BYTE *)v85 == *(_BYTE *)(a3 + 9) )
          v90 = 1;
        else
LABEL_214:
          v90 = 0;
        if ( (v84 & 0x10) != 0 )
        {
          v84 &= ~0x10u;
          if ( v154 >= 0x10 )
            operator delete(Src[0]);
          v154 = 15LL;
          v153 = 0LL;
          LOBYTE(Src[0]) = 0;
        }
        v91 = v84 & 0xFFFFFFF7;
        if ( v151 >= 0x10 )
          operator delete(v149[0]);
        if ( v90 )
        {
          std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v11 + 64LL))(v11, Src);
          v137 = v91 | 0x4000;
          std::string::operator=(v155, Src);
          if ( v154 >= 0x10 )
            operator delete(Src[0]);
        }
        else
        {
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v11 + 56LL))(v11, Src);
          v92 = v91 | 0x8000;
          v137 = v92;
          v93 = v153;
          if ( v154 >= 0x10 )
            operator delete(Src[0]);
          if ( !v93 )
            goto LABEL_320;
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v11 + 64LL))(v11, Src);
          v137 = v92 | 0x10000;
          v94 = v153;
          if ( v154 >= 0x10 )
            operator delete(Src[0]);
          if ( v94 )
            goto LABEL_320;
        }
        v135 = 1;
        goto LABEL_320;
    }
    if ( v19 != 118 )
    {
      if ( v19 != 120 )
        goto LABEL_320;
LABEL_297:
      if ( v18 != 3 )
      {
        v117 = 0;
        v118 = v140;
        if ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, v140) )
        {
          v119 = v146;
          do
          {
            if ( !*(_BYTE *)(a3 + 8) )
            {
              v120 = *(_QWORD *)a3;
              if ( !*(_QWORD *)a3
                || ((v121 = **(unsigned __int8 ***)(v120 + 56)) == 0LL ? (v122 = 0) : (v122 = **(_DWORD **)(v120 + 80)),
                    v122 <= 0
                  ? (v123 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v120 + 48LL))(v120))
                  : (v123 = *v121),
                    v123 == -1) )
              {
                *(_QWORD *)a3 = 0LL;
              }
              else
              {
                *(_BYTE *)(a3 + 9) = v123;
              }
              *(_BYTE *)(a3 + 8) = 1;
            }
            if ( (*(_BYTE *)(*((_QWORD *)v119 + 3) + 2LL * *(unsigned __int8 *)(a3 + 9)) & 0x48) == 0 )
              break;
            v117 = 1;
            std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
          }
          while ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, v118) );
          v8 = v141;
          v11 = v139;
        }
        v18 = v138;
        if ( *((_BYTE *)&v143 + v138) == 32 )
        {
          v124 = v13;
          if ( !v117 )
            v124 = 1;
          v13 = v124;
          v136 = v124;
        }
      }
      goto LABEL_320;
    }
    v20 = 0;
    v145 = 0;
    v21 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v11 + 72LL))(v11);
    v144 = v21;
    v22 = v139;
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v139 + 40LL))(v139, Src);
    v137 = v15 | 0x20000;
    if ( !v153 )
      goto LABEL_100;
    v23 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v22 + 32LL))(v22);
    if ( !v23 )
      goto LABEL_99;
    v24 = Src;
    if ( v154 >= 0x10 )
      v24 = (void **)Src[0];
    if ( *(_BYTE *)v24 >= 0x7Fu )
    {
LABEL_99:
      v8 = v141;
LABEL_100:
      v54 = v140;
      if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, v140) )
      {
        v46 = v136;
        goto LABEL_122;
      }
      v55 = v142;
      do
      {
        if ( !*(_BYTE *)(a3 + 8) )
        {
          v56 = *(_QWORD *)a3;
          if ( !*(_QWORD *)a3
            || ((v57 = **(unsigned __int8 ***)(v56 + 56)) == 0LL ? (v58 = 0) : (v58 = **(_DWORD **)(v56 + 80)),
                v58 <= 0 ? (v59 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v56 + 48LL))(v56)) : (v59 = *v57),
                v59 == -1) )
          {
            *(_QWORD *)a3 = 0LL;
          }
          else
          {
            *(_BYTE *)(a3 + 9) = v59;
          }
          *(_BYTE *)(a3 + 8) = 1;
        }
        v60 = v55;
        for ( i = *v55; i && i != *(_BYTE *)(a3 + 9); i = *v60 )
          ++v60;
        v62 = v60 - v55;
        if ( v62 >= 0xA )
          break;
        std::string::append(v8, 1uLL, `std::money_get<char,std::istreambuf_iterator<char>>::_Getmfld'::`2'::_Src[v62]);
        std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
      }
      while ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, v54) );
      v22 = v139;
      v46 = v136;
LABEL_123:
      v63 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v22 + 24LL))(v22);
      if ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, v54) && v63 )
      {
        if ( !*(_BYTE *)(a3 + 8) )
        {
          v64 = *(_QWORD *)a3;
          if ( !*(_QWORD *)a3
            || ((v65 = **(unsigned __int8 ***)(v64 + 56)) == 0LL ? (v66 = 0) : (v66 = **(_DWORD **)(v64 + 80)),
                v66 <= 0 ? (v67 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v64 + 48LL))(v64)) : (v67 = *v65),
                v67 == -1) )
          {
            *(_QWORD *)a3 = 0LL;
          }
          else
          {
            *(_BYTE *)(a3 + 9) = v67;
          }
          *(_BYTE *)(a3 + 8) = 1;
        }
        if ( *(_BYTE *)(a3 + 9) == v63 )
        {
          std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
          if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, v54) )
          {
LABEL_158:
            if ( v20 < v21 )
              v46 = 1;
            v136 = v46;
          }
          else
          {
            while ( v20 < v21 )
            {
              if ( !*(_BYTE *)(a3 + 8) )
              {
                v68 = *(_QWORD *)a3;
                if ( !*(_QWORD *)a3
                  || ((v69 = **(unsigned __int8 ***)(v68 + 56)) == 0LL ? (v70 = 0) : (v70 = **(_DWORD **)(v68 + 80)),
                      v70 <= 0
                    ? (v71 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v68 + 48LL))(v68))
                    : (v71 = *v69),
                      v71 == -1) )
                {
                  *(_QWORD *)a3 = 0LL;
                }
                else
                {
                  *(_BYTE *)(a3 + 9) = v71;
                }
                *(_BYTE *)(a3 + 8) = 1;
              }
              v72 = v55;
              for ( j = *v55; j && j != *(_BYTE *)(a3 + 9); j = *v72 )
                ++v72;
              v74 = v72 - v55;
              if ( v74 < 0xA )
              {
                std::string::append(
                  v141,
                  1uLL,
                  `std::money_get<char,std::istreambuf_iterator<char>>::_Getmfld'::`2'::_Src[v74]);
                ++v20;
                std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
                if ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, v54) )
                  continue;
              }
              goto LABEL_158;
            }
          }
        }
      }
      v8 = v141;
      if ( v141[2] )
      {
        if ( v20 < v21 )
        {
          v75 = (unsigned int)(v21 - v20);
          do
          {
            std::string::append(v8, 1uLL, 48);
            --v75;
          }
          while ( v75 );
        }
        v13 = v136;
      }
      else
      {
        v13 = 1;
        v136 = 1;
      }
      if ( v154 >= 0x10 )
        operator delete(Src[0]);
      goto LABEL_98;
    }
    v25 = 15LL;
    v151 = 15LL;
    LOWORD(v149[0]) = 0;
    v150 = 1LL;
    v26 = 0LL;
    v27 = std::istreambuf_iterator<char>::equal((__int64 *)a3, v140);
    v28 = (void **)v149[0];
    if ( v27 )
      goto LABEL_71;
    v29 = v141;
    v30 = v140;
    while ( 1 )
    {
      if ( !*(_BYTE *)(a3 + 8) )
      {
        v31 = *(_QWORD *)a3;
        if ( !*(_QWORD *)a3
          || ((v32 = **(unsigned __int8 ***)(v31 + 56)) == 0LL ? (v33 = 0) : (v33 = **(_DWORD **)(v31 + 80)),
              v33 <= 0 ? (v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 48LL))(v31)) : (v34 = *v32),
              v34 == -1) )
        {
          *(_QWORD *)a3 = 0LL;
        }
        else
        {
          *(_BYTE *)(a3 + 9) = v34;
        }
        *(_BYTE *)(a3 + 8) = 1;
      }
      v35 = v142;
      for ( k = *v142; k && k != *(_BYTE *)(a3 + 9); k = *v35 )
        ++v35;
      v37 = v35 - v142;
      if ( v37 >= 0xA )
        break;
      std::string::append(v29, 1uLL, `std::money_get<char,std::istreambuf_iterator<char>>::_Getmfld'::`2'::_Src[v37]);
      v38 = v149;
      if ( v25 >= 0x10 )
        v38 = v28;
      if ( *((_BYTE *)v38 + v26) == 127 )
        goto LABEL_64;
      v39 = v149;
      if ( v25 >= 0x10 )
        v39 = v28;
      ++*((_BYTE *)v39 + v26);
LABEL_63:
      v28 = (void **)v149[0];
      v25 = v151;
LABEL_64:
      std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
      if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, v30) )
        goto LABEL_65;
    }
    v40 = v149;
    if ( v25 >= 0x10 )
      v40 = v28;
    if ( *((_BYTE *)v40 + v26) )
    {
      if ( !*(_BYTE *)(a3 + 8) )
      {
        v41 = *(_QWORD *)a3;
        if ( !*(_QWORD *)a3
          || ((v42 = **(unsigned __int8 ***)(v41 + 56)) == 0LL ? (v43 = 0) : (v43 = **(_DWORD **)(v41 + 80)),
              v43 <= 0 ? (v44 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 48LL))(v41)) : (v44 = *v42),
              v44 == -1) )
        {
          *(_QWORD *)a3 = 0LL;
        }
        else
        {
          *(_BYTE *)(a3 + 9) = v44;
        }
        *(_BYTE *)(a3 + 8) = 1;
      }
      if ( *(_BYTE *)(a3 + 9) == v23 )
      {
        std::string::append((size_t *)v149, 1uLL, 0);
        ++v26;
        goto LABEL_63;
      }
    }
LABEL_65:
    v21 = v144;
    v20 = v145;
    if ( !v26 )
      goto LABEL_71;
    v45 = v149;
    if ( v25 >= 0x10 )
      v45 = v28;
    if ( *((char *)v45 + v26) <= (char)v145 )
    {
      v46 = 1;
      v136 = 1;
    }
    else
    {
      ++v26;
LABEL_71:
      v46 = v136;
    }
    v47 = Src;
    v48 = Src[0];
    v49 = v154;
    if ( v154 >= 0x10 )
      v47 = (void **)Src[0];
    if ( !v46 )
    {
      while ( 1 )
      {
        v50 = v47;
        if ( !v26 )
          break;
        v51 = *(_BYTE *)v47;
        if ( *(_BYTE *)v47 == 127 )
          break;
        if ( --v26 )
        {
          v52 = v149;
          if ( v25 >= 0x10 )
            v52 = v28;
          if ( v51 != *((_BYTE *)v52 + v26) )
            goto LABEL_88;
        }
        if ( !v26 )
        {
          v53 = v149;
          if ( v25 >= 0x10 )
            v53 = v28;
          if ( v51 < *(char *)v53 )
          {
LABEL_88:
            v13 = 1;
            v136 = 1;
            goto LABEL_93;
          }
        }
        v47 = (void **)((char *)v47 + 1);
        if ( *(char *)v47 <= 0 )
          v47 = v50;
      }
      if ( v25 >= 0x10 )
        operator delete(v28);
      v22 = v139;
      v54 = v140;
LABEL_122:
      v55 = v142;
      goto LABEL_123;
    }
    v13 = v136;
LABEL_93:
    if ( v25 >= 0x10 )
    {
      operator delete(v28);
      v49 = v154;
      v48 = Src[0];
    }
    if ( v49 >= 0x10 )
      operator delete(v48);
    v8 = v141;
LABEL_98:
    v11 = v139;
LABEL_319:
    v18 = v138;
LABEL_320:
    v138 = ++v18;
    v15 = v137;
  }
  while ( !v13 );
  if ( v13 )
    goto LABEL_349;
  v125 = v156;
  if ( v156 <= 1 )
    goto LABEL_347;
  v126 = v155;
  if ( v157 >= 0x10 )
    v126 = (void **)v155[0];
  while ( 1 )
  {
    v127 = v155;
    if ( v157 >= 0x10 )
      v127 = (void **)v155[0];
    v126 = (void **)((char *)v126 + 1);
    if ( v126 == (void **)((char *)v127 + v125) )
      break;
    if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, v140) )
      goto LABEL_343;
    if ( !*(_BYTE *)(a3 + 8) )
    {
      v128 = *(_QWORD *)a3;
      if ( !*(_QWORD *)a3
        || ((v129 = **(unsigned __int8 ***)(v128 + 56)) == 0LL ? (v130 = 0) : (v130 = **(_DWORD **)(v128 + 80)),
            v130 <= 0 ? (v131 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v128 + 48LL))(v128)) : (v131 = *v129),
            v131 == -1) )
      {
        *(_QWORD *)a3 = 0LL;
      }
      else
      {
        *(_BYTE *)(a3 + 9) = v131;
      }
      *(_BYTE *)(a3 + 8) = 1;
    }
    if ( *(_BYTE *)(a3 + 9) != *(_BYTE *)v126 )
    {
LABEL_343:
      v125 = v156;
      break;
    }
    std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
    v125 = v156;
  }
  v132 = v155;
  if ( v157 >= 0x10 )
    v132 = (void **)v155[0];
  if ( v126 != (void **)((char *)v132 + v125) )
  {
LABEL_349:
    v8[2] = 0LL;
    if ( v8[3] < 0x10 )
      v133 = v8;
    else
      v133 = (_BYTE *)*v8;
    *v133 = 0;
  }
  else
  {
LABEL_347:
    if ( v135 )
      std::string::insert(v8, 0LL, 1uLL, 45);
  }
  if ( v157 >= 0x10 )
    operator delete(v155[0]);
  return v8;
}
