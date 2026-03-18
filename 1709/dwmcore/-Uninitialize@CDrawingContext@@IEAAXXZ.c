/*
 * XREFs of ?Uninitialize@CDrawingContext@@IEAAXXZ @ 0x18004083C
 * Callers:
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18004096C (--1CDrawingContext@@MEAA@XZ.c)
 * Callees:
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x1800405DC (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ??_GCContentBounder@@QEAAPEAXI@Z @ 0x180045C5C (--_GCContentBounder@@QEAAPEAXI@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x1800767D4 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ??$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z @ 0x1800824CC (--$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z.c)
 *     ??$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800BC2AC (--$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x1800BEA04 (--$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z.c)
 */

void __fastcall CDrawingContext::Uninitialize(CContentBounder **this)
{
  unsigned int v2; // edx
  CContentBounder *v3; // rcx

  CDrawingContext::PopAllStacks((CDrawingContext *)this);
  ReleaseInterface<ID2D1PrivateCompositorBuffer>(this + 48);
  ReleaseInterface<ID2D1PrivateCompositorBuffer>(this + 443);
  ReleaseInterface<CRemoteApplicationWindow>(this + 393);
  ReleaseInterface<ID2D1PrivateCompositorBuffer>(this + 45);
  ReleaseInterface<ID2D1Geometry>(this + 46);
  v3 = this[504];
  if ( v3 )
  {
    CContentBounder::`scalar deleting destructor'(v3, v2);
    this[504] = 0LL;
  }
  SAFE_DELETE<COcclusionContext>(this + 844);
  this[843] = 0LL;
}
