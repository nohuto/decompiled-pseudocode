/*
 * XREFs of ?CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z @ 0x1C011B574
 * Callers:
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C011B284 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011F8CC (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTouchProcessor::CalcManipulationInputInfoSize(CTouchProcessor *this, int a2)
{
  unsigned __int64 v2; // rax
  unsigned int v3; // eax

  if ( a2 && (v2 = 144LL * (unsigned int)(a2 - 1), v2 <= 0xFFFFFFFF) && (v3 = v2 + 160, v3 >= 0xA0) )
    return v3;
  else
    return 0;
}
