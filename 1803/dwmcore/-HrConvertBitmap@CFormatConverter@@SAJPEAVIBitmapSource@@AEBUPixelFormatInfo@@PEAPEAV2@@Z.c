/*
 * XREFs of ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x180202554
 * Callers:
 *     ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x18000D180 (-CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV-$TMilRect@IUMilRectU@@UNotNeeded@.c)
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x180042B90 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z @ 0x18017A06C (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z.c)
 *     ?FillTexture@CHwBitmapColorSource@@AEAAJXZ @ 0x1801EF984 (-FillTexture@CHwBitmapColorSource@@AEAAJXZ.c)
 *     ?Initialize@CBitmapColorKey@@AEAAJPEAVIBitmapSource@@PEBVCColorKey@@@Z @ 0x1801F64C0 (-Initialize@CBitmapColorKey@@AEAAJPEAVIBitmapSource@@PEBVCColorKey@@@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??0CFormatConverter@@QEAA@XZ @ 0x180201C00 (--0CFormatConverter@@QEAA@XZ.c)
 *     ??2CFormatConverter@@SAPEAX_K@Z @ 0x180201D8C (--2CFormatConverter@@SAPEAX_K@Z.c)
 *     ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z @ 0x1802026C0 (-Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z.c)
 */

__int64 __fastcall CFormatConverter::HrConvertBitmap(
        struct IBitmapSource *a1,
        const struct PixelFormatInfo *a2,
        struct IBitmapSource **a3)
{
  unsigned int v6; // edi
  CFormatConverter *v7; // rax
  CFormatConverter *v8; // rbx
  int v9; // eax
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF

  v6 = 0;
  (*(void (__fastcall **)(struct IBitmapSource *, __int64 *))(*(_QWORD *)a1 + 24LL))(a1, &v11);
  if ( v11 == *(_QWORD *)a2 )
  {
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a1 + 8LL))(a1);
    *a3 = a1;
  }
  else
  {
    v7 = (CFormatConverter *)CFormatConverter::operator new();
    if ( v7 )
      v8 = CFormatConverter::CFormatConverter(v7);
    else
      v8 = 0LL;
    if ( v8 )
    {
      CMILCOMBase::InternalAddRef(v8);
      v9 = CFormatConverter::Initialize(v8, a1, a2, 0.0);
      v6 = v9;
      if ( v9 >= 0 )
      {
        *a3 = (CFormatConverter *)((char *)v8 + 16);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x259u);
        CMILCOMBase::InternalRelease(v8);
      }
    }
    else
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x266u);
    }
  }
  return v6;
}
