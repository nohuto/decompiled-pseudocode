/*
 * XREFs of ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXIJKI@Z @ 0x140008838
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x140001910 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 * Callees:
 *     ?IsOOM@@YA_NJ@Z @ 0x1400019B0 (-IsOOM@@YA_NJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1400079DC (ModuleFailFastForHRESULT.c)
 *     ?DoStackCapture@@YAXIJI@Z @ 0x14000874C (-DoStackCapture@@YAXIJI@Z.c)
 */

void __fastcall MilInstrumentationHandleFailure_MaybeFailFast(__int64 a1, int a2, unsigned int a3, DWORD a4)
{
  DWORD v5; // r10d

  v5 = a2;
  if ( a2 == -2003303421 || a2 == -2003302654 || (a3 & 0x10) != 0 && IsOOM(a2) )
  {
    ModuleFailFastForHRESULT(v5);
    JUMPOUT(0x140008898LL);
  }
  if ( (a3 & 4) != 0 )
    DoStackCapture(2, v5, a4);
  if ( (a3 & 1) != 0 )
    MilInstrumentationBreak(a3, a2);
}
