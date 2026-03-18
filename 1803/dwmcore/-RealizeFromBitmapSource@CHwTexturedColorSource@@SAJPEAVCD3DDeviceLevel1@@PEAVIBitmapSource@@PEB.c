/*
 * XREFs of ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x1801E6D84
 * Callers:
 *     ?GetDeviceImageSourceFromBitmapSource@@YAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@AEBUBitmapSourceInfo@@PEAPEAVIImageSource@@@Z @ 0x1801C7C70 (-GetDeviceImageSourceFromBitmapSource@@YAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@AEBUBitmapSour.c)
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1801C893C (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 * Callees:
 *     ?SetRealizedBrush@CLegacyMilBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z @ 0x18001D898 (-SetRealizedBrush@CLegacyMilBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z.c)
 *     ??1CLegacyMilBrushRealizer@@MEAA@XZ @ 0x18001D908 (--1CLegacyMilBrushRealizer@@MEAA@XZ.c)
 *     ??0CLegacyMilBrushRealizer@@IEAA@XZ @ 0x18001D964 (--0CLegacyMilBrushRealizer@@IEAA@XZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180059E10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x1800B8C88 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetScratchMilBitmapBrush@CD3DDeviceLevel1@@QEAAJPEAPEAVCMILBrushBitmap@@@Z @ 0x18013DE30 (-GetScratchMilBitmapBrush@CD3DDeviceLevel1@@QEAAJPEAPEAVCMILBrushBitmap@@@Z.c)
 *     ??0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@W4Enum@MilBitmapWrapMode@@PEBVCMILMatrix@@W4XSpaceDefinition@@@Z @ 0x18015E32C (--0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@U-$TMILFlagsE.c)
 *     ?EnsureRealization@CImmediateBrushRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x180160F60 (-EnsureRealization@CImmediateBrushRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@P.c)
 *     ?SetDeviceRenderingAndSamplingBounds@CHwBrushContext@@QEAAXAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1801E705C (-SetDeviceRenderingAndSamplingBounds@CHwBrushContext@@QEAAXAEBV-$TMilRect_@HUtagRECT@@UMilPointA.c)
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1801EF6AC (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 *     ??1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ @ 0x18020F340 (--1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ.c)
 */

__int64 __fastcall CHwTexturedColorSource::RealizeFromBitmapSource(
        CD3DDeviceLevel1 *this,
        __int64 *a2,
        const struct PixelFormatInfo *a3,
        int a4,
        int a5,
        __int64 a6,
        struct CHwTexturedColorSource **a7)
{
  struct CHwTexturedColorSource *v8; // r14
  int ScratchMilBitmapBrush; // eax
  struct CMILBrushBitmap *v12; // r15
  int v13; // esi
  struct CMILBrush *v14; // rdx
  int v15; // eax
  __int64 v16; // xmm0_8
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  unsigned int v22; // [rsp+40h] [rbp-C0h] BYREF
  struct CMILBrushBitmap *v23; // [rsp+48h] [rbp-B8h] BYREF
  int v24; // [rsp+50h] [rbp-B0h] BYREF
  int v25; // [rsp+54h] [rbp-ACh] BYREF
  struct CHwTexturedColorSource *v26; // [rsp+58h] [rbp-A8h] BYREF
  struct CD3DDeviceLevel1 *v27; // [rsp+60h] [rbp-A0h]
  struct CHwTexturedColorSource **v28; // [rsp+68h] [rbp-98h]
  __int64 v29; // [rsp+70h] [rbp-90h] BYREF
  int v30; // [rsp+78h] [rbp-88h]
  int v31; // [rsp+7Ch] [rbp-84h]
  _QWORD v32[12]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v33[3]; // [rsp+E0h] [rbp-20h] BYREF
  int v34; // [rsp+F8h] [rbp-8h]
  int v35; // [rsp+FCh] [rbp-4h]
  int v36; // [rsp+100h] [rbp+0h]
  __int64 v37; // [rsp+118h] [rbp+18h]
  char v38[68]; // [rsp+120h] [rbp+20h] BYREF
  int v39; // [rsp+164h] [rbp+64h]
  int v40; // [rsp+1A8h] [rbp+A8h]
  int v41; // [rsp+20Ch] [rbp+10Ch]

  v23 = 0LL;
  v27 = this;
  v8 = 0LL;
  v28 = a7;
  v26 = 0LL;
  ScratchMilBitmapBrush = CD3DDeviceLevel1::GetScratchMilBitmapBrush(this, &v23);
  v12 = v23;
  v13 = ScratchMilBitmapBrush;
  v22 = ScratchMilBitmapBrush;
  if ( ScratchMilBitmapBrush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ScratchMilBitmapBrush, 0x149u);
  }
  else
  {
    CMILBrushBitmapLocalSetterWrapper::CMILBrushBitmapLocalSetterWrapper(
      &v23,
      (__int64)v23,
      (int)a2,
      a5 & 0xFFFFFFFE,
      a6);
    CLegacyMilBrushRealizer::CLegacyMilBrushRealizer((CLegacyMilBrushRealizer *)v32);
    v32[0] = &LocalMILObject<CImmediateBrushRealizer>::`vftable';
    v14 = (struct CMILBrushBitmap *)((char *)v12 + 24);
    if ( !v12 )
      v14 = 0LL;
    CLegacyMilBrushRealizer::SetRealizedBrush((CLegacyMilBrushRealizer *)v32, v14, 0LL);
    v39 = 0;
    v40 = 0;
    v41 = 0;
    v15 = CImmediateBrushRealizer::EnsureRealization(
            (CImmediateBrushRealizer *)v32,
            (struct LegacyMilBrushContext *)v38,
            (const struct CContextState *)&g_scratchContextState,
            a3);
    v22 = v15;
    v13 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x167u);
    }
    else
    {
      v16 = *(_QWORD *)a3;
      v33[0] = &g_scratchContextState;
      v33[2] = v16;
      v33[1] = &CMILMatrix::Identity;
      v34 = *((_DWORD *)a3 + 2);
      v17 = *a2;
      v35 = a4;
      v36 = 1;
      v37 = 0LL;
      v18 = (*(__int64 (__fastcall **)(__int64 *, int *, int *))(v17 + 32))(a2, &v24, &v25);
      v22 = v18;
      v13 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x178u);
      }
      else
      {
        v30 = v24;
        v31 = v25;
        v29 = 0LL;
        CHwBrushContext::SetDeviceRenderingAndSamplingBounds(v33, &v29);
        v19 = CHwBitmapColorSource::DeriveFromBrushAndContext(v27, v12, (const struct CHwBrushContext *)v33, &v26);
        v22 = v19;
        v13 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x184u);
          v32[0] = &CImmediateBrushRealizer::`vftable';
          CLegacyMilBrushRealizer::~CLegacyMilBrushRealizer((CLegacyMilBrushRealizer *)v32);
          CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper((CMILBrushBitmapLocalSetterWrapper *)&v23);
          v8 = v26;
          goto LABEL_15;
        }
        v8 = v26;
        v20 = (*(__int64 (__fastcall **)(struct CHwTexturedColorSource *))(*(_QWORD *)v26 + 40LL))(v26);
        v22 = v20;
        v13 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x188u);
        }
        else
        {
          *v28 = v8;
          v8 = 0LL;
        }
      }
    }
    v32[0] = &CImmediateBrushRealizer::`vftable';
    CLegacyMilBrushRealizer::~CLegacyMilBrushRealizer((CLegacyMilBrushRealizer *)v32);
    CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper((CMILBrushBitmapLocalSetterWrapper *)&v23);
  }
LABEL_15:
  ReleaseInterfaceNoNULL<CPolygon>((__int64)v8);
  if ( v12 )
    (*(void (__fastcall **)(struct CMILBrushBitmap *))(*(_QWORD *)v12 + 16LL))(v12);
  TranslateDXGIorD3DErrorInContext(v13, 0, &v22);
  return v22;
}
