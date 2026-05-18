/*
 * XREFs of ?MilInstrumentationHandleFailure@@YAXIJKI@Z @ 0x180003C78
 * Callers:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180003D74 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18000358C (ModuleFailFastForHRESULT.c)
 *     ?DoStackCapture@@YAXIJI@Z @ 0x180003BAC (-DoStackCapture@@YAXIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180003E08 (-IsOOM@@YA_NJ@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x180003F20 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 */

void __fastcall MilInstrumentationHandleFailure(__int64 a1, int a2, unsigned int a3, int a4)
{
  int v5; // r10d
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v5 = a2;
  if ( a2 == -2003303421 || a2 == -2003302654 || (a3 & 0x10) != 0 && IsOOM(a2) )
    ModuleFailFastForHRESULT(v5, retaddr);
  if ( (a3 & 4) != 0 )
    DoStackCapture(2, v5, a4);
  if ( (a3 & 1) != 0 )
    MilInstrumentationBreak(a3, a2);
}
