/*
 * XREFs of ?TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C011DB98
 * Callers:
 *     ?InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z @ 0x1C0117094 (-InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C011A6E0 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C011DC48 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_dqD @ 0x1C011FE44 (WPP_RECORDER_SF_dqD.c)
 */

PDEVICE_OBJECT __fastcall CTouchProcessor::TrackCoalesceOnArrival(__int64 a1, __int64 a2, int a3)
{
  PDEVICE_OBJECT result; // rax

  result = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    result = (PDEVICE_OBJECT)WPP_RECORDER_SF_dqD(*(_QWORD *)(a1 + 8), a2, a3, 251);
  *(_DWORD *)(a2 + 208) = a3;
  return result;
}
