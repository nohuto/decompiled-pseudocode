/*
 * XREFs of ?TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C0127818
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C011ACDC (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 *     ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C011C388 (-DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_dqD @ 0x1C01296DC (WPP_RECORDER_SF_dqD.c)
 */

PDEVICE_OBJECT __fastcall CTouchProcessor::TrackCoalesceOnReassign(__int64 a1, __int64 a2, int a3)
{
  PDEVICE_OBJECT result; // rax

  result = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    result = (PDEVICE_OBJECT)WPP_RECORDER_SF_dqD(*(_QWORD *)(a1 + 8), a2, a3, 234);
  *(_DWORD *)(a2 + 228) = a3;
  return result;
}
