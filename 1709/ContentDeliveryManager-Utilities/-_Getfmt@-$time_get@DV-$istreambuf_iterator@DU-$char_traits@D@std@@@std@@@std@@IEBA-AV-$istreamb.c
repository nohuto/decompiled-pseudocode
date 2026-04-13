/*
 * XREFs of ?_Getfmt@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@IEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@PEBD@Z @ 0x1800AE6F8
 * Callers:
 *     ?do_get@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@DD@Z @ 0x1800B10B0 (-do_get@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$istreambu.c)
 * Callees:
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x180099238 (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x18009BE58 (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x18009E360 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall std::time_get<char,std::istreambuf_iterator<char>>::_Getfmt(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        __int64 *a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        _BYTE *a8)
{
  __int64 v12; // rbx
  struct std::_Facet_base *v13; // r15
  void (__fastcall ***v14)(_QWORD, __int64); // rax
  __int64 v15; // rdx
  _BYTE *v16; // rsi
  char v17; // al
  _DWORD *v18; // rbx
  __int64 v19; // r12
  __int64 v20; // rcx
  unsigned __int8 *v21; // r8
  int v22; // eax
  __int64 v23; // rcx
  unsigned __int8 *v24; // r8
  int v25; // eax
  int v27; // [rsp+38h] [rbp-80h]
  int v28; // [rsp+40h] [rbp-78h]
  __int128 v29; // [rsp+60h] [rbp-58h] BYREF
  __int128 v30; // [rsp+70h] [rbp-48h] BYREF
  _BYTE v31[16]; // [rsp+80h] [rbp-38h] BYREF
  __int64 v32; // [rsp+C8h] [rbp+10h] BYREF

  v12 = **(_QWORD **)(a5 + 64);
  v32 = v12;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  v13 = std::use_facet<std::ctype<char>>(&v32);
  v14 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v14 )
    (**v14)(v14, 1LL);
  v16 = a8;
  v17 = *a8;
  v18 = a6;
  if ( *a8 )
  {
    v19 = a7;
    do
    {
      if ( v17 == 37 )
      {
        ++v16;
        v29 = *(_OWORD *)a4;
        v30 = *a3;
        LOBYTE(v28) = 0;
        LOBYTE(v27) = *v16;
        *a3 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *, __int128 *, __int128 *, __int64, _DWORD *, __int64, int, int))(*(_QWORD *)a1 + 72LL))(
                           a1,
                           v31,
                           &v30,
                           &v29,
                           a5,
                           v18,
                           v19,
                           v27,
                           v28);
      }
      else if ( v17 == 32 )
      {
        while ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
        {
          if ( !*((_BYTE *)a3 + 8) )
          {
            v20 = *(_QWORD *)a3;
            if ( !*(_QWORD *)a3
              || ((v21 = **(unsigned __int8 ***)(v20 + 56)) == 0LL ? (v15 = 0LL) : (v15 = **(unsigned int **)(v20 + 80)),
                  (int)v15 <= 0
                ? (v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 48LL))(v20))
                : (v22 = *v21),
                  v22 == -1) )
            {
              *(_QWORD *)a3 = 0LL;
            }
            else
            {
              *((_BYTE *)a3 + 9) = v22;
            }
            *((_BYTE *)a3 + 8) = 1;
          }
          if ( (*(_BYTE *)(*((_QWORD *)v13 + 3) + 2LL * *((unsigned __int8 *)a3 + 9)) & 0x48) == 0 )
            break;
          std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
        }
      }
      else
      {
        if ( !*((_BYTE *)a3 + 8) )
        {
          v23 = *(_QWORD *)a3;
          if ( !*(_QWORD *)a3
            || ((v24 = **(unsigned __int8 ***)(v23 + 56)) == 0LL ? (v15 = 0LL) : (v15 = **(unsigned int **)(v23 + 80)),
                (int)v15 <= 0 ? (v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 48LL))(v23)) : (v25 = *v24),
                v25 == -1) )
          {
            *(_QWORD *)a3 = 0LL;
          }
          else
          {
            *((_BYTE *)a3 + 9) = v25;
          }
          *((_BYTE *)a3 + 8) = 1;
        }
        LOBYTE(v15) = *((_BYTE *)a3 + 9);
        if ( (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v13 + 80LL))(
               v13,
               v15,
               0LL) != *v16 )
        {
          *v18 |= 2u;
          break;
        }
        std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
      }
      v17 = *++v16;
    }
    while ( *v16 );
  }
  if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
    *v18 |= 1u;
  *a2 = *a3;
  return a2;
}
