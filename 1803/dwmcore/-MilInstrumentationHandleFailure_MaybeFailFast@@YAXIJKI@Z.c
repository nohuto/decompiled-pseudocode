/*
 * XREFs of ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXIJKI@Z @ 0x1800D9AE4
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 * Callees:
 *     ?DoStackCapture@@YAXIJI@Z @ 0x1800D9B64 (-DoStackCapture@@YAXIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x1800D9C48 (-IsOOM@@YA_NJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1801CD3F4 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 */

void __fastcall MilInstrumentationHandleFailure_MaybeFailFast(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  if ( a2 == -2003303421
    || a2 == -2003302654
    || (a3 & 0x10) != 0 && IsOOM(a2)
    || g_dwFailFastForThreadId && g_dwFailFastForThreadId == GetCurrentThreadId() )
  {
    ModuleFailFastForHRESULT(a2, 0LL);
  }
  if ( (a3 & 4) != 0 )
    DoStackCapture(2u, a2, a4);
  if ( (a3 & 1) != 0 )
    MilInstrumentationBreak(a3, a2);
}
