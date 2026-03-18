/*
 * XREFs of WdipSemDisableContextProviders @ 0x14073FF84
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x14058F6D0 (WdipTimeoutCheckRoutine.c)
 *     WdipSemDisableScenario @ 0x1405AB6EC (WdipSemDisableScenario.c)
 * Callees:
 *     WdipSemDisableContextProvider @ 0x14073FE74 (WdipSemDisableContextProvider.c)
 */

void __fastcall WdipSemDisableContextProviders(__int64 a1, char a2)
{
  __int64 v2; // rsi
  __int64 i; // rbx

  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 32);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v2 + 48); i = (unsigned int)(i + 1) )
    {
      if ( *(int *)(a1 + 4 * i + 48) >= 0 )
        *(_DWORD *)(a1 + 4 * i + 48) = WdipSemDisableContextProvider(*(_QWORD *)(v2 + 8 * i + 56), a2);
    }
  }
}
