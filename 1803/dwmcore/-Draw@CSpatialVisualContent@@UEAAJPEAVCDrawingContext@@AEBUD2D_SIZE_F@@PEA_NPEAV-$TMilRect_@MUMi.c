/*
 * XREFs of ?Draw@CSpatialVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C1F40
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180008CF0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x1800665E4 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?DrawDwm3DRE@CDrawingContext@@QEAAJPEAUIDwm3DRESceneViewer@@AEBVCMILMatrix@@_N@Z @ 0x18015F8D0 (-DrawDwm3DRE@CDrawingContext@@QEAAJPEAUIDwm3DRESceneViewer@@AEBVCMILMatrix@@_N@Z.c)
 *     ?ComputeSceneToLocalTransform@CSpatialVisualContent@@AEBAXAEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801C1E10 (-ComputeSceneToLocalTransform@CSpatialVisualContent@@AEBAXAEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 */

__int64 __fastcall CSpatialVisualContent::Draw(struct IDwm3DRESceneViewer **this, CDrawingContext *a2)
{
  __int64 v4; // r8
  const struct D2D_SIZE_F *v5; // r10
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  _BYTE v11[64]; // [rsp+30h] [rbp-78h] BYREF
  int v12; // [rsp+70h] [rbp-38h]
  _BYTE v13[16]; // [rsp+80h] [rbp-28h] BYREF

  if ( !CDrawingContext::IsBounding(a2) )
  {
    v12 = 0;
    CSpatialVisualContent::ComputeSceneToLocalTransform((CSpatialVisualContent *)this, v5, (struct CMILMatrix *)v11);
    v9 = CDrawingContext::DrawDwm3DRE(a2, this[8], (const struct CMILMatrix *)v11);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xB5u);
      return v7;
    }
    return 0;
  }
  v6 = (*((__int64 (__fastcall **)(struct IDwm3DRESceneViewer **, _QWORD, __int64, _BYTE *))*this + 21))(
         this,
         0LL,
         v4,
         v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xA6u);
    return v7;
  }
  v8 = CDrawingContext::DrawSolidRectangle(a2, (struct MilRectF *)v13, &xmmword_1802ADA48);
  v7 = v8;
  if ( v8 >= 0 )
    return 0;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xAAu);
  return v7;
}
