/*
 * XREFs of ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIBitmapSource@@@Z @ 0x1800462B8
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEAXKPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180041510 (-Create@CBitmapSource@@SAJPEAXKPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?HrInitFromCompressedBytes@CCompressedSourceBitmap@@IEAAJPEBXK@Z @ 0x1800468BC (-HrInitFromCompressedBytes@CCompressedSourceBitmap@@IEAAJPEBXK@Z.c)
 *     ??0CCompressedSourceBitmap@@IEAA@PEAUIWICImagingFactory@@W4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@@Z @ 0x1800469A4 (--0CCompressedSourceBitmap@@IEAA@PEAUIWICImagingFactory@@W4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180046A88 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180046B30 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?SetResolution@CBitmap@@UEAAJNN@Z @ 0x180046FB0 (-SetResolution@CBitmap@@UEAAJNN@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompressedSourceBitmap::Create(
        struct IWICImagingFactory *a1,
        const void *a2,
        unsigned int a3,
        double a4,
        double a5,
        enum DXGI_FORMAT a6,
        enum DXGI_ALPHA_MODE a7,
        struct IBitmapSource **a8)
{
  CCompressedSourceBitmap *v11; // rax
  enum DXGI_FORMAT v12; // r8d
  enum DXGI_ALPHA_MODE v13; // r9d
  CCompressedSourceBitmap *v14; // rbx
  int v15; // eax
  unsigned int v16; // edi
  int v17; // eax
  struct IBitmapSource *v18; // rax

  *a8 = 0LL;
  v11 = (CCompressedSourceBitmap *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 8LL))(
                                     WPF::g_pProcessHeap,
                                     296LL);
  if ( v11 )
    v14 = CCompressedSourceBitmap::CCompressedSourceBitmap(v11, a1, v12, v13);
  else
    v14 = 0LL;
  if ( v14 )
  {
    CMILCOMBase::InternalAddRef(v14);
    v15 = CCompressedSourceBitmap::HrInitFromCompressedBytes(v14, a2, a3);
    v16 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x25u);
    }
    else
    {
      v17 = CBitmap::SetResolution((CCompressedSourceBitmap *)((char *)v14 + 24), a4, a5);
      v16 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x27u);
      }
      else
      {
        v18 = (CCompressedSourceBitmap *)((char *)v14 + 16);
        v14 = 0LL;
        *a8 = v18;
      }
    }
    if ( v14 )
      CMILCOMBase::InternalRelease(v14);
  }
  else
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x22u);
  }
  return v16;
}
