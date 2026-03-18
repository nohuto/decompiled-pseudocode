/*
 * XREFs of ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0HF@@@@Z @ 0x18006DDD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z @ 0x18001DE20 (--$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x1800665E4 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x180067A44 (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAV-$TMilRec.c)
 *     ?DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@@Z @ 0x18006C8C4 (-DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4Fl.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq @ 0x180147E0C (McTemplateU0qq.c)
 */

__int64 __fastcall CDrawingContext::DrawImage(CDrawingContext *this, __int64 a2, __int128 *a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  int v12; // eax
  unsigned int v14; // [rsp+20h] [rbp-78h]
  __int64 v15; // [rsp+40h] [rbp-58h] BYREF
  __int128 v16; // [rsp+48h] [rbp-50h] BYREF
  __int128 v17; // [rsp+58h] [rbp-40h] BYREF

  v4 = 0;
  v15 = 0LL;
  if ( !CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Start,
      4LL,
      *(unsigned int *)(v9 + 6760));
  if ( a2 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL))(a2, 78LL) )
  {
    v16 = *a3;
    if ( a4 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 48LL))(a4, 117LL) )
      {
        v4 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x32u);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x68u);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x5E0u);
        goto LABEL_8;
      }
      v16 = *(_OWORD *)(a4 + 56);
    }
    v11 = (a2 - 16) & -(__int64)(a2 != 0);
    v12 = CDrawingContext::ImageSourceToBitmapSource(
            this,
            (CCompositionSurfaceBitmap *)((v11 + 8) & -(__int64)(v11 != 0)),
            v10,
            &v17,
            &v15);
    v4 = v12;
    if ( v12 < 0 )
    {
      v14 = 1512;
    }
    else
    {
      if ( !v15 )
        goto LABEL_8;
      v12 = CDrawingContext::DrawBitmapSource(this, v15, (__int64)&v17, (float *)&v16, *((_DWORD *)this + 1690), 0);
      v4 = v12;
      if ( v12 >= 0 )
        goto LABEL_8;
      v14 = 1522;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v14);
  }
LABEL_8:
  ReleaseInterfaceNoNULL<IBitmapSource>(v15);
  if ( !CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Stop,
      4LL,
      *((unsigned int *)this + 1690));
  return v4;
}
