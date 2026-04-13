/*
 * XREFs of ?_Getffld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x180036F2C
 * Callers:
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAO@Z @ 0x1800359E0 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_1800359E0.c)
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAN@Z @ 0x180035AC0 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_180035AC0.c)
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAM@Z @ 0x180035BA0 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_180035BA0.c)
 * Callees:
 *     ?_Getffldx@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x180038234 (-_Getffldx@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$i.c)
 *     ??D?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@QEBAAEBGXZ @ 0x1800389E8 (--D-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@QEBAAEBGXZ.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180038E2C (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x180039C18 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180039DF4 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@G@std@@@std@@YAAEBV?$numpunct@G@0@AEBVlocale@0@@Z @ 0x18003B1C0 (--$use_facet@V-$numpunct@G@std@@@std@@YAAEBV-$numpunct@G@0@AEBVlocale@0@@Z.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x18003BAD0 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffld(
        int a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r15
  __int64 v10; // rbx
  __int64 v11; // rsi
  void (__fastcall ***v12)(_QWORD, __int64); // r8
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  char *v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // r14
  void (__fastcall ***v17)(_QWORD, __int64); // rax
  _WORD *v18; // rax
  __int64 v19; // rcx
  _WORD *v20; // rax
  char v21; // r12
  int v22; // r14d
  __int64 v23; // rbx
  void **v24; // r13
  __int16 v25; // r12
  unsigned __int64 v26; // r15
  char v27; // al
  _QWORD *v28; // r14
  int v29; // r13d
  __int16 v30; // dx
  __int16 *v31; // rax
  __int16 j; // cx
  unsigned __int64 v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  char *v37; // rax
  void **v38; // rdx
  char v39; // cl
  _QWORD *v40; // rax
  char *v41; // rax
  __int16 v42; // bx
  int v43; // r14d
  _WORD *v44; // rax
  unsigned int v45; // r13d
  __int16 v46; // dx
  __int16 *v47; // rax
  __int16 i; // cx
  unsigned __int64 v49; // rax
  __int16 v50; // dx
  __int16 *v51; // rax
  __int16 k; // cx
  unsigned __int64 v53; // rax
  _WORD *v54; // rax
  _WORD *v55; // rax
  int v56; // ebx
  _WORD *v57; // rax
  __int64 v58; // rcx
  _WORD *v59; // rax
  _WORD *v60; // rax
  __int16 v61; // dx
  __int16 *v62; // rax
  __int16 m; // cx
  unsigned __int64 v64; // rax
  char v65; // [rsp+38h] [rbp-89h]
  char v66; // [rsp+39h] [rbp-88h]
  int v67; // [rsp+3Ch] [rbp-85h]
  __int64 v68; // [rsp+40h] [rbp-81h] BYREF
  __int64 v69; // [rsp+48h] [rbp-79h]
  __int64 v70; // [rsp+50h] [rbp-71h] BYREF
  void **v71; // [rsp+58h] [rbp-69h]
  char *v72; // [rsp+60h] [rbp-61h]
  __int64 v73; // [rsp+68h] [rbp-59h]
  _QWORD v74[3]; // [rsp+70h] [rbp-51h] BYREF
  __int64 v75; // [rsp+88h] [rbp-39h]
  void *v76[3]; // [rsp+90h] [rbp-31h] BYREF
  unsigned __int64 v77; // [rsp+A8h] [rbp-19h]
  _WORD v78[10]; // [rsp+B0h] [rbp-11h] BYREF
  __int16 v79; // [rsp+C4h] [rbp+3h]
  __int16 v80; // [rsp+C6h] [rbp+5h]
  __int16 v81; // [rsp+C8h] [rbp+7h]
  __int16 v82; // [rsp+CAh] [rbp+9h]

  v73 = -2LL;
  v6 = a4;
  v69 = a4;
  v72 = a2;
  if ( (*(_DWORD *)(a5 + 24) & 0x3000) == 0x3000 )
    return std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx(
             a1,
             (_DWORD)a2,
             a3,
             a4,
             a5,
             a6);
  v10 = **(_QWORD **)(a5 + 64);
  v70 = v10;
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v10 + 8LL))(v10, 12288LL, a6);
  v11 = std::use_facet<std::numpunct<unsigned short>>(&v70);
  v70 = v11;
  if ( v10 )
  {
    v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v12 = v13;
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  (*(void (__fastcall **)(__int64, void **, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v11 + 40LL))(
    v11,
    v76,
    v12);
  v14 = a2;
  v66 = 0;
  v15 = **(_QWORD **)(a5 + 64);
  v68 = v15;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v16 = std::use_facet<std::ctype<unsigned short>>(&v68);
  if ( v15 )
  {
    v17 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v17 )
      (**v17)(v17, 1LL);
  }
  (*(void (__fastcall **)(__int64, const char *, char *, _WORD *))(*(_QWORD *)v16 + 88LL))(
    v16,
    "0123456789-+Ee",
    "",
    v78);
  if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
  {
    v18 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
    v19 = a3;
    if ( *v18 == v80 )
    {
      *a2 = 43;
    }
    else
    {
      v20 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
      if ( *v20 != v79 )
        goto LABEL_15;
      *a2 = 45;
      v19 = a3;
    }
    v14 = a2 + 1;
    std::istreambuf_iterator<unsigned short>::_Inc(v19);
  }
LABEL_15:
  v21 = 0;
  v65 = 0;
  v22 = 0;
  LODWORD(v68) = 0;
  v23 = 0LL;
  v67 = 0;
  v24 = v76;
  if ( v77 >= 0x10 )
    v24 = (void **)v76[0];
  v71 = v24;
  if ( (unsigned __int8)(*(_BYTE *)v24 - 1) > 0x7Du )
  {
    if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
      goto LABEL_72;
    do
    {
      v46 = *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
      v47 = v78;
      for ( i = v78[0]; i && i != v46; i = *v47 )
        ++v47;
      v49 = v47 - v78;
      if ( v49 >= 0xA )
        break;
      if ( v22 < 36 )
      {
        if ( v49 || v22 )
        {
          *v14++ = `std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getffld'::`2'::_Src[v49];
          ++v22;
        }
      }
      else
      {
        LODWORD(v23) = v23 + 1;
      }
      v21 = 1;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) );
    v67 = v23;
    LODWORD(v68) = v22;
  }
  else
  {
    if ( v76[2] )
      v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v70 + 32LL))(v70);
    else
      v25 = 0;
    v26 = 15LL;
    v75 = 15LL;
    LOWORD(v74[0]) = 0;
    v74[2] = 1LL;
    v27 = std::istreambuf_iterator<wchar_t>::equal(a3, v69);
    v28 = (_QWORD *)v74[0];
    if ( !v27 )
    {
      v29 = 0;
      while ( 1 )
      {
        v30 = *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
        v31 = v78;
        for ( j = v78[0]; j && j != v30; j = *v31 )
          ++v31;
        v33 = v31 - v78;
        if ( v33 >= 0xA )
        {
          v36 = v74;
          if ( v26 >= 0x10 )
            v36 = v28;
          if ( !*((_BYTE *)v36 + v23)
            || !v25
            || *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) != v25 )
          {
LABEL_47:
            LODWORD(v68) = v29;
            v24 = v71;
            if ( !v23 )
              break;
            v37 = (char *)v74;
            if ( v26 >= 0x10 )
              v37 = (char *)v28;
            if ( v37[v23] > 0 )
            {
              ++v23;
              break;
            }
LABEL_65:
            v66 = 1;
            goto LABEL_66;
          }
          std::string::append(v74, 1LL);
          ++v23;
        }
        else
        {
          v65 = 1;
          if ( v29 < 36 )
          {
            if ( v33 || v29 )
            {
              *v14++ = `std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getffld'::`2'::_Src[v33];
              ++v29;
            }
          }
          else
          {
            ++v67;
          }
          v34 = v74;
          if ( v26 >= 0x10 )
            v34 = v28;
          if ( *((_BYTE *)v34 + v23) == 127 )
            goto LABEL_46;
          v35 = v74;
          if ( v26 >= 0x10 )
            v35 = v28;
          ++*((_BYTE *)v35 + v23);
        }
        v28 = (_QWORD *)v74[0];
        v26 = v75;
LABEL_46:
        std::istreambuf_iterator<unsigned short>::_Inc(a3);
        if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v69) )
          goto LABEL_47;
      }
    }
    while ( 1 )
    {
      v38 = v24;
      if ( !v23 )
        break;
      v39 = *(_BYTE *)v24;
      if ( *(_BYTE *)v24 == 127 )
        break;
      if ( --v23 )
      {
        v40 = v74;
        if ( v26 >= 0x10 )
          v40 = v28;
        if ( v39 != *((_BYTE *)v40 + v23) )
          goto LABEL_65;
      }
      if ( !v23 )
      {
        v41 = (char *)v74;
        if ( v26 >= 0x10 )
          v41 = (char *)v28;
        if ( v39 < *v41 )
          goto LABEL_65;
      }
      v24 = (void **)((char *)v24 + 1);
      if ( *(char *)v24 <= 0 )
        v24 = v38;
    }
LABEL_66:
    if ( v26 >= 0x10 )
      operator delete(v28);
    v21 = v65;
    v6 = v69;
    v22 = v68;
  }
  if ( v21 && !v22 )
    *v14++ = 48;
LABEL_72:
  if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
  {
    v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v70 + 24LL))(v70);
    if ( *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) == v42 )
    {
      *v14++ = *localeconv()->decimal_point;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
  }
  if ( v22 )
  {
    v45 = v67;
  }
  else
  {
    if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
    {
      v43 = v67;
      do
      {
        v44 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
        if ( *v44 != v78[0] )
          break;
        --v43;
        v21 = 1;
        std::istreambuf_iterator<unsigned short>::_Inc(a3);
      }
      while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) );
      v67 = v43;
      v22 = v68;
    }
    v45 = v67;
    if ( v67 < 0 )
    {
      *v14++ = 48;
      v45 = ++v67;
    }
  }
  if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
  {
    do
    {
      v50 = *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
      v51 = v78;
      for ( k = v78[0]; k && k != v50; k = *v51 )
        ++v51;
      v53 = v51 - v78;
      if ( v53 >= 0xA )
        break;
      if ( v22 < 36 )
      {
        *v14++ = `std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getffld'::`2'::_Src[v53];
        ++v22;
      }
      v21 = 1;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) );
    v45 = v67;
  }
  if ( !v21 )
    goto LABEL_132;
  if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
    goto LABEL_132;
  v54 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
  if ( *v54 != v82 )
  {
    v55 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
    if ( *v55 != v81 )
      goto LABEL_132;
  }
  *v14++ = 101;
  std::istreambuf_iterator<unsigned short>::_Inc(a3);
  v21 = 0;
  v56 = 0;
  if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
  {
    v57 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
    v58 = a3;
    if ( *v57 == v80 )
    {
      *v14 = 43;
    }
    else
    {
      v59 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
      if ( *v59 != v79 )
        goto LABEL_117;
      *v14 = 45;
      v58 = a3;
    }
    ++v14;
    std::istreambuf_iterator<unsigned short>::_Inc(v58);
  }
LABEL_117:
  if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
  {
    do
    {
      v60 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
      if ( *v60 != v78[0] )
        break;
      v21 = 1;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) );
    if ( v21 )
      *v14++ = 48;
  }
  if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
  {
    do
    {
      v61 = *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
      v62 = v78;
      for ( m = v78[0]; m && m != v61; m = *v62 )
        ++v62;
      v64 = v62 - v78;
      if ( v64 >= 0xA )
        break;
      if ( v56 < 8 )
      {
        *v14++ = `std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getffld'::`2'::_Src[v64];
        ++v56;
      }
      v21 = 1;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) );
    v45 = v67;
  }
LABEL_132:
  if ( v66 || !v21 )
    v14 = v72;
  *v14 = 0;
  if ( v77 >= 0x10 )
    operator delete(v76[0]);
  return v45;
}
