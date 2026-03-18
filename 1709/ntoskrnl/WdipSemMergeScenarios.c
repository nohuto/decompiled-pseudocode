/*
 * XREFs of WdipSemMergeScenarios @ 0x14073EC80
 * Callers:
 *     WdipSemAddScenarioToTable @ 0x1405AAE88 (WdipSemAddScenarioToTable.c)
 * Callees:
 *     WdipSemAddContextEventToScenario @ 0x14073EAB0 (WdipSemAddContextEventToScenario.c)
 *     WdipSemAddEndEventToScenario @ 0x14073EB74 (WdipSemAddEndEventToScenario.c)
 *     WdipSemMergeEvents @ 0x14073EC4C (WdipSemMergeEvents.c)
 */

__int64 __fastcall WdipSemMergeScenarios(__int64 a1, __int64 a2)
{
  int v4; // r9d
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 i; // rdi

  if ( a1 && a2 )
  {
    WdipSemMergeEvents(a1, a2);
    v5 = 0LL;
    if ( *(_DWORD *)(v6 + 48) )
    {
      while ( 1 )
      {
        v4 = WdipSemAddContextEventToScenario(a1, *(_QWORD *)(a2 + 8 * v5 + 56));
        if ( v4 < 0 )
          break;
        v5 = (unsigned int)(v5 + 1);
        if ( (unsigned int)v5 >= *(_DWORD *)(a2 + 48) )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 52); i = (unsigned int)(i + 1) )
      {
        v4 = WdipSemAddEndEventToScenario(a1, *(_QWORD *)(a2 + 8 * i + 1048));
        if ( v4 < 0 )
          break;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
