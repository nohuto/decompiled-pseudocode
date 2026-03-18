/*
 * XREFs of WdipSemEnableDisableTrace @ 0x14060DD28
 * Callers:
 *     WdipSemCaptureState @ 0x140169DCC (WdipSemCaptureState.c)
 *     WdipSemDisableContextProvider @ 0x14060DAC0 (WdipSemDisableContextProvider.c)
 *     WdipSemEnableContextProvider @ 0x14060DC28 (WdipSemEnableContextProvider.c)
 *     WdipSemEnableSemProvider @ 0x1406394B8 (WdipSemEnableSemProvider.c)
 *     WdipSemEnableAllProviders @ 0x14063A80C (WdipSemEnableAllProviders.c)
 *     WdipSemDisableAllProviders @ 0x1407A1F54 (WdipSemDisableAllProviders.c)
 * Callees:
 *     EtwEnableTrace @ 0x14060DD80 (EtwEnableTrace.c)
 */

__int64 __fastcall WdipSemEnableDisableTrace(unsigned __int16 a1, __int64 a2, char a3, __int64 a4, int a5, int a6)
{
  if ( a2 && a1 )
    return EtwEnableTrace(a2, 0, a1, a6, a3, a4, 0LL, a5);
  else
    return 3221225485LL;
}
