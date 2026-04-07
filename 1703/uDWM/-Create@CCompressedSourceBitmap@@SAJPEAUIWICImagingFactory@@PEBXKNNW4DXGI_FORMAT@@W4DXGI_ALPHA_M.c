/*
 * XREFs of ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIBitmapSource@@@Z @ 0x18003F360
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEAXKPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180044480 (-Create@CBitmapSource@@SAJPEAXKPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800134B0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18003EE88 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?HrInitFromCompressedBytes@CCompressedSourceBitmap@@IEAAJPEBXK@Z @ 0x18003F894 (-HrInitFromCompressedBytes@CCompressedSourceBitmap@@IEAAJPEBXK@Z.c)
 *     ??0CCompressedSourceBitmap@@IEAA@PEAUIWICImagingFactory@@W4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@@Z @ 0x18003F9F0 (--0CCompressedSourceBitmap@@IEAA@PEAUIWICImagingFactory@@W4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@@Z.c)
 *     ?SetResolution@CBitmap@@UEAAJNN@Z @ 0x18003FEB0 (-SetResolution@CBitmap@@UEAAJNN@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x25u);
    }
    else
    {
      v17 = CBitmap::SetResolution((CCompressedSourceBitmap *)((char *)v14 + 24), a4, a5);
      v16 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x27u);
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x22u);
  }
  return v16;
}
