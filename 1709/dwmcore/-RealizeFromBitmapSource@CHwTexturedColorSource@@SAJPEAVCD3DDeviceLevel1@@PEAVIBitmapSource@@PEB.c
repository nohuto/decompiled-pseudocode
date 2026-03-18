/*
 * XREFs of ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x1801AD898
 * Callers:
 *     ?GetDeviceImageSourceFromBitmapSource@@YAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@AEBUBitmapSourceInfo@@PEAPEAVIImageSource@@@Z @ 0x180190FC8 (-GetDeviceImageSourceFromBitmapSource@@YAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@AEBUBitmapSour.c)
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180191B54 (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18001D1C0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x180074928 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetRealizedBrush@CLegacyMilBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z @ 0x18007D7E0 (-SetRealizedBrush@CLegacyMilBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z.c)
 *     ??1CLegacyMilBrushRealizer@@MEAA@XZ @ 0x18007D85C (--1CLegacyMilBrushRealizer@@MEAA@XZ.c)
 *     ??0CLegacyMilBrushRealizer@@IEAA@XZ @ 0x18007D8B8 (--0CLegacyMilBrushRealizer@@IEAA@XZ.c)
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x180086734 (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 *     ??1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ @ 0x1800BF658 (--1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ.c)
 *     ??0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@W4Enum@MilBitmapWrapMode@@PEBVCMILMatrix@@W4XSpaceDefinition@@@Z @ 0x1800BF79C (--0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@U-$TMILFlagsE.c)
 *     ?SetDeviceRenderingAndSamplingBounds@CHwBrushContext@@QEAAXAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1800BFE54 (-SetDeviceRenderingAndSamplingBounds@CHwBrushContext@@QEAAXAEBV-$TMilRect_@HUtagRECT@@UMilPointA.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetScratchMilBitmapBrush@CD3DDeviceLevel1@@QEAAJPEAPEAVCMILBrushBitmap@@@Z @ 0x18011B4DC (-GetScratchMilBitmapBrush@CD3DDeviceLevel1@@QEAAJPEAPEAVCMILBrushBitmap@@@Z.c)
 */

__int64 __fastcall CHwTexturedColorSource::RealizeFromBitmapSource(
        CD3DDeviceLevel1 *this,
        __int64 *a2,
        __int64 *a3,
        int a4,
        int a5,
        __int64 a6,
        struct CHwTexturedColorSource **a7)
{
  struct CHwTexturedColorSource *v8; // r14
  signed int ScratchMilBitmapBrush; // eax
  struct CMILBrushBitmap *v12; // r15
  int v13; // esi
  struct CMILBrush *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // xmm0_8
  __int64 v17; // rax
  __int64 (__fastcall *v18)(__int64 *, int *, int *); // rax
  signed int v19; // eax
  signed int v20; // eax
  signed int v21; // eax
  __int64 v23; // [rsp+28h] [rbp-D8h]
  unsigned int v24; // [rsp+40h] [rbp-C0h] BYREF
  struct CMILBrushBitmap *v25; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+50h] [rbp-B0h] BYREF
  int v27; // [rsp+54h] [rbp-ACh] BYREF
  struct CHwTexturedColorSource *v28; // [rsp+58h] [rbp-A8h] BYREF
  struct CD3DDeviceLevel1 *v29; // [rsp+60h] [rbp-A0h]
  struct CHwTexturedColorSource **v30; // [rsp+68h] [rbp-98h]
  _DWORD v31[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v32[3]; // [rsp+80h] [rbp-80h] BYREF
  int v33; // [rsp+98h] [rbp-68h]
  int v34; // [rsp+9Ch] [rbp-64h]
  int v35; // [rsp+A0h] [rbp-60h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  _QWORD v37[11]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v38; // [rsp+118h] [rbp+18h]

  v25 = 0LL;
  v29 = this;
  v8 = 0LL;
  v30 = a7;
  v28 = 0LL;
  ScratchMilBitmapBrush = CD3DDeviceLevel1::GetScratchMilBitmapBrush(this, &v25);
  v12 = v25;
  v13 = ScratchMilBitmapBrush;
  v24 = ScratchMilBitmapBrush;
  if ( ScratchMilBitmapBrush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ScratchMilBitmapBrush, 0x149u);
  }
  else
  {
    CMILBrushBitmapLocalSetterWrapper::CMILBrushBitmapLocalSetterWrapper(
      (__int64 *)&v25,
      (__int64)v25,
      (__int64)a2,
      a5 & 0xFFFFFFFE,
      a6,
      v23,
      (__int64)&CMILMatrix::Identity);
    CLegacyMilBrushRealizer::CLegacyMilBrushRealizer((CLegacyMilBrushRealizer *)v37);
    v37[0] = &LocalMILObject<CImmediateBrushRealizer>::`vftable';
    if ( v12 )
      v14 = (struct CMILBrushBitmap *)((char *)v12 + 24);
    else
      v14 = 0LL;
    CLegacyMilBrushRealizer::SetRealizedBrush((CLegacyMilBrushRealizer *)v37, v14, 0LL);
    if ( a3 )
    {
      v15 = v38;
      *(_QWORD *)(v38 + 8) = *a3;
      *(_DWORD *)(v15 + 16) = *((_DWORD *)a3 + 2);
    }
    v16 = *a3;
    v36 = 0LL;
    v32[0] = &g_scratchContextState;
    v33 = *((_DWORD *)a3 + 2);
    v17 = *a2;
    v32[1] = &CMILMatrix::Identity;
    v32[2] = v16;
    v34 = a4;
    v18 = *(__int64 (__fastcall **)(__int64 *, int *, int *))(v17 + 32);
    v35 = 1;
    v19 = v18(a2, &v26, &v27);
    v24 = v19;
    v13 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0x178u);
    }
    else
    {
      v31[0] = 0;
      v31[1] = 0;
      v31[2] = v26;
      v31[3] = v27;
      CHwBrushContext::SetDeviceRenderingAndSamplingBounds((__int64)v32, (__int64)v31);
      v20 = CHwBitmapColorSource::DeriveFromBrushAndContext(v29, v12, (const struct CHwBrushContext *)v32, &v28);
      v24 = v20;
      v13 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v20, 0x184u);
        v37[0] = &CImmediateBrushRealizer::`vftable';
        CLegacyMilBrushRealizer::~CLegacyMilBrushRealizer((CLegacyMilBrushRealizer *)v37);
        CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper((CMILBrushBitmapLocalSetterWrapper *)&v25);
        v8 = v28;
        goto LABEL_16;
      }
      v8 = v28;
      v21 = (*(__int64 (__fastcall **)(struct CHwTexturedColorSource *))(*(_QWORD *)v28 + 40LL))(v28);
      v24 = v21;
      v13 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v21, 0x188u);
      }
      else
      {
        *v30 = v8;
        v8 = 0LL;
      }
    }
    v37[0] = &CImmediateBrushRealizer::`vftable';
    CLegacyMilBrushRealizer::~CLegacyMilBrushRealizer((CLegacyMilBrushRealizer *)v37);
    CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper((CMILBrushBitmapLocalSetterWrapper *)&v25);
  }
LABEL_16:
  ReleaseInterfaceNoNULL<CPolygon>((__int64)v8);
  if ( v12 )
    (*(void (__fastcall **)(struct CMILBrushBitmap *))(*(_QWORD *)v12 + 16LL))(v12);
  TranslateDXGIorD3DErrorInContext(v13, 0, &v24);
  return v24;
}
