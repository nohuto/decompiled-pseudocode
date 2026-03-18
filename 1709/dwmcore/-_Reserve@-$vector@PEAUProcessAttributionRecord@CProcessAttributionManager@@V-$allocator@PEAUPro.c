/*
 * XREFs of ?_Reserve@?$vector@PEAUProcessAttributionRecord@CProcessAttributionManager@@V?$allocator@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@IEAAX_K@Z @ 0x1801244E8
 * Callers:
 *     ?CreateObserver@CProcessAttributionManager@@QEAAPEAVCProcessAttributionObserver@@XZ @ 0x180124100 (-CreateObserver@CProcessAttributionManager@@QEAAPEAVCProcessAttributionObserver@@XZ.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ?_Reallocate@?$vector@PEAUProcessAttributionRecord@CProcessAttributionManager@@V?$allocator@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@IEAAX_K@Z @ 0x18012443C (-_Reallocate@-$vector@PEAUProcessAttributionRecord@CProcessAttributionManager@@V-$allocator@PEAU.c)
 */

__int64 __fastcall std::vector<CProcessAttributionManager::ProcessAttributionRecord *>::_Reserve(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rcx
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1[1];
  result = (a1[2] - v2) >> 3;
  if ( !result )
  {
    v4 = (v2 - *a1) >> 3;
    if ( v4 == 0x1FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v5 = v4 + 1;
    v6 = (__int64)(a1[2] - *a1) >> 3;
    v7 = 0LL;
    if ( 0x1FFFFFFFFFFFFFFFLL - (v6 >> 1) >= v6 )
      v7 = v6 + (v6 >> 1);
    if ( v7 >= v5 )
      v5 = v7;
    return (__int64)std::vector<CProcessAttributionManager::ProcessAttributionRecord *>::_Reallocate((__int64)a1, v5);
  }
  return result;
}
