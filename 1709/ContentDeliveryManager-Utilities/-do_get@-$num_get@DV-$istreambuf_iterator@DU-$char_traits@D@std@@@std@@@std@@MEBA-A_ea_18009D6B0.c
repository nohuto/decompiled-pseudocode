/*
 * XREFs of ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x18009D6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180035938 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18004B004 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     _Stoulx @ 0x1800979FC (_Stoulx.c)
 *     ??$_Getloctxt@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@0@0_KPEBD@Z @ 0x180098F04 (--$_Getloctxt@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@YAHAEAV-$istreambuf_ite.c)
 *     ??$use_facet@V?$numpunct@D@std@@@std@@YAAEBV?$numpunct@D@0@AEBVlocale@0@@Z @ 0x1800995EC (--$use_facet@V-$numpunct@D@std@@@std@@YAAEBV-$numpunct@D@0@AEBVlocale@0@@Z.c)
 *     ?_Getifld@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1HAEBVlocale@2@@Z @ 0x18009B840 (-_Getifld@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x18009E360 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800B3E2F (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_OWORD *__fastcall std::num_get<char,std::istreambuf_iterator<char>>::do_get(
        __int64 a1,
        _OWORD *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        bool *a7)
{
  int v11; // edi
  __int64 v12; // rbx
  struct std::_Facet_base *v13; // r15
  void (__fastcall ***v14)(_QWORD, __int64); // rax
  void **v15; // r9
  int v16; // eax
  unsigned int v17; // r15d
  void (__fastcall ***v18)(_QWORD, __int64); // rax
  int v20; // [rsp+30h] [rbp-91h] BYREF
  __int64 v21; // [rsp+38h] [rbp-89h] BYREF
  char *v22; // [rsp+40h] [rbp-81h] BYREF
  bool *v23; // [rsp+48h] [rbp-79h]
  __int64 v24; // [rsp+50h] [rbp-71h]
  void *v25[3]; // [rsp+58h] [rbp-69h] BYREF
  unsigned __int64 v26; // [rsp+70h] [rbp-51h]
  void *v27[3]; // [rsp+78h] [rbp-49h] BYREF
  unsigned __int64 v28; // [rsp+90h] [rbp-31h]
  char v29[32]; // [rsp+98h] [rbp-29h] BYREF

  v24 = -2LL;
  v23 = a7;
  v11 = -1;
  if ( (*(_DWORD *)(a5 + 24) & 0x4000) != 0 )
  {
    v12 = **(_QWORD **)(a5 + 64);
    v21 = v12;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v13 = std::use_facet<std::numpunct<char>>(&v21);
    v14 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v14 )
      (**v14)(v14, 1LL);
    v26 = 15LL;
    LOWORD(v25[0]) = 0;
    v25[2] = (void *)1;
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 48LL))(v13, v27);
    std::string::append((size_t *)v25, v27, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v28 >= 0x10 )
      operator delete(v27[0]);
    std::string::append((size_t *)v25, 1uLL, 0);
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 56LL))(v13, v27);
    std::string::append((size_t *)v25, v27, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v28 >= 0x10 )
      operator delete(v27[0]);
    v15 = v25;
    if ( v26 >= 0x10 )
      v15 = (void **)v25[0];
    v11 = std::_Getloctxt<char,std::istreambuf_iterator<char>>(a3, a4, 2uLL, v15);
    if ( v26 >= 0x10 )
      operator delete(v25[0]);
  }
  else
  {
    v20 = 0;
    v21 = **(_QWORD **)(a5 + 64);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
    v16 = std::num_get<char,std::istreambuf_iterator<char>>::_Getifld(a1, v29, a3, a4, *(_DWORD *)(a5 + 24), &v21);
    v17 = Stoulx(v29, &v22, v16, &v20);
    if ( v21 )
    {
      v18 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      if ( v18 )
        (**v18)(v18, 1LL);
    }
    if ( v22 != v29 && !v20 && v17 <= 1 )
      v11 = v17;
  }
  if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, a4) )
    *a6 |= 1u;
  if ( v11 >= 0 )
    *v23 = v11 != 0;
  else
    *a6 |= 2u;
  *a2 = *(_OWORD *)a3;
  return a2;
}
