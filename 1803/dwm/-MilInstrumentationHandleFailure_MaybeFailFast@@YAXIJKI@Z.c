/*
 * XREFs of ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXIJKI@Z @ 0x14000820C
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x140001950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 * Callees:
 *     ?IsOOM@@YA_NJ@Z @ 0x1400019F0 (-IsOOM@@YA_NJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x140007394 (ModuleFailFastForHRESULT.c)
 *     ?DoStackCapture@@YAXIJI@Z @ 0x140008120 (-DoStackCapture@@YAXIJI@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x14000838C (-MilInstrumentationBreak@@YAXK_N@Z.c)
 */

void __fastcall MilInstrumentationHandleFailure_MaybeFailFast(__int64 a1, DWORD a2, unsigned int a3, DWORD a4)
{
  if ( a2 == -2003303421
    || a2 == -2003302654
    || (a3 & 0x10) != 0 && IsOOM(a2)
    || g_dwFailFastForThreadId && g_dwFailFastForThreadId == GetCurrentThreadId() )
  {
    ModuleFailFastForHRESULT(a2);
    JUMPOUT(0x140008291LL);
  }
  if ( (a3 & 4) != 0 )
    DoStackCapture(2, a2, a4);
  if ( (a3 & 1) != 0 )
    MilInstrumentationBreak(a3, a2);
}
