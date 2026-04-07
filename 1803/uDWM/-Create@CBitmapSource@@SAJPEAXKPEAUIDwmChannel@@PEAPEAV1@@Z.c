/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAXKPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180041510
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180041498 (-Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z @ 0x180013F00 (-Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z.c)
 *     ?Initialize@CBitmapSource@@AEAAJPEAUIDwmChannel@@@Z @ 0x180013FDC (-Initialize@CBitmapSource@@AEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180038664 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VCBitmapSource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBitmapSource@@@Z @ 0x180041684 (--4-$ComPtr@VCBitmapSource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBitmapSource@@@Z.c)
 *     ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIBitmapSource@@@Z @ 0x1800462B8 (-Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_M.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049FC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSource::Create(void *a1, unsigned int a2, struct IDwmChannel *a3, struct CBitmapSource **a4)
{
  CBitmapSource *v5; // rbx
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rax
  struct CBitmapSource *v12; // rax
  __int64 v14; // rdx
  __int64 v15; // r9
  int v16; // [rsp+20h] [rbp-40h]
  enum DXGI_FORMAT v17; // [rsp+28h] [rbp-38h]
  enum DXGI_ALPHA_MODE v18; // [rsp+30h] [rbp-30h]
  struct IWICBitmap *v19; // [rsp+40h] [rbp-20h] BYREF
  struct IBitmapSource *v20; // [rsp+48h] [rbp-18h] BYREF
  CBitmapSource *v21; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v20 = 0LL;
  v19 = 0LL;
  v5 = 0LL;
  v21 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v20);
  v9 = CCompressedSourceBitmap::Create(
         *((struct IWICImagingFactory **)CDesktopManager::s_pDesktopManagerInstance + 34),
         a1,
         a2,
         96.0,
         96.0,
         v17,
         v18,
         &v20);
  v10 = v9;
  if ( v9 < 0 )
  {
    v14 = 89LL;
LABEL_17:
    v15 = (unsigned int)v9;
    goto LABEL_18;
  }
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v19);
  v9 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, struct IWICBitmap **))v20)(
         v20,
         &GUID_00000121_a8f2_4877_ba0a_fd2b6645fb94,
         &v19);
  v10 = v9;
  if ( v9 < 0 )
  {
    v14 = 90LL;
    goto LABEL_17;
  }
  v11 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          104LL);
  if ( v11 )
  {
    *(_QWORD *)(v11 + 16) = 0LL;
    *(_QWORD *)(v11 + 96) = 0LL;
    *(_QWORD *)v11 = &CBitmapSource::`vftable';
    *(_DWORD *)(v11 + 80) = 0x80000000;
    *(_DWORD *)(v11 + 88) = 0x80000000;
    *(_DWORD *)(v11 + 84) = 0x80000000;
    *(_DWORD *)(v11 + 92) = 0x80000000;
    *(_DWORD *)(v11 + 8) = 1;
  }
  Microsoft::WRL::ComPtr<CBitmapSource>::operator=(&v21, v11);
  v5 = v21;
  if ( v21 )
  {
    v9 = CBitmapSource::Initialize(v21, a3);
    v10 = v9;
    if ( v9 < 0 )
    {
      v14 = 95LL;
    }
    else
    {
      v9 = CBitmapSource::Update(v5, v19);
      v10 = v9;
      if ( v9 >= 0 )
      {
        v12 = v5;
        v5 = 0LL;
        v10 = 0;
        *a4 = v12;
        goto LABEL_9;
      }
      v14 = 97LL;
    }
    goto LABEL_17;
  }
  v10 = -2147024882;
  v14 = 93LL;
  v15 = 2147942414LL;
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (unsigned int)"windows\\dwm\\udwm\\bitmapsource.cpp",
    (const char *)v15,
    v16);
LABEL_9:
  if ( v5 )
    CBaseObject::Release(v5);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v19);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v20);
  return v10;
}
