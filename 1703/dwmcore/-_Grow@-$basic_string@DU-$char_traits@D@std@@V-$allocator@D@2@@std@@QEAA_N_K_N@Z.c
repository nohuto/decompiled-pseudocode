/*
 * XREFs of ?_Grow@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA_N_K_N@Z @ 0x180138340
 * Callers:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180138450 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x180138530 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x180138230 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 */

bool __fastcall std::string::_Grow(void *a1, unsigned __int64 a2)
{
  bool v3; // zf
  bool v4; // cf
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == -1LL )
  {
    ModuleFailFastForHRESULT(-2147483637, retaddr);
    __debugbreak();
  }
  if ( *((_QWORD *)a1 + 3) < a2 )
  {
    std::string::_Copy((const void **)a1, a2, *((_QWORD *)a1 + 2));
LABEL_9:
    v3 = a2 == 0;
    return !v3;
  }
  v3 = a2 == 0;
  if ( !a2 )
  {
    v4 = *((_QWORD *)a1 + 3) < 0x10uLL;
    *((_QWORD *)a1 + 2) = 0LL;
    if ( !v4 )
      a1 = *(void **)a1;
    *(_BYTE *)a1 = 0;
    goto LABEL_9;
  }
  return !v3;
}
