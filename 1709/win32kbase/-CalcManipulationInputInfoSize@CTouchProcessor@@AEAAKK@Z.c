/*
 * XREFs of ?CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z @ 0x1C011A2F8
 * Callers:
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C011A074 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C011D520 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTouchProcessor::CalcManipulationInputInfoSize(CTouchProcessor *this, int a2)
{
  unsigned __int64 v2; // rax

  if ( a2 && (v2 = 208LL * (unsigned int)(a2 - 1), v2 <= 0xFFFFFFFF) && (unsigned int)(v2 + 224) >= 0xE0 )
    return (unsigned int)(v2 + 224);
  else
    return 0;
}
