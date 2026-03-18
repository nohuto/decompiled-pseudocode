/*
 * XREFs of ?FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@_N@Z @ 0x1801614AC
 * Callers:
 *     ?DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@@Z @ 0x18015ECE0 (-DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU.c)
 * Callees:
 *     ?SetRealizedBrush@CLegacyMilBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z @ 0x18001D898 (-SetRealizedBrush@CLegacyMilBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z.c)
 *     ??1CLegacyMilBrushRealizer@@MEAA@XZ @ 0x18001D908 (--1CLegacyMilBrushRealizer@@MEAA@XZ.c)
 *     ??0CLegacyMilBrushRealizer@@IEAA@XZ @ 0x18001D964 (--0CLegacyMilBrushRealizer@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180066930 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180066CF0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180067310 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq @ 0x180147E0C (McTemplateU0qq.c)
 *     ??0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@W4Enum@MilBitmapWrapMode@@PEBVCMILMatrix@@W4XSpaceDefinition@@@Z @ 0x18015E32C (--0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@U-$TMILFlagsE.c)
 *     ??1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ @ 0x18020F340 (--1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ.c)
 */

__int64 __fastcall CDrawingContext::FillShapeWithBitmapSource(
        CDrawingContext *this,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        char a7)
{
  char v10; // si
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // eax
  _QWORD v16[2]; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD v17[12]; // [rsp+60h] [rbp-98h] BYREF

  CLegacyMilBrushRealizer::CLegacyMilBrushRealizer((CLegacyMilBrushRealizer *)v17);
  v10 = 0;
  v17[0] = &LocalMILObject<CImmediateBrushRealizer>::`vftable';
  if ( a7 )
  {
    v11 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xE21u);
      goto LABEL_15;
    }
    v10 = 1;
  }
  CMILBrushBitmapLocalSetterWrapper::CMILBrushBitmapLocalSetterWrapper(v16, *((_QWORD *)this + 505), a2, a5, 0LL);
  CLegacyMilBrushRealizer::SetRealizedBrush(
    (CLegacyMilBrushRealizer *)v17,
    (struct CMILBrush *)((*((_QWORD *)this + 505) + 24LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this
                                                                                           + 505) >> 64)),
    0LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Start,
      1,
      *((_DWORD *)this + 1690));
  v13 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v12 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xE3Au);
  }
  else
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *, char *, __int64, _QWORD, _QWORD *, _DWORD))(**((_QWORD **)this + 45) + 64LL))(
            *((_QWORD *)this + 45),
            *((_QWORD *)this + 48),
            ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
            (char *)this + 72,
            (char *)this + 3552,
            a4,
            0LL,
            v17,
            0);
    v12 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xE43u);
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      McTemplateU0qq(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Stop,
        1,
        *((_DWORD *)this + 1690));
    }
  }
  CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper((CMILBrushBitmapLocalSetterWrapper *)v16);
  if ( v10 )
    CDrawingContext::PopTransformInternal(this, 1);
LABEL_15:
  v17[0] = &CImmediateBrushRealizer::`vftable';
  CLegacyMilBrushRealizer::~CLegacyMilBrushRealizer((CLegacyMilBrushRealizer *)v17);
  return v12;
}
