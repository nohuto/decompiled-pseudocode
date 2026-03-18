/*
 * XREFs of ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0GJ@@@@Z @ 0x18003FD10
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x180036C7C (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x1800372A8 (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAV-$TMilRec.c)
 *     ?DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@@Z @ 0x18003DA1C (-DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4Fl.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z @ 0x1800823A0 (--$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq @ 0x180125258 (McTemplateU0qq.c)
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
  if ( a2 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL))(a2, 72LL) )
  {
    v16 = *a3;
    if ( a4 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 48LL))(a4, 105LL) )
      {
        v4 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x32u);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x68u);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x5EDu);
        goto LABEL_8;
      }
      v16 = *(_OWORD *)(a4 + 56);
    }
    v11 = (a2 - 16) & -(__int64)(a2 != 0);
    v12 = CDrawingContext::ImageSourceToBitmapSource(
            this,
            (__int64 *)((v11 + 8) & -(__int64)(v11 != 0)),
            v10,
            &v17,
            &v15);
    v4 = v12;
    if ( v12 < 0 )
    {
      v14 = 1525;
    }
    else
    {
      if ( !v15 )
        goto LABEL_8;
      v12 = CDrawingContext::DrawBitmapSource(this, v15, (__int64)&v17, (float *)&v16, *((_DWORD *)this + 1690), 0);
      v4 = v12;
      if ( v12 >= 0 )
        goto LABEL_8;
      v14 = 1535;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v14);
  }
LABEL_8:
  ReleaseInterfaceNoNULL<ID2D1Bitmap1>(v15);
  if ( !CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Stop,
      4LL,
      *((unsigned int *)this + 1690));
  return v4;
}
