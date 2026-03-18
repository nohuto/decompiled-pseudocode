/*
 * XREFs of ?FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@W47MilCompositingMode@@_N@Z @ 0x1800A76A8
 * Callers:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@_N@Z @ 0x18000E2FC (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@PEAVCShape@@U-$TMIL.c)
 *     ?DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x1800A84D0 (-DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU.c)
 * Callees:
 *     ??1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ @ 0x180041E6C (--1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ.c)
 *     ??0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@W4Enum@MilBitmapWrapMode@@PEBVCMILMatrix@@W4XSpaceDefinition@@@Z @ 0x180041E94 (--0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@U-$TMILFlagsE.c)
 *     ?SetRealizedBrush@CLegacyMilBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z @ 0x18004A840 (-SetRealizedBrush@CLegacyMilBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z.c)
 *     ??1CLegacyMilBrushRealizer@@MEAA@XZ @ 0x18004A8D0 (--1CLegacyMilBrushRealizer@@MEAA@XZ.c)
 *     ??0CLegacyMilBrushRealizer@@IEAA@XZ @ 0x18004A92C (--0CLegacyMilBrushRealizer@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A12C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800A1660 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800A1C68 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x18013BC88 (Template_qq.c)
 */

__int64 __fastcall CDrawingContext::FillShapeWithBitmapSource(
        CDrawingContext *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        int a8,
        char a9)
{
  char v12; // si
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  __int64 v17; // rcx
  int v19; // eax
  _QWORD v20[2]; // [rsp+50h] [rbp-79h] BYREF
  _QWORD v21[12]; // [rsp+60h] [rbp-69h] BYREF

  CLegacyMilBrushRealizer::CLegacyMilBrushRealizer((CLegacyMilBrushRealizer *)v21);
  v12 = 0;
  v21[0] = &LocalMILObject<CImmediateBrushRealizer>::`vftable';
  if ( a9 )
  {
    v19 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
    v15 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xFC5u);
      goto LABEL_10;
    }
    v12 = 1;
  }
  CMILBrushBitmapLocalSetterWrapper::CMILBrushBitmapLocalSetterWrapper(v20, *((_QWORD *)this + 497), a2, a5, a6);
  CLegacyMilBrushRealizer::SetRealizedBrush(
    (CLegacyMilBrushRealizer *)v21,
    (struct CMILBrush *)((*((_QWORD *)this + 497) + 24LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this
                                                                                           + 497) >> 64)),
    0LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v13, &EVTDESC_ETWGUID_DRAWEVENT_Start, 1LL, *((unsigned int *)this + 1674));
  v14 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v15 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xFDEu);
  }
  else
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *, char *, __int64, _QWORD, _QWORD *, int))(**((_QWORD **)this + 46) + 80LL))(
            *((_QWORD *)this + 46),
            *((_QWORD *)this + 49),
            ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
            (char *)this + 80,
            (char *)this + 3456,
            a4,
            0LL,
            v21,
            a8);
    v15 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xFE7u);
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      Template_qq(v17, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 1LL, *((unsigned int *)this + 1674));
    }
  }
  CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper((CMILBrushBitmapLocalSetterWrapper *)v20);
  if ( v12 )
    CDrawingContext::PopTransformInternal(this, 1);
LABEL_10:
  v21[0] = &CImmediateBrushRealizer::`vftable';
  CLegacyMilBrushRealizer::~CLegacyMilBrushRealizer((CLegacyMilBrushRealizer *)v21);
  return v15;
}
