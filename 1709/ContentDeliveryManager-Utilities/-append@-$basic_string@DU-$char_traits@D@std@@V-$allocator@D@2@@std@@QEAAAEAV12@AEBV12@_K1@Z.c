/*
 * XREFs of ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18004B004
 * Callers:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x18004AED4 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x18009D6B0 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18009D6B0.c)
 * Callees:
 *     ?_Xran@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAXXZ @ 0x180015D14 (-_Xran@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAXXZ.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180015E24 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x1800163DC (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     memcpy_0 @ 0x1800B4279 (memcpy_0.c)
 */

size_t *__fastcall std::string::append(size_t *a1, _QWORD *a2, unsigned __int64 a3, size_t a4)
{
  unsigned __int64 v4; // rax
  size_t v5; // rsi
  _QWORD *v7; // r14
  size_t v9; // rax
  size_t v10; // r8
  size_t v11; // rdi
  _BYTE *v12; // rax
  char *v13; // rcx
  bool v14; // cf
  char *v15; // rax

  v4 = a2[2];
  v5 = a4;
  v7 = a2;
  if ( v4 < a3 )
    std::wstring::_Xran();
  v9 = v4 - a3;
  v10 = a1[2];
  if ( v9 < a4 )
    v5 = v9;
  if ( ~v10 <= v5 )
    std::wstring::_Xlen();
  if ( v5 )
  {
    v11 = v10 + v5;
    if ( v10 + v5 == -1LL )
      std::wstring::_Xlen();
    if ( a1[3] >= v11 )
    {
      if ( v11 )
      {
LABEL_15:
        if ( v7[3] >= 0x10uLL )
          v7 = (_QWORD *)*v7;
        if ( a1[3] < 0x10 )
          v13 = (char *)a1;
        else
          v13 = (char *)*a1;
        memcpy_0(&v13[a1[2]], (char *)v7 + a3, v5);
        v14 = a1[3] < 0x10;
        a1[2] = v11;
        if ( v14 )
          v15 = (char *)a1;
        else
          v15 = (char *)*a1;
        v15[v11] = 0;
        return a1;
      }
      a1[2] = 0LL;
      if ( a1[3] < 0x10 )
        v12 = a1;
      else
        v12 = (_BYTE *)*a1;
      *v12 = 0;
    }
    else
    {
      std::string::_Copy((const void **)a1, v10 + v5, v10);
    }
    if ( !v11 )
      return a1;
    goto LABEL_15;
  }
  return a1;
}
