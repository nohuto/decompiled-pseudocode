/*
 * XREFs of ?_Iput@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GPEAD_K@Z @ 0x1800A68A4
 * Callers:
 *     ?do_put@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GJ@Z @ 0x1800AB7D0 (-do_put@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$ostreambuf.c)
 *     ?do_put@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GK@Z @ 0x1800AB880 (-do_put@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_1800AB880.c)
 *     ?do_put@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GPEBX@Z @ 0x1800ABC90 (-do_put@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_1800ABC90.c)
 *     ?do_put@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@G_J@Z @ 0x1800ABD30 (-do_put@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_1800ABD30.c)
 *     ?do_put@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@G_K@Z @ 0x1800ABDE0 (-do_put@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_1800ABDE0.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x18003567C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180036584 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@G@std@@@std@@YAAEBV?$numpunct@G@0@AEBVlocale@0@@Z @ 0x1800378E4 (--$use_facet@V-$numpunct@G@std@@@std@@YAAEBV-$numpunct@G@0@AEBVlocale@0@@Z.c)
 *     ??4?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEAAAEAV01@_W@Z @ 0x1800A2D2C (--4-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEAAAEAV01@_W@Z.c)
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K0G@Z @ 0x1800ACE94 (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_K0G@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800B3E2F (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_OWORD *__fastcall std::num_put<unsigned short,std::ostreambuf_iterator<unsigned short>>::_Iput(
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
  __int64 v11; // rbx
  void (__fastcall ***v12)(_QWORD, __int64); // rax
  void **v13; // r9
  __int64 v14; // rbx
  struct std::_Facet_base *v15; // r15
  void (__fastcall ***v16)(_QWORD, __int64); // rax
  char *v17; // rbx
  unsigned __int16 v18; // r15
  unsigned __int64 v19; // rcx
  char *v20; // rax
  unsigned __int64 v21; // r14
  __int64 v22; // rbx
  unsigned __int64 v23; // rbx
  int v24; // eax
  __int128 v25; // xmm0
  unsigned __int16 *v26; // r15
  __int64 v27; // r12
  unsigned __int16 *v28; // r15
  __int64 v29; // r12
  unsigned __int16 v30; // r15
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
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  *(_QWORD *)&v39 = std::use_facet<std::ctype<unsigned short>>((__int64 *)&v39);
  v12 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v12 )
    (**v12)(v12, 1LL);
  v45 = 7LL;
  v44 = 0LL;
  LOWORD(v43[0]) = 0;
  std::wstring::assign((__int64)v43, a7, 0);
  v13 = v43;
  if ( v45 >= 8 )
    v13 = (void **)v43[0];
  (*(void (__fastcall **)(_QWORD, _BYTE *, _BYTE *, void **))(*(_QWORD *)v39 + 88LL))(v39, a6, &a6[a7], v13);
  v14 = **(_QWORD **)(v7 + 64);
  *(_QWORD *)&v39 = v14;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  v15 = std::use_facet<std::numpunct<unsigned short>>((__int64 *)&v39);
  v16 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v16 )
    (**v16)(v16, 1LL);
  (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v15 + 40LL))(v15, v46);
  v17 = (char *)v46;
  if ( v47 >= 0x10 )
    v17 = (char *)v46[0];
  if ( (unsigned __int8)(*v17 - 1) <= 0x7Du )
  {
    v18 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v15 + 32LL))(v15);
    if ( *v17 != 127 )
    {
      do
      {
        if ( *v17 <= 0 )
          break;
        v19 = *v17;
        if ( v19 >= v9 - v10 )
          break;
        v9 -= v19;
        std::wstring::insert(v43, v9, 1LL, v18);
        v20 = v17 + 1;
        if ( v17[1] <= 0 )
          v20 = v17;
        v17 = v20;
      }
      while ( *v20 != 127 );
    }
  }
  v21 = v44;
  v22 = *(_QWORD *)(v7 + 40);
  if ( v22 <= 0 || v22 <= v44 )
    v23 = 0LL;
  else
    v23 = v22 - v44;
  v24 = *(_DWORD *)(v7 + 24) & 0x1C0;
  v25 = *a3;
  v39 = *a3;
  if ( v24 == 64 )
  {
    v31 = (unsigned __int16 *)v43;
    if ( v45 >= 8 )
      v31 = (unsigned __int16 *)v43[0];
    v32 = v10;
    if ( !v10 )
      goto LABEL_52;
    do
    {
      std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v39, *v31++);
      --v32;
    }
    while ( v32 );
    goto LABEL_51;
  }
  if ( v24 != 256 )
  {
    if ( v23 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v39, a5);
        --v23;
      }
      while ( v23 );
      v25 = v39;
    }
    *a3 = v25;
    v23 = 0LL;
    v39 = v25;
    v26 = (unsigned __int16 *)v43;
    if ( v45 >= 8 )
      v26 = (unsigned __int16 *)v43[0];
    v27 = v10;
    if ( !v10 )
      goto LABEL_52;
    do
    {
      std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v39, *v26++);
      --v27;
    }
    while ( v27 );
LABEL_51:
    v25 = v39;
    v7 = v40;
LABEL_52:
    v30 = a5;
    goto LABEL_53;
  }
  v28 = (unsigned __int16 *)v43;
  if ( v45 >= 8 )
    v28 = (unsigned __int16 *)v43[0];
  v29 = v10;
  if ( v10 )
  {
    do
    {
      std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v39, *v28++);
      --v29;
    }
    while ( v29 );
    v25 = v39;
    v7 = v40;
  }
  *a3 = v25;
  v39 = v25;
  v30 = a5;
  if ( v23 )
  {
    do
    {
      std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v39, a5);
      --v23;
    }
    while ( v23 );
    v25 = v39;
  }
  v23 = 0LL;
LABEL_53:
  *a3 = v25;
  v39 = v25;
  v33 = v43;
  if ( v45 >= 8 )
    v33 = (void **)v43[0];
  v34 = v21 - v10;
  v35 = (unsigned __int16 *)v33 + v10;
  if ( v34 )
  {
    do
    {
      std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v39, *v35++);
      --v34;
    }
    while ( v34 );
    v25 = v39;
    v30 = a5;
  }
  *a3 = v25;
  *(_QWORD *)(v7 + 40) = 0LL;
  v36 = *a3;
  v39 = *a3;
  if ( v23 )
  {
    do
    {
      std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v39, v30);
      --v23;
    }
    while ( v23 );
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
