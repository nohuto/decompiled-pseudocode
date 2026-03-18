/*
 * XREFs of ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01E9DBC
 * Callers:
 *     ?ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z @ 0x1C0199A80 (-ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z.c)
 *     xxxSetManipulationInputTarget @ 0x1C019B290 (xxxSetManipulationInputTarget.c)
 *     ?GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z @ 0x1C01B6964 (-GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z.c)
 *     GetPointerCursorIdInternal @ 0x1C01BAEAC (GetPointerCursorIdInternal.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C803C (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?_AdjustEdgyFrameHwndWorker@Edgy@@YAXQEAXUtagINPUTDEST@@@Z @ 0x1C01CDA3C (-_AdjustEdgyFrameHwndWorker@Edgy@@YAXQEAXUtagINPUTDEST@@@Z.c)
 *     ?AddLostCaptureTarget@PointerList@@YAXGPEAUHWND__@@@Z @ 0x1C01E9780 (-AddLostCaptureTarget@PointerList@@YAXGPEAUHWND__@@@Z.c)
 *     ?CreateAndReferenceMsgData@PointerList@@YA_KGKKIH@Z @ 0x1C01E992C (-CreateAndReferenceMsgData@PointerList@@YA_KGKKIH@Z.c)
 *     ?DelegateCapture@PointerList@@YAPEAUtagWND@@GKH@Z @ 0x1C01E9BA4 (-DelegateCapture@PointerList@@YAPEAUtagWND@@GKH@Z.c)
 *     ?GetPointerOffset@PointerList@@YAHGPEAUtagPOINT@@@Z @ 0x1C01EA088 (-GetPointerOffset@PointerList@@YAHGPEAUtagPOINT@@@Z.c)
 *     ?GetPointerVisualization@PointerList@@YAHGPEAH@Z @ 0x1C01EA0B8 (-GetPointerVisualization@PointerList@@YAHGPEAH@Z.c)
 *     ?SetPointerOffset@PointerList@@YAHGPEBUtagPOINT@@@Z @ 0x1C01EA4B0 (-SetPointerOffset@PointerList@@YAHGPEBUtagPOINT@@@Z.c)
 *     ?SetPointerVisualization@PointerList@@YAHGHPEAHH@Z @ 0x1C01EA4E4 (-SetPointerVisualization@PointerList@@YAHGHPEAHH@Z.c)
 *     ?UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@KPEAPEAUtagWND@@PEAKPEAGPEAI@Z @ 0x1C01EA5C0 (-UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@KPEAPEAUtagWND@@PEAKPEA.c)
 *     IsPointerNodeInContact @ 0x1C01EAA30 (IsPointerNodeInContact.c)
 * Callees:
 *     <none>
 */

struct tagINPUTPOINTERNODE *__fastcall FindNodeById(unsigned __int16 a1, int a2, int a3)
{
  __int64 *v3; // r10
  struct tagINPUTPOINTERNODE *v4; // r9
  struct tagINPUTPOINTERNODE *result; // rax
  bool v6; // zf

  v3 = &qword_1C0330360;
  if ( !a2 )
    v3 = &qword_1C0330350;
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
