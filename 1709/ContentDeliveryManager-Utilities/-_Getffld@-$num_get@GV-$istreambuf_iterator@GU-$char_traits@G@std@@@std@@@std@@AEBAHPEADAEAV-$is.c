/*
 * XREFs of ?_Getffld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x180033C30
 * Callers:
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAO@Z @ 0x180032720 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_180032720.c)
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAN@Z @ 0x180032800 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_180032800.c)
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAM@Z @ 0x1800328E0 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_1800328E0.c)
 * Callees:
 *     ?_Getffldx@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x180034D54 (-_Getffldx@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$i.c)
 *     ??D?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@QEBAAEBGXZ @ 0x1800354F8 (--D-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@QEBAAEBGXZ.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180035938 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x1800363A4 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180036584 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@G@std@@@std@@YAAEBV?$numpunct@G@0@AEBVlocale@0@@Z @ 0x1800378E4 (--$use_facet@V-$numpunct@G@std@@@std@@YAAEBV-$numpunct@G@0@AEBVlocale@0@@Z.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x1800381A8 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
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
  void (__fastcall ***v12)(_QWORD, __int64); // rax
  void (__fastcall ***v13)(_QWORD, __int64); // r8
  int v14; // r13d
  char *v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // r14
  void (__fastcall ***v18)(_QWORD, __int64); // rax
  _WORD *v19; // rax
  __int64 v20; // rcx
  _WORD *v21; // rax
  char v22; // r14
  int v23; // ebx
  void **v24; // r12
  unsigned __int64 v25; // r15
  __int64 v26; // rbx
  char v27; // al
  _QWORD *v28; // r14
  __int16 v29; // dx
  __int16 *v30; // rax
  __int16 j; // cx
  unsigned __int64 v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  char *v36; // rax
  void **v37; // rdx
  char v38; // cl
  _QWORD *v39; // rax
  char *v40; // rax
  __int16 v41; // dx
  __int16 *v42; // rax
  __int16 i; // cx
  unsigned __int64 v44; // rax
  __int16 v45; // bx
  int v46; // r13d
  _WORD *v47; // rax
  unsigned int v48; // r12d
  __int16 v49; // dx
  __int16 *v50; // rax
  __int16 k; // cx
  unsigned __int64 v52; // rax
  _WORD *v53; // rax
  _WORD *v54; // rax
  int v55; // ebx
  _WORD *v56; // rax
  __int64 v57; // rcx
  _WORD *v58; // rax
  _WORD *v59; // rax
  __int16 v60; // dx
  __int16 *v61; // rax
  __int16 m; // cx
  unsigned __int64 v63; // rax
  char v64; // [rsp+38h] [rbp-99h]
  char v65; // [rsp+39h] [rbp-98h]
  int v66; // [rsp+3Ch] [rbp-95h]
  __int16 v67; // [rsp+40h] [rbp-91h]
  __int64 v68; // [rsp+48h] [rbp-89h] BYREF
  __int64 v69; // [rsp+50h] [rbp-81h]
  __int64 v70; // [rsp+58h] [rbp-79h] BYREF
  void **v71; // [rsp+60h] [rbp-71h]
  char *v72; // [rsp+68h] [rbp-69h]
  __int64 v73; // [rsp+70h] [rbp-61h]
  _QWORD v74[3]; // [rsp+78h] [rbp-59h] BYREF
  __int64 v75; // [rsp+90h] [rbp-41h]
  void *v76[3]; // [rsp+98h] [rbp-39h] BYREF
  unsigned __int64 v77; // [rsp+B0h] [rbp-21h]
  _WORD v78[10]; // [rsp+B8h] [rbp-19h] BYREF
  __int16 v79; // [rsp+CCh] [rbp-5h]
  __int16 v80; // [rsp+CEh] [rbp-3h]
  __int16 v81; // [rsp+D0h] [rbp-1h]
  __int16 v82; // [rsp+D2h] [rbp+1h]

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
  v12 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v13 = v12;
  v14 = 0;
  if ( v12 )
    (**v12)(v12, 1LL);
  (*(void (__fastcall **)(__int64, void **, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v11 + 40LL))(
    v11,
    v76,
    v13);
  v15 = a2;
  v65 = 0;
  v16 = **(_QWORD **)(a5 + 64);
  v68 = v16;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  v17 = std::use_facet<std::ctype<unsigned short>>(&v68);
  v18 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v18 )
    (**v18)(v18, 1LL);
  (*(void (__fastcall **)(__int64, const char *, char *, _WORD *))(*(_QWORD *)v17 + 88LL))(
    v17,
    "0123456789-+Ee",
    "",
    v78);
  if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
  {
    v19 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
    v20 = a3;
    if ( *v19 == v80 )
    {
      *a2 = 43;
    }
    else
    {
      v21 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
      if ( *v21 != v79 )
        goto LABEL_13;
      *a2 = 45;
      v20 = a3;
    }
    v15 = a2 + 1;
    std::istreambuf_iterator<unsigned short>::_Inc(v20);
  }
LABEL_13:
  v22 = 0;
  v64 = 0;
  LODWORD(v68) = 0;
  v23 = 0;
  v66 = 0;
  v24 = v76;
  if ( v77 >= 0x10 )
    v24 = (void **)v76[0];
  v71 = v24;
  if ( (unsigned __int8)(*(_BYTE *)v24 - 1) > 0x7Du )
  {
    if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
      goto LABEL_82;
    do
    {
      v41 = *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
      v42 = v78;
      for ( i = v78[0]; i && i != v41; i = *v42 )
        ++v42;
      v44 = v42 - v78;
      if ( v44 >= 0xA )
        break;
      if ( v14 < 36 )
      {
        if ( v44 || v14 )
        {
          *v15++ = `std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getffld'::`2'::_Src[v44];
          ++v14;
        }
      }
      else
      {
        ++v23;
      }
      v22 = 1;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) );
    v66 = v23;
    LODWORD(v68) = v14;
  }
  else
  {
    if ( v76[2] )
      v67 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v70 + 32LL))(v70);
    else
      v67 = 0;
    v25 = 15LL;
    v75 = 15LL;
    LOWORD(v74[0]) = 0;
    v74[2] = 1LL;
    v26 = 0LL;
    v27 = std::istreambuf_iterator<wchar_t>::equal(a3, v69);
    v28 = (_QWORD *)v74[0];
    if ( !v27 )
    {
      while ( 1 )
      {
        v29 = *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
        v30 = v78;
        for ( j = v78[0]; j && j != v29; j = *v30 )
          ++v30;
        v32 = v30 - v78;
        if ( v32 >= 0xA )
        {
          v35 = v74;
          if ( v25 >= 0x10 )
            v35 = v28;
          if ( !*((_BYTE *)v35 + v26)
            || !v67
            || *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) != v67 )
          {
LABEL_44:
            LODWORD(v68) = v14;
            v24 = v71;
            if ( !v26 )
              break;
            v36 = (char *)v74;
            if ( v25 >= 0x10 )
              v36 = (char *)v28;
            if ( v36[v26] > 0 )
            {
              ++v26;
              break;
            }
LABEL_62:
            v65 = 1;
            goto LABEL_63;
          }
          std::string::append(v74, 1LL);
          ++v26;
        }
        else
        {
          v64 = 1;
          if ( v14 < 36 )
          {
            if ( v32 || v14 )
            {
              *v15++ = `std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getffld'::`2'::_Src[v32];
              ++v14;
            }
          }
          else
          {
            ++v66;
          }
          v33 = v74;
          if ( v25 >= 0x10 )
            v33 = v28;
          if ( *((_BYTE *)v33 + v26) == 127 )
            goto LABEL_43;
          v34 = v74;
          if ( v25 >= 0x10 )
            v34 = v28;
          ++*((_BYTE *)v34 + v26);
        }
        v28 = (_QWORD *)v74[0];
        v25 = v75;
LABEL_43:
        std::istreambuf_iterator<unsigned short>::_Inc(a3);
        if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v69) )
          goto LABEL_44;
      }
    }
    while ( 1 )
    {
      v37 = v24;
      if ( !v26 )
        break;
      v38 = *(_BYTE *)v24;
      if ( *(_BYTE *)v24 == 127 )
        break;
      if ( --v26 )
      {
        v39 = v74;
        if ( v25 >= 0x10 )
          v39 = v28;
        if ( v38 != *((_BYTE *)v39 + v26) )
          goto LABEL_62;
      }
      if ( !v26 )
      {
        v40 = (char *)v74;
        if ( v25 >= 0x10 )
          v40 = (char *)v28;
        if ( v38 < *v40 )
          goto LABEL_62;
      }
      v24 = (void **)((char *)v24 + 1);
      if ( *(char *)v24 <= 0 )
        v24 = v37;
    }
LABEL_63:
    if ( v25 >= 0x10 )
      operator delete(v28);
    v22 = v64;
    v6 = v69;
  }
  if ( v22 && !v14 )
    *v15++ = 48;
LABEL_82:
  if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
  {
    v45 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v70 + 24LL))(v70);
    if ( *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) == v45 )
    {
      *v15++ = *localeconv()->decimal_point;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
  }
  if ( v14 )
  {
    v48 = v66;
  }
  else
  {
    if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
    {
      v46 = v66;
      do
      {
        v47 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
        if ( *v47 != v78[0] )
          break;
        --v46;
        v22 = 1;
        std::istreambuf_iterator<unsigned short>::_Inc(a3);
      }
      while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) );
      v66 = v46;
      v14 = v68;
    }
    v48 = v66;
    if ( v66 < 0 )
    {
      *v15++ = 48;
      v48 = ++v66;
    }
  }
  if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
  {
    do
    {
      v49 = *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
      v50 = v78;
      for ( k = v78[0]; k && k != v49; k = *v50 )
        ++v50;
      v52 = v50 - v78;
      if ( v52 >= 0xA )
        break;
      if ( v14 < 36 )
      {
        *v15++ = `std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getffld'::`2'::_Src[v52];
        ++v14;
      }
      v22 = 1;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) );
    v48 = v66;
  }
  if ( !v22 )
    goto LABEL_129;
  if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
    goto LABEL_129;
  v53 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
  if ( *v53 != v82 )
  {
    v54 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
    if ( *v54 != v81 )
      goto LABEL_129;
  }
  *v15++ = 101;
  std::istreambuf_iterator<unsigned short>::_Inc(a3);
  v22 = 0;
  v55 = 0;
  if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
  {
    v56 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
    v57 = a3;
    if ( *v56 == v80 )
    {
      *v15 = 43;
    }
    else
    {
      v58 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
      if ( *v58 != v79 )
        goto LABEL_114;
      *v15 = 45;
      v57 = a3;
    }
    ++v15;
    std::istreambuf_iterator<unsigned short>::_Inc(v57);
  }
LABEL_114:
  if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
  {
    do
    {
      v59 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
      if ( *v59 != v78[0] )
        break;
      v22 = 1;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) );
    if ( v22 )
      *v15++ = 48;
  }
  if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
  {
    do
    {
      v60 = *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
      v61 = v78;
      for ( m = v78[0]; m && m != v60; m = *v61 )
        ++v61;
      v63 = v61 - v78;
      if ( v63 >= 0xA )
        break;
      if ( v55 < 8 )
      {
        *v15++ = `std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getffld'::`2'::_Src[v63];
        ++v55;
      }
      v22 = 1;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) );
    v48 = v66;
  }
LABEL_129:
  if ( v65 || !v22 )
    v15 = v72;
  *v15 = 0;
  if ( v77 >= 0x10 )
    operator delete(v76[0]);
  return v48;
}
