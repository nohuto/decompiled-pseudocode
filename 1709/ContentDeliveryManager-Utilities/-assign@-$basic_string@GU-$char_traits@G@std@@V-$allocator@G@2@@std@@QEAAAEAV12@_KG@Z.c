/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x18003567C
 * Callers:
 *     ?_Fput@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GPEBD_K333@Z @ 0x1800A30E4 (-_Fput@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     ?_Iput@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GPEAD_K@Z @ 0x1800A68A4 (-_Iput@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     ?do_put@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@GO@Z @ 0x1800AB140 (-do_put@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA_ea_1800AB140.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180015E24 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x180035560 (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K0@Z.c)
 */

__int64 __fastcall std::wstring::assign(__int64 a1, unsigned __int64 a2, __int16 a3)
{
  bool v6; // cf
  _WORD *v7; // rax
  _WORD *v8; // rax
  _WORD *v9; // rdi
  unsigned __int64 i; // rcx
  _WORD *v11; // rax

  if ( a2 == -1LL )
    std::wstring::_Xlen();
  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    std::wstring::_Xlen();
  if ( *(_QWORD *)(a1 + 24) < a2 )
  {
    std::wstring::_Copy((const void **)a1, a2, *(const void **)(a1 + 16));
    goto LABEL_10;
  }
  if ( !a2 )
  {
    v6 = *(_QWORD *)(a1 + 24) < 8uLL;
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( v6 )
      v7 = (_WORD *)a1;
    else
      v7 = *(_WORD **)a1;
    *v7 = 0;
LABEL_10:
    if ( !a2 )
      return a1;
  }
  if ( a2 == 1 )
  {
    if ( *(_QWORD *)(a1 + 24) < 8uLL )
      v8 = (_WORD *)a1;
    else
      v8 = *(_WORD **)a1;
    *v8 = a3;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 24) < 8uLL )
      v9 = (_WORD *)a1;
    else
      v9 = *(_WORD **)a1;
    for ( i = a2; i; --i )
      *v9++ = a3;
  }
  v6 = *(_QWORD *)(a1 + 24) < 8uLL;
  *(_QWORD *)(a1 + 16) = a2;
  if ( v6 )
    v11 = (_WORD *)a1;
  else
    v11 = *(_WORD **)a1;
  v11[a2] = 0;
  return a1;
}
