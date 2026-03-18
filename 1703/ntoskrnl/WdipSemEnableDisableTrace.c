/*
 * XREFs of WdipSemEnableDisableTrace @ 0x14046858C
 * Callers:
 *     WdipSemCaptureState @ 0x14003DDE0 (WdipSemCaptureState.c)
 *     WdipSemDisableContextProvider @ 0x140468480 (WdipSemDisableContextProvider.c)
 *     WdipSemEnableContextProvider @ 0x14057CA58 (WdipSemEnableContextProvider.c)
 *     WdipSemEnableSemProvider @ 0x1405CA614 (WdipSemEnableSemProvider.c)
 *     WdipSemEnableAllProviders @ 0x1405CA948 (WdipSemEnableAllProviders.c)
 *     WdipSemDisableAllProviders @ 0x140706500 (WdipSemDisableAllProviders.c)
 * Callees:
 *     EtwEnableTrace @ 0x1404685E0 (EtwEnableTrace.c)
 */

__int64 __fastcall WdipSemEnableDisableTrace(unsigned __int16 a1, __int64 a2, char a3, __int64 a4, int a5, int a6)
{
  if ( a2 && a1 )
    return EtwEnableTrace(a2, 0, a1, a6, a3, a4, 0LL, a5);
  else
    return 3221225485LL;
}
