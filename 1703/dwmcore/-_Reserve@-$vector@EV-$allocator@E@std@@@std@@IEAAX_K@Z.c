/*
 * XREFs of ?_Reserve@?$vector@EV?$allocator@E@std@@@std@@IEAAX_K@Z @ 0x18001DD24
 * Callers:
 *     ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x180008780 (-PrepareData@CMegaRect@@QEAAJAEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 * Callees:
 *     ?_Reallocate@?$vector@EV?$allocator@E@std@@@std@@IEAAX_K@Z @ 0x18001DC9C (-_Reallocate@-$vector@EV-$allocator@E@std@@@std@@IEAAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

char *__fastcall std::vector<unsigned char>::_Reserve(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rdx
  char *result; // rax
  unsigned __int64 v5; // r10
  SIZE_T v6; // rdx
  SIZE_T v7; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a1[1];
  result = (char *)(a1[2] - v3);
  if ( (unsigned __int64)result < a2 )
  {
    if ( *a1 - v3 - 1 < a2 )
    {
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
      __debugbreak();
    }
    v5 = a1[2] - *a1;
    v6 = a2 + v3 - *a1;
    v7 = 0LL;
    if ( ~(v5 >> 1) >= v5 )
      v7 = v5 + (v5 >> 1);
    if ( v7 >= v6 )
      v6 = v7;
    return std::vector<unsigned char>::_Reallocate((__int64)a1, v6);
  }
  return result;
}
