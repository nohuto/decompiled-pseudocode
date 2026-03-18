/*
 * XREFs of WdipSemEnableDisableTrace @ 0x1405A8CF4
 * Callers:
 *     WdipSemCaptureState @ 0x140279D40 (WdipSemCaptureState.c)
 *     WdipSemEnableAllProviders @ 0x1405A8D44 (WdipSemEnableAllProviders.c)
 *     WdipSemEnableSemProvider @ 0x1405AADCC (WdipSemEnableSemProvider.c)
 *     WdipSemDisableAllProviders @ 0x14073FDC0 (WdipSemDisableAllProviders.c)
 *     WdipSemDisableContextProvider @ 0x14073FE74 (WdipSemDisableContextProvider.c)
 *     WdipSemEnableContextProvider @ 0x14073FFF4 (WdipSemEnableContextProvider.c)
 * Callees:
 *     EtwEnableTrace @ 0x1405A8C30 (EtwEnableTrace.c)
 */

__int64 __fastcall WdipSemEnableDisableTrace(__int16 a1, __int128 *a2, char a3, __int64 a4, int a5, int a6)
{
  if ( a2 && a1 )
    return EtwEnableTrace(a2, 0LL, a1, a6, a3, a4, 0LL, a5);
  else
    return 3221225485LL;
}
