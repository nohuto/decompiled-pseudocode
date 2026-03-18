/*
 * XREFs of ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C0017AD4
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0014B60 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0015374 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0131458 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CMouseProcessor::CMouseEvent::UsingInjectorUIPI(CMouseProcessor::CMouseEvent *this)
{
  char result; // al

  result = 0;
  if ( !*(_DWORD *)(*(_QWORD *)this + 116LL) )
  {
    if ( *(_BYTE *)(*(_QWORD *)this + 120LL) )
      return 1;
  }
  return result;
}
