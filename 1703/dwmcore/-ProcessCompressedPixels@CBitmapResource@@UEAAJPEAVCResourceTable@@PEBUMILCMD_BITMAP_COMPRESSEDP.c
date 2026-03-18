/*
 * XREFs of ?ProcessCompressedPixels@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_COMPRESSEDPIXELS@@PEBXI@Z @ 0x18015FEF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIBitmapSource@@@Z @ 0x1801AA670 (-Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_M.c)
 */

__int64 __fastcall CBitmapResource::ProcessCompressedPixels(
        CBitmapResource *this,
        struct CResourceTable *a2,
        const struct MILCMD_BITMAP_COMPRESSEDPIXELS *a3,
        const void *a4,
        unsigned int a5)
{
  struct IBitmapSource *v6; // rbx
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  enum DXGI_FORMAT v13; // [rsp+28h] [rbp-30h]
  enum DXGI_ALPHA_MODE v14; // [rsp+30h] [rbp-28h]
  struct IBitmapSource *v15; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0LL;
  v15 = 0LL;
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 10);
  if ( a4 )
  {
    v9 = CCompressedSourceBitmap::Create(
           *(struct IWICImagingFactory **)(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 56LL),
           a4,
           a5,
           *((double *)a3 + 1),
           *((double *)a3 + 2),
           v13,
           v14,
           &v15);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xB2u);
      v6 = v15;
    }
    else
    {
      v6 = v15;
      v11 = (*(__int64 (__fastcall **)(struct IBitmapSource *, char *, char *))(*(_QWORD *)v15 + 48LL))(
              v15,
              (char *)this + 72,
              (char *)this + 76);
      v10 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xBAu);
      }
      else
      {
        *((_QWORD *)this + 10) = v6;
        v6 = 0LL;
      }
    }
  }
  else
  {
    v10 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xC1u);
  }
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v6);
  CResource::NotifyOnChanged((_DWORD *)this + 4, 0LL, 0LL);
  return v10;
}
