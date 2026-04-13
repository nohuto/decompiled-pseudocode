/*
 * XREFs of ?_Getint@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0HHAEAHAEBV?$ctype@D@2@@Z @ 0x1800AE958
 * Callers:
 *     ?do_get@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@DD@Z @ 0x1800B10B0 (-do_get@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$istreambu.c)
 *     ?do_get_date@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800B15C0 (-do_get_date@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$istr.c)
 *     ?do_get_time@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800B1DF0 (-do_get_time@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$istr.c)
 *     ?do_get_year@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800B2090 (-do_get_year@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$istr.c)
 * Callees:
 *     _Stolx @ 0x18009791C (_Stolx.c)
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x18009BE58 (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x18009E360 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::time_get<char,std::istreambuf_iterator<char>>::_Getint(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        int a4,
        int a5,
        _DWORD *a6,
        __int64 a7)
{
  unsigned __int8 *v7; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int8 *v13; // r8
  int v14; // eax
  char v15; // al
  char v16; // si
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int8 *v19; // r8
  int v20; // eax
  __int64 v21; // rcx
  unsigned __int8 *v22; // r8
  __int64 v23; // rdx
  int v24; // eax
  unsigned __int8 v25; // al
  unsigned __int8 *v26; // rax
  unsigned __int8 *v27; // rax
  int v28; // edi
  unsigned int v29; // ecx
  int v31; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int8 *v32; // [rsp+28h] [rbp-38h] BYREF
  unsigned __int8 v33; // [rsp+30h] [rbp-30h] BYREF
  char v34; // [rsp+31h] [rbp-2Fh] BYREF
  char v35; // [rsp+4Fh] [rbp-11h] BYREF

  v7 = &v33;
  if ( !std::istreambuf_iterator<char>::equal((__int64 *)a2, a3) )
  {
    if ( !*(_BYTE *)(a2 + 8) )
    {
      v12 = *(_QWORD *)a2;
      if ( !*(_QWORD *)a2
        || ((v13 = **(unsigned __int8 ***)(v12 + 56)) == 0LL ? (v11 = 0LL) : (v11 = **(unsigned int **)(v12 + 80)),
            (int)v11 <= 0
          ? (v14 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int8 *, __int64))(*(_QWORD *)v12 + 48LL))(
                     v12,
                     v11,
                     v13,
                     1LL))
          : (v14 = *v13),
            v14 == -1) )
      {
        *(_QWORD *)a2 = 0LL;
      }
      else
      {
        *(_BYTE *)(a2 + 9) = v14;
      }
      *(_BYTE *)(a2 + 8) = 1;
    }
    LOBYTE(v11) = *(_BYTE *)(a2 + 9);
    v15 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a7 + 80LL))(a7, v11, 0LL, 1LL);
    if ( v15 == 43 )
    {
      v33 = 43;
    }
    else
    {
      if ( v15 != 45 )
        goto LABEL_19;
      v33 = 45;
    }
    v7 = (unsigned __int8 *)&v34;
    std::istreambuf_iterator<char>::_Inc((__int64 *)a2);
  }
LABEL_19:
  v16 = 0;
  if ( !std::istreambuf_iterator<char>::equal((__int64 *)a2, a3) )
  {
    do
    {
      if ( !*(_BYTE *)(a2 + 8) )
      {
        v18 = *(_QWORD *)a2;
        if ( !*(_QWORD *)a2
          || ((v19 = **(unsigned __int8 ***)(v18 + 56)) == 0LL ? (v17 = 0LL) : (v17 = **(unsigned int **)(v18 + 80)),
              (int)v17 <= 0 ? (v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 48LL))(v18)) : (v20 = *v19),
              v20 == -1) )
        {
          *(_QWORD *)a2 = 0LL;
        }
        else
        {
          *(_BYTE *)(a2 + 9) = v20;
        }
        *(_BYTE *)(a2 + 8) = 1;
      }
      LOBYTE(v17) = *(_BYTE *)(a2 + 9);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a7 + 80LL))(a7, v17, 0LL) != 48 )
        break;
      v16 = 1;
      std::istreambuf_iterator<char>::_Inc((__int64 *)a2);
    }
    while ( !std::istreambuf_iterator<char>::equal((__int64 *)a2, a3) );
    if ( v16 )
      *v7++ = 48;
  }
  while ( !std::istreambuf_iterator<char>::equal((__int64 *)a2, a3) )
  {
    if ( !*(_BYTE *)(a2 + 8) )
    {
      v21 = *(_QWORD *)a2;
      if ( !*(_QWORD *)a2
        || ((v22 = **(unsigned __int8 ***)(v21 + 56)) == 0LL ? (v23 = 0LL) : (v23 = **(unsigned int **)(v21 + 80)),
            (int)v23 <= 0 ? (v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 48LL))(v21)) : (v24 = *v22),
            v24 == -1) )
      {
        *(_QWORD *)a2 = 0LL;
      }
      else
      {
        *(_BYTE *)(a2 + 9) = v24;
      }
      *(_BYTE *)(a2 + 8) = 1;
    }
    LOBYTE(v23) = *(_BYTE *)(a2 + 9);
    v25 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a7 + 80LL))(a7, v23, 0LL);
    if ( (unsigned __int8)(v25 - 48) > 9u )
      break;
    *v7 = v25;
    v16 = 1;
    std::istreambuf_iterator<char>::_Inc((__int64 *)a2);
    v26 = v7 + 1;
    if ( v7 >= (unsigned __int8 *)&v35 )
      v26 = v7;
    v7 = v26;
  }
  v27 = &v33;
  if ( v16 )
    v27 = v7;
  v31 = 0;
  *v27 = 0;
  v28 = Stolx(&v33, &v32, 0xAu, &v31);
  v29 = std::istreambuf_iterator<char>::equal((__int64 *)a2, a3) != 0;
  if ( v32 == &v33 || v31 || v28 < a4 || a5 < v28 )
    v29 |= 2u;
  else
    *a6 = v28;
  return v29;
}
