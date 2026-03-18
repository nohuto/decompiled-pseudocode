/*
 * XREFs of ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXIJKI@Z @ 0x180074944
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 * Callees:
 *     ?DoStackCapture@@YAXIJI@Z @ 0x1800749A8 (-DoStackCapture@@YAXIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180074A8C (-IsOOM@@YA_NJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

void __fastcall MilInstrumentationHandleFailure_MaybeFailFast(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // r10d

  v5 = a2;
  if ( a2 == -2003303421 || a2 == -2003302654 || (a3 & 0x10) != 0 && IsOOM(a2) )
    ModuleFailFastForHRESULT(v5, 0LL);
  if ( (a3 & 4) != 0 )
    DoStackCapture(2u, v5, a4);
  if ( (a3 & 1) != 0 )
    MilInstrumentationBreak(a3, a2);
}
