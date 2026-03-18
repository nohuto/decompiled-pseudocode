/*
 * XREFs of ?CreateRenderTarget@CHolographicViewerContent@@AEAAJPEAUIDXGIResource@@@Z @ 0x1801A5064
 * Callers:
 *     ?Draw@CHolographicViewerContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A5190 (-Draw@CHolographicViewerContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetHolographicManager@CComposition@@QEAAPEAVCHolographicManager@@XZ @ 0x18013F660 (-GetHolographicManager@CComposition@@QEAAPEAVCHolographicManager@@XZ.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@VDisplayId@@PEAUPixelFormatInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180196310 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@VDisplayId@@PEA.c)
 */

__int64 __fastcall CHolographicViewerContent::CreateRenderTarget(
        CHolographicViewerContent *this,
        struct ID3D11Texture2D *a2)
{
  unsigned int v2; // ebx
  struct CHolographicManager **v4; // rcx
  int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rsi
  int v10; // [rsp+30h] [rbp-10h] BYREF
  __int64 v11; // [rsp+34h] [rbp-Ch]
  __int64 v12; // [rsp+60h] [rbp+20h] BYREF
  struct ID3D11Texture2D *v13; // [rsp+68h] [rbp+28h] BYREF

  v13 = a2;
  v2 = 0;
  v12 = 0LL;
  if ( *((_QWORD *)this + 10) )
  {
    v4 = (struct CHolographicManager **)*((_QWORD *)this + 2);
    v13 = 0LL;
    v10 = 0;
    v11 = 3LL;
    if ( CComposition::GetHolographicManager(v4) )
    {
      HIDWORD(v11) = 0;
      v10 = 87;
      Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)&v13);
      v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct ID3D11Texture2D **))this + 11))(
             *((_QWORD *)this + 11),
             &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
             &v13);
      v2 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x255u);
      }
      else
      {
        v6 = CD3DDeviceLevel1::CreateRenderTargetBitmapFromTexture(
               *((struct CD3DDeviceLevel1 **)this + 8),
               v13,
               DisplayId::Hmd,
               (__int64)&v10,
               &v12);
        v2 = v6;
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x25Bu);
        }
        else
        {
          v7 = *((_QWORD *)this + 12);
          v8 = v12;
          if ( v7 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
          v12 = 0LL;
          *((_QWORD *)this + 12) = v8;
        }
      }
    }
    else
    {
      v2 = -2147467259;
    }
    Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)&v13);
  }
  ReleaseInterface<ID2D1Geometry>(&v12);
  return v2;
}
