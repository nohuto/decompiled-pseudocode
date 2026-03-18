/*
 * XREFs of ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DG@@@@Z @ 0x1800A8CC0
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x180083B90 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CBitmapResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007CD50 (-IsOfType@CBitmapResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x1800A1D6C (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x1800A23E0 (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAV-$TMilRec.c)
 *     ?DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x1800A79A4 (-DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4Fl.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x18013BC88 (Template_qq.c)
 */

__int64 __fastcall CDrawingContext::DrawImage(CDrawingContext *this, __int64 a2, __int128 *a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rcx
  _BOOL8 (__fastcall *v10)(__int64, int); // rax
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v16; // [rsp+20h] [rbp-78h]
  struct IBitmapSource *v17; // [rsp+40h] [rbp-58h] BYREF
  __int128 v18; // [rsp+48h] [rbp-50h] BYREF
  __int128 v19; // [rsp+58h] [rbp-40h] BYREF

  v4 = 0;
  v17 = 0LL;
  if ( !(unsigned __int8)CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v9, &EVTDESC_ETWGUID_DRAWEVENT_Start, 4LL, *(unsigned int *)(v9 + 6696));
  if ( a2 )
  {
    v10 = *(_BOOL8 (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 48LL);
    if ( v10 == CBitmapResource::IsOfType ? CBitmapResource::IsOfType(a2, 60) : v10(a2, 60) )
    {
      v18 = *a3;
      if ( a4 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 48LL))(a4, 54LL) )
        {
          v4 = -2147024809;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x32u);
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x68u);
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x605u);
          goto LABEL_12;
        }
        v18 = *(_OWORD *)(a4 + 56);
      }
      v12 = (a2 - 16) & -(__int64)(a2 != 0);
      v13 = CDrawingContext::ImageSourceToBitmapSource(
              this,
              (CCachedVisualImage *)((v12 + 8) & -(__int64)(v12 != 0)),
              0LL,
              &v19,
              &v17);
      v4 = v13;
      if ( v13 < 0 )
      {
        v16 = 1549;
      }
      else
      {
        if ( !v17 )
          goto LABEL_12;
        v13 = CDrawingContext::DrawBitmapSource(
                this,
                (__int64)v17,
                (__int64)&v19,
                (float *)&v18,
                *((_DWORD *)this + 1674),
                0,
                0,
                0LL);
        v4 = v13;
        if ( v13 >= 0 )
          goto LABEL_12;
        v16 = 1559;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v16);
    }
  }
LABEL_12:
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v17);
  if ( !(unsigned __int8)CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v14, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 4LL, *((unsigned int *)this + 1674));
  return v4;
}
