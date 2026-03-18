/*
 * XREFs of _lambda_365183fea5c3529ee8e4714511b90111_::_lambda_invoker_cdecl_ @ 0x180022650
 * Callers:
 *     ?EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObserver@@PEAXP6AX1K_KW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@Z @ 0x180021F30 (-EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObs.c)
 * Callees:
 *     ??$emplace_back@AEBK@?$vector@KV?$allocator@K@std@@@std@@QEAAXAEBK@Z @ 0x180147FB4 (--$emplace_back@AEBK@-$vector@KV-$allocator@K@std@@@std@@QEAAXAEBK@Z.c)
 */

__int64 __fastcall lambda_365183fea5c3529ee8e4714511b90111_::_lambda_invoker_cdecl_(
        __int64 a1,
        int a2,
        __int64 a3,
        char a4)
{
  __int64 result; // rax
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000) != 0 )
  {
    if ( (a4 & 1) != 0 )
      result = std::vector<unsigned long>::emplace_back<unsigned long const &>(a1, &v7);
    if ( (a4 & 2) != 0 )
      result = std::vector<unsigned long>::emplace_back<unsigned long const &>(a1 + 24, &v7);
    if ( (a4 & 4) != 0 )
      result = std::vector<unsigned long>::emplace_back<unsigned long const &>(a1 + 48, &v7);
    if ( (a4 & 8) != 0 )
      result = std::vector<unsigned long>::emplace_back<unsigned long const &>(a1 + 72, &v7);
    if ( (a4 & 0x10) != 0 )
      return std::vector<unsigned long>::emplace_back<unsigned long const &>(a1 + 96, &v7);
  }
  return result;
}
