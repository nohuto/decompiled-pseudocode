/*
 * XREFs of ?AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801AD81C
 * Callers:
 *     ?AddNewComposeTopContent@CDesktopRenderTarget@@UEAAJPEAVIImageSource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180157150 (-AddNewComposeTopContent@CDesktopRenderTarget@@UEAAJPEAVIImageSource@@AEBVCShape@@AEBVCMILMatrix.c)
 * Callees:
 *     ??$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z @ 0x1800177B8 (--$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z.c)
 *     ?Create@CRegionShape@@SAJPEAUID2D1RegionGeometry@@PEAPEAV1@@Z @ 0x18001C6E0 (-Create@CRegionShape@@SAJPEAUID2D1RegionGeometry@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x1800A36A8 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ??$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z @ 0x1800C2B58 (--$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z.c)
 *     ?ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z @ 0x1801ADE50 (-ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z.c)
 */

__int64 __fastcall CComposeTop::AddNewContent(
        CComposeTop *this,
        struct IImageSource *a2,
        struct ID2D1RegionGeometry **a3,
        const struct CMILMatrix *a4)
{
  int v8; // edi
  int v9; // eax
  struct CRegionShape *v11; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0;
  if ( !ShapeBoundsEmpty((const struct CShape *)a3) )
  {
    v9 = CRegionShape::Create(a3[2], &v11);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x3Bu);
    }
    else
    {
      *((_QWORD *)this + 1) = v11;
      ReplaceInterface<IDXGIResource,IDXGIResource>((__int64 *)this, (__int64)a2);
      *((_OWORD *)this + 1) = *(_OWORD *)a4;
      *((_OWORD *)this + 2) = *((_OWORD *)a4 + 1);
      *((_OWORD *)this + 3) = *((_OWORD *)a4 + 2);
      *((_OWORD *)this + 4) = *((_OWORD *)a4 + 3);
      *((_DWORD *)this + 20) = *((_DWORD *)a4 + 16);
      CMILMatrix::SetToInverse((__m128 *)((char *)this + 84), a4);
    }
    if ( v8 < 0 )
      SAFE_DELETE<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))this + 1);
  }
  return (unsigned int)v8;
}
