/*
 * XREFs of ?_Fput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBD_K333@Z @ 0x18009986C
 * Callers:
 *     ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DN@Z @ 0x18009DAF0 (-do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18009DAF0.c)
 *     ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DO@Z @ 0x18009DCA0 (-do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18009DCA0.c)
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180035870 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x180099238 (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@D@std@@@std@@YAAEBV?$numpunct@D@0@AEBVlocale@0@@Z @ 0x1800995EC (--$use_facet@V-$numpunct@D@std@@@std@@YAAEBV-$numpunct@D@0@AEBVlocale@0@@Z.c)
 *     ??4?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@QEAAAEAV01@D@Z @ 0x180099728 (--4-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@QEAAAEAV01@D@Z.c)
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z @ 0x18009E43C (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800B3E2F (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_OWORD *__fastcall std::num_put<char,std::ostreambuf_iterator<char>>::_Fput(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        __int64 a4,
        char a5,
        char *Str,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        size_t Size)
{
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
  __int64 v23; // r9
  __int64 v24; // rbx
  __int64 v25; // r9
  size_t v26; // rax
  __int64 v27; // r9
  char v28; // cl
  __int64 v29; // r9
  void **v30; // rax
  size_t v31; // r14
  char *v32; // rbx
  unsigned __int64 v33; // rcx
  char *v34; // rax
  unsigned __int64 v35; // r14
  __int64 v36; // rbx
  unsigned __int64 v37; // rbx
  int v38; // eax
  __int128 v39; // xmm0
  unsigned __int8 *v40; // r15
  __int64 v41; // r12
  unsigned __int8 *v42; // r15
  __int64 v43; // r12
  unsigned __int8 *v44; // r15
  __int64 v45; // r12
  void **v46; // rax
  __int64 v47; // r14
  unsigned __int8 *v48; // rdi
  __int128 v49; // xmm0
  _OWORD *v50; // rbx
  char v52; // [rsp+39h] [rbp-88h]
  char v53; // [rsp+3Ah] [rbp-87h]
  __int128 v54; // [rsp+48h] [rbp-79h] BYREF
  char Control[8]; // [rsp+58h] [rbp-69h] BYREF
  size_t v56; // [rsp+60h] [rbp-61h]
  _OWORD *v57; // [rsp+68h] [rbp-59h]
  __int64 v58; // [rsp+70h] [rbp-51h]
  void *v59[2]; // [rsp+78h] [rbp-49h] BYREF
  unsigned __int64 v60; // [rsp+88h] [rbp-39h]
  unsigned __int64 v61; // [rsp+90h] [rbp-31h]
  void *v62[3]; // [rsp+98h] [rbp-29h] BYREF
  unsigned __int64 v63; // [rsp+B0h] [rbp-11h]

  v58 = -2LL;
  v57 = a2;
  v12 = Size && ((*Str - 43) & 0xFD) == 0;
  if ( (*(_DWORD *)(a4 + 24) & 0x3000) == 0x3000 )
  {
    v13 = "pP";
    if ( v12 + 2 <= Size && Str[v12] == 48 && ((Str[v12 + 1] - 88) & 0xDF) == 0 )
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
  v15 = **(_QWORD **)(a4 + 64);
  *(_QWORD *)&v54 = v15;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  *(_QWORD *)&v54 = std::use_facet<std::ctype<char>>((__int64 *)&v54);
  v16 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v16 )
    (**v16)(v16, 1LL);
  v18 = v54;
  LOBYTE(v17) = 48;
  v52 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v54 + 64LL))(v54, v17);
  v61 = 15LL;
  v60 = 0LL;
  LOBYTE(v59[0]) = 0;
  std::string::assign(v59, Size, 0);
  v19 = v59;
  if ( v61 >= 0x10 )
    v19 = (void **)v59[0];
  (*(void (__fastcall **)(__int64, char *, char *, void **))(*(_QWORD *)v18 + 56LL))(v18, Str, &Str[Size], v19);
  v20 = **(_QWORD **)(a4 + 64);
  *(_QWORD *)&v54 = v20;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
  v21 = std::use_facet<std::numpunct<char>>((__int64 *)&v54);
  v22 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v22 )
    (**v22)(v22, 1LL);
  (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v21 + 40LL))(v21, v62);
  v53 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v21 + 32LL))(v21);
  if ( v14 == Size )
  {
    LOBYTE(v23) = v52;
    v24 = a7;
    std::string::insert(v59, v56, a7, v23);
    v26 = v56;
  }
  else
  {
    LOBYTE(v23) = v52;
    std::string::insert(v59, v56, a9, v23);
    LOBYTE(v27) = v52;
    std::string::insert(v59, v14 + 1, a8, v27);
    v28 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v21 + 24LL))(v21);
    v30 = v59;
    if ( v61 >= 0x10 )
      v30 = (void **)v59[0];
    *((_BYTE *)v30 + v14) = v28;
    LOBYTE(v29) = v52;
    v24 = a7;
    std::string::insert(v59, v14, a7, v29);
    v26 = v14;
  }
  v31 = v26 + v24;
  v32 = (char *)v62;
  if ( v63 >= 0x10 )
    v32 = (char *)v62[0];
  if ( *v32 != 127 )
  {
    do
    {
      if ( *v32 <= 0 )
        break;
      v33 = *v32;
      if ( v33 >= v31 - v12 )
        break;
      v31 -= v33;
      LOBYTE(v25) = v53;
      std::string::insert(v59, v31, 1LL, v25);
      v34 = v32 + 1;
      if ( v32[1] <= 0 )
        v34 = v32;
      v32 = v34;
    }
    while ( *v34 != 127 );
  }
  v35 = v60;
  v36 = *(_QWORD *)(a4 + 40);
  if ( v36 <= 0 || v36 <= v60 )
    v37 = 0LL;
  else
    v37 = v36 - v60;
  v38 = *(_DWORD *)(a4 + 24) & 0x1C0;
  v39 = *a3;
  v54 = *a3;
  if ( v38 == 64 )
  {
    v44 = (unsigned __int8 *)v59;
    if ( v61 >= 0x10 )
      v44 = (unsigned __int8 *)v59[0];
    v45 = v12;
    if ( v12 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v54, *v44++);
        --v45;
      }
      while ( v45 );
      goto LABEL_57;
    }
  }
  else if ( v38 == 256 )
  {
    v42 = (unsigned __int8 *)v59;
    if ( v61 >= 0x10 )
      v42 = (unsigned __int8 *)v59[0];
    v43 = v12;
    if ( v12 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v54, *v42++);
        --v43;
      }
      while ( v43 );
      v39 = v54;
    }
    *a3 = v39;
    v54 = v39;
    if ( v37 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v54, a5);
        --v37;
      }
      while ( v37 );
      v39 = v54;
    }
    v37 = 0LL;
  }
  else
  {
    if ( v37 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v54, a5);
        --v37;
      }
      while ( v37 );
      v39 = v54;
    }
    *a3 = v39;
    v37 = 0LL;
    v54 = v39;
    v40 = (unsigned __int8 *)v59;
    if ( v61 >= 0x10 )
      v40 = (unsigned __int8 *)v59[0];
    v41 = v12;
    if ( v12 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v54, *v40++);
        --v41;
      }
      while ( v41 );
LABEL_57:
      v39 = v54;
    }
  }
  *a3 = v39;
  v54 = v39;
  v46 = v59;
  if ( v61 >= 0x10 )
    v46 = (void **)v59[0];
  v47 = v35 - v12;
  v48 = (unsigned __int8 *)v46 + v12;
  if ( v47 )
  {
    do
    {
      std::ostreambuf_iterator<char>::operator=((__int64)&v54, *v48++);
      --v47;
    }
    while ( v47 );
    v39 = v54;
  }
  *a3 = v39;
  *(_QWORD *)(a4 + 40) = 0LL;
  v49 = *a3;
  v54 = *a3;
  if ( v37 )
  {
    do
    {
      std::ostreambuf_iterator<char>::operator=((__int64)&v54, a5);
      --v37;
    }
    while ( v37 );
    v49 = v54;
  }
  v50 = v57;
  *v57 = v49;
  if ( v63 >= 0x10 )
    operator delete(v62[0]);
  v63 = 15LL;
  v62[2] = 0LL;
  LOBYTE(v62[0]) = 0;
  if ( v61 >= 0x10 )
    operator delete(v59[0]);
  return v50;
}
