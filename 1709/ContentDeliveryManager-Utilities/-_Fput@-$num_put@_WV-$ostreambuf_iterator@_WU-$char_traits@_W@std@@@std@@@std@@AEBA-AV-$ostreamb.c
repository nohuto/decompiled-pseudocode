/*
 * XREFs of ?_Fput@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_WPEBD_K444@Z @ 0x1800A35E4
 * Callers:
 *     ?do_put@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_WN@Z @ 0x1800AC220 (-do_put@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_1800AC220.c)
 *     ?do_put@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_WO@Z @ 0x1800AC3E0 (-do_put@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_1800AC3E0.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x1800823E4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 *     ??$use_facet@V?$numpunct@_W@std@@@std@@YAAEBV?$numpunct@_W@0@AEBVlocale@0@@Z @ 0x180082878 (--$use_facet@V-$numpunct@_W@std@@@std@@YAAEBV-$numpunct@_W@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x180082B48 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     ??4?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEAAAEAV01@_W@Z @ 0x1800A2D2C (--4-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEAAAEAV01@_W@Z.c)
 *     ?insert@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0_W@Z @ 0x1800ACFE8 (-insert@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0_W@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800B3E2F (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_OWORD *__fastcall std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Fput(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        __int64 a4,
        unsigned __int16 a5,
        char *Str,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned __int64 a10)
{
  __int64 v10; // r13
  __int64 v12; // rdi
  const char *v13; // rdx
  size_t v14; // r12
  __int64 v15; // rbx
  void (__fastcall ***v16)(_QWORD, __int64); // rax
  __int64 v17; // rdx
  __int64 v18; // rbx
  void **v19; // r9
  __int64 v20; // rbx
  struct std::_Facet_base *v21; // r14
  void (__fastcall ***v22)(_QWORD, __int64); // rax
  __int64 v23; // rbx
  size_t v24; // rax
  unsigned __int16 v25; // bx
  __int16 v26; // cx
  void **v27; // rax
  __int64 v28; // r9
  size_t v29; // r14
  char *v30; // rbx
  unsigned __int16 v31; // r15
  unsigned __int64 v32; // rcx
  char *v33; // rax
  unsigned __int64 v34; // r14
  __int64 v35; // rbx
  unsigned __int64 v36; // rbx
  int v37; // eax
  __int128 v38; // xmm0
  unsigned __int16 *v39; // r15
  __int64 v40; // r12
  unsigned __int16 *v41; // r15
  __int64 v42; // r12
  unsigned __int16 *v43; // r15
  __int64 v44; // r12
  void **v45; // rax
  unsigned __int64 v46; // r14
  unsigned __int16 *v47; // rdi
  __int128 v48; // xmm0
  _OWORD *v49; // rbx
  __int128 v51; // [rsp+48h] [rbp-79h] BYREF
  char Control[4]; // [rsp+58h] [rbp-69h] BYREF
  unsigned __int16 v53; // [rsp+5Ch] [rbp-65h]
  unsigned __int16 v54; // [rsp+5Eh] [rbp-63h]
  __int64 v55; // [rsp+60h] [rbp-61h]
  size_t v56; // [rsp+68h] [rbp-59h]
  _OWORD *v57; // [rsp+70h] [rbp-51h]
  __int64 v58; // [rsp+78h] [rbp-49h]
  void *v59[2]; // [rsp+80h] [rbp-41h] BYREF
  unsigned __int64 v60; // [rsp+90h] [rbp-31h]
  unsigned __int64 v61; // [rsp+98h] [rbp-29h]
  void *v62[3]; // [rsp+A0h] [rbp-21h] BYREF
  unsigned __int64 v63; // [rsp+B8h] [rbp-9h]

  v58 = -2LL;
  v10 = a4;
  v55 = a4;
  v57 = a2;
  if ( !a10 || (v12 = 1LL, ((*Str - 43) & 0xFD) != 0) )
    v12 = 0LL;
  if ( (*(_DWORD *)(a4 + 24) & 0x3000) == 0x3000 )
  {
    v13 = "pP";
    if ( v12 + 2 <= a10 && Str[v12] == 48 && ((Str[v12 + 1] - 88) & 0xDF) == 0 )
      v12 += 2LL;
  }
  else
  {
    v13 = "eE";
  }
  v56 = strcspn(Str, v13);
  strcpy(Control, ".");
  Control[0] = *localeconv()->decimal_point;
  v14 = strcspn(Str, Control);
  v15 = **(_QWORD **)(v10 + 64);
  *(_QWORD *)&v51 = v15;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  *(_QWORD *)&v51 = std::use_facet<std::ctype<wchar_t>>((__int64 *)&v51);
  v16 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v16 )
    (**v16)(v16, 1LL);
  v18 = v51;
  LOBYTE(v17) = 48;
  v53 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v51 + 96LL))(v51, v17);
  v61 = 7LL;
  v60 = 0LL;
  LOWORD(v59[0]) = 0;
  std::wstring::assign((__int64)v59, a10, 0);
  v19 = v59;
  if ( v61 >= 8 )
    v19 = (void **)v59[0];
  (*(void (__fastcall **)(__int64, char *, char *, void **))(*(_QWORD *)v18 + 88LL))(v18, Str, &Str[a10], v19);
  v20 = **(_QWORD **)(v10 + 64);
  *(_QWORD *)&v51 = v20;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
  v21 = std::use_facet<std::numpunct<wchar_t>>((__int64 *)&v51);
  v22 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v22 )
    (**v22)(v22, 1LL);
  (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v21 + 40LL))(v21, v62);
  v54 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v21 + 32LL))(v21);
  if ( v14 == a10 )
  {
    v23 = a7;
    std::wstring::insert(v59, v56, a7, v53);
    v24 = v56;
  }
  else
  {
    v25 = v53;
    std::wstring::insert(v59, v56, a9, v53);
    std::wstring::insert(v59, v14 + 1, a8, v25);
    v26 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v21 + 24LL))(v21);
    v27 = v59;
    if ( v61 >= 8 )
      v27 = (void **)v59[0];
    *((_WORD *)v27 + v14) = v26;
    v28 = v25;
    v23 = a7;
    std::wstring::insert(v59, v14, a7, v28);
    v24 = v14;
  }
  v29 = v24 + v23;
  v30 = (char *)v62;
  if ( v63 >= 0x10 )
    v30 = (char *)v62[0];
  if ( *v30 != 127 )
  {
    v31 = v54;
    do
    {
      if ( *v30 <= 0 )
        break;
      v32 = *v30;
      if ( v32 >= v29 - v12 )
        break;
      v29 -= v32;
      std::wstring::insert(v59, v29, 1LL, v31);
      v33 = v30 + 1;
      if ( v30[1] <= 0 )
        v33 = v30;
      v30 = v33;
    }
    while ( *v33 != 127 );
  }
  v34 = v60;
  v35 = *(_QWORD *)(v10 + 40);
  if ( v35 <= 0 || v35 <= v60 )
    v36 = 0LL;
  else
    v36 = v35 - v60;
  v37 = *(_DWORD *)(v10 + 24) & 0x1C0;
  v38 = *a3;
  v51 = *a3;
  if ( v37 == 64 )
  {
    v43 = (unsigned __int16 *)v59;
    if ( v61 >= 8 )
      v43 = (unsigned __int16 *)v59[0];
    v44 = v12;
    if ( v12 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v51, *v43++);
        --v44;
      }
      while ( v44 );
      goto LABEL_57;
    }
  }
  else if ( v37 == 256 )
  {
    v41 = (unsigned __int16 *)v59;
    if ( v61 >= 8 )
      v41 = (unsigned __int16 *)v59[0];
    v42 = v12;
    if ( v12 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v51, *v41++);
        --v42;
      }
      while ( v42 );
      v38 = v51;
      v10 = v55;
    }
    *a3 = v38;
    v51 = v38;
    if ( v36 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v51, a5);
        --v36;
      }
      while ( v36 );
      v38 = v51;
    }
    v36 = 0LL;
  }
  else
  {
    if ( v36 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v51, a5);
        --v36;
      }
      while ( v36 );
      v38 = v51;
    }
    *a3 = v38;
    v36 = 0LL;
    v51 = v38;
    v39 = (unsigned __int16 *)v59;
    if ( v61 >= 8 )
      v39 = (unsigned __int16 *)v59[0];
    v40 = v12;
    if ( v12 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v51, *v39++);
        --v40;
      }
      while ( v40 );
LABEL_57:
      v38 = v51;
      v10 = v55;
    }
  }
  *a3 = v38;
  v51 = v38;
  v45 = v59;
  if ( v61 >= 8 )
    v45 = (void **)v59[0];
  v46 = v34 - v12;
  v47 = (unsigned __int16 *)v45 + v12;
  if ( v46 )
  {
    do
    {
      std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v51, *v47++);
      --v46;
    }
    while ( v46 );
    v38 = v51;
    v10 = v55;
  }
  *a3 = v38;
  *(_QWORD *)(v10 + 40) = 0LL;
  v48 = *a3;
  v51 = *a3;
  if ( v36 )
  {
    do
    {
      std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v51, a5);
      --v36;
    }
    while ( v36 );
    v48 = v51;
  }
  v49 = v57;
  *v57 = v48;
  if ( v63 >= 0x10 )
    operator delete(v62[0]);
  v63 = 15LL;
  v62[2] = 0LL;
  LOBYTE(v62[0]) = 0;
  if ( v61 >= 8 )
    operator delete(v59[0]);
  return v49;
}
