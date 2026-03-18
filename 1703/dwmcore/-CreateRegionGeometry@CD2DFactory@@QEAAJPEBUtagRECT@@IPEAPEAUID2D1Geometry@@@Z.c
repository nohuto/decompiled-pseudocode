/*
 * XREFs of ?CreateRegionGeometry@CD2DFactory@@QEAAJPEBUtagRECT@@IPEAPEAUID2D1Geometry@@@Z @ 0x18004C31C
 * Callers:
 *     ?Init@CRegionShape@@IEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18006EE94 (-Init@CRegionShape@@IEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ?CreateMeshFromRects@CD2DContext@@MEAAJPEBUMilRectU@@IPEAPEAVCD2DMesh@@@Z @ 0x180198060 (-CreateMeshFromRects@CD2DContext@@MEAAJPEBUMilRectU@@IPEAPEAVCD2DMesh@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DFactory::CreateRegionGeometry(
        CD2DFactory *this,
        const struct tagRECT *a2,
        __int64 a3,
        struct ID2D1Geometry **a4)
{
  __int64 v4; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  struct ID2D1Geometry *v8; // rcx
  struct ID2D1Geometry *v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 4);
  v10 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, const struct tagRECT *, __int64, struct ID2D1Geometry **))(*(_QWORD *)v4 + 24LL))(
         v4,
         a2,
         a3,
         &v10);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x9Au);
  }
  else
  {
    v8 = v10;
    v10 = 0LL;
    *a4 = v8;
  }
  ReleaseInterface<ID2D1Geometry>(&v10);
  return v7;
}
