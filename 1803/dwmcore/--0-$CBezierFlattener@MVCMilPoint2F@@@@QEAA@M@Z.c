/*
 * XREFs of ??0?$CBezierFlattener@MVCMilPoint2F@@@@QEAA@M@Z @ 0x18018FAA0
 * Callers:
 *     ??0CTrimPathOperation@@QEAA@XZ @ 0x18018FB24 (--0CTrimPathOperation@@QEAA@XZ.c)
 *     ??0CPathLengthOperation@@QEAA@XZ @ 0x18020B4A4 (--0CPathLengthOperation@@QEAA@XZ.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800CD620 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

float *__fastcall CBezierFlattener<float,CMilPoint2F>::CBezierFlattener<float,CMilPoint2F>(float *a1, float a2)
{
  float *result; // rax
  float v4; // xmm6_4

  `vector constructor iterator'(
    (CInputSinkStruct::InputQueueInfo *)a1,
    8LL,
    4LL,
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
  `vector constructor iterator'(
    (CInputSinkStruct::InputQueueInfo *)(a1 + 12),
    8LL,
    4LL,
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
  result = a1;
  v4 = fmaxf(a2, 0.0) * 6.0;
  a1[11] = (float)(a2 * a2) * 0.000099999997;
  a1[8] = v4;
  a1[10] = v4 * 0.25;
  return result;
}
