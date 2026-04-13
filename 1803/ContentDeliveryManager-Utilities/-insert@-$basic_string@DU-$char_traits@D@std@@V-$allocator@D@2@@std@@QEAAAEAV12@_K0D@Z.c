/*
 * XREFs of ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z @ 0x1800AB67C
 * Callers:
 *     ?_Fput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBD_K333@Z @ 0x1800A69B8 (-_Fput@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     ?_Iput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEAD_K@Z @ 0x1800A91D4 (-_Iput@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     ?_Getmfld@?$money_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@0_NAEAVios_base@2@PEAG@Z @ 0x1800B1D58 (-_Getmfld@-$money_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$basic_.c)
 *     ?_Getmfld@?$money_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0_NAEAVios_base@2@PEA_W@Z @ 0x1800B29AC (-_Getmfld@-$money_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBA-AV-$bas.c)
 *     ?_Getmfld@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0_NAEAVios_base@2@PEAD@Z @ 0x1800BBCEC (-_Getmfld@-$money_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$basic_.c)
 *     ?_Putmfld@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@D1V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@D@Z @ 0x1800BD63C (-_Putmfld@-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$ostrea.c)
 * Callees:
 *     ?_Xran@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAXXZ @ 0x180018090 (-_Xran@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAXXZ.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x1800181AC (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x1800189C8 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     memmove_0 @ 0x1800C0A44 (memmove_0.c)
 *     memset_0 @ 0x1800C1147 (memset_0.c)
 */

size_t *__fastcall std::string::insert(size_t *a1, size_t a2, size_t a3, char a4)
{
  size_t v6; // r8
  size_t v9; // rdi
  _BYTE *v10; // rax
  unsigned __int64 v11; // rax
  char *v12; // rdx
  char *v13; // rcx
  size_t v14; // r8
  char *v15; // rax
  char *v16; // rax
  bool v17; // cf
  char *v18; // rax

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
        v11 = a1[3];
        if ( v11 < 0x10 )
          v12 = (char *)a1;
        else
          v12 = (char *)*a1;
        if ( v11 < 0x10 )
          v13 = (char *)a1;
        else
          v13 = (char *)*a1;
        v14 = a1[2] - a2;
        if ( v14 )
        {
          memmove_0(&v13[a2 + a3], &v12[a2], v14);
          v11 = a1[3];
        }
        if ( a3 == 1 )
        {
          if ( v11 < 0x10 )
            v15 = (char *)a1;
          else
            v15 = (char *)*a1;
          v15[a2] = a4;
        }
        else
        {
          if ( v11 < 0x10 )
            v16 = (char *)a1;
          else
            v16 = (char *)*a1;
          memset_0(&v16[a2], a4, a3);
        }
        v17 = a1[3] < 0x10;
        a1[2] = v9;
        if ( v17 )
          v18 = (char *)a1;
        else
          v18 = (char *)*a1;
        v18[v9] = 0;
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
