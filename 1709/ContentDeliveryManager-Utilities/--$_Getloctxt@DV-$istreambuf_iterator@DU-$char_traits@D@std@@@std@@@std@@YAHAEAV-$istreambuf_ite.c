/*
 * XREFs of ??$_Getloctxt@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@0@0_KPEBD@Z @ 0x180098F04
 * Callers:
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x18009D6B0 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18009D6B0.c)
 *     ?do_get@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@DD@Z @ 0x1800B10B0 (-do_get@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$istreambu.c)
 *     ?do_get_monthname@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800B1D90 (-do_get_monthname@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-.c)
 *     ?do_get_weekday@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800B2030 (-do_get_weekday@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$i.c)
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180035870 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x18009BE58 (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x18009E360 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800B3E2F (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Getloctxt<char,std::istreambuf_iterator<char>>(__int64 *a1, __int64 a2, size_t a3, _BYTE *a4)
{
  char v7; // dl
  _BYTE *v8; // rcx
  size_t v9; // rax
  unsigned __int64 v10; // r12
  void **v11; // r13
  __int64 v12; // rbx
  __int64 v13; // r14
  char v14; // al
  void **v15; // rax
  void **v16; // rax
  char v17; // al
  __int64 v18; // rcx
  unsigned __int8 *v19; // r8
  int v20; // edx
  int v21; // eax
  char v22; // cl
  bool v23; // cf
  void **v24; // rdx
  char v25; // cl
  char v27; // [rsp+20h] [rbp-40h]
  unsigned int v28; // [rsp+24h] [rbp-3Ch]
  void *v30[3]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v31; // [rsp+50h] [rbp-10h]

  if ( *a4 )
  {
    v7 = *a4;
    v8 = a4;
    do
    {
      v9 = a3 + 1;
      if ( v7 != *a4 )
        v9 = a3;
      a3 = v9;
      v7 = *++v8;
    }
    while ( *v8 );
  }
  v31 = 15LL;
  v30[2] = 0LL;
  LOBYTE(v30[0]) = 0;
  std::string::assign(v30, a3, 0);
  v28 = -2;
  v10 = 1LL;
  v11 = (void **)v30[0];
LABEL_7:
  v27 = 0;
  v12 = 0LL;
  v13 = 0LL;
  if ( a3 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = a4[v12];
        if ( !v14 || v14 == *a4 )
          break;
        ++v12;
      }
      v15 = v30;
      if ( v31 >= 0x10 )
        v15 = v11;
      if ( *((_BYTE *)v15 + v13) )
        break;
      v12 += v10;
      v17 = a4[v12];
      if ( v17 == *a4 || !v17 )
      {
        v23 = v31 < 0x10;
        v28 = v13;
LABEL_37:
        v24 = v30;
        if ( !v23 )
          v24 = v11;
        v25 = 127;
        if ( v10 < 0x7F )
          v25 = v10;
        *((_BYTE *)v24 + v13) = v25;
        v11 = (void **)v30[0];
LABEL_42:
        v22 = v27;
        goto LABEL_43;
      }
      if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a1, a2) )
        goto LABEL_35;
      if ( !*((_BYTE *)a1 + 8) )
      {
        v18 = *a1;
        if ( !*a1
          || ((v19 = **(unsigned __int8 ***)(v18 + 56)) == 0LL ? (v20 = 0) : (v20 = **(_DWORD **)(v18 + 80)),
              v20 <= 0 ? (v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 48LL))(v18)) : (v21 = *v19),
              v21 == -1) )
        {
          *a1 = 0LL;
        }
        else
        {
          *((_BYTE *)a1 + 9) = v21;
        }
        *((_BYTE *)a1 + 8) = 1;
      }
      if ( a4[v12] != *((_BYTE *)a1 + 9) )
      {
LABEL_35:
        v23 = v31 < 0x10;
        goto LABEL_37;
      }
      v22 = 1;
      v27 = 1;
LABEL_43:
      if ( ++v13 >= a3 )
      {
        if ( v22 && !(unsigned __int8)std::istreambuf_iterator<char>::equal(a1, a2) )
        {
          ++v10;
          std::istreambuf_iterator<char>::_Inc(a1);
          v28 = -1;
          goto LABEL_7;
        }
        goto LABEL_47;
      }
    }
    v16 = v30;
    if ( v31 >= 0x10 )
      v16 = v11;
    v12 += *((char *)v16 + v13);
    goto LABEL_42;
  }
LABEL_47:
  if ( v31 >= 0x10 )
    operator delete(v11);
  return v28;
}
