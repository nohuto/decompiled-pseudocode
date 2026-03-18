/*
 * XREFs of ?GetShapeDataCore@CPathGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18019DDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z @ 0x18020C784 (--0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z.c)
 */

__int64 __fastcall CPathGeometry::GetShapeDataCore(
        const struct CPathData **this,
        const struct D2D_SIZE_F *a2,
        CRectanglesShape **a3)
{
  unsigned int v3; // ebx
  CPathSegmentsShape *v6; // rax
  CPathSegmentsShape *v7; // rdi

  v3 = 0;
  if ( this[17] )
  {
    v6 = (CPathSegmentsShape *)HeapAlloc(WPF::g_processHeap, 0, 0x18uLL);
    if ( v6 )
      v7 = CPathSegmentsShape::CPathSegmentsShape(v6, this[17]);
    else
      v7 = 0LL;
    if ( v7 )
    {
      CShapePtr::Release(a3);
      *a3 = v7;
      *((_BYTE *)a3 + 8) = 1;
    }
    else
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x3Cu);
    }
  }
  return v3;
}
