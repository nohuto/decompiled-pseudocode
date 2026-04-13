/*
 * XREFs of ?_Getffld@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800A7278
 * Callers:
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEAM@Z @ 0x1800AA2B0 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_1800AA2B0.c)
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEAN@Z @ 0x1800AA3A0 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_1800AA3A0.c)
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEAO@Z @ 0x1800AA480 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_1800AA480.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180038E2C (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x1800A62F8 (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@D@std@@@std@@YAAEBV?$numpunct@D@0@AEBVlocale@0@@Z @ 0x1800A66A0 (--$use_facet@V-$numpunct@D@std@@@std@@YAAEBV-$numpunct@D@0@AEBVlocale@0@@Z.c)
 *     ?_Getffldx@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800A7D74 (-_Getffldx@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV-$i.c)
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x1800A9044 (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x1800AB5A0 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800C0E7F (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
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
  void (__fastcall ***v11)(_QWORD, __int64); // r8
  struct std::_Facet_base *v12; // r15
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  char *v14; // r14
  __int64 v15; // rbx
  struct std::_Facet_base *v16; // rsi
  void (__fastcall ***v17)(_QWORD, __int64); // rax
  __int64 v18; // rcx
  unsigned __int8 *v19; // r8
  int v20; // edx
  int v21; // eax
  char v22; // si
  int v23; // ebx
  void **v24; // r12
  char v25; // r13
  unsigned __int64 v26; // r15
  __int64 v27; // rbx
  char v28; // al
  void **v29; // rsi
  int v30; // r12d
  __int64 v31; // rcx
  unsigned __int8 *v32; // r8
  int v33; // edx
  int v34; // eax
  char *v35; // rax
  char j; // cl
  unsigned __int64 v37; // rax
  void **v38; // rax
  void **v39; // rax
  void **v40; // rax
  __int64 v41; // rcx
  unsigned __int8 *v42; // r8
  int v43; // edx
  int v44; // eax
  void **v45; // rax
  void **v46; // rdx
  char v47; // cl
  void **v48; // rax
  void **v49; // rax
  __int64 v50; // rcx
  unsigned __int8 *v51; // r8
  int v52; // edx
  int v53; // r15d
  __int64 v54; // rcx
  unsigned __int8 *v55; // r8
  int v56; // edx
  int v57; // eax
  char *v58; // rax
  char i; // cl
  unsigned __int64 v60; // rax
  int v61; // eax
  int v62; // ebx
  __int64 v63; // rcx
  unsigned __int8 *v64; // r8
  int v65; // edx
  int v66; // eax
  unsigned int v67; // r15d
  __int64 v68; // rcx
  unsigned __int8 *v69; // r8
  int v70; // edx
  int v71; // eax
  char *v72; // rax
  char k; // cl
  unsigned __int64 v74; // rax
  __int64 v75; // rcx
  unsigned __int8 *v76; // r8
  int v77; // edx
  int v78; // eax
  int v79; // ebx
  __int64 v80; // rcx
  unsigned __int8 *v81; // r8
  int v82; // edx
  int v83; // eax
  __int64 v84; // rcx
  unsigned __int8 *v85; // r8
  int v86; // edx
  int v87; // eax
  __int64 v88; // rcx
  unsigned __int8 *v89; // r8
  int v90; // edx
  int v91; // eax
  char *v92; // rax
  char m; // cl
  unsigned __int64 v94; // rax
  char v95; // [rsp+38h] [rbp-79h]
  char v96; // [rsp+39h] [rbp-78h]
  int v97; // [rsp+3Ch] [rbp-75h]
  __int64 v98; // [rsp+40h] [rbp-71h] BYREF
  struct std::_Facet_base *v99; // [rsp+48h] [rbp-69h] BYREF
  __int64 v100; // [rsp+50h] [rbp-61h]
  void **v101; // [rsp+58h] [rbp-59h]
  char *v102; // [rsp+60h] [rbp-51h]
  __int64 v103; // [rsp+68h] [rbp-49h]
  void *v104[3]; // [rsp+70h] [rbp-41h] BYREF
  __int64 v105; // [rsp+88h] [rbp-29h]
  void *v106[3]; // [rsp+90h] [rbp-21h] BYREF
  unsigned __int64 v107; // [rsp+A8h] [rbp-9h]
  _BYTE v108[10]; // [rsp+B0h] [rbp-1h] BYREF
  char v109; // [rsp+BAh] [rbp+9h]
  char v110; // [rsp+BBh] [rbp+Ah]
  char v111; // [rsp+BCh] [rbp+Bh]
  char v112; // [rsp+BDh] [rbp+Ch]

  v103 = -2LL;
  v6 = a4;
  v100 = a4;
  v102 = a2;
  if ( (*(_DWORD *)(a5 + 24) & 0x3000) == 0x3000 )
    return std::num_get<char,std::istreambuf_iterator<char>>::_Getffldx(a1, (_DWORD)a2, (_DWORD)a3, a4, a5, a6);
  v10 = **(_QWORD **)(a5 + 64);
  v99 = (struct std::_Facet_base *)v10;
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v10 + 8LL))(v10, 12288LL, a6);
  v12 = std::use_facet<std::numpunct<char>>((__int64 *)&v99);
  v99 = v12;
  if ( v10 )
  {
    v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v11 = v13;
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, void **, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v12 + 40LL))(
    v12,
    v106,
    v11);
  v14 = a2;
  v96 = 0;
  v15 = **(_QWORD **)(a5 + 64);
  v98 = v15;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v16 = std::use_facet<std::ctype<char>>(&v98);
  if ( v15 )
  {
    v17 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v17 )
      (**v17)(v17, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, const char *, char *, _BYTE *))(*(_QWORD *)v16 + 56LL))(
    v16,
    "0123456789-+Ee",
    "",
    v108);
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v18 = *a3;
      if ( !*a3
        || ((v19 = **(unsigned __int8 ***)(v18 + 56)) == 0LL ? (v20 = 0) : (v20 = **(_DWORD **)(v18 + 80)),
            v20 <= 0 ? (v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 48LL))(v18)) : (v21 = *v19),
            v21 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v21;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    if ( *((_BYTE *)a3 + 9) == v110 )
    {
      *a2 = 43;
    }
    else
    {
      if ( *((_BYTE *)a3 + 9) != v109 )
        goto LABEL_27;
      *a2 = 45;
    }
    v14 = a2 + 1;
    std::istreambuf_iterator<char>::_Inc(a3);
  }
LABEL_27:
  v22 = 0;
  v95 = 0;
  v23 = 0;
  LODWORD(v98) = 0;
  v97 = 0;
  v24 = v106;
  if ( v107 >= 0x10 )
    v24 = (void **)v106[0];
  v101 = v24;
  if ( (unsigned __int8)(*(_BYTE *)v24 - 1) > 0x7Du )
  {
    if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
      goto LABEL_108;
    v53 = 0;
    do
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v54 = *a3;
        if ( !*a3
          || ((v55 = **(unsigned __int8 ***)(v54 + 56)) == 0LL ? (v56 = 0) : (v56 = **(_DWORD **)(v54 + 80)),
              v56 <= 0 ? (v57 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v54 + 48LL))(v54)) : (v57 = *v55),
              v57 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v57;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      v58 = v108;
      for ( i = v108[0]; i && i != *((_BYTE *)a3 + 9); i = *v58 )
        ++v58;
      v60 = v58 - v108;
      if ( v60 >= 0xA )
        break;
      if ( v23 < 36 )
      {
        if ( v60 || v23 )
        {
          *v14++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffld'::`2'::_Src[v60];
          ++v23;
        }
      }
      else
      {
        ++v53;
      }
      v22 = 1;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
    v97 = v53;
    LODWORD(v98) = v23;
  }
  else
  {
    if ( v106[2] )
      v25 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v12 + 32LL))(v12);
    else
      v25 = 0;
    v26 = 15LL;
    v105 = 15LL;
    LOWORD(v104[0]) = 0;
    v104[2] = (void *)1;
    v27 = 0LL;
    v28 = std::istreambuf_iterator<char>::equal(a3, v100);
    v29 = (void **)v104[0];
    if ( !v28 )
    {
      v30 = 0;
      while ( 1 )
      {
        if ( !*((_BYTE *)a3 + 8) )
        {
          v31 = *a3;
          if ( !*a3
            || ((v32 = **(unsigned __int8 ***)(v31 + 56)) == 0LL ? (v33 = 0) : (v33 = **(_DWORD **)(v31 + 80)),
                v33 <= 0 ? (v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 48LL))(v31)) : (v34 = *v32),
                v34 == -1) )
          {
            *a3 = 0LL;
          }
          else
          {
            *((_BYTE *)a3 + 9) = v34;
          }
          *((_BYTE *)a3 + 8) = 1;
        }
        v35 = v108;
        for ( j = v108[0]; j && j != *((_BYTE *)a3 + 9); j = *v35 )
          ++v35;
        v37 = v35 - v108;
        if ( v37 >= 0xA )
        {
          v40 = v104;
          if ( v26 >= 0x10 )
            v40 = v29;
          if ( !*((_BYTE *)v40 + v27) || !v25 )
            goto LABEL_83;
          if ( !*((_BYTE *)a3 + 8) )
          {
            v41 = *a3;
            if ( !*a3
              || ((v42 = **(unsigned __int8 ***)(v41 + 56)) == 0LL ? (v43 = 0) : (v43 = **(_DWORD **)(v41 + 80)),
                  v43 <= 0 ? (v44 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 48LL))(v41)) : (v44 = *v42),
                  v44 == -1) )
            {
              *a3 = 0LL;
            }
            else
            {
              *((_BYTE *)a3 + 9) = v44;
            }
            *((_BYTE *)a3 + 8) = 1;
          }
          if ( *((_BYTE *)a3 + 9) != v25 )
          {
LABEL_83:
            LODWORD(v98) = v30;
            v24 = v101;
            if ( !v27 )
              break;
            v45 = v104;
            if ( v26 >= 0x10 )
              v45 = v29;
            if ( *((char *)v45 + v27) > 0 )
            {
              ++v27;
              break;
            }
LABEL_101:
            v96 = 1;
            goto LABEL_102;
          }
          std::string::append((size_t *)v104, 1uLL, 0);
          ++v27;
        }
        else
        {
          v95 = 1;
          if ( v30 < 36 )
          {
            if ( v37 || v30 )
            {
              *v14++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffld'::`2'::_Src[v37];
              ++v30;
            }
          }
          else
          {
            ++v97;
          }
          v38 = v104;
          if ( v26 >= 0x10 )
            v38 = v29;
          if ( *((_BYTE *)v38 + v27) == 127 )
            goto LABEL_82;
          v39 = v104;
          if ( v26 >= 0x10 )
            v39 = v29;
          ++*((_BYTE *)v39 + v27);
        }
        v29 = (void **)v104[0];
        v26 = v105;
LABEL_82:
        std::istreambuf_iterator<char>::_Inc(a3);
        if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v100) )
          goto LABEL_83;
      }
    }
    while ( 1 )
    {
      v46 = v24;
      if ( !v27 )
        break;
      v47 = *(_BYTE *)v24;
      if ( *(_BYTE *)v24 == 127 )
        break;
      if ( --v27 )
      {
        v48 = v104;
        if ( v26 >= 0x10 )
          v48 = v29;
        if ( v47 != *((_BYTE *)v48 + v27) )
          goto LABEL_101;
      }
      if ( !v27 )
      {
        v49 = v104;
        if ( v26 >= 0x10 )
          v49 = v29;
        if ( v47 < *(char *)v49 )
          goto LABEL_101;
      }
      v24 = (void **)((char *)v24 + 1);
      if ( *(char *)v24 <= 0 )
        v24 = v46;
    }
LABEL_102:
    if ( v26 >= 0x10 )
      operator delete(v29);
    v22 = v95;
    v6 = v100;
    v23 = v98;
  }
  v12 = v99;
  if ( v22 && !v23 )
    *v14++ = 48;
LABEL_108:
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v50 = *a3;
      if ( !*a3
        || ((v51 = **(unsigned __int8 ***)(v50 + 56)) == 0LL ? (v52 = 0) : (v52 = **(_DWORD **)(v50 + 80)),
            v52 <= 0 ? (v61 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v50 + 48LL))(v50)) : (v61 = *v51),
            v61 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v61;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    if ( *((_BYTE *)a3 + 9) == (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v12 + 24LL))(v12) )
    {
      *v14++ = *localeconv()->decimal_point;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
  }
  if ( v23 )
  {
    v67 = v97;
  }
  else
  {
    if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
    {
      v62 = v97;
      do
      {
        if ( !*((_BYTE *)a3 + 8) )
        {
          v63 = *a3;
          if ( !*a3
            || ((v64 = **(unsigned __int8 ***)(v63 + 56)) == 0LL ? (v65 = 0) : (v65 = **(_DWORD **)(v63 + 80)),
                v65 <= 0 ? (v66 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v63 + 48LL))(v63)) : (v66 = *v64),
                v66 == -1) )
          {
            *a3 = 0LL;
          }
          else
          {
            *((_BYTE *)a3 + 9) = v66;
          }
          *((_BYTE *)a3 + 8) = 1;
        }
        if ( *((_BYTE *)a3 + 9) != v108[0] )
          break;
        --v62;
        v22 = 1;
        std::istreambuf_iterator<char>::_Inc(a3);
      }
      while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
      v97 = v62;
      v23 = v98;
    }
    v67 = v97;
    if ( v97 < 0 )
    {
      *v14++ = 48;
      v67 = ++v97;
    }
  }
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    do
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v68 = *a3;
        if ( !*a3
          || ((v69 = **(unsigned __int8 ***)(v68 + 56)) == 0LL ? (v70 = 0) : (v70 = **(_DWORD **)(v68 + 80)),
              v70 <= 0 ? (v71 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v68 + 48LL))(v68)) : (v71 = *v69),
              v71 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v71;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      v72 = v108;
      for ( k = v108[0]; k && k != *((_BYTE *)a3 + 9); k = *v72 )
        ++v72;
      v74 = v72 - v108;
      if ( v74 >= 0xA )
        break;
      if ( v23 < 36 )
      {
        *v14++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffld'::`2'::_Src[v74];
        ++v23;
      }
      v22 = 1;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
    v67 = v97;
  }
  if ( !v22 || (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
    goto LABEL_265;
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
  if ( *((_BYTE *)a3 + 9) != v112 && *((_BYTE *)a3 + 9) != v111 )
    goto LABEL_265;
  *v14++ = 101;
  std::istreambuf_iterator<char>::_Inc(a3);
  v22 = 0;
  v79 = 0;
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v80 = *a3;
      if ( !*a3
        || ((v81 = **(unsigned __int8 ***)(v80 + 56)) == 0LL ? (v82 = 0) : (v82 = **(_DWORD **)(v80 + 80)),
            v82 <= 0 ? (v83 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v80 + 48LL))(v80)) : (v83 = *v81),
            v83 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v83;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    if ( *((_BYTE *)a3 + 9) == v110 )
    {
      *v14 = 43;
LABEL_225:
      ++v14;
      std::istreambuf_iterator<char>::_Inc(a3);
      goto LABEL_226;
    }
    if ( *((_BYTE *)a3 + 9) == v109 )
    {
      *v14 = 45;
      goto LABEL_225;
    }
  }
LABEL_226:
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    do
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v84 = *a3;
        if ( !*a3
          || ((v85 = **(unsigned __int8 ***)(v84 + 56)) == 0LL ? (v86 = 0) : (v86 = **(_DWORD **)(v84 + 80)),
              v86 <= 0 ? (v87 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v84 + 48LL))(v84)) : (v87 = *v85),
              v87 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v87;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      if ( *((_BYTE *)a3 + 9) != v108[0] )
        break;
      v22 = 1;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
    if ( v22 )
      *v14++ = 48;
  }
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    do
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
      v92 = v108;
      for ( m = v108[0]; m && m != *((_BYTE *)a3 + 9); m = *v92 )
        ++v92;
      v94 = v92 - v108;
      if ( v94 >= 0xA )
        break;
      if ( v79 < 8 )
      {
        *v14++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffld'::`2'::_Src[v94];
        ++v79;
      }
      v22 = 1;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
    v67 = v97;
  }
LABEL_265:
  if ( v96 || !v22 )
    v14 = v102;
  *v14 = 0;
  if ( v107 >= 0x10 )
    operator delete(v106[0]);
  return v67;
}
