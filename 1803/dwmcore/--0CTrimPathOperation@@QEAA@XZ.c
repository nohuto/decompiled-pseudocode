/*
 * XREFs of ??0CTrimPathOperation@@QEAA@XZ @ 0x18018FB24
 * Callers:
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z @ 0x18018FC4C (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800CD620 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0?$CBezierFlattener@MVCMilPoint2F@@@@QEAA@M@Z @ 0x18018FAA0 (--0-$CBezierFlattener@MVCMilPoint2F@@@@QEAA@M@Z.c)
 *     ??0Segment@Path@@IEAA@W4SegmentType@1@@Z @ 0x18018FB94 (--0Segment@Path@@IEAA@W4SegmentType@1@@Z.c)
 */

CTrimPathOperation *__fastcall CTrimPathOperation::CTrimPathOperation(CTrimPathOperation *this)
{
  __int64 v2; // rdx
  __int64 v3; // rdx

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  Path::Segment::Segment((char *)this + 48, 0LL);
  LOBYTE(v2) = 2;
  Path::Segment::Segment((char *)this + 64, v2);
  LOBYTE(v3) = 5;
  Path::Segment::Segment((char *)this + 80, v3);
  CBezierFlattener<float,CMilPoint2F>::CBezierFlattener<float,CMilPoint2F>((float *)this + 28, 0.25);
  `vector constructor iterator'(
    (CTrimPathOperation *)((char *)this + 204),
    8LL,
    16LL,
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
  return this;
}
