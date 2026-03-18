/*
 * XREFs of ?_Reserve@?$vector@DV?$allocator@D@std@@@std@@IEAAX_K@Z @ 0x180006258
 * Callers:
 *     ?push_back@?$vector@DV?$allocator@D@std@@@std@@QEAAX$$QEAD@Z @ 0x1800060BC (-push_back@-$vector@DV-$allocator@D@std@@@std@@QEAAX$$QEAD@Z.c)
 * Callees:
 *     ?_Reallocate@?$vector@DV?$allocator@D@std@@@std@@IEAAX_K@Z @ 0x180006038 (-_Reallocate@-$vector@DV-$allocator@D@std@@@std@@IEAAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

char *__fastcall std::vector<char>::_Reserve(_QWORD *a1)
{
  __int64 v1; // rdx
  char *result; // rax
  unsigned __int64 v3; // r10
  SIZE_T v4; // r8
  SIZE_T v5; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = a1[1];
  result = (char *)(a1[2] - v1);
  if ( a1[2] == v1 )
  {
    if ( *a1 - v1 == 1 )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v3 = a1[2] - *a1;
    v4 = 0LL;
    v5 = v1 - *a1 + 1;
    if ( ~(v3 >> 1) >= v3 )
      v4 = v3 + (v3 >> 1);
    if ( v4 >= v5 )
      v5 = v4;
    return std::vector<char>::_Reallocate((__int64)a1, v5);
  }
  return result;
}
