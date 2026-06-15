/*
 * XREFs of ?_Grow@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA_N_K@Z @ 0x18007AFF8
 * Callers:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18007AD94 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z @ 0x18007AF1C (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z.c)
 * Callees:
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K@Z @ 0x18007FD1C (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K@Z.c)
 */

char __fastcall std::string::_Grow(_QWORD *a1, unsigned __int64 a2)
{
  if ( a2 )
  {
    if ( a1[3] < a2 )
      std::string::_Copy(a1);
    return 1;
  }
  else
  {
    a1[2] = 0LL;
    if ( a1[3] >= 0x10uLL )
      a1 = (_QWORD *)*a1;
    *(_BYTE *)a1 = 0;
    return 0;
  }
}
