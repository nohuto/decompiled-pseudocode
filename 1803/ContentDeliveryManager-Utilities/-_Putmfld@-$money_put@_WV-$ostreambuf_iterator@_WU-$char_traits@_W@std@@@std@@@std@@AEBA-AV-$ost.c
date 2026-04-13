/*
 * XREFs of ?_Putmfld@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_W1V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@3@Z @ 0x1800B62E4
 * Callers:
 *     ?do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x1800B8450 (-do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$ostre.c)
 *     ?do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z @ 0x1800B8680 (-do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@M_ea_1800B8680.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x18003681C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ??$use_facet@V?$moneypunct@_W$00@std@@@std@@YAAEBV?$moneypunct@_W$00@0@AEBVlocale@0@@Z @ 0x1800AF6C0 (--$use_facet@V-$moneypunct@_W$00@std@@@std@@YAAEBV-$moneypunct@_W$00@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$moneypunct@_W$0A@@std@@@std@@YAAEBV?$moneypunct@_W$0A@@0@AEBVlocale@0@@Z @ 0x1800AF7F8 (--$use_facet@V-$moneypunct@_W$0A@@std@@@std@@YAAEBV-$moneypunct@_W$0A@@0@AEBVlocale@0@@Z.c)
 *     ??4?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEAAAEAV01@_W@Z @ 0x1800AFF48 (--4-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEAAAEAV01@_W@Z.c)
 *     ?insert@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0_W@Z @ 0x1800BA0D0 (-insert@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0_W@Z.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800C0E7F (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
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
  void **v21; // rbx
  unsigned __int64 v22; // rsi
  char v23; // cl
  void **v24; // rax
  __int64 v25; // rax
  __int64 v26; // r8
  unsigned __int64 v27; // rcx
  unsigned __int64 i; // rdx
  char v29; // al
  unsigned __int64 v30; // rax
  __int64 v31; // r14
  unsigned __int64 v32; // r14
  int v33; // ebx
  __int128 v34; // xmm0
  __int64 v35; // r13
  char v36; // al
  unsigned __int16 v37; // si
  __int128 v38; // xmm0
  void **v39; // rbx
  unsigned __int16 *v40; // rbx
  unsigned __int64 v41; // rsi
  __int64 v42; // rbx
  unsigned __int16 *v43; // rbx
  __int64 v44; // rsi
  unsigned __int64 v45; // rsi
  unsigned __int16 v46; // ax
  __int64 v47; // rbx
  unsigned __int16 *v48; // rbx
  __int64 v49; // rsi
  unsigned __int16 *v50; // rbx
  __int128 v51; // xmm0
  unsigned __int64 v52; // rsi
  unsigned __int16 v53; // ax
  unsigned __int16 *v54; // rcx
  __int64 v55; // rsi
  unsigned __int16 *v56; // rbx
  unsigned __int16 *v57; // rax
  unsigned __int16 *v58; // rbx
  __int64 v59; // rsi
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
  if ( v12 )
  {
    v15 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v15 )
      (**v15)(v15, 1LL);
  }
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
        v21 = v80;
        if ( v81 >= 0x10 )
          v21 = (void **)v80[0];
        v22 = *(_QWORD *)(a8 + 16) - v17;
        v23 = *(_BYTE *)v21;
        if ( *(_BYTE *)v21 != 127 )
        {
          do
          {
            if ( v23 <= 0 || v23 >= v22 )
              break;
            v22 -= v23;
            std::wstring::insert(a8, v22, 1LL, v20);
            v24 = (void **)((char *)v21 + 1);
            if ( *((char *)v21 + 1) <= 0 )
              v24 = v21;
            v21 = v24;
            v23 = *(_BYTE *)v24;
          }
          while ( *(_BYTE *)v24 != 127 );
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
LABEL_50:
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
      goto LABEL_50;
    }
    v30 = v17 + 1;
    if ( *(_QWORD *)(a8 + 16) > v17 )
      v30 = *(_QWORD *)(a8 + 16);
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
    if ( v36 != 32 )
    {
      switch ( v36 )
      {
        case '$':
          v58 = (unsigned __int16 *)v77;
          if ( v79 >= 8 )
            v58 = (unsigned __int16 *)v77[0];
          v38 = *v9;
          *(_OWORD *)v72 = *v9;
          v59 = v78;
          if ( !v78 )
            goto LABEL_91;
          do
          {
            std::ostreambuf_iterator<wchar_t>::operator=((__int64)v72, *v58++);
            --v59;
          }
          while ( v59 );
          break;
        case '+':
          if ( !v75 )
            goto LABEL_77;
          v57 = (unsigned __int16 *)v74;
          if ( v76 >= 8 )
            v57 = (unsigned __int16 *)v74[0];
          *(_OWORD *)v72 = *v9;
          std::ostreambuf_iterator<wchar_t>::operator=((__int64)v72, *v57);
          v38 = *(_OWORD *)v72;
          goto LABEL_76;
        case 'v':
          v42 = (unsigned int)v65;
          if ( !(_DWORD)v65 )
          {
            if ( *(_QWORD *)(v11 + 24) < 8uLL )
              v43 = (unsigned __int16 *)v11;
            else
              v43 = *(unsigned __int16 **)v11;
            v38 = *v9;
            *(_OWORD *)v72 = *v9;
            v44 = *(_QWORD *)(v11 + 16);
            if ( v44 )
            {
              do
              {
                std::ostreambuf_iterator<wchar_t>::operator=((__int64)v72, *v43++);
                --v44;
              }
              while ( v44 );
              break;
            }
LABEL_91:
            v33 = v63;
LABEL_76:
            *v9 = v38;
            goto LABEL_77;
          }
          v45 = *(_QWORD *)(v11 + 16);
          if ( v45 > (unsigned int)v65 )
          {
            if ( *(_QWORD *)(v11 + 24) < 8uLL )
              v50 = (unsigned __int16 *)v11;
            else
              v50 = *(unsigned __int16 **)v11;
            v51 = *v9;
            *(_OWORD *)v72 = *v9;
            v52 = v45 - (unsigned int)v65;
            if ( v52 )
            {
              do
              {
                std::ostreambuf_iterator<wchar_t>::operator=((__int64)v72, *v50++);
                --v52;
              }
              while ( v52 );
              v51 = *(_OWORD *)v72;
              v11 = v66;
              v9 = v67;
            }
            *v9 = v51;
            v53 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, unsigned __int64, __int64))(*(_QWORD *)v14 + 24LL))(
                    v14,
                    i,
                    v26);
            std::ostreambuf_iterator<wchar_t>::operator=((__int64)v9, v53);
            if ( *(_QWORD *)(v11 + 24) < 8uLL )
              v54 = (unsigned __int16 *)v11;
            else
              v54 = *(unsigned __int16 **)v11;
            v55 = (unsigned int)v65;
            v56 = &v54[*(_QWORD *)(v11 + 16) - (unsigned int)v65];
            v38 = *v9;
            *(_OWORD *)v72 = *v9;
            if ( !(_DWORD)v65 )
              goto LABEL_91;
            do
            {
              std::ostreambuf_iterator<wchar_t>::operator=((__int64)v72, *v56++);
              --v55;
            }
            while ( v55 );
          }
          else
          {
            std::ostreambuf_iterator<wchar_t>::operator=((__int64)v9, a9);
            v46 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v14 + 24LL))(v14);
            std::ostreambuf_iterator<wchar_t>::operator=((__int64)v9, v46);
            v38 = *v9;
            *(_OWORD *)v72 = *v9;
            v47 = v42 - *(_QWORD *)(v11 + 16);
            if ( v47 )
            {
              do
              {
                std::ostreambuf_iterator<wchar_t>::operator=((__int64)v72, a9);
                --v47;
              }
              while ( v47 );
              v38 = *(_OWORD *)v72;
              v11 = v66;
              v9 = v67;
            }
            *v9 = v38;
            if ( *(_QWORD *)(v11 + 24) < 8uLL )
              v48 = (unsigned __int16 *)v11;
            else
              v48 = *(unsigned __int16 **)v11;
            *(_OWORD *)v72 = v38;
            v49 = *(_QWORD *)(v11 + 16);
            if ( !v49 )
              goto LABEL_91;
            do
            {
              std::ostreambuf_iterator<wchar_t>::operator=((__int64)v72, *v48++);
              --v49;
            }
            while ( v49 );
          }
          break;
        case 'x':
          v37 = a6;
          goto LABEL_71;
        default:
          goto LABEL_77;
      }
      v38 = *(_OWORD *)v72;
      v11 = v66;
      v9 = v67;
      goto LABEL_91;
    }
    *(_OWORD *)v72 = *v9;
    v37 = a6;
    std::ostreambuf_iterator<wchar_t>::operator=((__int64)v72, a6);
    *v9 = *(_OWORD *)v72;
LABEL_71:
    if ( v33 == 256 )
    {
      v38 = *v9;
      *(_OWORD *)v72 = *v9;
      if ( v32 )
      {
        do
        {
          std::ostreambuf_iterator<wchar_t>::operator=((__int64)v72, v37);
          --v32;
        }
        while ( v32 );
        v38 = *(_OWORD *)v72;
        v33 = v63;
      }
      v32 = 0LL;
      goto LABEL_76;
    }
LABEL_77:
    if ( (unsigned __int64)++v35 < 4 )
      continue;
    break;
  }
  if ( v75 > 1 )
  {
    v39 = v74;
    if ( v76 >= 8 )
      v39 = (void **)v74[0];
    v40 = (unsigned __int16 *)v39 + 1;
    *(_OWORD *)v72 = *v9;
    v41 = v75 - 1;
    do
    {
      std::ostreambuf_iterator<wchar_t>::operator=((__int64)v72, *v40++);
      --v41;
    }
    while ( v41 );
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
