/*
 * XREFs of ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180015EF0
 * Callers:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x180015D28 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 *     ?to_bytes@?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PEBG0@Z @ 0x18004A800 (-to_bytes@-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D.c)
 *     ?do_get@?$messages@D@std@@MEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@HHHAEBV32@@Z @ 0x1800B0E10 (-do_get@-$messages@D@std@@MEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@HHHAE.c)
 *     ?do_put@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@DAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z @ 0x1800B22C0 (-do_put@-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$ostreamb.c)
 *     ?do_put@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@DO@Z @ 0x1800B24E0 (-do_put@-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA_ea_1800B24E0.c)
 * Callees:
 *     ?_Xran@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAXXZ @ 0x180015D14 (-_Xran@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAXXZ.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180015E24 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x1800163DC (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     ?erase@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0@Z @ 0x1800164DC (-erase@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0@Z.c)
 *     memcpy_0 @ 0x1800B4279 (memcpy_0.c)
 */

void **__fastcall std::string::assign(void **a1, void **a2, unsigned __int64 a3, size_t a4)
{
  unsigned __int64 v4; // rdi
  void **v6; // rsi
  void **v7; // rbx
  size_t v8; // rdi
  size_t v9; // rax
  bool v10; // cf
  _BYTE *v11; // rax
  void *v12; // rcx
  void **v13; // rax

  v4 = (unsigned __int64)a2[2];
  v6 = a2;
  v7 = a1;
  if ( v4 < a3 )
    std::wstring::_Xran();
  v8 = v4 - a3;
  if ( a4 < v8 )
    v8 = a4;
  if ( a1 == a2 )
  {
    v9 = v8 + a3;
    if ( (unsigned __int64)a1[2] < v8 + a3 )
      std::wstring::_Xran();
    v10 = (unsigned __int64)a1[3] < 0x10;
    a1[2] = (void *)v9;
    if ( !v10 )
      a1 = (void **)*a1;
    *((_BYTE *)a1 + v9) = 0;
    std::string::erase(v7, 0LL);
    return v7;
  }
  if ( v8 == -1LL )
    std::wstring::_Xlen();
  if ( (unsigned __int64)a1[3] < v8 )
  {
    std::string::_Copy(a1);
    goto LABEL_17;
  }
  if ( !v8 )
  {
    a1[2] = 0LL;
    if ( (unsigned __int64)a1[3] < 0x10 )
      v11 = a1;
    else
      v11 = *a1;
    *v11 = 0;
LABEL_17:
    if ( !v8 )
      return v7;
  }
  if ( (unsigned __int64)v6[3] >= 0x10 )
    v6 = (void **)*v6;
  if ( (unsigned __int64)v7[3] < 0x10 )
    v12 = v7;
  else
    v12 = *v7;
  memcpy_0(v12, (char *)v6 + a3, v8);
  v10 = (unsigned __int64)v7[3] < 0x10;
  v7[2] = (void *)v8;
  if ( v10 )
    v13 = v7;
  else
    v13 = (void **)*v7;
  *((_BYTE *)v13 + v8) = 0;
  return v7;
}
