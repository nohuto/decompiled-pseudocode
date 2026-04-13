/*
 * XREFs of ?_Putmfld@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@D1V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@D@Z @ 0x1800B0560
 * Callers:
 *     ?do_put@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@DAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z @ 0x1800B22C0 (-do_put@-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$ostreamb.c)
 *     ?do_put@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@DO@Z @ 0x1800B24E0 (-do_put@-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA_ea_1800B24E0.c)
 * Callees:
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18004A6C8 (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@QEAAAEAV01@D@Z @ 0x180099728 (--4-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@QEAAAEAV01@D@Z.c)
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z @ 0x18009E43C (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z.c)
 *     ??$use_facet@V?$moneypunct@D$00@std@@@std@@YAAEBV?$moneypunct@D$00@0@AEBVlocale@0@@Z @ 0x1800AD9CC (--$use_facet@V-$moneypunct@D$00@std@@@std@@YAAEBV-$moneypunct@D$00@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$moneypunct@D$0A@@std@@@std@@YAAEBV?$moneypunct@D$0A@@0@AEBVlocale@0@@Z @ 0x1800ADB08 (--$use_facet@V-$moneypunct@D$0A@@std@@@std@@YAAEBV-$moneypunct@D$0A@@0@AEBVlocale@0@@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800B3E2F (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_OWORD *__fastcall std::money_put<char,std::ostreambuf_iterator<char>>::_Putmfld(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        char a4,
        __int64 a5,
        unsigned __int8 a6,
        char a7,
        size_t *a8,
        char a9)
{
  __int128 *v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rbx
  void (__fastcall *v13)(__int64); // rax
  struct std::_Facet_base *v14; // r12
  void (__fastcall ***v15)(_QWORD, __int64); // rax
  unsigned int v16; // ebx
  size_t v17; // r13
  void **v18; // rax
  void **v19; // rax
  char v20; // r14
  char *v21; // rbx
  size_t v22; // rsi
  size_t v23; // rax
  char *v24; // rax
  __int64 v25; // rax
  __int64 v26; // r8
  unsigned __int64 v27; // rax
  unsigned __int64 i; // rdx
  char v29; // cl
  size_t v30; // rcx
  __int64 v31; // r14
  unsigned __int64 v32; // r14
  int v33; // ebx
  __int128 v34; // xmm0
  __int64 v35; // r13
  char v36; // al
  unsigned __int8 *v37; // rbx
  __int128 v38; // xmm0
  __int64 v39; // rsi
  unsigned __int64 v40; // rsi
  unsigned __int8 v41; // al
  __int64 v42; // rbx
  unsigned __int8 *v43; // rbx
  __int64 v44; // rsi
  unsigned __int8 *v45; // rbx
  __int128 v46; // xmm0
  unsigned __int64 v47; // rsi
  unsigned __int8 v48; // al
  unsigned __int8 *v49; // rcx
  unsigned __int8 *v50; // rbx
  __int64 v51; // rsi
  unsigned __int8 *v52; // rax
  unsigned __int8 *v53; // rbx
  __int64 v54; // rsi
  unsigned __int8 v55; // si
  void **v56; // rbx
  unsigned __int8 *v57; // rbx
  unsigned __int64 v58; // rsi
  __int128 v59; // xmm0
  _OWORD *v60; // rbx
  unsigned int v62; // [rsp+2Ch] [rbp-D5h]
  __int64 v63; // [rsp+30h] [rbp-D1h] BYREF
  __int64 v64; // [rsp+38h] [rbp-C9h]
  __int128 *v65; // [rsp+40h] [rbp-C1h]
  size_t *v66; // [rsp+48h] [rbp-B9h]
  __int64 v67; // [rsp+50h] [rbp-B1h]
  _OWORD *v68; // [rsp+58h] [rbp-A9h]
  __int64 v69; // [rsp+60h] [rbp-A1h]
  size_t *v70; // [rsp+68h] [rbp-99h]
  __int128 Src_8; // [rsp+78h] [rbp-89h] BYREF
  unsigned __int64 v72; // [rsp+90h] [rbp-71h]
  void *v73[2]; // [rsp+98h] [rbp-69h] BYREF
  unsigned __int64 v74; // [rsp+A8h] [rbp-59h]
  unsigned __int64 v75; // [rsp+B0h] [rbp-51h]
  void *v76[3]; // [rsp+B8h] [rbp-49h] BYREF
  unsigned __int64 v77; // [rsp+D0h] [rbp-31h]
  void *v78[2]; // [rsp+D8h] [rbp-29h] BYREF
  __int64 v79; // [rsp+E8h] [rbp-19h]
  unsigned __int64 v80; // [rsp+F0h] [rbp-11h]

  v69 = -2LL;
  v9 = a3;
  v65 = a3;
  v68 = a2;
  v10 = a5;
  v67 = a5;
  v11 = (__int64)a8;
  v66 = a8;
  v70 = a8;
  v12 = **(_QWORD **)(a5 + 64);
  v63 = v12;
  v13 = *(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL);
  if ( a4 )
  {
    v13(v12);
    v14 = std::use_facet<std::moneypunct<char,1>>(&v63);
  }
  else
  {
    v13(v12);
    v14 = std::use_facet<std::moneypunct<char,0>>(&v63);
  }
  v15 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v15 )
    (**v15)(v15, 1LL);
  (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v14 + 40LL))(v14, v76);
  v16 = abs32((*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v14 + 72LL))(v14));
  v62 = v16;
  v17 = v16;
  if ( a8[2] > v16 )
  {
    v18 = v76;
    if ( v77 >= 0x10 )
      v18 = (void **)v76[0];
    if ( *(_BYTE *)v18 != 127 )
    {
      v19 = v76;
      if ( v77 >= 0x10 )
        v19 = (void **)v76[0];
      if ( *(char *)v19 > 0 )
      {
        v20 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v14 + 32LL))(v14);
        v21 = (char *)v76;
        if ( v77 >= 0x10 )
          v21 = (char *)v76[0];
        v22 = a8[2] - v17;
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
            std::string::insert(a8, v22, 1uLL, v20);
            v24 = v21 + 1;
            if ( v21[1] <= 0 )
              v24 = v21;
            v21 = v24;
          }
          while ( *v24 != 127 );
          v9 = v65;
        }
        v16 = v62;
        v10 = v67;
      }
    }
  }
  else
  {
    std::string::insert(a8, 0LL, v16 - a8[2] + 1, a9);
  }
  v75 = 15LL;
  v74 = 0LL;
  LOBYTE(v73[0]) = 0;
  v25 = *(_QWORD *)v14;
  if ( a7 )
  {
    (*(void (__fastcall **)(struct std::_Facet_base *, __int64 *))(v25 + 88))(v14, &v63);
    (*(void (__fastcall **)(struct std::_Facet_base *, __int128 *))(*(_QWORD *)v14 + 64LL))(v14, &Src_8);
  }
  else
  {
    (*(void (__fastcall **)(struct std::_Facet_base *, __int64 *))(v25 + 80))(v14, &v63);
    (*(void (__fastcall **)(struct std::_Facet_base *, __int128 *))(*(_QWORD *)v14 + 56LL))(v14, &Src_8);
  }
  std::string::operator=(v73, (void **)&Src_8);
  if ( v72 >= 0x10 )
    operator delete((void *)Src_8);
  v80 = 15LL;
  v79 = 0LL;
  LOBYTE(v78[0]) = 0;
  if ( (*(_BYTE *)(v10 + 24) & 8) != 0 )
  {
    (*(void (__fastcall **)(struct std::_Facet_base *, __int128 *))(*(_QWORD *)v14 + 48LL))(v14, &Src_8);
    std::string::operator=(v78, (void **)&Src_8);
    if ( v72 >= 0x10 )
      operator delete((void *)Src_8);
  }
  LOBYTE(v26) = 0;
  v27 = 0LL;
  for ( i = 0LL; i < 4; ++i )
  {
    v29 = *((_BYTE *)&v63 + i);
    switch ( v29 )
    {
      case ' ':
        ++v27;
LABEL_45:
        v26 = (unsigned __int8)v26;
        if ( i != 3 )
          v26 = 1LL;
        continue;
      case '$':
        v27 += v79;
        continue;
      case '+':
        v27 += v74;
        continue;
    }
    if ( v29 != 118 )
    {
      if ( v29 != 120 )
        continue;
      goto LABEL_45;
    }
    v30 = a8[2];
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
  LODWORD(v64) = v33;
  if ( v33 != 64 && (v33 != 256 || !(_BYTE)v26) )
  {
    v34 = *v9;
    Src_8 = *v9;
    if ( v32 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&Src_8, a6);
        --v32;
      }
      while ( v32 );
      v34 = Src_8;
      v11 = (__int64)v66;
    }
    *v9 = v34;
    v32 = 0LL;
  }
  v35 = 0LL;
  while ( 2 )
  {
    v36 = *((_BYTE *)&v63 + v35);
    switch ( v36 )
    {
      case ' ':
        Src_8 = *v9;
        v55 = a6;
        std::ostreambuf_iterator<char>::operator=((__int64)&Src_8, a6);
        *v9 = Src_8;
LABEL_107:
        if ( v33 != 256 )
          break;
        v38 = *v9;
        Src_8 = *v9;
        if ( v32 )
        {
          do
          {
            std::ostreambuf_iterator<char>::operator=((__int64)&Src_8, v55);
            --v32;
          }
          while ( v32 );
          v38 = Src_8;
          v11 = (__int64)v66;
        }
        v32 = 0LL;
        goto LABEL_112;
      case '$':
        v53 = (unsigned __int8 *)v78;
        if ( v80 >= 0x10 )
          v53 = (unsigned __int8 *)v78[0];
        v38 = *v9;
        Src_8 = *v9;
        v54 = v79;
        if ( !v79 )
          goto LABEL_73;
        do
        {
          std::ostreambuf_iterator<char>::operator=((__int64)&Src_8, *v53++);
          --v54;
        }
        while ( v54 );
        goto LABEL_72;
      case '+':
        if ( !v74 )
          break;
        v52 = (unsigned __int8 *)v73;
        if ( v75 >= 0x10 )
          v52 = (unsigned __int8 *)v73[0];
        Src_8 = *v9;
        std::ostreambuf_iterator<char>::operator=((__int64)&Src_8, *v52);
        v38 = Src_8;
        goto LABEL_112;
      case 'v':
        if ( v62 )
        {
          v40 = *(_QWORD *)(v11 + 16);
          if ( v40 > v62 )
          {
            if ( *(_QWORD *)(v11 + 24) < 0x10uLL )
              v45 = (unsigned __int8 *)v11;
            else
              v45 = *(unsigned __int8 **)v11;
            v46 = *v9;
            Src_8 = *v9;
            v47 = v40 - v62;
            if ( v47 )
            {
              do
              {
                std::ostreambuf_iterator<char>::operator=((__int64)&Src_8, *v45++);
                --v47;
              }
              while ( v47 );
              v46 = Src_8;
              v11 = (__int64)v66;
              v9 = v65;
            }
            *v9 = v46;
            v48 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, unsigned __int64, __int64))(*(_QWORD *)v14 + 24LL))(
                    v14,
                    i,
                    v26);
            std::ostreambuf_iterator<char>::operator=((__int64)v9, v48);
            if ( *(_QWORD *)(v11 + 24) < 0x10uLL )
              v49 = (unsigned __int8 *)v11;
            else
              v49 = *(unsigned __int8 **)v11;
            v50 = &v49[*(_QWORD *)(v11 + 16) - v62];
            Src_8 = *v9;
            v51 = v62;
            do
            {
              std::ostreambuf_iterator<char>::operator=((__int64)&Src_8, *v50++);
              --v51;
            }
            while ( v51 );
          }
          else
          {
            std::ostreambuf_iterator<char>::operator=((__int64)v9, a9);
            v41 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v14 + 24LL))(v14);
            std::ostreambuf_iterator<char>::operator=((__int64)v9, v41);
            v38 = *v9;
            Src_8 = *v9;
            v42 = v62 - *(_QWORD *)(v11 + 16);
            if ( v62 != *(_QWORD *)(v11 + 16) )
            {
              do
              {
                std::ostreambuf_iterator<char>::operator=((__int64)&Src_8, a9);
                --v42;
              }
              while ( v42 );
              v38 = Src_8;
              v9 = v65;
            }
            *v9 = v38;
            if ( *(_QWORD *)(v11 + 24) < 0x10uLL )
              v43 = (unsigned __int8 *)v11;
            else
              v43 = *(unsigned __int8 **)v11;
            Src_8 = v38;
            v44 = *(_QWORD *)(v11 + 16);
            if ( !v44 )
              goto LABEL_73;
            do
            {
              std::ostreambuf_iterator<char>::operator=((__int64)&Src_8, *v43++);
              --v44;
            }
            while ( v44 );
          }
        }
        else
        {
          if ( *(_QWORD *)(v11 + 24) < 0x10uLL )
            v37 = (unsigned __int8 *)v11;
          else
            v37 = *(unsigned __int8 **)v11;
          v38 = *v9;
          Src_8 = *v9;
          v39 = *(_QWORD *)(v11 + 16);
          if ( !v39 )
            goto LABEL_73;
          do
          {
            std::ostreambuf_iterator<char>::operator=((__int64)&Src_8, *v37++);
            --v39;
          }
          while ( v39 );
        }
LABEL_72:
        v38 = Src_8;
        v11 = (__int64)v66;
        v9 = v65;
LABEL_73:
        v33 = v64;
LABEL_112:
        *v9 = v38;
        break;
      case 'x':
        v55 = a6;
        goto LABEL_107;
    }
    if ( (unsigned __int64)++v35 < 4 )
      continue;
    break;
  }
  if ( v74 > 1 )
  {
    v56 = v73;
    if ( v75 >= 0x10 )
      v56 = (void **)v73[0];
    v57 = (unsigned __int8 *)v56 + 1;
    Src_8 = *v9;
    v58 = v74 - 1;
    do
    {
      std::ostreambuf_iterator<char>::operator=((__int64)&Src_8, *v57++);
      --v58;
    }
    while ( v58 );
    *v9 = Src_8;
  }
  *(_QWORD *)(v67 + 40) = 0LL;
  v59 = *v9;
  Src_8 = *v9;
  if ( v32 )
  {
    do
    {
      std::ostreambuf_iterator<char>::operator=((__int64)&Src_8, a6);
      --v32;
    }
    while ( v32 );
    v59 = Src_8;
  }
  v60 = v68;
  *v68 = v59;
  if ( v80 >= 0x10 )
    operator delete(v78[0]);
  v80 = 15LL;
  v79 = 0LL;
  LOBYTE(v78[0]) = 0;
  if ( v75 >= 0x10 )
    operator delete(v73[0]);
  v75 = 15LL;
  v74 = 0LL;
  LOBYTE(v73[0]) = 0;
  if ( v77 >= 0x10 )
    operator delete(v76[0]);
  v77 = 15LL;
  v76[2] = 0LL;
  LOBYTE(v76[0]) = 0;
  if ( *(_QWORD *)(v11 + 24) >= 0x10uLL )
    operator delete(*(void **)v11);
  *(_QWORD *)(v11 + 24) = 15LL;
  *(_QWORD *)(v11 + 16) = 0LL;
  *(_BYTE *)v11 = 0;
  return v60;
}
