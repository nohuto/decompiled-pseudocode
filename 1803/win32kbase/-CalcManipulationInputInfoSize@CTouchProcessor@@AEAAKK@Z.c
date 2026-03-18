/*
 * XREFs of ?CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z @ 0x1C010D8B8
 * Callers:
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C010D5D4 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0111AD0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::CalcManipulationInputInfoSize(CTouchProcessor *this, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // rcx

  if ( (_DWORD)a2 && (v2 = 224LL * (unsigned int)(a2 - 1), v2 <= 0xFFFFFFFF) && (unsigned int)(v2 + 240) >= 0xF0 )
    v3 = v2 + 240;
  else
    v3 = 0;
  v4 = v3 - 1;
  if ( (unsigned int)v4 <= 0xEE )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2);
  return v3;
}
