/*
 * XREFs of ??0CVisualDepthGeometry@@QEAA@Ufloat2@Numerics@Foundation@Windows@@AEAVCMILMatrix@@@Z @ 0x1801C2534
 * Callers:
 *     ?IsCasterInBetweenLightAndReceiver@CProjectedShadow@@AEAA_NPEBVCDrawingContext@@@Z @ 0x1801B5EDC (-IsCasterInBetweenLightAndReceiver@CProjectedShadow@@AEAA_NPEBVCDrawingContext@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800CD620 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Init@CVisualDepthGeometry@@QEAAXUfloat2@Numerics@Foundation@Windows@@AEAVCMILMatrix@@@Z @ 0x1801C2EBC (-Init@CVisualDepthGeometry@@QEAAXUfloat2@Numerics@Foundation@Windows@@AEAVCMILMatrix@@@Z.c)
 */

__int64 __fastcall CVisualDepthGeometry::CVisualDepthGeometry(__int64 a1, __int64 a2, __int64 a3)
{
  `vector constructor iterator'(
    (CInputSinkStruct::InputQueueInfo *)(a1 + 84),
    16LL,
    4LL,
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))CLineSegment::CLineSegment);
  CVisualDepthGeometry::Init(a1, a2, a3);
  return a1;
}
