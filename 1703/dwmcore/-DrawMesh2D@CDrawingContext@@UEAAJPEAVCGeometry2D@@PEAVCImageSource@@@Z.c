/*
 * XREFs of ?DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x18014B8E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800A1660 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x1800A1D6C (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x1800A23E0 (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAV-$TMilRec.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x18013BC88 (Template_qq.c)
 */

__int64 __fastcall CDrawingContext::DrawMesh2D(CDrawingContext *this, struct CGeometry2D *a2, struct CImageSource *a3)
{
  unsigned int v3; // edi
  __int64 v7; // rcx
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  struct IBitmapSource *v15; // [rsp+40h] [rbp-48h] BYREF
  __int128 v16; // [rsp+48h] [rbp-40h] BYREF

  v3 = 0;
  v15 = 0LL;
  if ( !(unsigned __int8)CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v7, &EVTDESC_ETWGUID_DRAWEVENT_Start, 7, *(_DWORD *)(v7 + 6696));
  if ( a2 )
  {
    if ( a3 )
    {
      v8 = (*(__int64 (__fastcall **)(struct CGeometry2D *))(*(_QWORD *)a2 + 136LL))(a2);
      v9 = (*(__int64 (__fastcall **)(struct CGeometry2D *))(*(_QWORD *)a2 + 144LL))(a2);
      if ( v8 )
      {
        if ( v9 )
        {
          v10 = CDrawingContext::ImageSourceToBitmapSource(
                  this,
                  (CCachedVisualImage *)(((unsigned __int64)a3 + 8) & -(__int64)(a3 != 0LL)),
                  0LL,
                  &v16,
                  &v15);
          v3 = v10;
          if ( v10 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x130Du);
          }
          else if ( v15 )
          {
            v11 = CDrawingContext::ApplyRenderStateInternal(this, 0);
            v3 = v11;
            if ( v11 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1311u);
            }
            else
            {
              v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *, struct CGeometry2D *, struct IBitmapSource *))(**((_QWORD **)this + 46) + 88LL))(
                      *((_QWORD *)this + 46),
                      *((_QWORD *)this + 49),
                      ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
                      (char *)this + 80,
                      a2,
                      v15);
              v3 = v12;
              if ( v12 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1317u);
            }
          }
        }
      }
    }
  }
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v15);
  if ( !(unsigned __int8)CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v13, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 7, *((_DWORD *)this + 1674));
  return v3;
}
