/*
 * XREFs of ?do_put@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@DO@Z @ 0x1800BF540
 * Callers:
 *     <none>
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180018278 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180038D64 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180038E2C (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x1800A62F8 (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ?_Putmfld@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@D1V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@D@Z @ 0x1800BD63C (-_Putmfld@-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$ostrea.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800C0E7F (--3@YAXPEAX@Z_0.c)
 *     sprintf_s_0 @ 0x1800C10A1 (sprintf_s_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *__fastcall std::money_put<char,std::ostreambuf_iterator<char>>::do_put(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3,
        char a4,
        __int64 a5,
        unsigned __int8 a6,
        double a7)
{
  double v9; // xmm3_8
  size_t i; // r14
  int v11; // eax
  size_t v12; // r12
  __int64 v13; // rbx
  __int64 v14; // rdx
  struct std::_Facet_base *v15; // rdi
  void (__fastcall ***v16)(_QWORD, __int64); // r8
  void (__fastcall ***v17)(_QWORD, __int64); // rax
  char v18; // di
  void **v19; // r9
  _QWORD v22[3]; // [rsp+60h] [rbp-89h] BYREF
  __int64 v23; // [rsp+78h] [rbp-71h]
  void *v24[5]; // [rsp+80h] [rbp-69h] BYREF
  void *v25[3]; // [rsp+A8h] [rbp-41h] BYREF
  unsigned __int64 v26; // [rsp+C0h] [rbp-29h]
  char Buffer[40]; // [rsp+C8h] [rbp-21h] BYREF

  v24[4] = (void *)-2LL;
  v23 = a1;
  v9 = a7;
  if ( a7 < 0.0 )
    *(_QWORD *)&v9 = *(_QWORD *)&a7 ^ _xmm;
  for ( i = 0LL; v9 >= 1.0e35 && i < 0x1388; i += 10LL )
    v9 = v9 / 1.0e10;
  v11 = sprintf_s_0(Buffer, 0x28uLL, "%.0Lf", v9);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v13 = **(_QWORD **)(a5 + 64);
    v22[1] = v13;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v15 = std::use_facet<std::ctype<char>>(&v22[1]);
    v22[1] = v15;
    if ( v13 )
    {
      v17 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      v16 = v17;
      if ( v17 )
        (**v17)(v17, 1LL);
    }
    LOBYTE(v14) = 48;
    v18 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, __int64, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v15 + 64LL))(
            v15,
            v14,
            v16);
    v26 = 15LL;
    v25[2] = 0LL;
    LOBYTE(v25[0]) = 0;
    std::string::assign(v25, v12, 0);
    v19 = v25;
    if ( v26 >= 0x10 )
      v19 = (void **)v25[0];
    (*(void (__fastcall **)(_QWORD, char *, char *, void **))(*(_QWORD *)v22[1] + 56LL))(
      v22[1],
      Buffer,
      &Buffer[v12],
      v19);
    std::string::append((size_t *)v25, i, v18);
    v24[3] = (void *)15;
    v24[2] = 0LL;
    LOBYTE(v24[0]) = 0;
    std::string::assign(v24, v25, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    *(_OWORD *)&v22[1] = *a3;
    std::money_put<char,std::ostreambuf_iterator<char>>::_Putmfld(
      v23,
      a2,
      (__int128 *)&v22[1],
      a4,
      a5,
      a6,
      a7 < 0.0,
      (size_t *)v24,
      v18);
    if ( v26 >= 0x10 )
      operator delete(v25[0]);
  }
  else
  {
    *a2 = *a3;
  }
  return a2;
}
