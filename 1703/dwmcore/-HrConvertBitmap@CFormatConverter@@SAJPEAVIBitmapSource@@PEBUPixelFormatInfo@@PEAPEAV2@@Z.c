/*
 * XREFs of ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1801AB890
 * Callers:
 *     ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x180017954 (-CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV-$TMilRect@IUMilRectU@@UNotNeeded@.c)
 *     ?FillTexture@CHwBitmapColorSource@@AEAAJXZ @ 0x1800445FC (-FillTexture@CHwBitmapColorSource@@AEAAJXZ.c)
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x180072AE4 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z @ 0x18015B134 (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z.c)
 *     ?Initialize@CBitmapColorKey@@AEAAJPEAVIBitmapSource@@PEBVCColorKey@@@Z @ 0x1801A1C0C (-Initialize@CBitmapColorKey@@AEAAJPEAVIBitmapSource@@PEBVCColorKey@@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??0CFormatConverter@@QEAA@XZ @ 0x1801AAE7C (--0CFormatConverter@@QEAA@XZ.c)
 *     ??2CFormatConverter@@SAPEAX_K@Z @ 0x1801AB008 (--2CFormatConverter@@SAPEAX_K@Z.c)
 *     ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@N@Z @ 0x1801ABA20 (-Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@N@Z.c)
 */

__int64 __fastcall CFormatConverter::HrConvertBitmap(
        struct IBitmapSource *a1,
        const struct PixelFormatInfo *a2,
        struct IBitmapSource **a3)
{
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  CFormatConverter *v9; // rax
  CFormatConverter *v10; // rdi
  int v11; // eax
  int v13; // [rsp+50h] [rbp+8h] BYREF

  v6 = (*(__int64 (__fastcall **)(struct IBitmapSource *, int *))(*(_QWORD *)a1 + 24LL))(a1, &v13);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x26Cu);
  v8 = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a1 + 32LL))(a1);
  if ( v7 >= 0 )
  {
    if ( v13 == *(_DWORD *)a2 && v8 == *((_DWORD *)a2 + 1) )
    {
      (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a1 + 8LL))(a1);
      *a3 = a1;
    }
    else
    {
      v9 = (CFormatConverter *)CFormatConverter::operator new();
      if ( v9 )
        v10 = CFormatConverter::CFormatConverter(v9);
      else
        v10 = 0LL;
      if ( v10 )
      {
        CBitmapOfDeviceBitmaps::AddRef(v10);
        v11 = CFormatConverter::Initialize(v10, a1, a2, 0.0);
        v7 = v11;
        if ( v11 >= 0 )
        {
          *a3 = (CFormatConverter *)((char *)v10 + 16);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x288u);
          CMILCOMBase::InternalRelease(v10);
        }
      }
      else
      {
        v7 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x295u);
      }
    }
  }
  return (unsigned int)v7;
}
