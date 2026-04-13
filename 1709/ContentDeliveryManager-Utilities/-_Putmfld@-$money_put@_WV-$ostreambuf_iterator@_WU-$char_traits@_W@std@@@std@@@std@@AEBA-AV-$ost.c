/*
 * XREFs of ?_Putmfld@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_W1V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@3@Z @ 0x1800A9254
 * Callers:
 *     ?do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x1800AB370 (-do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$ostre.c)
 *     ?do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z @ 0x1800AB5A0 (-do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@M_ea_1800AB5A0.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180033540 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ??$use_facet@V?$moneypunct@_W$00@std@@@std@@YAAEBV?$moneypunct@_W$00@0@AEBVlocale@0@@Z @ 0x1800A2488 (--$use_facet@V-$moneypunct@_W$00@std@@@std@@YAAEBV-$moneypunct@_W$00@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$moneypunct@_W$0A@@std@@@std@@YAAEBV?$moneypunct@_W$0A@@0@AEBVlocale@0@@Z @ 0x1800A25C4 (--$use_facet@V-$moneypunct@_W$0A@@std@@@std@@YAAEBV-$moneypunct@_W$0A@@0@AEBVlocale@0@@Z.c)
 *     ??4?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEAAAEAV01@_W@Z @ 0x1800A2D2C (--4-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEAAAEAV01@_W@Z.c)
 *     ?insert@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0_W@Z @ 0x1800ACFE8 (-insert@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0_W@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800B3E2F (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_OWORD *__fastcall std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Putmfld(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        char a4,
        __int64 a5,
        unsigned __int16 a6,
        char a7,
        __int64 a8,
        unsigned __int16 a9)
{
  __int128 *v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rbx
  void (__fastcall *v13)(__int64); // rax
  struct std::_Facet_base *v14; // r12
  void (__fastcall ***v15)(_QWORD, __int64); // rax
  unsigned int v16; // ebx
  unsigned __int64 v17; // r13
  void **v18; // rax
  void **v19; // rax
  unsigned __int16 v20; // r14
  char *v21; // rbx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rax
  char *v24; // rax
  __int64 v25; // rax
  __int64 v26; // r8
  unsigned __int64 v27; // rax
  unsigned __int64 i; // rdx
  char v29; // cl
  unsigned __int64 v30; // rcx
  __int64 v31; // r14
  unsigned __int64 v32; // r14
  int v33; // ebx
  __int128 v34; // xmm0
  __int64 v35; // r13
  char v36; // al
  __int64 v37; // rbx
  unsigned __int16 *v38; // rbx
  __int128 v39; // xmm0
  __int64 v40; // rsi
  unsigned __int64 v41; // rsi
  unsigned __int16 v42; // ax
  __int64 v43; // rbx
  unsigned __int16 *v44; // rbx
  __int64 v45; // rsi
  unsigned __int16 *v46; // rbx
  __int128 v47; // xmm0
  unsigned __int64 v48; // rsi
  unsigned __int16 v49; // ax
  unsigned __int16 *v50; // rcx
  __int64 v51; // rsi
  unsigned __int16 *v52; // rbx
  unsigned __int16 *v53; // rax
  unsigned __int16 *v54; // rbx
  __int64 v55; // rsi
  unsigned __int16 v56; // si
  void **v57; // rbx
  unsigned __int16 *v58; // rbx
  unsigned __int64 v59; // rsi
  __int128 v60; // xmm0
  _OWORD *v61; // rbx
  int v63; // [rsp+2Ch] [rbp-D5h]
  __int64 v64; // [rsp+30h] [rbp-D1h] BYREF
  __int64 v65; // [rsp+38h] [rbp-C9h]
  __int64 v66; // [rsp+40h] [rbp-C1h]
  __int128 *v67; // [rsp+48h] [rbp-B9h]
  __int64 v68; // [rsp+50h] [rbp-B1h]
  _OWORD *v69; // [rsp+58h] [rbp-A9h]
  __int64 v70; // [rsp+60h] [rbp-A1h]
  __int64 v71; // [rsp+68h] [rbp-99h]
  void *v72[2]; // [rsp+78h] [rbp-89h] BYREF
  unsigned __int64 v73; // [rsp+90h] [rbp-71h]
  void *v74[2]; // [rsp+98h] [rbp-69h] BYREF
  unsigned __int64 v75; // [rsp+A8h] [rbp-59h]
  unsigned __int64 v76; // [rsp+B0h] [rbp-51h]
  void *v77[2]; // [rsp+B8h] [rbp-49h] BYREF
  __int64 v78; // [rsp+C8h] [rbp-39h]
  unsigned __int64 v79; // [rsp+D0h] [rbp-31h]
  void *v80[3]; // [rsp+D8h] [rbp-29h] BYREF
  unsigned __int64 v81; // [rsp+F0h] [rbp-11h]

  v70 = -2LL;
  v9 = a3;
  v67 = a3;
  v69 = a2;
  v10 = a5;
  v68 = a5;
  v11 = a8;
  v66 = a8;
  v71 = a8;
  v12 = **(_QWORD **)(a5 + 64);
  v64 = v12;
  v13 = *(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL);
  if ( a4 )
  {
    v13(v12);
    v14 = std::use_facet<std::moneypunct<wchar_t,1>>(&v64);
  }
  else
  {
    v13(v12);
    v14 = std::use_facet<std::moneypunct<wchar_t,0>>(&v64);
  }
  v15 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v15 )
    (**v15)(v15, 1LL);
  (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v14 + 40LL))(v14, v80);
  v16 = abs32((*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v14 + 72LL))(v14));
  LODWORD(v65) = v16;
  v17 = v16;
  if ( *(_QWORD *)(a8 + 16) > (unsigned __int64)v16 )
  {
    v18 = v80;
    if ( v81 >= 0x10 )
      v18 = (void **)v80[0];
    if ( *(_BYTE *)v18 != 127 )
    {
      v19 = v80;
      if ( v81 >= 0x10 )
        v19 = (void **)v80[0];
      if ( *(char *)v19 > 0 )
      {
        v20 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v14 + 32LL))(v14);
        v21 = (char *)v80;
        if ( v81 >= 0x10 )
          v21 = (char *)v80[0];
        v22 = *(_QWORD *)(a8 + 16) - v17;
        if ( *v21 != 127 )
        {
          do
          {
            if ( *v21 <= 0 )
              break;
            v23 = *v21;
            if ( v23 >= v22 )
              break;
            v22 -= v23;
            std::wstring::insert(a8, v22, 1LL, v20);
            v24 = v21 + 1;
            if ( v21[1] <= 0 )
              v24 = v21;
            v21 = v24;
          }
          while ( *v24 != 127 );
          v9 = v67;
        }
        v16 = v65;
        v10 = v68;
      }
    }
  }
  else
  {
    std::wstring::insert(a8, 0LL, v16 - *(_QWORD *)(a8 + 16) + 1LL, a9);
  }
  v76 = 7LL;
  v75 = 0LL;
  LOWORD(v74[0]) = 0;
  v25 = *(_QWORD *)v14;
  if ( a7 )
  {
    (*(void (__fastcall **)(struct std::_Facet_base *, __int64 *))(v25 + 88))(v14, &v64);
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v14 + 64LL))(v14, v72);
  }
  else
  {
    (*(void (__fastcall **)(struct std::_Facet_base *, __int64 *))(v25 + 80))(v14, &v64);
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v14 + 56LL))(v14, v72);
  }
  if ( v76 >= 8 )
    operator delete(v74[0]);
  v76 = 7LL;
  v75 = 0LL;
  LOWORD(v74[0]) = 0;
  std::wstring::_Assign_rv(v74, v72);
  if ( v73 >= 8 )
    operator delete(v72[0]);
  v79 = 7LL;
  v78 = 0LL;
  LOWORD(v77[0]) = 0;
  if ( (*(_BYTE *)(v10 + 24) & 8) != 0 )
  {
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v14 + 48LL))(v14, v72);
    if ( v79 >= 8 )
      operator delete(v77[0]);
    v79 = 7LL;
    v78 = 0LL;
    LOWORD(v77[0]) = 0;
    std::wstring::_Assign_rv(v77, v72);
    if ( v73 >= 8 )
      operator delete(v72[0]);
  }
  LOBYTE(v26) = 0;
  v27 = 0LL;
  for ( i = 0LL; i < 4; ++i )
  {
    v29 = *((_BYTE *)&v64 + i);
    switch ( v29 )
    {
      case ' ':
        ++v27;
LABEL_49:
        v26 = (unsigned __int8)v26;
        if ( i != 3 )
          v26 = 1LL;
        continue;
      case '$':
        v27 += v78;
        continue;
      case '+':
        v27 += v75;
        continue;
    }
    if ( v29 != 118 )
    {
      if ( v29 != 120 )
        continue;
      goto LABEL_49;
    }
    v30 = *(_QWORD *)(a8 + 16);
    if ( v30 <= v17 )
      v30 = v17 + 1;
    v27 += v30 + (v16 != 0);
  }
  v31 = *(_QWORD *)(v10 + 40);
  if ( v31 <= 0 || v31 <= v27 )
    v32 = 0LL;
  else
    v32 = v31 - v27;
  v33 = *(_DWORD *)(v10 + 24) & 0x1C0;
  v63 = v33;
  if ( v33 != 64 && (v33 != 256 || !(_BYTE)v26) )
  {
    v34 = *v9;
    *(_OWORD *)v72 = *v9;
    if ( v32 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)v72, a6);
        --v32;
      }
      while ( v32 );
      v34 = *(_OWORD *)v72;
      v11 = v66;
    }
    *v9 = v34;
    v32 = 0LL;
  }
  v35 = 0LL;
  while ( 2 )
  {
    v36 = *((_BYTE *)&v64 + v35);
    switch ( v36 )
    {
      case ' ':
        *(_OWORD *)v72 = *v9;
        v56 = a6;
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)v72, a6);
        *v9 = *(_OWORD *)v72;
LABEL_111:
        if ( v33 != 256 )
          break;
        v39 = *v9;
        *(_OWORD *)v72 = *v9;
        if ( v32 )
        {
          do
          {
            std::ostreambuf_iterator<wchar_t>::operator=((__int64)v72, v56);
            --v32;
          }
          while ( v32 );
          v39 = *(_OWORD *)v72;
          v33 = v63;
        }
        v32 = 0LL;
        goto LABEL_116;
      case '$':
        v54 = (unsigned __int16 *)v77;
        if ( v79 >= 8 )
          v54 = (unsigned __int16 *)v77[0];
        v39 = *v9;
        *(_OWORD *)v72 = *v9;
        v55 = v78;
        if ( !v78 )
          goto LABEL_77;
        do
        {
          std::ostreambuf_iterator<wchar_t>::operator=((__int64)v72, *v54++);
          --v55;
        }
        while ( v55 );
        goto LABEL_76;
      case '+':
        if ( !v75 )
          break;
        v53 = (unsigned __int16 *)v74;
        if ( v76 >= 8 )
          v53 = (unsigned __int16 *)v74[0];
        *(_OWORD *)v72 = *v9;
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)v72, *v53);
        v39 = *(_OWORD *)v72;
        goto LABEL_116;
      case 'v':
        v37 = (unsigned int)v65;
        if ( (_DWORD)v65 )
        {
          v41 = *(_QWORD *)(v11 + 16);
          if ( v41 > (unsigned int)v65 )
          {
            if ( *(_QWORD *)(v11 + 24) < 8uLL )
              v46 = (unsigned __int16 *)v11;
            else
              v46 = *(unsigned __int16 **)v11;
            v47 = *v9;
            *(_OWORD *)v72 = *v9;
            v48 = v41 - (unsigned int)v65;
            if ( v48 )
            {
              do
              {
                std::ostreambuf_iterator<wchar_t>::operator=((__int64)v72, *v46++);
                --v48;
              }
              while ( v48 );
              v47 = *(_OWORD *)v72;
              v11 = v66;
              v9 = v67;
            }
            *v9 = v47;
            v49 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, unsigned __int64, __int64))(*(_QWORD *)v14 + 24LL))(
                    v14,
                    i,
                    v26);
            std::ostreambuf_iterator<wchar_t>::operator=((__int64)v9, v49);
            if ( *(_QWORD *)(v11 + 24) < 8uLL )
              v50 = (unsigned __int16 *)v11;
            else
              v50 = *(unsigned __int16 **)v11;
            v51 = (unsigned int)v65;
            v52 = &v50[*(_QWORD *)(v11 + 16) - (unsigned int)v65];
            v39 = *v9;
            *(_OWORD *)v72 = *v9;
            if ( !(_DWORD)v65 )
              goto LABEL_77;
            do
            {
              std::ostreambuf_iterator<wchar_t>::operator=((__int64)v72, *v52++);
              --v51;
            }
            while ( v51 );
          }
          else
          {
            std::ostreambuf_iterator<wchar_t>::operator=((__int64)v9, a9);
            v42 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v14 + 24LL))(v14);
            std::ostreambuf_iterator<wchar_t>::operator=((__int64)v9, v42);
            v39 = *v9;
            *(_OWORD *)v72 = *v9;
            v43 = v37 - *(_QWORD *)(v11 + 16);
            if ( v43 )
            {
              do
              {
                std::ostreambuf_iterator<wchar_t>::operator=((__int64)v72, a9);
                --v43;
              }
              while ( v43 );
              v39 = *(_OWORD *)v72;
              v11 = v66;
              v9 = v67;
            }
            *v9 = v39;
            if ( *(_QWORD *)(v11 + 24) < 8uLL )
              v44 = (unsigned __int16 *)v11;
            else
              v44 = *(unsigned __int16 **)v11;
            *(_OWORD *)v72 = v39;
            v45 = *(_QWORD *)(v11 + 16);
            if ( !v45 )
              goto LABEL_77;
            do
            {
              std::ostreambuf_iterator<wchar_t>::operator=((__int64)v72, *v44++);
              --v45;
            }
            while ( v45 );
          }
        }
        else
        {
          if ( *(_QWORD *)(v11 + 24) < 8uLL )
            v38 = (unsigned __int16 *)v11;
          else
            v38 = *(unsigned __int16 **)v11;
          v39 = *v9;
          *(_OWORD *)v72 = *v9;
          v40 = *(_QWORD *)(v11 + 16);
          if ( !v40 )
            goto LABEL_77;
          do
          {
            std::ostreambuf_iterator<wchar_t>::operator=((__int64)v72, *v38++);
            --v40;
          }
          while ( v40 );
        }
LABEL_76:
        v39 = *(_OWORD *)v72;
        v11 = v66;
        v9 = v67;
LABEL_77:
        v33 = v63;
LABEL_116:
        *v9 = v39;
        break;
      case 'x':
        v56 = a6;
        goto LABEL_111;
    }
    if ( (unsigned __int64)++v35 < 4 )
      continue;
    break;
  }
  if ( v75 > 1 )
  {
    v57 = v74;
    if ( v76 >= 8 )
      v57 = (void **)v74[0];
    v58 = (unsigned __int16 *)v57 + 1;
    *(_OWORD *)v72 = *v9;
    v59 = v75 - 1;
    do
    {
      std::ostreambuf_iterator<wchar_t>::operator=((__int64)v72, *v58++);
      --v59;
    }
    while ( v59 );
    *v9 = *(_OWORD *)v72;
  }
  *(_QWORD *)(v68 + 40) = 0LL;
  v60 = *v9;
  *(_OWORD *)v72 = *v9;
  if ( v32 )
  {
    do
    {
      std::ostreambuf_iterator<wchar_t>::operator=((__int64)v72, a6);
      --v32;
    }
    while ( v32 );
    v60 = *(_OWORD *)v72;
  }
  v61 = v69;
  *v69 = v60;
  if ( v79 >= 8 )
    operator delete(v77[0]);
  v79 = 7LL;
  v78 = 0LL;
  LOWORD(v77[0]) = 0;
  if ( v76 >= 8 )
    operator delete(v74[0]);
  v76 = 7LL;
  v75 = 0LL;
  LOWORD(v74[0]) = 0;
  if ( v81 >= 0x10 )
    operator delete(v80[0]);
  v81 = 15LL;
  v80[2] = 0LL;
  LOBYTE(v80[0]) = 0;
  if ( *(_QWORD *)(v11 + 24) >= 8uLL )
    operator delete(*(void **)v11);
  *(_QWORD *)(v11 + 24) = 7LL;
  *(_QWORD *)(v11 + 16) = 0LL;
  *(_WORD *)v11 = 0;
  return v61;
}
