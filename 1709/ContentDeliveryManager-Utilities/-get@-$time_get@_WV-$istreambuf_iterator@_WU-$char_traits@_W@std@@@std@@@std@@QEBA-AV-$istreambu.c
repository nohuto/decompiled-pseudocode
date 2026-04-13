/*
 * XREFs of ?get@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@QEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@PEB_W4@Z @ 0x180095594
 * Callers:
 *     ??$?5_WU?$char_traits@_W@std@@_W@std@@YAAEAV?$basic_istream@_WU?$char_traits@_W@std@@@0@AEAV10@AEBU?$_Timeobj@_W@0@@Z @ 0x180094568 (--$-5_WU-$char_traits@_W@std@@_W@std@@YAAEAV-$basic_istream@_WU-$char_traits@_W@std@@@0@AEAV10@A.c)
 * Callees:
 *     ??D?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@QEBAAEBGXZ @ 0x1800354F8 (--D-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@QEBAAEBGXZ.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x1800363A4 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x1800381A8 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x180082B48 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::get(
        __int64 a1,
        _OWORD *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        _WORD *a8,
        _WORD *a9)
{
  _OWORD *v11; // r12
  __int64 v12; // rbx
  struct std::_Facet_base *v13; // r14
  void (__fastcall ***v14)(_QWORD, __int64); // rax
  _DWORD *v15; // rsi
  _WORD *v16; // rbx
  char v17; // al
  __int64 *v18; // rcx
  unsigned __int16 *v19; // rax
  char v20; // dl
  __int16 v21; // r13
  __int64 v22; // rax
  unsigned __int16 *v23; // rax
  bool v24; // zf
  int v26; // [rsp+38h] [rbp-90h]
  int v27; // [rsp+40h] [rbp-88h]
  __int128 v28; // [rsp+60h] [rbp-68h] BYREF
  __int128 v29; // [rsp+70h] [rbp-58h] BYREF
  _BYTE v30[72]; // [rsp+80h] [rbp-48h] BYREF
  __int64 v33; // [rsp+E0h] [rbp+18h] BYREF

  v11 = a2;
  v12 = **(_QWORD **)(a5 + 64);
  v33 = v12;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  v13 = std::use_facet<std::ctype<wchar_t>>(&v33);
  v14 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v14 )
    (**v14)(v14, 1LL);
  v15 = a6;
  v16 = a8;
  if ( a8 == a9 )
    goto LABEL_30;
  while ( 1 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, _QWORD, _QWORD))(*(_QWORD *)v13 + 112LL))(
           v13,
           (unsigned __int16)*v16,
           0LL) != 37 )
    {
      v17 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v13 + 32LL))(
              v13,
              72LL,
              (unsigned __int16)*v16);
      v18 = a3;
      if ( v17 )
      {
        while ( !std::istreambuf_iterator<wchar_t>::equal(v18, a4) )
        {
          v19 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*(a3);
          if ( !(*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v13 + 32LL))(
                  v13,
                  72LL,
                  *v19) )
            break;
          std::istreambuf_iterator<unsigned short>::_Inc(a3);
          v18 = a3;
        }
      }
      else
      {
        if ( *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) != *v16 )
          goto LABEL_21;
        std::istreambuf_iterator<unsigned short>::_Inc(a3);
      }
      goto LABEL_19;
    }
    if ( ++v16 == a9 )
      break;
    LOBYTE(v11) = (*(__int64 (__fastcall **)(struct std::_Facet_base *, _QWORD, _QWORD))(*(_QWORD *)v13 + 112LL))(
                    v13,
                    (unsigned __int16)*v16,
                    0LL);
    v20 = 0;
    v21 = *(v16 - 1);
    if ( (unsigned __int8)((_BYTE)v11 - 35) <= 0x2Eu )
    {
      v22 = 0x500400000001LL;
      if ( _bittest64(&v22, (unsigned int)((_DWORD)v11 - 35)) )
      {
        if ( ++v16 == a9 )
        {
          if ( *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) == v21 )
          {
            std::istreambuf_iterator<unsigned short>::_Inc(a3);
            if ( !std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
            {
              v23 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*(a3);
              v24 = (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, _QWORD, _QWORD))(*(_QWORD *)v13 + 112LL))(
                      v13,
                      *v23,
                      0LL) == (unsigned __int8)v11;
              goto LABEL_25;
            }
          }
          goto LABEL_21;
        }
        LOBYTE(a8) = (_BYTE)v11;
        LOBYTE(v11) = (*(__int64 (__fastcall **)(struct std::_Facet_base *, _QWORD, _QWORD))(*(_QWORD *)v13 + 112LL))(
                        v13,
                        (unsigned __int16)*v16,
                        0LL);
        v20 = (char)a8;
      }
    }
    v28 = *(_OWORD *)a4;
    v29 = *(_OWORD *)a3;
    LOBYTE(v27) = v20;
    LOBYTE(v26) = (_BYTE)v11;
    *(_OWORD *)a3 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *, __int128 *, __int128 *, __int64, _DWORD *, __int64, int, int))(*(_QWORD *)a1 + 72LL))(
                                 a1,
                                 v30,
                                 &v29,
                                 &v28,
                                 a5,
                                 v15,
                                 a7,
                                 v26,
                                 v27);
LABEL_19:
    if ( ++v16 == a9 )
      goto LABEL_29;
  }
  v24 = *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) == *(v16 - 1);
LABEL_25:
  if ( !v24 )
  {
LABEL_21:
    *v15 |= 2u;
    goto LABEL_29;
  }
  std::istreambuf_iterator<unsigned short>::_Inc(a3);
LABEL_29:
  v11 = a2;
LABEL_30:
  if ( std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
    *v15 |= 1u;
  *v11 = *(_OWORD *)a3;
  return v11;
}
