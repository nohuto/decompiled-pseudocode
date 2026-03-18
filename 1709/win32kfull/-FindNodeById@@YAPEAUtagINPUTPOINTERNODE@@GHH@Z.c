/*
 * XREFs of ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01F5D54
 * Callers:
 *     ?ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z @ 0x1C01A5648 (-ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z.c)
 *     xxxSetManipulationInputTarget @ 0x1C01A6F54 (xxxSetManipulationInputTarget.c)
 *     ?GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z @ 0x1C01BBC7C (-GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z.c)
 *     ?_AdjustEdgyFrameHwndWorker@Edgy@@YAXQEAXUtagINPUTDEST@@@Z @ 0x1C01D1BD4 (-_AdjustEdgyFrameHwndWorker@Edgy@@YAXQEAXUtagINPUTDEST@@@Z.c)
 *     ?AddLostCaptureTarget@PointerList@@YAXGPEAUHWND__@@@Z @ 0x1C01F5720 (-AddLostCaptureTarget@PointerList@@YAXGPEAUHWND__@@@Z.c)
 *     ?CreateAndReferenceMsgData@PointerList@@YA_KGKKIH@Z @ 0x1C01F58CC (-CreateAndReferenceMsgData@PointerList@@YA_KGKKIH@Z.c)
 *     ?DelegateCapture@PointerList@@YAPEAUtagWND@@GKH@Z @ 0x1C01F5B40 (-DelegateCapture@PointerList@@YAPEAUtagWND@@GKH@Z.c)
 *     ?GetPointerOffset@PointerList@@YAHGPEAUtagPOINT@@@Z @ 0x1C01F6020 (-GetPointerOffset@PointerList@@YAHGPEAUtagPOINT@@@Z.c)
 *     ?GetPointerVisualization@PointerList@@YAHGPEAH@Z @ 0x1C01F6050 (-GetPointerVisualization@PointerList@@YAHGPEAH@Z.c)
 *     ?SetPointerOffset@PointerList@@YAHGPEBUtagPOINT@@@Z @ 0x1C01F63C8 (-SetPointerOffset@PointerList@@YAHGPEBUtagPOINT@@@Z.c)
 *     ?SetPointerVisualization@PointerList@@YAHGHPEAHH@Z @ 0x1C01F63FC (-SetPointerVisualization@PointerList@@YAHGHPEAHH@Z.c)
 *     ?UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@KPEAPEAUtagWND@@PEAKPEAGPEAI@Z @ 0x1C01F64D8 (-UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@KPEAPEAUtagWND@@PEAKPEA.c)
 *     IsPointerNodeInContact @ 0x1C01F6970 (IsPointerNodeInContact.c)
 * Callees:
 *     <none>
 */

struct tagINPUTPOINTERNODE *__fastcall FindNodeById(unsigned __int16 a1, int a2, int a3)
{
  __int64 *v3; // r10
  struct tagINPUTPOINTERNODE *v4; // r9
  struct tagINPUTPOINTERNODE *result; // rax
  bool v6; // zf

  v3 = &qword_1C032B820;
  if ( !a2 )
    v3 = &qword_1C032B810;
  v4 = (struct tagINPUTPOINTERNODE *)*v3;
  if ( (__int64 *)*v3 == v3 )
    return 0LL;
  do
  {
    result = (struct tagINPUTPOINTERNODE *)((char *)v4 - 16);
    if ( !a2 )
      result = v4;
    if ( a3 )
      v6 = *((_WORD *)result + 17) == a1;
    else
      v6 = *((_WORD *)result + 16) == a1;
    if ( v6 )
      break;
    v4 = *(struct tagINPUTPOINTERNODE **)v4;
  }
  while ( v4 != (struct tagINPUTPOINTERNODE *)v3 );
  if ( v4 == (struct tagINPUTPOINTERNODE *)v3 )
    return 0LL;
  return result;
}
