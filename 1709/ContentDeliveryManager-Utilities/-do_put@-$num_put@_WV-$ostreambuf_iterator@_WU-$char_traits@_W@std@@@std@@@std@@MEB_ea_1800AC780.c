/*
 * XREFs of ?do_put@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_W_N@Z @ 0x1800AC780
 * Callers:
 *     <none>
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180033540 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ??$use_facet@V?$numpunct@_W@std@@@std@@YAAEBV?$numpunct@_W@0@AEBVlocale@0@@Z @ 0x180082878 (--$use_facet@V-$numpunct@_W@std@@@std@@YAAEBV-$numpunct@_W@0@AEBVlocale@0@@Z.c)
 *     ??4?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEAAAEAV01@_W@Z @ 0x1800A2D2C (--4-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEAAAEAV01@_W@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800B3E2F (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *__fastcall std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::do_put(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        __int64 a4,
        unsigned __int16 a5,
        char a6)
{
  void *v9; // rbx
  struct std::_Facet_base *v10; // rdi
  void (__fastcall ***v11)(_QWORD, __int64); // rax
  void (__fastcall ***v12)(_QWORD, __int64); // r8
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rbx
  __int128 v17; // xmm0
  __int128 v18; // xmm0
  unsigned __int16 *v19; // rsi
  __int128 v20; // xmm0
  void *v22[2]; // [rsp+48h] [rbp-51h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-41h]
  unsigned __int64 v24; // [rsp+60h] [rbp-39h]
  void *v25[2]; // [rsp+70h] [rbp-29h] BYREF
  unsigned __int64 v26; // [rsp+88h] [rbp-11h]

  if ( (*(_DWORD *)(a4 + 24) & 0x4000) != 0 )
  {
    v9 = **(void ***)(a4 + 64);
    v25[0] = v9;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 8LL))(v9);
    v10 = std::use_facet<std::numpunct<wchar_t>>((__int64 *)v25);
    v11 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
    v12 = v11;
    if ( v11 )
      (**v11)(v11, 1LL);
    v24 = 7LL;
    v23 = 0LL;
    LOWORD(v22[0]) = 0;
    v13 = *(_QWORD *)v10;
    if ( a6 )
      (*(void (__fastcall **)(struct std::_Facet_base *, void **, void (__fastcall ***)(_QWORD, __int64)))(v13 + 56))(
        v10,
        v25,
        v12);
    else
      (*(void (__fastcall **)(struct std::_Facet_base *, void **, void (__fastcall ***)(_QWORD, __int64)))(v13 + 48))(
        v10,
        v25,
        v12);
    v24 = 7LL;
    v23 = 0LL;
    LOWORD(v22[0]) = 0;
    std::wstring::_Assign_rv(v22, v25);
    if ( v26 >= 8 )
      operator delete(v25[0]);
    v14 = *(_QWORD *)(a4 + 40);
    v15 = v23;
    if ( v14 <= 0 || v14 <= v23 )
      v16 = 0LL;
    else
      v16 = v14 - v23;
    if ( (*(_DWORD *)(a4 + 24) & 0x1C0) != 0x40 )
    {
      v17 = *a3;
      *(_OWORD *)v25 = *a3;
      if ( v16 )
      {
        do
        {
          std::ostreambuf_iterator<wchar_t>::operator=((__int64)v25, a5);
          --v16;
        }
        while ( v16 );
        v15 = v23;
        v17 = *(_OWORD *)v25;
      }
      *a3 = v17;
      v16 = 0LL;
    }
    v18 = *a3;
    *(_OWORD *)v25 = *a3;
    v19 = (unsigned __int16 *)v22;
    if ( v24 >= 8 )
      v19 = (unsigned __int16 *)v22[0];
    if ( v15 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)v25, *v19++);
        --v15;
      }
      while ( v15 );
      v18 = *(_OWORD *)v25;
    }
    *a3 = v18;
    *(_QWORD *)(a4 + 40) = 0LL;
    v20 = *a3;
    *(_OWORD *)v25 = *a3;
    if ( v16 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)v25, a5);
        --v16;
      }
      while ( v16 );
      v20 = *(_OWORD *)v25;
    }
    *a2 = v20;
    if ( v24 >= 8 )
      operator delete(v22[0]);
  }
  else
  {
    *(_OWORD *)v25 = *a3;
    (*(void (__fastcall **)(__int64, _OWORD *, void **))(*(_QWORD *)a1 + 72LL))(a1, a2, v25);
  }
  return a2;
}
