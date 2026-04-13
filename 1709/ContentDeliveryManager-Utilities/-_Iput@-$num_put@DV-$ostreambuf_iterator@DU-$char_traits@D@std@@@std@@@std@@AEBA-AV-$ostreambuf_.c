/*
 * XREFs of ?_Iput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEAD_K@Z @ 0x18009BFE4
 * Callers:
 *     ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DJ@Z @ 0x18009D990 (-do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$ostreambuf.c)
 *     ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DK@Z @ 0x18009DA40 (-do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18009DA40.c)
 *     ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBX@Z @ 0x18009DE40 (-do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18009DE40.c)
 *     ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@D_J@Z @ 0x18009DEE0 (-do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18009DEE0.c)
 *     ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@D_K@Z @ 0x18009DF90 (-do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18009DF90.c)
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
_OWORD *__fastcall std::num_put<char,std::ostreambuf_iterator<char>>::_Iput(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        __int64 a4,
        char a5,
        _BYTE *a6,
        size_t Size)
{
  size_t v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rbx
  void (__fastcall ***v12)(_QWORD, __int64); // rax
  void **v13; // r9
  __int64 v14; // rbx
  struct std::_Facet_base *v15; // r15
  void (__fastcall ***v16)(_QWORD, __int64); // rax
  char *v17; // rbx
  __int64 v18; // r9
  char v19; // r15
  size_t v20; // rcx
  char *v21; // rax
  unsigned __int64 v22; // r14
  __int64 v23; // rbx
  unsigned __int64 v24; // rbx
  int v25; // eax
  __int128 v26; // xmm0
  unsigned __int8 *v27; // r15
  __int64 v28; // r12
  unsigned __int8 *v29; // r15
  __int64 v30; // r12
  unsigned __int8 v31; // r15
  unsigned __int8 *v32; // r15
  __int64 v33; // r12
  void **v34; // rax
  __int64 v35; // r14
  unsigned __int8 *v36; // rdi
  __int128 v37; // xmm0
  _OWORD *v38; // rbx
  __int128 v40; // [rsp+48h] [rbp-61h] BYREF
  _OWORD *v41; // [rsp+58h] [rbp-51h]
  __int64 v42; // [rsp+60h] [rbp-49h]
  void *v43[2]; // [rsp+68h] [rbp-41h] BYREF
  unsigned __int64 v44; // [rsp+78h] [rbp-31h]
  unsigned __int64 v45; // [rsp+80h] [rbp-29h]
  void *v46[3]; // [rsp+88h] [rbp-21h] BYREF
  unsigned __int64 v47; // [rsp+A0h] [rbp-9h]

  v42 = -2LL;
  v41 = a2;
  v9 = Size;
  v10 = Size && ((*a6 - 43) & 0xFD) == 0;
  if ( (*(_DWORD *)(a4 + 24) & 0xE00) == 0x800 && v10 + 2 <= Size && a6[v10] == 48 && ((a6[v10 + 1] - 88) & 0xDF) == 0 )
    v10 += 2LL;
  v11 = **(_QWORD **)(a4 + 64);
  *(_QWORD *)&v40 = v11;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  *(_QWORD *)&v40 = std::use_facet<std::ctype<char>>((__int64 *)&v40);
  v12 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v12 )
    (**v12)(v12, 1LL);
  v45 = 15LL;
  v44 = 0LL;
  LOBYTE(v43[0]) = 0;
  std::string::assign(v43, Size, 0);
  v13 = v43;
  if ( v45 >= 0x10 )
    v13 = (void **)v43[0];
  (*(void (__fastcall **)(_QWORD, _BYTE *, _BYTE *, void **))(*(_QWORD *)v40 + 56LL))(v40, a6, &a6[Size], v13);
  v14 = **(_QWORD **)(a4 + 64);
  *(_QWORD *)&v40 = v14;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  v15 = std::use_facet<std::numpunct<char>>((__int64 *)&v40);
  v16 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v16 )
    (**v16)(v16, 1LL);
  (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v15 + 40LL))(v15, v46);
  v17 = (char *)v46;
  if ( v47 >= 0x10 )
    v17 = (char *)v46[0];
  if ( (unsigned __int8)(*v17 - 1) <= 0x7Du )
  {
    v19 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v15 + 32LL))(v15);
    if ( *v17 != 127 )
    {
      do
      {
        if ( *v17 <= 0 )
          break;
        v20 = *v17;
        if ( v20 >= v9 - v10 )
          break;
        v9 -= v20;
        LOBYTE(v18) = v19;
        std::string::insert(v43, v9, 1LL, v18);
        v21 = v17 + 1;
        if ( v17[1] <= 0 )
          v21 = v17;
        v17 = v21;
      }
      while ( *v21 != 127 );
    }
  }
  v22 = v44;
  v23 = *(_QWORD *)(a4 + 40);
  if ( v23 <= 0 || v23 <= v44 )
    v24 = 0LL;
  else
    v24 = v23 - v44;
  v25 = *(_DWORD *)(a4 + 24) & 0x1C0;
  v26 = *a3;
  v40 = *a3;
  if ( v25 == 64 )
  {
    v32 = (unsigned __int8 *)v43;
    if ( v45 >= 0x10 )
      v32 = (unsigned __int8 *)v43[0];
    v33 = v10;
    if ( !v10 )
      goto LABEL_53;
    do
    {
      std::ostreambuf_iterator<char>::operator=((__int64)&v40, *v32++);
      --v33;
    }
    while ( v33 );
    goto LABEL_52;
  }
  if ( v25 != 256 )
  {
    if ( v24 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v40, a5);
        --v24;
      }
      while ( v24 );
      v26 = v40;
    }
    *a3 = v26;
    v24 = 0LL;
    v40 = v26;
    v27 = (unsigned __int8 *)v43;
    if ( v45 >= 0x10 )
      v27 = (unsigned __int8 *)v43[0];
    v28 = v10;
    if ( !v10 )
      goto LABEL_53;
    do
    {
      std::ostreambuf_iterator<char>::operator=((__int64)&v40, *v27++);
      --v28;
    }
    while ( v28 );
LABEL_52:
    v26 = v40;
LABEL_53:
    v31 = a5;
    goto LABEL_54;
  }
  v29 = (unsigned __int8 *)v43;
  if ( v45 >= 0x10 )
    v29 = (unsigned __int8 *)v43[0];
  v30 = v10;
  if ( v10 )
  {
    do
    {
      std::ostreambuf_iterator<char>::operator=((__int64)&v40, *v29++);
      --v30;
    }
    while ( v30 );
    v26 = v40;
  }
  *a3 = v26;
  v40 = v26;
  v31 = a5;
  if ( v24 )
  {
    do
    {
      std::ostreambuf_iterator<char>::operator=((__int64)&v40, a5);
      --v24;
    }
    while ( v24 );
    v26 = v40;
  }
  v24 = 0LL;
LABEL_54:
  *a3 = v26;
  v40 = v26;
  v34 = v43;
  if ( v45 >= 0x10 )
    v34 = (void **)v43[0];
  v35 = v22 - v10;
  v36 = (unsigned __int8 *)v34 + v10;
  if ( v35 )
  {
    do
    {
      std::ostreambuf_iterator<char>::operator=((__int64)&v40, *v36++);
      --v35;
    }
    while ( v35 );
    v26 = v40;
  }
  *a3 = v26;
  *(_QWORD *)(a4 + 40) = 0LL;
  v37 = *a3;
  v40 = *a3;
  if ( v24 )
  {
    do
    {
      std::ostreambuf_iterator<char>::operator=((__int64)&v40, v31);
      --v24;
    }
    while ( v24 );
    v37 = v40;
  }
  v38 = v41;
  *v41 = v37;
  if ( v47 >= 0x10 )
    operator delete(v46[0]);
  v47 = 15LL;
  v46[2] = 0LL;
  LOBYTE(v46[0]) = 0;
  if ( v45 >= 0x10 )
    operator delete(v43[0]);
  return v38;
}
