/*
 * XREFs of ?insert@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0_W@Z @ 0x1800ACFE8
 * Callers:
 *     ?_Fput@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_WPEBD_K444@Z @ 0x1800A35E4 (-_Fput@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBA-AV-$ostreamb.c)
 *     ?_Iput@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_WPEAD_K@Z @ 0x1800A6CB4 (-_Iput@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBA-AV-$ostreamb.c)
 *     ?_Putmfld@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_W1V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@3@Z @ 0x1800A9254 (-_Putmfld@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBA-AV-$ost.c)
 * Callees:
 *     ?_Xran@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAXXZ @ 0x180015D14 (-_Xran@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAXXZ.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180015E24 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K0@Z @ 0x18005B4F4 (-_Copy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_K0@Z.c)
 *     memmove_0 @ 0x1800B39F4 (memmove_0.c)
 */

_WORD **__fastcall std::wstring::insert(_WORD **a1, unsigned __int64 a2, unsigned __int64 a3, __int16 a4)
{
  unsigned __int64 v6; // r8
  unsigned __int64 v9; // rsi
  bool v10; // cf
  _WORD *v11; // rax
  _WORD *v12; // rax
  _WORD *v13; // rcx
  char *v14; // r8
  _WORD *v15; // rax
  _WORD *v16; // rax
  _WORD *v17; // rdi
  unsigned __int64 i; // rcx
  _WORD *v19; // rax

  v6 = (unsigned __int64)a1[2];
  if ( v6 < a2 )
    std::wstring::_Xran();
  if ( ~v6 <= a3 )
    std::wstring::_Xlen();
  if ( a3 )
  {
    v9 = v6 + a3;
    if ( v6 + a3 > 0x7FFFFFFFFFFFFFFELL )
      std::wstring::_Xlen();
    if ( (unsigned __int64)a1[3] >= v9 )
    {
      if ( v9 )
      {
LABEL_13:
        if ( (unsigned __int64)a1[3] < 8 )
          v12 = a1;
        else
          v12 = *a1;
        if ( (unsigned __int64)a1[3] < 8 )
          v13 = a1;
        else
          v13 = *a1;
        v14 = (char *)a1[2] - a2;
        if ( v14 )
          memmove_0(&v13[a2 + a3], &v12[a2], 2LL * (_QWORD)v14);
        if ( a3 == 1 )
        {
          if ( (unsigned __int64)a1[3] < 8 )
            v15 = a1;
          else
            v15 = *a1;
          v15[a2] = a4;
        }
        else
        {
          if ( (unsigned __int64)a1[3] < 8 )
            v16 = a1;
          else
            v16 = *a1;
          v17 = &v16[a2];
          for ( i = a3; i; --i )
            *v17++ = a4;
        }
        v10 = (unsigned __int64)a1[3] < 8;
        a1[2] = (_WORD *)v9;
        if ( v10 )
          v19 = a1;
        else
          v19 = *a1;
        v19[v9] = 0;
        return a1;
      }
      v10 = (unsigned __int64)a1[3] < 8;
      a1[2] = 0LL;
      if ( v10 )
        v11 = a1;
      else
        v11 = *a1;
      *v11 = 0;
    }
    else
    {
      std::wstring::_Copy((const void **)a1, v6 + a3, (const void *)v6);
    }
    if ( !v9 )
      return a1;
    goto LABEL_13;
  }
  return a1;
}
