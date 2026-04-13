/*
 * XREFs of ?_Getffldx@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x180038234
 * Callers:
 *     ?_Getffld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x180036F2C (-_Getffld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 * Callees:
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
__int64 __fastcall std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int *a6)
{
  __int64 v6; // r15
  __int64 v9; // rbx
  void (__fastcall ***v10)(_QWORD, __int64); // r8
  __int64 v11; // r12
  void (__fastcall ***v12)(_QWORD, __int64); // rax
  __int64 v13; // rbx
  __int64 v14; // rsi
  void (__fastcall ***v15)(_QWORD, __int64); // rax
  _WORD *v16; // rsi
  _WORD *v17; // rax
  __int64 v18; // rcx
  _WORD *v19; // rax
  char *v20; // rsi
  int v21; // r14d
  __int64 v22; // rbx
  _WORD *v23; // rax
  _WORD *v24; // rax
  _WORD *v25; // rax
  void **v26; // r13
  __int16 v27; // r12
  unsigned __int64 v28; // r15
  char v29; // al
  _QWORD *v30; // r14
  int v31; // r13d
  __int16 v32; // dx
  __int16 *v33; // rax
  __int16 j; // cx
  unsigned __int64 v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  char *v39; // rax
  void **v40; // rdx
  char v41; // cl
  _QWORD *v42; // rax
  char *v43; // rax
  char v44; // r12
  __int16 v45; // bx
  int v46; // r14d
  _WORD *v47; // rax
  int v48; // r13d
  __int16 v49; // dx
  __int16 *v50; // rax
  __int16 i; // cx
  unsigned __int64 v52; // rax
  __int16 v53; // dx
  __int16 *v54; // rax
  __int16 k; // cx
  unsigned __int64 v56; // rax
  _WORD *v57; // rax
  _WORD *v58; // rax
  int v59; // ebx
  _WORD *v60; // rax
  __int64 v61; // rcx
  _WORD *v62; // rax
  _WORD *v63; // rax
  __int16 v64; // dx
  __int16 *v65; // rax
  __int16 m; // cx
  unsigned __int64 v67; // rax
  char v69; // [rsp+38h] [rbp-A9h]
  char v70; // [rsp+39h] [rbp-A8h]
  int v71; // [rsp+3Ch] [rbp-A5h]
  __int64 v72; // [rsp+40h] [rbp-A1h] BYREF
  __int64 v73; // [rsp+48h] [rbp-99h]
  void **v74; // [rsp+50h] [rbp-91h]
  __int64 v75; // [rsp+58h] [rbp-89h]
  char *v76; // [rsp+60h] [rbp-81h]
  int *v77; // [rsp+68h] [rbp-79h]
  __int64 v78; // [rsp+70h] [rbp-71h]
  _QWORD v79[3]; // [rsp+78h] [rbp-69h] BYREF
  __int64 v80; // [rsp+90h] [rbp-51h]
  void *v81[3]; // [rsp+98h] [rbp-49h] BYREF
  unsigned __int64 v82; // [rsp+B0h] [rbp-31h]
  _WORD v83[22]; // [rsp+B8h] [rbp-29h] BYREF
  __int16 v84; // [rsp+E4h] [rbp+3h]
  __int16 v85; // [rsp+E6h] [rbp+5h]
  __int16 v86; // [rsp+E8h] [rbp+7h]
  __int16 v87; // [rsp+EAh] [rbp+9h]
  __int16 v88; // [rsp+ECh] [rbp+Bh]
  __int16 v89; // [rsp+EEh] [rbp+Dh]

  v78 = -2LL;
  v6 = a4;
  v73 = a4;
  v76 = a2;
  v77 = a6;
  v9 = **(_QWORD **)(a5 + 64);
  v72 = v9;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v11 = std::use_facet<std::numpunct<unsigned short>>(&v72);
  v75 = v11;
  if ( v9 )
  {
    v12 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v10 = v12;
    if ( v12 )
      (**v12)(v12, 1LL);
  }
  (*(void (__fastcall **)(__int64, void **, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v11 + 40LL))(
    v11,
    v81,
    v10);
  v13 = **(_QWORD **)(a5 + 64);
  v72 = v13;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  v14 = std::use_facet<std::ctype<unsigned short>>(&v72);
  if ( v13 )
  {
    v15 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v15 )
      (**v15)(v15, 1LL);
  }
  (*(void (__fastcall **)(__int64, const char *, char *, _WORD *))(*(_QWORD *)v14 + 88LL))(
    v14,
    "0123456789ABCDEFabcdef-+XxPp",
    "",
    v83);
  v16 = a2;
  v70 = 0;
  if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
  {
    v17 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
    v18 = a3;
    if ( *v17 == v85 )
    {
      *a2 = 43;
LABEL_12:
      v16 = a2 + 1;
      std::istreambuf_iterator<unsigned short>::_Inc(v18);
      goto LABEL_13;
    }
    v19 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
    if ( *v19 == v84 )
    {
      *a2 = 45;
      v18 = a3;
      goto LABEL_12;
    }
  }
LABEL_13:
  *v16 = 30768;
  v20 = (char *)(v16 + 1);
  v69 = 0;
  v21 = 0;
  LODWORD(v72) = 0;
  v22 = 0LL;
  v71 = 0;
  if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
  {
    v23 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
    if ( *v23 == v83[0] )
    {
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
      if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6)
        && ((v24 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3), *v24 == v87)
         || (v25 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3), *v25 == v86)) )
      {
        std::istreambuf_iterator<unsigned short>::_Inc(a3);
      }
      else
      {
        v69 = 1;
      }
    }
  }
  v26 = v81;
  if ( v82 >= 0x10 )
    v26 = (void **)v81[0];
  v74 = v26;
  if ( (unsigned __int8)(*(_BYTE *)v26 - 1) > 0x7Du )
  {
    if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
    {
      do
      {
        v49 = *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
        v50 = v83;
        for ( i = v83[0]; i && i != v49; i = *v50 )
          ++v50;
        v52 = v50 - v83;
        if ( v52 >= 0x16 )
          break;
        if ( v21 < 36 )
        {
          if ( v52 || v21 )
          {
            *v20++ = `std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx'::`2'::_Src[v52];
            ++v21;
          }
        }
        else
        {
          LODWORD(v22) = v22 + 1;
        }
        v69 = 1;
        std::istreambuf_iterator<unsigned short>::_Inc(a3);
      }
      while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) );
      v71 = v22;
      LODWORD(v72) = v21;
    }
  }
  else
  {
    if ( v81[2] )
      v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 32LL))(v11);
    else
      v27 = 0;
    v28 = 15LL;
    v80 = 15LL;
    LOWORD(v79[0]) = 0;
    v79[2] = 1LL;
    v29 = std::istreambuf_iterator<wchar_t>::equal(a3, v73);
    v30 = (_QWORD *)v79[0];
    if ( !v29 )
    {
      v31 = 0;
      while ( 1 )
      {
        v32 = *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
        v33 = v83;
        for ( j = v83[0]; j && j != v32; j = *v33 )
          ++v33;
        v35 = v33 - v83;
        if ( v35 >= 0x16 )
        {
          v38 = v79;
          if ( v28 >= 0x10 )
            v38 = v30;
          if ( !*((_BYTE *)v38 + v22)
            || !v27
            || *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) != v27 )
          {
LABEL_52:
            LODWORD(v72) = v31;
            v26 = v74;
            if ( !v22 )
              break;
            v39 = (char *)v79;
            if ( v28 >= 0x10 )
              v39 = (char *)v30;
            if ( v39[v22] > 0 )
            {
              ++v22;
              break;
            }
LABEL_70:
            v70 = 1;
            goto LABEL_71;
          }
          std::string::append(v79, 1LL);
          ++v22;
        }
        else
        {
          v69 = 1;
          if ( v31 < 36 )
          {
            if ( v35 || v31 )
            {
              *v20++ = `std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx'::`2'::_Src[v35];
              ++v31;
            }
          }
          else
          {
            ++v71;
          }
          v36 = v79;
          if ( v28 >= 0x10 )
            v36 = v30;
          if ( *((_BYTE *)v36 + v22) == 127 )
            goto LABEL_51;
          v37 = v79;
          if ( v28 >= 0x10 )
            v37 = v30;
          ++*((_BYTE *)v37 + v22);
        }
        v30 = (_QWORD *)v79[0];
        v28 = v80;
LABEL_51:
        std::istreambuf_iterator<unsigned short>::_Inc(a3);
        if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v73) )
          goto LABEL_52;
      }
    }
    while ( 1 )
    {
      v40 = v26;
      if ( !v22 )
        break;
      v41 = *(_BYTE *)v26;
      if ( *(_BYTE *)v26 == 127 )
        break;
      if ( --v22 )
      {
        v42 = v79;
        if ( v28 >= 0x10 )
          v42 = v30;
        if ( v41 != *((_BYTE *)v42 + v22) )
          goto LABEL_70;
      }
      if ( !v22 )
      {
        v43 = (char *)v79;
        if ( v28 >= 0x10 )
          v43 = (char *)v30;
        if ( v41 < *v43 )
          goto LABEL_70;
      }
      v26 = (void **)((char *)v26 + 1);
      if ( *(char *)v26 <= 0 )
        v26 = v40;
    }
LABEL_71:
    if ( v28 >= 0x10 )
      operator delete(v30);
    v6 = v73;
    v21 = v72;
  }
  v44 = v69;
  if ( v69 && !v21 )
    *v20++ = 48;
  if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
  {
    v45 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v75 + 24LL))(v75);
    if ( *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) == v45 )
    {
      *v20++ = *localeconv()->decimal_point;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
  }
  if ( v21 )
  {
    v48 = v71;
  }
  else
  {
    if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
    {
      v46 = v71;
      do
      {
        v47 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
        if ( *v47 != v83[0] )
          break;
        --v46;
        v44 = 1;
        std::istreambuf_iterator<unsigned short>::_Inc(a3);
      }
      while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) );
      v71 = v46;
      v21 = v72;
    }
    v48 = v71;
    if ( v71 < 0 )
    {
      *v20++ = 48;
      v48 = ++v71;
    }
  }
  if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
  {
    do
    {
      v53 = *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
      v54 = v83;
      for ( k = v83[0]; k && k != v53; k = *v54 )
        ++v54;
      v56 = v54 - v83;
      if ( v56 >= 0x16 )
        break;
      if ( v21 < 36 )
      {
        *v20++ = `std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx'::`2'::_Src[v56];
        ++v21;
      }
      v44 = 1;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) );
    v48 = v71;
  }
  if ( v44 )
  {
    if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
    {
      v57 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
      if ( *v57 == v89 || (v58 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3), *v58 == v88) )
      {
        *v20++ = 112;
        std::istreambuf_iterator<unsigned short>::_Inc(a3);
        v44 = 0;
        v59 = 0;
        if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
          goto LABEL_122;
        v60 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
        v61 = a3;
        if ( *v60 == v85 )
        {
          *v20 = 43;
        }
        else
        {
          v62 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
          if ( *v62 != v84 )
            goto LABEL_122;
          *v20 = 45;
          v61 = a3;
        }
        ++v20;
        std::istreambuf_iterator<unsigned short>::_Inc(v61);
LABEL_122:
        if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
        {
          do
          {
            v63 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
            if ( *v63 != v83[0] )
              break;
            v44 = 1;
            std::istreambuf_iterator<unsigned short>::_Inc(a3);
          }
          while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) );
          if ( v44 )
            *v20++ = 48;
        }
        if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
        {
          do
          {
            v64 = *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
            v65 = v83;
            for ( m = v83[0]; m && m != v64; m = *v65 )
              ++v65;
            v67 = v65 - v83;
            if ( v67 >= 0x16 )
              break;
            if ( v59 < 8 )
            {
              *v20++ = `std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx'::`2'::_Src[v67];
              ++v59;
            }
            v44 = 1;
            std::istreambuf_iterator<unsigned short>::_Inc(a3);
          }
          while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) );
          v48 = v71;
        }
      }
    }
  }
  if ( v70 || !v44 )
    v20 = v76;
  *v20 = 0;
  *v77 = v48;
  if ( v82 >= 0x10 )
    operator delete(v81[0]);
  return 0LL;
}
