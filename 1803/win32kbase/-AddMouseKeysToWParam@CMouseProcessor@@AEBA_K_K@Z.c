/*
 * XREFs of ?AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z @ 0x1C0037938
 * Callers:
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@@Z @ 0x1C0037B44 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0038520 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01354D0 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::AddMouseKeysToWParam(CMouseProcessor *this, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 result; // rax

  if ( (_WORD)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  v3 = a2 | 1;
  if ( (gafAsyncKeyState & 4) == 0 )
    v3 = a2;
  v4 = v3 | 2;
  if ( (gafAsyncKeyState & 0x10) == 0 )
    v4 = v3;
  v5 = v4 | 0x10;
  if ( (BYTE1(gafAsyncKeyState) & 1) == 0 )
    v5 = v4;
  v6 = v5 | 0x20;
  if ( (BYTE1(gafAsyncKeyState) & 4) == 0 )
    v6 = v5;
  result = v6 | 0x40;
  if ( (BYTE1(gafAsyncKeyState) & 0x10) == 0 )
    return v6;
  return result;
}
