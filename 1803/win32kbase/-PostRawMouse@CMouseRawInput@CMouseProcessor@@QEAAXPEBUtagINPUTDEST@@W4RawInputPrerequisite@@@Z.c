/*
 * XREFs of ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C0060044
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0037E1C (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0038520 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01354D0 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ApiSetEditionPostRawMouseInputMessage @ 0x1C00601F4 (ApiSetEditionPostRawMouseInputMessage.c)
 */

void __fastcall CMouseProcessor::CMouseRawInput::PostRawMouse(__int64 a1, __int64 a2, int a3)
{
  if ( !*(_BYTE *)(a1 + 53) && !*(_BYTE *)(a1 + 52) && (a3 & *(_DWORD *)(a1 + 48)) == a3 )
    *(_BYTE *)(a1 + 52) = (unsigned int)ApiSetEditionPostRawMouseInputMessage(
                                          a2,
                                          *(unsigned int *)(a1 + 24),
                                          a1 + 32,
                                          a1) != 0;
}
