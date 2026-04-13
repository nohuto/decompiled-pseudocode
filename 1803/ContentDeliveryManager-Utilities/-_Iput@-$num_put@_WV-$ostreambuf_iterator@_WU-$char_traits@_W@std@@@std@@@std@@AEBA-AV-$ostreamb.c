/*
 * XREFs of ?_Iput@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_WPEAD_K@Z @ 0x1800B3D9C
 * Callers:
 *     ?do_put@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_WJ@Z @ 0x1800B91B0 (-do_put@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$ostream.c)
 *     ?do_put@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_WK@Z @ 0x1800B9260 (-do_put@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_1800B9260.c)
 *     ?do_put@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_WPEBX@Z @ 0x1800B9670 (-do_put@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_1800B9670.c)
 *     ?do_put@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_W_J@Z @ 0x1800B9710 (-do_put@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_1800B9710.c)
 *     ?do_put@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_W_K@Z @ 0x1800B97C0 (-do_put@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_1800B97C0.c)
 * Callees:
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x1800714AC (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x18008DBA4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 *     ??$use_facet@V?$numpunct@_W@std@@@std@@YAAEBV?$numpunct@_W@0@AEBVlocale@0@@Z @ 0x18008E038 (--$use_facet@V-$numpunct@_W@std@@@std@@YAAEBV-$numpunct@_W@0@AEBVlocale@0@@Z.c)
 *     ??4?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEAAAEAV01@_W@Z @ 0x1800AFF48 (--4-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEAAAEAV01@_W@Z.c)
 *     ?insert@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0_W@Z @ 0x1800BA0D0 (-insert@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0_W@Z.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800C0E7F (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_OWORD *__fastcall std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Iput(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        __int64 a4,
        unsigned __int16 a5,
        _BYTE *a6,
        unsigned __int64 a7)
{
  __int64 v7; // r13
  unsigned __int64 v9; // r14
  __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  struct std::_Facet_base *v12; // r12
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  void **v14; // r9
  __int64 v15; // rbx
  struct std::_Facet_base *v16; // r15
  void (__fastcall ***v17)(_QWORD, __int64); // rax
  void **v18; // rbx
  unsigned __int16 v19; // r15
  char i; // cl
  char *v21; // rax
  unsigned __int64 v22; // r14
  __int64 v23; // rbx
  unsigned __int64 v24; // rbx
  int v25; // eax
  __int128 v26; // xmm0
  unsigned __int16 *v27; // r15
  __int64 v28; // r12
  unsigned __int16 *v29; // r15
  __int64 v30; // r12
  unsigned __int16 *v31; // r15
  __int64 v32; // r12
  void **v33; // rax
  unsigned __int64 v34; // r14
  unsigned __int16 *v35; // rdi
  __int128 v36; // xmm0
  _OWORD *v37; // rbx
  __int128 v39; // [rsp+48h] [rbp-61h] BYREF
  __int64 v40; // [rsp+58h] [rbp-51h]
  _OWORD *v41; // [rsp+60h] [rbp-49h]
  __int64 v42; // [rsp+68h] [rbp-41h]
  void *v43[2]; // [rsp+70h] [rbp-39h] BYREF
  unsigned __int64 v44; // [rsp+80h] [rbp-29h]
  unsigned __int64 v45; // [rsp+88h] [rbp-21h]
  void *v46[3]; // [rsp+90h] [rbp-19h] BYREF
  unsigned __int64 v47; // [rsp+A8h] [rbp-1h]

  v42 = -2LL;
  v7 = a4;
  v40 = a4;
  v41 = a2;
  v9 = a7;
  if ( !a7 || (v10 = 1LL, ((*a6 - 43) & 0xFD) != 0) )
    v10 = 0LL;
  if ( (*(_DWORD *)(a4 + 24) & 0xE00) == 0x800 && v10 + 2 <= a7 && a6[v10] == 48 && ((a6[v10 + 1] - 88) & 0xDF) == 0 )
    v10 += 2LL;
  v11 = **(_QWORD **)(a4 + 64);
  *(_QWORD *)&v39 = v11;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = std::use_facet<std::ctype<wchar_t>>((__int64 *)&v39);
  if ( v11 )
  {
    v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v11 + 16LL))(v11);
    v11 = 0LL;
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  v45 = 7LL;
  v44 = v11;
  LOWORD(v43[0]) = v11;
  std::wstring::assign((__int64)v43, a7, 0);
  v14 = v43;
  if ( v45 >= 8 )
    v14 = (void **)v43[0];
  (*(void (__fastcall **)(struct std::_Facet_base *, _BYTE *, _BYTE *, void **))(*(_QWORD *)v12 + 88LL))(
    v12,
    a6,
    &a6[a7],
    v14);
  v15 = **(_QWORD **)(v7 + 64);
  *(_QWORD *)&v39 = v15;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v16 = std::use_facet<std::numpunct<wchar_t>>((__int64 *)&v39);
  if ( v15 )
  {
    v17 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v17 )
      (**v17)(v17, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v16 + 40LL))(v16, v46);
  v18 = v46;
  if ( v47 >= 0x10 )
    v18 = (void **)v46[0];
  if ( (unsigned __int8)(*(_BYTE *)v18 - 1) <= 0x7Du )
  {
    v19 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v16 + 32LL))(v16);
    for ( i = *(_BYTE *)v18; i != 127 && i > 0 && i < v9 - v10; i = *v21 )
    {
      v9 -= i;
      std::wstring::insert(v43, v9, 1LL, v19);
      v21 = (char *)v18 + 1;
      if ( *((char *)v18 + 1) <= 0 )
        v21 = (char *)v18;
      v18 = (void **)v21;
    }
  }
  v22 = v44;
  v23 = *(_QWORD *)(v7 + 40);
  if ( v23 <= 0 || v23 <= v44 )
    v24 = 0LL;
  else
    v24 = v23 - v44;
  v25 = *(_DWORD *)(v7 + 24) & 0x1C0;
  v26 = *a3;
  v39 = *a3;
  if ( v25 == 64 )
  {
    v31 = (unsigned __int16 *)v43;
    if ( v45 >= 8 )
      v31 = (unsigned __int16 *)v43[0];
    v32 = v10;
    if ( v10 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v39, *v31++);
        --v32;
      }
      while ( v32 );
      goto LABEL_54;
    }
  }
  else if ( v25 == 256 )
  {
    v29 = (unsigned __int16 *)v43;
    if ( v45 >= 8 )
      v29 = (unsigned __int16 *)v43[0];
    v30 = v10;
    if ( v10 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v39, *v29++);
        --v30;
      }
      while ( v30 );
      v26 = v39;
      v7 = v40;
    }
    *a3 = v26;
    v39 = v26;
    if ( v24 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v39, a5);
        --v24;
      }
      while ( v24 );
      v26 = v39;
    }
    v24 = 0LL;
  }
  else
  {
    if ( v24 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v39, a5);
        --v24;
      }
      while ( v24 );
      v26 = v39;
    }
    *a3 = v26;
    v24 = 0LL;
    v39 = v26;
    v27 = (unsigned __int16 *)v43;
    if ( v45 >= 8 )
      v27 = (unsigned __int16 *)v43[0];
    v28 = v10;
    if ( v10 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v39, *v27++);
        --v28;
      }
      while ( v28 );
LABEL_54:
      v26 = v39;
      v7 = v40;
    }
  }
  *a3 = v26;
  v39 = v26;
  v33 = v43;
  if ( v45 >= 8 )
    v33 = (void **)v43[0];
  v34 = v22 - v10;
  v35 = (unsigned __int16 *)v33 + v10;
  if ( v34 )
  {
    do
    {
      std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v39, *v35++);
      --v34;
    }
    while ( v34 );
    v26 = v39;
    v7 = v40;
  }
  *a3 = v26;
  *(_QWORD *)(v7 + 40) = 0LL;
  v36 = *a3;
  v39 = *a3;
  if ( v24 )
  {
    do
    {
      std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v39, a5);
      --v24;
    }
    while ( v24 );
    v36 = v39;
  }
  v37 = v41;
  *v41 = v36;
  if ( v47 >= 0x10 )
    operator delete(v46[0]);
  v47 = 15LL;
  v46[2] = 0LL;
  LOBYTE(v46[0]) = 0;
  if ( v45 >= 8 )
    operator delete(v43[0]);
  return v37;
}
