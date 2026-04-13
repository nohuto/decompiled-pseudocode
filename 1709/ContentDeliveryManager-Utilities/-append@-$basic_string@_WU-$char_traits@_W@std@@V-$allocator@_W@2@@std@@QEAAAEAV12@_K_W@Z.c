/*
 * XREFs of ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x180081F14
 * Callers:
 *     ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x180080950 (-do_get@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_180080950.c)
 *     ?do_get@?$money_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x1800A9F10 (-do_get@-$money_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@M_ea_1800A9F10.c)
 *     ?do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x1800AB370 (-do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$ostre.c)
 *     ?do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z @ 0x1800AB5A0 (-do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@M_ea_1800AB5A0.c)
 *     ?do_put@?$time_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GPEBUtm@@DD@Z @ 0x1800AC9B0 (-do_put@-$time_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$ostreambu.c)
 *     ?do_put@?$time_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_WPEBUtm@@DD@Z @ 0x1800ACB00 (-do_put@-$time_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$ostrea.c)
 *     ?do_transform@?$collate@_W@std@@MEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@PEB_W0@Z @ 0x1800ACD80 (-do_transform@-$collate@_W@std@@MEBA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180015E24 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K0@Z @ 0x18005B4F4 (-_Copy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_K0@Z.c)
 */

_WORD **__fastcall std::wstring::append(_WORD **a1, unsigned __int64 a2, __int16 a3)
{
  unsigned __int64 v5; // r8
  unsigned __int64 v7; // rsi
  bool v8; // cf
  _WORD *v9; // rax
  _WORD *v10; // rcx
  _WORD *v11; // rax
  _WORD *v12; // rax
  _WORD *v13; // rdi
  unsigned __int64 i; // rcx
  _WORD *v15; // rax

  v5 = (unsigned __int64)a1[2];
  if ( ~v5 <= a2 )
    std::wstring::_Xlen();
  if ( a2 )
  {
    v7 = v5 + a2;
    if ( v5 + a2 > 0x7FFFFFFFFFFFFFFELL )
      std::wstring::_Xlen();
    if ( (unsigned __int64)a1[3] >= v7 )
    {
      if ( v7 )
      {
LABEL_12:
        v10 = a1[2];
        if ( a2 == 1 )
        {
          if ( (unsigned __int64)a1[3] < 8 )
            v11 = a1;
          else
            v11 = *a1;
          v11[(_QWORD)v10] = a3;
        }
        else
        {
          if ( (unsigned __int64)a1[3] < 8 )
            v12 = a1;
          else
            v12 = *a1;
          v13 = &v12[(_QWORD)v10];
          for ( i = a2; i; --i )
            *v13++ = a3;
        }
        v8 = (unsigned __int64)a1[3] < 8;
        a1[2] = (_WORD *)v7;
        if ( v8 )
          v15 = a1;
        else
          v15 = *a1;
        v15[v7] = 0;
        return a1;
      }
      v8 = (unsigned __int64)a1[3] < 8;
      a1[2] = 0LL;
      if ( v8 )
        v9 = a1;
      else
        v9 = *a1;
      *v9 = 0;
    }
    else
    {
      std::wstring::_Copy((const void **)a1, v5 + a2, (const void *)v5);
    }
    if ( !v7 )
      return a1;
    goto LABEL_12;
  }
  return a1;
}
