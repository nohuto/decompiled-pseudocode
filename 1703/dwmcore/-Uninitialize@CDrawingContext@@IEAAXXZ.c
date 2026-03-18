/*
 * XREFs of ?Uninitialize@CDrawingContext@@IEAAXXZ @ 0x1800A9948
 * Callers:
 *     ??1CDrawingContext@@MEAA@XZ @ 0x1800A9A7C (--1CDrawingContext@@MEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ??$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18004D094 (--$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x1800A96E0 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ??_GCContentBounder@@QEAAPEAXI@Z @ 0x1800B4DE0 (--_GCContentBounder@@QEAAPEAXI@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z @ 0x1800C588C (--$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z.c)
 *     ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x1800C77EC (--$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z.c)
 */

void __fastcall CDrawingContext::Uninitialize(CDrawingContext *this, __int64 a2, __int64 a3)
{
  unsigned int v4; // edx
  CContentBounder *v5; // rcx

  CDrawingContext::PopAllStacks(this, a2, a3);
  ReleaseInterface<ID2D1PrivateCompositorBuffer>((__int64 *)this + 49);
  ReleaseInterface<ID2D1PrivateCompositorBuffer>((__int64 *)this + 431);
  ReleaseInterface<CDisplay const>((char *)this + 3048);
  ReleaseInterface<ID2D1PrivateCompositorBuffer>((__int64 *)this + 46);
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 47);
  v5 = (CContentBounder *)*((_QWORD *)this + 496);
  if ( v5 )
  {
    CContentBounder::`scalar deleting destructor'(v5, v4);
    *((_QWORD *)this + 496) = 0LL;
  }
  SAFE_DELETE<COcclusionContext>((char *)this + 6688);
  *((_QWORD *)this + 835) = 0LL;
}
