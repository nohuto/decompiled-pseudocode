/*
 * XREFs of ?_Reserve@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@IEAAX_K@Z @ 0x180188580
 * Callers:
 *     ??$emplace_back@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAX$$QEA$$T@Z @ 0x1800703EC (--$emplace_back@$$T@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAX$$QEA$$T@.c)
 * Callees:
 *     ?_Reallocate@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@IEAAX_K@Z @ 0x180070324 (-_Reallocate@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@IEAAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

char *__fastcall std::vector<EffectInput>::_Reserve(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  char *result; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1[2];
  v3 = a1[1];
  result = (char *)((unsigned __int64)((unsigned __int128)((v2 - v3) * (__int128)0x4EC4EC4EC4EC4EC5LL) >> 64) >> 63);
  if ( !((v2 - v3) / 104) )
  {
    v5 = (v3 - *a1) / 104;
    if ( v5 == 0x276276276276276LL )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v6 = v5 + 1;
    v7 = (unsigned __int128)((v2 - *a1) * (__int128)0x4EC4EC4EC4EC4EC5LL) >> 64;
    v8 = 0LL;
    v9 = ((unsigned __int64)v7 >> 63) + (v7 >> 5);
    if ( 0x276276276276276LL - (v9 >> 1) >= v9 )
      v8 = v9 + (v9 >> 1);
    if ( v8 >= v6 )
      v6 = v8;
    return std::vector<EffectInput>::_Reallocate((__int64)a1, v6);
  }
  return result;
}
