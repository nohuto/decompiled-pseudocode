/*
 * XREFs of ??0CVisualDepthGeometry@@QEAA@PEAVCVisual@@AEAVCMILMatrix@@@Z @ 0x1801C24D8
 * Callers:
 *     ?IsCasterInBetweenLightAndReceiver@CProjectedShadow@@AEAA_NPEBVCDrawingContext@@@Z @ 0x1801B5EDC (-IsCasterInBetweenLightAndReceiver@CProjectedShadow@@AEAA_NPEBVCDrawingContext@@@Z.c)
 *     ?AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z @ 0x18021F6B4 (-AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800CD620 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Init@CVisualDepthGeometry@@QEAAXUfloat2@Numerics@Foundation@Windows@@AEAVCMILMatrix@@@Z @ 0x1801C2EBC (-Init@CVisualDepthGeometry@@QEAAXUfloat2@Numerics@Foundation@Windows@@AEAVCMILMatrix@@@Z.c)
 */

CVisualDepthGeometry *__fastcall CVisualDepthGeometry::CVisualDepthGeometry(
        CVisualDepthGeometry *this,
        struct CVisual *a2,
        struct CMILMatrix *a3)
{
  `vector constructor iterator'(
    (CVisualDepthGeometry *)((char *)this + 84),
    16LL,
    4LL,
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))CLineSegment::CLineSegment);
  *(_QWORD *)this = a2;
  CVisualDepthGeometry::Init(this, *(_QWORD *)((char *)a2 + 132), a3);
  return this;
}
