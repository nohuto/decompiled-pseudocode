/*
 * XREFs of ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x18009BE58
 * Callers:
 *     ??$_Getloctxt@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@0@0_KPEBD@Z @ 0x180098F04 (--$_Getloctxt@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@YAHAEAV-$istreambuf_ite.c)
 *     ?_Getffld@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x18009A140 (-_Getffld@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?_Getffldx@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x18009AC1C (-_Getffldx@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV-$i.c)
 *     ?_Getifld@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1HAEBVlocale@2@@Z @ 0x18009B840 (-_Getifld@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?_Getfmt@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@IEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@PEBD@Z @ 0x1800AE6F8 (-_Getfmt@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@IEBA-AV-$istreamb.c)
 *     ?_Getint@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0HHAEAHAEBV?$ctype@D@2@@Z @ 0x1800AE958 (-_Getint@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHAEAV-$istrea.c)
 *     ?_Getmfld@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0_NAEAVios_base@2@PEAD@Z @ 0x1800AEC04 (-_Getmfld@-$money_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$basic_.c)
 *     ?do_get_date@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800B15C0 (-do_get_date@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$istr.c)
 *     ?do_get_time@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800B1DF0 (-do_get_time@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$istr.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::istreambuf_iterator<char>::_Inc(__int64 *a1)
{
  __int64 v2; // rcx
  int v3; // edx
  unsigned __int8 **v4; // rcx
  unsigned __int8 *v5; // rdx
  int v6; // eax

  v2 = *a1;
  if ( !v2
    || (!**(_QWORD **)(v2 + 56) ? (v3 = 0) : (v3 = **(_DWORD **)(v2 + 80)),
        v3 <= 0
      ? (v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2))
      : (--**(_DWORD **)(v2 + 80), v4 = *(unsigned __int8 ***)(v2 + 56), v5 = *v4, ++*v4, v6 = *v5),
        v6 == -1) )
  {
    *a1 = 0LL;
    *((_BYTE *)a1 + 8) = 1;
  }
  else
  {
    *((_BYTE *)a1 + 8) = 0;
  }
}
