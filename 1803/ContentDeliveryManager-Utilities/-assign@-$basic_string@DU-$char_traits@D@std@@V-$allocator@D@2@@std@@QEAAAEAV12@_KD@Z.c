/*
 * XREFs of ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180038D64
 * Callers:
 *     ??$_Getloctxt@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@0@0_KPEBG@Z @ 0x18003B4D8 (--$_Getloctxt@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@YAHAEAV-$istreambuf_ite.c)
 *     ??$_Getloctxt@DV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@0@0_KPEBD@Z @ 0x1800A17EC (--$_Getloctxt@DV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@YAHAEAV-$istreambuf_i.c)
 *     ??$_Getloctxt@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@0@0_KPEBD@Z @ 0x1800A5FC0 (--$_Getloctxt@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@YAHAEAV-$istreambuf_ite.c)
 *     ?_Fput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBD_K333@Z @ 0x1800A69B8 (-_Fput@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     ?_Iput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEAD_K@Z @ 0x1800A91D4 (-_Iput@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     ??$_Getloctxt@DV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@0@0_KPEBD@Z @ 0x1800AE33C (--$_Getloctxt@DV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@YAHAEAV-$istreambuf_ite.c)
 *     ?do_put@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@DO@Z @ 0x1800BF540 (-do_put@-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA_ea_1800BF540.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x1800181AC (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x1800189C8 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     memset_0 @ 0x1800C1147 (memset_0.c)
 */

void *__fastcall std::string::assign(void *a1, size_t Size, char a3)
{
  _BYTE *v6; // rax
  _BYTE *v7; // rax
  void *v8; // rcx
  bool v9; // cf
  _BYTE *v10; // rax

  if ( Size == -1LL )
    std::wstring::_Xlen();
  if ( *((_QWORD *)a1 + 3) < Size )
  {
    std::string::_Copy((const void **)a1, Size, *((_QWORD *)a1 + 2));
    goto LABEL_9;
  }
  if ( !Size )
  {
    *((_QWORD *)a1 + 2) = 0LL;
    if ( *((_QWORD *)a1 + 3) < 0x10uLL )
      v6 = a1;
    else
      v6 = *(_BYTE **)a1;
    *v6 = 0;
LABEL_9:
    if ( !Size )
      return a1;
  }
  if ( Size == 1 )
  {
    if ( *((_QWORD *)a1 + 3) < 0x10uLL )
      v7 = a1;
    else
      v7 = *(_BYTE **)a1;
    *v7 = a3;
  }
  else
  {
    if ( *((_QWORD *)a1 + 3) < 0x10uLL )
      v8 = a1;
    else
      v8 = *(void **)a1;
    memset_0(v8, a3, Size);
  }
  v9 = *((_QWORD *)a1 + 3) < 0x10uLL;
  *((_QWORD *)a1 + 2) = Size;
  if ( v9 )
    v10 = a1;
  else
    v10 = *(_BYTE **)a1;
  v10[Size] = 0;
  return a1;
}
