/*
 * XREFs of ?AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@PEAVCRegionShape@@AEBVCMILMatrix@@@Z @ 0x180176560
 * Callers:
 *     ?AddNewComposeTopContent@CDesktopRenderTarget@@UEAAJPEAVIImageSource@@PEAVCRegionShape@@AEBVCMILMatrix@@@Z @ 0x180146A00 (-AddNewComposeTopContent@CDesktopRenderTarget@@UEAAJPEAVIImageSource@@PEAVCRegionShape@@AEBVCMIL.c)
 * Callees:
 *     ?Create@CRegionShape@@SAJPEAUID2D1RegionGeometry@@PEAPEAV1@@Z @ 0x180006D30 (-Create@CRegionShape@@SAJPEAUID2D1RegionGeometry@@PEAPEAV1@@Z.c)
 *     ??$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z @ 0x18001E6C4 (--$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z.c)
 *     ??$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z @ 0x18001FC90 (--$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x18006F290 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x180098678 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?ShapeBoundsEmpty@@YA_NPEBVCShape@@@Z @ 0x180176958 (-ShapeBoundsEmpty@@YA_NPEBVCShape@@@Z.c)
 */

__int64 __fastcall CComposeTop::AddNewContent(
        CComposeTop *this,
        struct IImageSource *a2,
        struct ID2D1RegionGeometry **a3,
        const struct CMILMatrix *a4)
{
  int v5; // ebx
  int v9; // eax
  CRegionShape *v10; // rsi
  struct CRegionShape *v12; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0;
  v12 = 0LL;
  if ( !ShapeBoundsEmpty((const struct CShape *)a3) )
  {
    v9 = CRegionShape::Create(a3[1], &v12);
    v5 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x45u);
      v10 = v12;
    }
    else
    {
      *((_QWORD *)this + 1) = v12;
      v10 = 0LL;
      ReplaceInterface<IDXGIResource,IDXGIResource>((__int64 *)this, (__int64)a2);
      *((_OWORD *)this + 1) = *(_OWORD *)a4;
      *((_OWORD *)this + 2) = *((_OWORD *)a4 + 1);
      *((_OWORD *)this + 3) = *((_OWORD *)a4 + 2);
      *((_OWORD *)this + 4) = *((_OWORD *)a4 + 3);
      *((_DWORD *)this + 20) = *((_DWORD *)a4 + 16);
      CMILMatrix::SetToInverse((__m128 *)((char *)this + 84), a4);
    }
    if ( v5 < 0 )
      SAFE_DELETE<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))this + 1);
    if ( v10 )
      CRegionShape::`vector deleting destructor'(v10, 1);
  }
  return (unsigned int)v5;
}
