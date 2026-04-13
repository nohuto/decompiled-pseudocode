/*
 * XREFs of ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x18008C0E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Getloctxt@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@0@0_KPEBG@Z @ 0x18003B4D8 (--$_Getloctxt@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@YAHAEAV-$istreambuf_ite.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x18003BAD0 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800711AC (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?_Getifld@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@1HAEBVlocale@2@@Z @ 0x18008CADC (-_Getifld@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV-.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x18008D6D4 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x18008DBA4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 *     ??$use_facet@V?$numpunct@_W@std@@@std@@YAAEBV?$numpunct@_W@0@AEBVlocale@0@@Z @ 0x18008E038 (--$use_facet@V-$numpunct@_W@std@@@std@@YAAEBV-$numpunct@_W@0@AEBVlocale@0@@Z.c)
 *     _Stoulx @ 0x1800A4A8C (_Stoulx.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_OWORD *__fastcall std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::do_get(
        __int64 a1,
        _OWORD *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        bool *a7)
{
  int v7; // r14d
  _OWORD *v9; // r13
  int v10; // esi
  _QWORD *v11; // rcx
  _OWORD *v12; // rbx
  __int64 v13; // r13
  void (__fastcall ***v14)(_QWORD, __int64); // rax
  __int16 *v15; // r9
  __int64 *v16; // rbx
  unsigned int v17; // eax
  unsigned int v18; // ebx
  void (__fastcall ***v19)(_QWORD, __int64); // rax
  _OWORD *v21; // [rsp+30h] [rbp-A1h] BYREF
  _OWORD *v22; // [rsp+38h] [rbp-99h] BYREF
  __int64 *v23; // [rsp+40h] [rbp-91h]
  __int64 v24; // [rsp+48h] [rbp-89h]
  _BYTE *v25; // [rsp+50h] [rbp-81h] BYREF
  bool *v26; // [rsp+58h] [rbp-79h]
  __int64 v27; // [rsp+60h] [rbp-71h]
  _WORD *v28[3]; // [rsp+68h] [rbp-69h] BYREF
  unsigned __int64 v29; // [rsp+80h] [rbp-51h]
  void *v30[3]; // [rsp+88h] [rbp-49h] BYREF
  unsigned __int64 v31; // [rsp+A0h] [rbp-31h]
  _BYTE v32[32]; // [rsp+A8h] [rbp-29h] BYREF

  v27 = -2LL;
  v7 = a4;
  v23 = (__int64 *)a4;
  v9 = a2;
  v21 = a2;
  v24 = a1;
  v26 = a7;
  v10 = -1;
  v11 = *(_QWORD **)(a5 + 64);
  if ( (*(_DWORD *)(a5 + 24) & 0x4000) != 0 )
  {
    v12 = (_OWORD *)*v11;
    v22 = v12;
    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v12 + 8LL))(v12);
    v13 = std::use_facet<std::numpunct<wchar_t>>(&v22);
    if ( v12 )
    {
      v14 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(_OWORD *))(*(_QWORD *)v12 + 16LL))(v12);
      if ( v14 )
        (**v14)(v14, 1LL);
    }
    v29 = 7LL;
    v28[2] = 0LL;
    LOWORD(v28[0]) = 0;
    std::wstring::assign(v28, 1LL, 0LL);
    (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v13 + 48LL))(v13, v30);
    std::wstring::append(v28, v30, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v31 >= 8 )
      operator delete(v30[0]);
    std::wstring::append(v28, 1LL, 0LL);
    (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v13 + 56LL))(v13, v30);
    std::wstring::append(v28, v30, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v31 >= 8 )
      operator delete(v30[0]);
    v15 = (__int16 *)v28;
    if ( v29 >= 8 )
      v15 = v28[0];
    v16 = v23;
    v10 = std::_Getloctxt<unsigned short,std::istreambuf_iterator<unsigned short>>(a3, (__int64)v23, 2uLL, v15);
    if ( v29 >= 8 )
      operator delete(v28[0]);
    v9 = v21;
  }
  else
  {
    LODWORD(v22) = 0;
    v21 = (_OWORD *)*v11;
    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v21 + 8LL))(v21);
    v17 = std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getifld(
            v24,
            (unsigned int)v32,
            (_DWORD)a3,
            v7,
            *(_DWORD *)(a5 + 24),
            (__int64)&v21);
    v18 = Stoulx(v32, &v25, v17, &v22);
    if ( v21 )
    {
      v19 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(_OWORD *))(*(_QWORD *)v21 + 16LL))(v21);
      if ( v19 )
        (**v19)(v19, 1LL);
    }
    if ( v25 != v32 && !(_DWORD)v22 && v18 <= 1 )
      v10 = v18;
    v16 = v23;
  }
  if ( std::istreambuf_iterator<wchar_t>::equal(a3, v16) )
    *a6 |= 1u;
  if ( v10 >= 0 )
    *v26 = v10 != 0;
  else
    *a6 |= 2u;
  *v9 = *(_OWORD *)a3;
  return v9;
}
