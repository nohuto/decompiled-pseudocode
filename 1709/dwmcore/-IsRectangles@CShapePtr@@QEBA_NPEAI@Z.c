/*
 * XREFs of ?IsRectangles@CShapePtr@@QEBA_NPEAI@Z @ 0x180097F14
 * Callers:
 *     ?CalcMode@CCpuClippingData@@CA?AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z @ 0x18009653C (-CalcMode@CCpuClippingData@@CA-AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z.c)
 * Callees:
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x180035270 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 */

char __fastcall CShapePtr::IsRectangles(CRectanglesShape **this, unsigned int *a2)
{
  CRectanglesShape *v2; // rcx
  char result; // al
  char (__fastcall *v4)(CRectanglesShape *, unsigned int *); // rax

  v2 = *this;
  result = 0;
  if ( v2 )
  {
    v4 = *(char (__fastcall **)(CRectanglesShape *, unsigned int *))(*(_QWORD *)v2 + 40LL);
    if ( v4 == CRectanglesShape::IsRectangles )
      return CRectanglesShape::IsRectangles(v2, a2);
    else
      return v4(v2, a2);
  }
  return result;
}
