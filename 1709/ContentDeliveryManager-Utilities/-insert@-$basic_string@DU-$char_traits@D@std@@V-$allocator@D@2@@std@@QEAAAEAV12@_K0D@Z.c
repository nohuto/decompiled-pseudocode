/*
 * XREFs of ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z @ 0x18009E43C
 * Callers:
 *     ?_Fput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBD_K333@Z @ 0x18009986C (-_Fput@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     ?_Iput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEAD_K@Z @ 0x18009BFE4 (-_Iput@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     ?_Getmfld@?$money_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@0_NAEAVios_base@2@PEAG@Z @ 0x1800A4C08 (-_Getmfld@-$money_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$basic_.c)
 *     ?_Getmfld@?$money_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0_NAEAVios_base@2@PEA_W@Z @ 0x1800A5854 (-_Getmfld@-$money_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBA-AV-$bas.c)
 *     ?_Getmfld@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0_NAEAVios_base@2@PEAD@Z @ 0x1800AEC04 (-_Getmfld@-$money_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$basic_.c)
 *     ?_Putmfld@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@D1V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@D@Z @ 0x1800B0560 (-_Putmfld@-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$ostrea.c)
 * Callees:
 *     ?_Xran@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAXXZ @ 0x180015D14 (-_Xran@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAXXZ.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180015E24 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x1800163DC (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     memmove_0 @ 0x1800B39F4 (memmove_0.c)
 *     memset_0 @ 0x1800B4307 (memset_0.c)
 */

size_t *__fastcall std::string::insert(size_t *a1, size_t a2, size_t a3, char a4)
{
  size_t v6; // r8
  size_t v9; // rdi
  _BYTE *v10; // rax
  char *v11; // rcx
  char *v12; // rax
  size_t v13; // r8
  char *v14; // rax
  char *v15; // rax
  bool v16; // cf
  char *v17; // rax

  v6 = a1[2];
  if ( v6 < a2 )
    std::wstring::_Xran();
  if ( ~v6 <= a3 )
    std::wstring::_Xlen();
  if ( a3 )
  {
    v9 = v6 + a3;
    if ( v6 + a3 == -1LL )
      std::wstring::_Xlen();
    if ( a1[3] >= v9 )
    {
      if ( v9 )
      {
LABEL_13:
        if ( a1[3] < 0x10 )
          v11 = (char *)a1;
        else
          v11 = (char *)*a1;
        if ( a1[3] < 0x10 )
          v12 = (char *)a1;
        else
          v12 = (char *)*a1;
        v13 = a1[2] - a2;
        if ( v13 )
          memmove_0(&v12[a2 + a3], &v11[a2], v13);
        if ( a3 == 1 )
        {
          if ( a1[3] < 0x10 )
            v14 = (char *)a1;
          else
            v14 = (char *)*a1;
          v14[a2] = a4;
        }
        else
        {
          if ( a1[3] < 0x10 )
            v15 = (char *)a1;
          else
            v15 = (char *)*a1;
          memset_0(&v15[a2], a4, a3);
        }
        v16 = a1[3] < 0x10;
        a1[2] = v9;
        if ( v16 )
          v17 = (char *)a1;
        else
          v17 = (char *)*a1;
        v17[v9] = 0;
        return a1;
      }
      a1[2] = 0LL;
      if ( a1[3] < 0x10 )
        v10 = a1;
      else
        v10 = (_BYTE *)*a1;
      *v10 = 0;
    }
    else
    {
      std::string::_Copy((const void **)a1, v6 + a3, v6);
    }
    if ( !v9 )
      return a1;
    goto LABEL_13;
  }
  return a1;
}
