/*
 * XREFs of ?_Grow@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA_N_K@Z @ 0x18007B0C8
 * Callers:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z @ 0x18007FE40 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z.c)
 * Callees:
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K@Z @ 0x18000BFD0 (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K@Z.c)
 */

char __fastcall std::wstring::_Grow(const void **a1, unsigned __int64 a2)
{
  char result; // al
  bool v3; // cf

  result = 0;
  if ( a2 )
  {
    if ( (unsigned __int64)a1[3] < a2 )
      std::wstring::_Copy(a1, a2);
    return 1;
  }
  else
  {
    v3 = (unsigned __int64)a1[3] < 8;
    a1[2] = 0LL;
    if ( !v3 )
      a1 = (const void **)*a1;
    *(_WORD *)a1 = 0;
  }
  return result;
}
