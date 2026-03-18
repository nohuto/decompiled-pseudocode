/*
 * XREFs of ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z @ 0x18018FC4C
 * Callers:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18006FA30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800D26B4 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??0CTrimPathOperation@@QEAA@XZ @ 0x18018FB24 (--0CTrimPathOperation@@QEAA@XZ.c)
 *     ?GetSimplifiedPathData@CShape@@QEBAJPEAPEAVCPathData@@@Z @ 0x18020A5F0 (-GetSimplifiedPathData@CShape@@QEBAJPEAPEAVCPathData@@@Z.c)
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18020C1D8 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 *     ??0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z @ 0x18020C784 (--0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z.c)
 */

__int64 __fastcall CGeometry::GetTrimmedShapeData(CGeometry *this, const struct CShape *a2, CRectanglesShape **a3)
{
  struct CPathData *v4; // rbx
  int SimplifiedPathData; // eax
  struct CPathData *v8; // rdi
  unsigned int v9; // esi
  int v10; // eax
  CPathSegmentsShape *v11; // rax
  CPathSegmentsShape *v12; // rbp
  struct CPathData *v14; // [rsp+30h] [rbp-1D8h] BYREF
  struct CPathData *v15; // [rsp+38h] [rbp-1D0h] BYREF
  _BYTE v16[400]; // [rsp+40h] [rbp-1C8h] BYREF

  v15 = 0LL;
  v4 = 0LL;
  v14 = 0LL;
  CTrimPathOperation::CTrimPathOperation((CTrimPathOperation *)v16);
  SimplifiedPathData = CShape::GetSimplifiedPathData(a2, &v15);
  v8 = v15;
  v9 = SimplifiedPathData;
  if ( SimplifiedPathData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SimplifiedPathData, 0x105u);
  }
  else
  {
    v10 = CTrimPathOperation::Trim(
            (CTrimPathOperation *)v16,
            v15,
            *((float *)this + 20),
            *((float *)this + 21),
            *((float *)this + 22),
            &v14);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x106u);
      v4 = v14;
    }
    else
    {
      v11 = (CPathSegmentsShape *)HeapAlloc(WPF::g_processHeap, 0, 0x18uLL);
      v4 = v14;
      if ( v11 )
        v12 = CPathSegmentsShape::CPathSegmentsShape(v11, v14);
      else
        v12 = 0LL;
      if ( v12 )
      {
        CShapePtr::Release(a3);
        *a3 = v12;
        *((_BYTE *)a3 + 8) = 1;
      }
      else
      {
        v9 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x109u);
      }
    }
  }
  std::vector<unsigned char>::_Tidy((__int64)v16);
  if ( v4 )
    (*(void (__fastcall **)(struct CPathData *))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v8 )
    (*(void (__fastcall **)(struct CPathData *))(*(_QWORD *)v8 + 16LL))(v8);
  return v9;
}
