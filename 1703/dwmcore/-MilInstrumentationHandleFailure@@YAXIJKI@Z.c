/*
 * XREFs of ?MilInstrumentationHandleFailure@@YAXIJKI@Z @ 0x1800C86B8
 * Callers:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 * Callees:
 *     ?DoStackCapture@@YAXIJI@Z @ 0x1800C8720 (-DoStackCapture@@YAXIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x1800C882C (-IsOOM@@YA_NJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

void __fastcall MilInstrumentationHandleFailure(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // r10d
  void *retaddr; // [rsp+28h] [rbp+0h]

  v5 = a2;
  if ( a2 == -2003303421 || a2 == -2003302654 || (a3 & 0x10) != 0 && IsOOM(a2) )
  {
    ModuleFailFastForHRESULT(v5, retaddr);
    JUMPOUT(0x1800C871DLL);
  }
  if ( (a3 & 4) != 0 )
    DoStackCapture(2u, v5, a4);
  if ( (a3 & 1) != 0 )
    MilInstrumentationBreak(a3, a2);
}
