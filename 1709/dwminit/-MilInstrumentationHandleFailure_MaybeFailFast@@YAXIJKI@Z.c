/*
 * XREFs of ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXIJKI@Z @ 0x180003D00
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180003DF8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18000364C (ModuleFailFastForHRESULT.c)
 *     ?DoStackCapture@@YAXIJI@Z @ 0x180003C38 (-DoStackCapture@@YAXIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180003E8C (-IsOOM@@YA_NJ@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x180003FFC (-MilInstrumentationBreak@@YAXK_N@Z.c)
 */

void __fastcall MilInstrumentationHandleFailure_MaybeFailFast(__int64 a1, int a2, unsigned int a3, DWORD a4)
{
  DWORD v5; // r10d

  v5 = a2;
  if ( a2 == -2003303421 || a2 == -2003302654 || (a3 & 0x10) != 0 && IsOOM(a2) )
    ModuleFailFastForHRESULT(v5, 0LL);
  if ( (a3 & 4) != 0 )
    DoStackCapture(2, v5, a4);
  if ( (a3 & 1) != 0 )
    MilInstrumentationBreak(a3, a2);
}
