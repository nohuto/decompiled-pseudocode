/*
 * XREFs of WdipSemFreeScenario @ 0x1405AAA3C
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x1405AA0BC (WdipSemLoadScenarioTable.c)
 *     WdipSemAddScenarioToTable @ 0x1405AAE88 (WdipSemAddScenarioToTable.c)
 * Callees:
 *     WdipSemFastFree @ 0x1405AAA94 (WdipSemFastFree.c)
 */

__int64 __fastcall WdipSemFreeScenario(__int64 a1)
{
  __int64 i; // rdi
  __int64 j; // rdi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx

  if ( a1 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 48); i = (unsigned int)(i + 1) )
    {
      v5 = *(_QWORD *)(a1 + 8 * i + 56);
      if ( v5 )
      {
        WdipSemFastFree(0LL, v5);
        *(_QWORD *)(a1 + 8 * i + 56) = 0LL;
      }
    }
    *(_DWORD *)(a1 + 48) = 0;
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 52); j = (unsigned int)(j + 1) )
    {
      v6 = *(_QWORD *)(a1 + 8 * j + 1048);
      if ( v6 )
      {
        WdipSemFastFree(0LL, v6);
        *(_QWORD *)(a1 + 8 * j + 1048) = 0LL;
      }
    }
    *(_DWORD *)(a1 + 52) = 0;
    return WdipSemFastFree(1LL, a1);
  }
  return result;
}
