/*
 * XREFs of ??$_Getloctxt@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@0@0_KPEBG@Z @ 0x180037C04
 * Callers:
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x180033120 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_180033120.c)
 *     ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x180080950 (-do_get@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_180080950.c)
 *     ?do_get_monthname@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x180094D70 (-do_get_monthname@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-.c)
 *     ?do_get_weekday@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x180094DD0 (-do_get_weekday@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$i.c)
 * Callees:
 *     ??D?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@QEBAAEBGXZ @ 0x1800354F8 (--D-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@QEBAAEBGXZ.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180035870 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x1800363A4 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x1800381A8 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Getloctxt<unsigned short,std::istreambuf_iterator<unsigned short>>(
        __int64 *a1,
        __int64 a2,
        size_t a3,
        __int16 *a4)
{
  __int64 v6; // rdi
  __int64 v7; // r9
  __int16 v8; // cx
  size_t v9; // rax
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r13
  _QWORD *v12; // r12
  __int64 v13; // rbx
  __int16 v14; // ax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  __int16 v17; // ax
  char v18; // cl
  _QWORD *v19; // rdx
  char v20; // cl
  char v22; // [rsp+20h] [rbp-50h]
  unsigned int v23; // [rsp+24h] [rbp-4Ch]
  _QWORD v26[3]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v27; // [rsp+58h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  if ( *a4 )
  {
    v8 = *a4;
    do
    {
      v9 = a3 + 1;
      if ( v8 != *a4 )
        v9 = a3;
      a3 = v9;
      v8 = a4[++v7];
    }
    while ( v8 );
  }
  v27 = 15LL;
  v26[2] = 0LL;
  LOBYTE(v26[0]) = 0;
  std::string::assign(v26, a3, 0);
  v23 = -2;
  v10 = 1LL;
  v11 = v27;
  v12 = (_QWORD *)v26[0];
LABEL_7:
  v22 = 0;
  v13 = 0LL;
  if ( a3 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = a4[v13];
        if ( !v14 || v14 == *a4 )
          break;
        ++v13;
      }
      v15 = v26;
      if ( v11 >= 0x10 )
        v15 = v12;
      if ( *((_BYTE *)v15 + v6) )
        break;
      v13 += v10;
      v17 = a4[v13];
      if ( v17 == *a4 || !v17 )
      {
        v23 = v6;
LABEL_24:
        v19 = v26;
        if ( v11 >= 0x10 )
          v19 = v12;
        v20 = 127;
        if ( v10 < 0x7F )
          v20 = v10;
        *((_BYTE *)v19 + v6) = v20;
        v12 = (_QWORD *)v26[0];
        v11 = v27;
LABEL_29:
        v18 = v22;
        goto LABEL_30;
      }
      if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a1, a2)
        || a4[v13] != *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a1) )
      {
        goto LABEL_24;
      }
      v18 = 1;
      v22 = 1;
LABEL_30:
      if ( ++v6 >= a3 )
      {
        v6 = 0LL;
        if ( v18 && !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a1, a2) )
        {
          ++v10;
          std::istreambuf_iterator<unsigned short>::_Inc(a1);
          v23 = -1;
          goto LABEL_7;
        }
        goto LABEL_34;
      }
    }
    v16 = v26;
    if ( v11 >= 0x10 )
      v16 = v12;
    v13 += *((char *)v16 + v6);
    goto LABEL_29;
  }
LABEL_34:
  if ( v11 >= 0x10 )
    operator delete(v12);
  return v23;
}
