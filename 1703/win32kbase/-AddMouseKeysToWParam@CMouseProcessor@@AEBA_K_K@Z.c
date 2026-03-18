/*
 * XREFs of ?AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z @ 0x1C004575C
 * Callers:
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagPOINT@@W4PostMouseMoveOptions@@@Z @ 0x1C0045950 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagP.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C00464F0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0131DC4 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMouseProcessor::AddMouseKeysToWParam(CMouseProcessor *this, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 result; // rax

  v2 = a2 | 1;
  if ( (gafAsyncKeyState & 4) == 0 )
    v2 = a2;
  v3 = v2 | 2;
  if ( (gafAsyncKeyState & 0x10) == 0 )
    v3 = v2;
  v4 = v3 | 0x10;
  if ( (BYTE1(gafAsyncKeyState) & 1) == 0 )
    v4 = v3;
  v5 = v4 | 0x20;
  if ( (BYTE1(gafAsyncKeyState) & 4) == 0 )
    v5 = v4;
  result = v5 | 0x40;
  if ( (BYTE1(gafAsyncKeyState) & 0x10) == 0 )
    return v5;
  return result;
}
