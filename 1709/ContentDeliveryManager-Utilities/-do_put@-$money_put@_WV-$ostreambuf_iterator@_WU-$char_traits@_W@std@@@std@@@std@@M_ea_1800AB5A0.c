/*
 * XREFs of ?do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z @ 0x1800AB5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18005B1D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x180081F14 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x1800823E4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x180082B48 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     ?_Putmfld@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_W1V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@3@Z @ 0x1800A9254 (-_Putmfld@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBA-AV-$ost.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800B3E2F (--3@YAXPEAX@Z_0.c)
 *     sprintf_s_0 @ 0x1800B4261 (sprintf_s_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int128 *__fastcall std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::do_put(
        __int64 a1,
        __int128 *a2,
        __int128 *a3,
        char a4,
        __int64 a5,
        unsigned __int16 a6,
        double a7)
{
  char v9; // r13
  double v10; // xmm3_8
  unsigned __int64 i; // r14
  int v12; // eax
  unsigned __int64 v13; // r12
  __int64 v14; // rbx
  struct std::_Facet_base *v15; // rdi
  void (__fastcall ***v16)(_QWORD, __int64); // rax
  __int64 v17; // rdx
  void (__fastcall ***v18)(_QWORD, __int64); // r8
  __int16 v19; // di
  void **v20; // r9
  __int128 v23; // [rsp+68h] [rbp-91h] BYREF
  __int64 v24; // [rsp+78h] [rbp-81h]
  __int64 v25; // [rsp+80h] [rbp-79h]
  void *v26[5]; // [rsp+88h] [rbp-71h] BYREF
  void *v27[3]; // [rsp+B0h] [rbp-49h] BYREF
  unsigned __int64 v28; // [rsp+C8h] [rbp-31h]
  char Buffer[40]; // [rsp+D0h] [rbp-29h] BYREF

  v26[4] = (void *)-2LL;
  v25 = a1;
  v24 = a5;
  v9 = 0;
  v10 = a7;
  if ( a7 < 0.0 )
  {
    v9 = 1;
    *(_QWORD *)&v10 = *(_QWORD *)&a7 ^ _xmm;
  }
  for ( i = 0LL; v10 >= 1.0e35 && i < 0x1388; i += 10LL )
    v10 = v10 / 1.0e10;
  v12 = sprintf_s_0(Buffer, 0x28uLL, "%.0Lf", v10);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v14 = **(_QWORD **)(a5 + 64);
    *(_QWORD *)&v23 = v14;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    v15 = std::use_facet<std::ctype<wchar_t>>((__int64 *)&v23);
    *(_QWORD *)&v23 = v15;
    v16 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v18 = v16;
    if ( v16 )
      (**v16)(v16, 1LL);
    LOBYTE(v17) = 48;
    v19 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, __int64, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v15 + 96LL))(
            v15,
            v17,
            v18);
    v28 = 7LL;
    v27[2] = 0LL;
    LOWORD(v27[0]) = 0;
    std::wstring::assign((__int64)v27, v13, 0);
    v20 = v27;
    if ( v28 >= 8 )
      v20 = (void **)v27[0];
    (*(void (__fastcall **)(_QWORD, char *, char *, void **))(*(_QWORD *)v23 + 88LL))(v23, Buffer, &Buffer[v13], v20);
    std::wstring::append((_WORD **)v27, i, v19);
    v26[3] = (void *)7;
    v26[2] = 0LL;
    LOWORD(v26[0]) = 0;
    std::wstring::assign(v26, v27, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    v23 = *a3;
    std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Putmfld(
      v25,
      a2,
      &v23,
      a4,
      v24,
      a6,
      v9,
      (__int64)v26,
      v19);
    if ( v28 >= 8 )
      operator delete(v27[0]);
  }
  else
  {
    *a2 = *a3;
  }
  return a2;
}
