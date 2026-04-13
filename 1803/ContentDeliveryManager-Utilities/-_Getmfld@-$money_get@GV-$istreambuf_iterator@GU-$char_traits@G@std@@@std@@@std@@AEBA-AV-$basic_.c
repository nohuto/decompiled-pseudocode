/*
 * XREFs of ?_Getmfld@?$money_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@0_NAEAVios_base@2@PEAG@Z @ 0x1800B1D58
 * Callers:
 *     ?do_get@?$money_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAO@Z @ 0x1800B6C70 (-do_get@-$money_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$istreamb.c)
 *     ?do_get@?$money_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x1800B6D70 (-do_get@-$money_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA_ea_1800B6D70.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x18003681C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ??D?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@QEBAAEBGXZ @ 0x1800389E8 (--D-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@QEBAAEBGXZ.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180038E2C (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x180039C18 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180039DF4 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x18003BAD0 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z @ 0x1800AB67C (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z.c)
 *     ??$use_facet@V?$moneypunct@G$00@std@@@std@@YAAEBV?$moneypunct@G$00@0@AEBVlocale@0@@Z @ 0x1800AF450 (--$use_facet@V-$moneypunct@G$00@std@@@std@@YAAEBV-$moneypunct@G$00@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$moneypunct@G$0A@@std@@@std@@YAAEBV?$moneypunct@G$0A@@0@AEBVlocale@0@@Z @ 0x1800AF588 (--$use_facet@V-$moneypunct@G$0A@@std@@@std@@YAAEBV-$moneypunct@G$0A@@0@AEBVlocale@0@@Z.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800C0E7F (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
size_t *__fastcall std::money_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getmfld(
        __int64 a1,
        size_t *a2,
        __int64 *a3,
        __int64 *a4,
        char a5,
        __int64 a6,
        __int16 *a7)
{
  size_t *v8; // r14
  char v9; // r13
  __int64 v10; // rbx
  int v11; // edi
  struct std::_Facet_base *v12; // r12
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  int v14; // esi
  __int64 v15; // rdi
  __int64 v16; // rbx
  int v17; // esi
  struct std::_Facet_base *v18; // rcx
  void (__fastcall ***v19)(_QWORD, __int64); // rax
  unsigned __int64 v20; // rbx
  char v21; // al
  char v22; // bl
  __int64 v23; // r14
  unsigned __int16 *v24; // rax
  __int64 v25; // rbx
  int v26; // edi
  int v27; // r13d
  __int16 v28; // r12
  void **v29; // rcx
  unsigned __int64 v30; // r14
  char v31; // al
  void **v32; // rdi
  size_t *v33; // r13
  __int16 v34; // dx
  __int16 *v35; // rax
  __int16 i; // cx
  unsigned __int64 v37; // rax
  void **v38; // rax
  void **v39; // rax
  void **v40; // rax
  void **v41; // rax
  char v42; // al
  void **v43; // rcx
  void *v44; // r9
  unsigned __int64 v45; // r8
  void **v46; // r10
  char v47; // dl
  void **v48; // rax
  void **v49; // rax
  __int16 v50; // bx
  unsigned __int64 v51; // rcx
  void **v52; // rbx
  void **v53; // rax
  __int16 *v54; // r12
  __int16 v55; // dx
  __int16 *v56; // rax
  __int16 j; // cx
  unsigned __int64 v58; // rax
  __int16 v59; // dx
  __int16 *v60; // rax
  __int16 k; // cx
  unsigned __int64 v62; // rax
  char v63; // al
  __int64 v64; // rbx
  bool v65; // cf
  void **v66; // rcx
  int v67; // esi
  void **v68; // rbx
  char v69; // bl
  unsigned int v70; // esi
  int v71; // esi
  void **v72; // rbx
  char v73; // bl
  unsigned int v74; // esi
  __int64 v75; // rbx
  __int64 v76; // rbx
  bool v77; // zf
  void **v78; // rbx
  void **v79; // rax
  void **v80; // rbx
  void **v81; // rax
  void **v82; // rbx
  void **v83; // rax
  unsigned __int64 v84; // r8
  __int64 v85; // rdx
  void **v86; // rax
  void **v87; // rax
  _BYTE *v88; // rax
  char v90; // [rsp+3Ch] [rbp-BDh]
  char v91; // [rsp+40h] [rbp-B9h]
  unsigned __int64 v92; // [rsp+48h] [rbp-B1h]
  struct std::_Facet_base *v93; // [rsp+50h] [rbp-A9h]
  struct std::_Facet_base *v95; // [rsp+60h] [rbp-99h] BYREF
  __int64 v96; // [rsp+68h] [rbp-91h]
  size_t *v97; // [rsp+70h] [rbp-89h]
  int v98; // [rsp+78h] [rbp-81h]
  int v99; // [rsp+7Ch] [rbp-7Dh]
  _BYTE v100[8]; // [rsp+80h] [rbp-79h] BYREF
  __int16 *v101; // [rsp+88h] [rbp-71h]
  __int64 v102; // [rsp+90h] [rbp-69h]
  size_t *v103; // [rsp+98h] [rbp-61h]
  void *v104[2]; // [rsp+A0h] [rbp-59h] BYREF
  __int64 v105; // [rsp+B0h] [rbp-49h]
  unsigned __int64 v106; // [rsp+B8h] [rbp-41h]
  void *v107[2]; // [rsp+C0h] [rbp-39h] BYREF
  __int64 v108; // [rsp+D0h] [rbp-29h]
  unsigned __int64 v109; // [rsp+D8h] [rbp-21h]
  void *v110[2]; // [rsp+E0h] [rbp-19h] BYREF
  unsigned __int64 v111; // [rsp+F0h] [rbp-9h]
  unsigned __int64 v112; // [rsp+F8h] [rbp-1h]

  v102 = -2LL;
  v8 = a2;
  v97 = a2;
  v103 = a2;
  v101 = a7;
  v9 = 0;
  v10 = **(_QWORD **)(a6 + 64);
  v95 = (struct std::_Facet_base *)v10;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  if ( a5 )
  {
    v11 = 32;
    v12 = std::use_facet<std::moneypunct<unsigned short,1>>((__int64 *)&v95);
  }
  else
  {
    v11 = 64;
    v12 = std::use_facet<std::moneypunct<unsigned short,0>>((__int64 *)&v95);
  }
  v93 = v12;
  if ( v10 )
  {
    v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  v14 = v11;
  v91 = 0;
  v90 = 0;
  v112 = 7LL;
  v111 = 0LL;
  LOWORD(v110[0]) = 0;
  (*(void (__fastcall **)(struct std::_Facet_base *, _BYTE *))(*(_QWORD *)v12 + 88LL))(v12, v100);
  v8[3] = 15LL;
  v8[2] = 0LL;
  *(_BYTE *)v8 = 0;
  v15 = a6;
  v16 = **(_QWORD **)(a6 + 64);
  v95 = (struct std::_Facet_base *)v16;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  v17 = v14 | 0x81;
  v18 = std::use_facet<std::ctype<unsigned short>>((__int64 *)&v95);
  v95 = v18;
  if ( v16 )
  {
    v19 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    if ( v19 )
      (**v19)(v19, 1LL);
    v18 = v95;
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, const char *, char *, __int16 *))(*(_QWORD *)v18 + 88LL))(
    v18,
    "0123456789-",
    "",
    v101);
  v20 = 0LL;
  v92 = 0LL;
  while ( v20 < 4 )
  {
    v21 = v100[v20];
    switch ( v21 )
    {
      case ' ':
        goto LABEL_18;
      case '$':
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 48LL))(v12, v104);
        v17 |= 0x100u;
        if ( (*(_BYTE *)(v15 + 24) & 8) != 0 || std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
          goto LABEL_192;
        v78 = v104;
        if ( v106 >= 8 )
          v78 = (void **)v104[0];
        if ( *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) == *(_WORD *)v78 )
        {
LABEL_192:
          if ( v92 == 3 && v111 <= 1 )
          {
            if ( std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
              goto LABEL_193;
            v80 = v104;
            if ( v106 >= 8 )
              v80 = (void **)v104[0];
            if ( *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) != *(_WORD *)v80 )
            {
LABEL_193:
              v105 = 0LL;
              v81 = v104;
              if ( v106 >= 8 )
                v81 = (void **)v104[0];
              *(_WORD *)v81 = 0;
            }
          }
        }
        else
        {
          v105 = 0LL;
          v79 = v104;
          if ( v106 >= 8 )
            v79 = (void **)v104[0];
          *(_WORD *)v79 = 0;
        }
        v82 = v104;
        if ( v106 >= 8 )
          v82 = (void **)v104[0];
        while ( !std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
        {
          v83 = v104;
          v66 = (void **)v104[0];
          v84 = v106;
          if ( v106 >= 8 )
            v83 = (void **)v104[0];
          v85 = v105;
          if ( v82 == (void **)((char *)v83 + 2 * v105) )
            goto LABEL_206;
          if ( *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) != *(_WORD *)v82 )
            break;
          v82 = (void **)((char *)v82 + 2);
          std::istreambuf_iterator<unsigned short>::_Inc(a3);
        }
        v84 = v106;
        v85 = v105;
        v66 = (void **)v104[0];
LABEL_206:
        v86 = v104;
        if ( v84 >= 8 )
          v86 = v66;
        if ( v82 != (void **)((char *)v86 + 2 * v85) )
          v9 = 1;
        v91 = v9;
        if ( v84 < 8 )
          goto LABEL_92;
        goto LABEL_136;
      case '+':
        if ( !std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
        {
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 56LL))(v12, v104);
          v67 = v17 | 0x202;
          if ( !v105 )
            goto LABEL_143;
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 56LL))(v12, v107);
          v67 |= 0x404u;
          v68 = v107;
          if ( v109 >= 8 )
            v68 = (void **)v107[0];
          if ( *(_WORD *)v68 == *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) )
            v69 = 1;
          else
LABEL_143:
            v69 = 0;
          if ( (v67 & 4) != 0 )
          {
            v67 &= ~4u;
            if ( v109 >= 8 )
              operator delete(v107[0]);
            v109 = 7LL;
            v108 = 0LL;
            LOWORD(v107[0]) = 0;
          }
          v70 = v67 & 0xFFFFFFFD;
          if ( v106 >= 8 )
            operator delete(v104[0]);
          if ( v69 )
          {
            std::istreambuf_iterator<unsigned short>::_Inc(a3);
            (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 56LL))(v12, v107);
            v17 = v70 | 0x800;
            if ( v112 >= 8 )
              operator delete(v110[0]);
            v112 = 7LL;
            v111 = 0LL;
            LOWORD(v110[0]) = 0;
            std::wstring::_Assign_rv(v110, v107);
            v65 = v109 < 8;
            goto LABEL_134;
          }
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 64LL))(v12, v104);
          v71 = v70 | 0x1008;
          if ( !v105 )
            goto LABEL_159;
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 64LL))(v12, v107);
          v71 |= 0x2010u;
          v72 = v107;
          if ( v109 >= 8 )
            v72 = (void **)v107[0];
          if ( *(_WORD *)v72 == *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) )
            v73 = 1;
          else
LABEL_159:
            v73 = 0;
          if ( (v71 & 0x10) != 0 )
          {
            v71 &= ~0x10u;
            if ( v109 >= 8 )
              operator delete(v107[0]);
            v109 = 7LL;
            v108 = 0LL;
            LOWORD(v107[0]) = 0;
          }
          v74 = v71 & 0xFFFFFFF7;
          if ( v106 >= 8 )
            operator delete(v104[0]);
          if ( v73 )
          {
            std::istreambuf_iterator<unsigned short>::_Inc(a3);
            (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 64LL))(v12, v107);
            v17 = v74 | 0x4000;
            if ( v112 >= 8 )
              operator delete(v110[0]);
            v112 = 7LL;
            v111 = 0LL;
            LOWORD(v110[0]) = 0;
            std::wstring::_Assign_rv(v110, v107);
            if ( v109 >= 8 )
              operator delete(v107[0]);
            v90 = 1;
            goto LABEL_92;
          }
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 56LL))(v12, v107);
          v17 = v74 | 0x8000;
          v75 = v108;
          if ( v109 >= 8 )
            operator delete(v107[0]);
          if ( v75 )
          {
            (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 64LL))(v12, v107);
            v17 |= 0x10000u;
            v76 = v108;
            if ( v109 >= 8 )
              operator delete(v107[0]);
            v15 = a6;
            v77 = v76 == 0;
            v20 = v92;
            if ( v77 )
              v90 = 1;
            break;
          }
LABEL_92:
          v20 = v92;
        }
        v15 = a6;
        break;
      case 'v':
        v25 = 0LL;
        v26 = 0;
        LODWORD(v96) = 0;
        v27 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v12 + 72LL))(v12);
        v99 = v27;
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 40LL))(v12, v107);
        v17 |= 0x20000u;
        v98 = v17;
        if ( v108 )
        {
          v28 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v12 + 32LL))(v12);
          if ( v28 )
          {
            v29 = v107;
            if ( v109 >= 0x10 )
              v29 = (void **)v107[0];
            if ( *(_BYTE *)v29 < 0x7Fu )
            {
              v30 = 15LL;
              v106 = 15LL;
              LOWORD(v104[0]) = 0;
              v105 = 1LL;
              v31 = std::istreambuf_iterator<wchar_t>::equal(a3, a4);
              v32 = (void **)v104[0];
              if ( v31 )
                goto LABEL_60;
              v33 = v97;
              while ( 2 )
              {
                v34 = *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
                v35 = v101;
                for ( i = *v101; i && i != v34; i = *v35 )
                  ++v35;
                v37 = v35 - v101;
                if ( v37 >= 0xA )
                {
                  v40 = v104;
                  if ( v30 >= 0x10 )
                    v40 = v32;
                  if ( !*((_BYTE *)v40 + v25)
                    || *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) != v28 )
                  {
LABEL_54:
                    v17 = v98;
                    v27 = v99;
                    if ( !v25 )
                      goto LABEL_60;
                    v41 = v104;
                    if ( v30 >= 0x10 )
                      v41 = v32;
                    if ( *((char *)v41 + v25) <= 0 )
                    {
                      v42 = 1;
                      v91 = 1;
                    }
                    else
                    {
                      ++v25;
LABEL_60:
                      v42 = v91;
                    }
                    v43 = v107;
                    v44 = v107[0];
                    v45 = v109;
                    if ( v109 >= 0x10 )
                      v43 = (void **)v107[0];
                    if ( !v42 )
                    {
                      while ( 1 )
                      {
                        v46 = v43;
                        if ( !v25 )
                          break;
                        v47 = *(_BYTE *)v43;
                        if ( *(_BYTE *)v43 == 127 )
                          break;
                        if ( --v25 )
                        {
                          v48 = v104;
                          if ( v30 >= 0x10 )
                            v48 = v32;
                          if ( v47 != *((_BYTE *)v48 + v25) )
                            goto LABEL_77;
                        }
                        if ( !v25 )
                        {
                          v49 = v104;
                          if ( v30 >= 0x10 )
                            v49 = v32;
                          if ( v47 < *(char *)v49 )
                          {
LABEL_77:
                            v9 = 1;
                            v91 = 1;
                            goto LABEL_87;
                          }
                        }
                        v43 = (void **)((char *)v43 + 1);
                        if ( *(char *)v43 <= 0 )
                          v43 = v46;
                      }
                      if ( v30 >= 0x10 )
                        operator delete(v32);
                      v8 = v97;
LABEL_81:
                      v26 = v96;
                      v12 = v93;
                      goto LABEL_82;
                    }
                    v9 = v91;
LABEL_87:
                    if ( v30 >= 0x10 )
                    {
                      operator delete(v32);
                      v45 = v109;
                      v44 = v107[0];
                    }
                    if ( v45 >= 0x10 )
                      operator delete(v44);
                    v8 = v97;
                    v12 = v93;
                    goto LABEL_92;
                  }
                  std::string::append((size_t *)v104, 1uLL, 0);
                  ++v25;
LABEL_52:
                  v32 = (void **)v104[0];
                  v30 = v106;
                }
                else
                {
                  std::string::append(
                    v33,
                    1uLL,
                    `std::money_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getmfld'::`2'::_Src[v37]);
                  v38 = v104;
                  if ( v30 >= 0x10 )
                    v38 = v32;
                  if ( *((_BYTE *)v38 + v25) != 127 )
                  {
                    v39 = v104;
                    if ( v30 >= 0x10 )
                      v39 = v32;
                    ++*((_BYTE *)v39 + v25);
                    goto LABEL_52;
                  }
                }
                std::istreambuf_iterator<unsigned short>::_Inc(a3);
                if ( std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
                  goto LABEL_54;
                continue;
              }
            }
          }
          v12 = v93;
        }
        if ( !std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
        {
          v54 = v101;
          do
          {
            v55 = *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
            v56 = v54;
            for ( j = *v54; j && j != v55; j = *v56 )
              ++v56;
            v58 = v56 - v54;
            if ( v58 >= 0xA )
              break;
            std::string::append(
              v8,
              1uLL,
              `std::money_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getmfld'::`2'::_Src[v58]);
            std::istreambuf_iterator<unsigned short>::_Inc(a3);
          }
          while ( !std::istreambuf_iterator<wchar_t>::equal(a3, a4) );
          v17 = v98;
          v27 = v99;
          goto LABEL_81;
        }
LABEL_82:
        v50 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v12 + 24LL))(v12);
        if ( !std::istreambuf_iterator<wchar_t>::equal(a3, a4)
          && v50
          && *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) == v50 )
        {
          std::istreambuf_iterator<unsigned short>::_Inc(a3);
          while ( !std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
          {
            if ( v26 >= v27 )
              goto LABEL_126;
            v59 = *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
            v60 = v101;
            for ( k = *v101; k && k != v59; k = *v60 )
              ++v60;
            v62 = v60 - v101;
            if ( v62 >= 0xA )
              break;
            std::string::append(
              v8,
              1uLL,
              `std::money_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getmfld'::`2'::_Src[v62]);
            ++v26;
            std::istreambuf_iterator<unsigned short>::_Inc(a3);
          }
          v63 = v91;
          if ( v26 < v27 )
            v63 = 1;
          v91 = v63;
        }
LABEL_126:
        if ( v8[2] )
        {
          if ( v26 < v27 )
          {
            v64 = (unsigned int)(v27 - v26);
            do
            {
              std::string::append(v8, 1uLL, 48);
              --v64;
            }
            while ( v64 );
            v12 = v93;
          }
          v9 = v91;
        }
        else
        {
          v9 = 1;
          v91 = 1;
        }
        v65 = v109 < 0x10;
LABEL_134:
        if ( v65 )
          goto LABEL_92;
        v66 = (void **)v107[0];
LABEL_136:
        operator delete(v66);
        goto LABEL_92;
      case 'x':
LABEL_18:
        if ( v20 != 3 )
        {
          v22 = 0;
          if ( !std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
          {
            v23 = (__int64)v95;
            do
            {
              v24 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*(a3);
              if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v23 + 32LL))(
                      v23,
                      72LL,
                      *v24) )
                break;
              v22 = 1;
              std::istreambuf_iterator<unsigned short>::_Inc(a3);
            }
            while ( !std::istreambuf_iterator<wchar_t>::equal(a3, a4) );
            v8 = v97;
            v12 = v93;
            v9 = v91;
          }
          v15 = a6;
          if ( v100[v92] == 32 )
          {
            if ( !v22 )
              v9 = 1;
            v91 = v9;
          }
          v20 = v92;
        }
        break;
    }
    v92 = ++v20;
    if ( v9 )
      break;
  }
  if ( v9 )
    goto LABEL_218;
  v51 = v111;
  if ( v111 <= 1 )
    goto LABEL_216;
  v52 = v110;
  if ( v112 >= 8 )
    v52 = (void **)v110[0];
  while ( 1 )
  {
    v53 = v110;
    if ( v112 >= 8 )
      v53 = (void **)v110[0];
    v52 = (void **)((char *)v52 + 2);
    if ( v52 == (void **)((char *)v53 + 2 * v51) )
      break;
    if ( std::istreambuf_iterator<wchar_t>::equal(a3, a4)
      || *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) != *(_WORD *)v52 )
    {
      v51 = v111;
      break;
    }
    std::istreambuf_iterator<unsigned short>::_Inc(a3);
    v51 = v111;
  }
  v87 = v110;
  if ( v112 >= 8 )
    v87 = (void **)v110[0];
  if ( v52 != (void **)((char *)v87 + 2 * v51) )
  {
LABEL_218:
    v8[2] = 0LL;
    if ( v8[3] < 0x10 )
      v88 = v8;
    else
      v88 = (_BYTE *)*v8;
    *v88 = 0;
  }
  else
  {
LABEL_216:
    if ( v90 )
      std::string::insert(v8, 0LL, 1uLL, 45);
  }
  if ( v112 >= 8 )
    operator delete(v110[0]);
  return v8;
}
