/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAXKPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18003C86C
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18003B3D0 (-Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z @ 0x180025310 (-Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z.c)
 *     ?Initialize@CBitmapSource@@AEAAJPEAUIDwmChannel@@@Z @ 0x1800253EC (-Initialize@CBitmapSource@@AEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIBitmapSource@@@Z @ 0x1800435C8 (-Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_M.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSource::Create(void *a1, unsigned int a2, struct IDwmChannel *a3, CBaseObject ***a4)
{
  int v6; // eax
  struct IBitmapSource *v7; // rsi
  unsigned int v8; // edi
  __int64 v9; // rax
  CBaseObject **v10; // rbx
  int v11; // eax
  int v12; // eax
  int v14; // r9d
  unsigned int v15; // [rsp+20h] [rbp-38h]
  enum DXGI_FORMAT v16; // [rsp+28h] [rbp-30h]
  enum DXGI_ALPHA_MODE v17; // [rsp+30h] [rbp-28h]
  struct IWICBitmap *v18; // [rsp+40h] [rbp-18h] BYREF
  struct IBitmapSource *v19; // [rsp+48h] [rbp-10h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  v6 = CCompressedSourceBitmap::Create(
         *((struct IWICImagingFactory **)CDesktopManager::s_pDesktopManagerInstance + 34),
         a1,
         a2,
         96.0,
         96.0,
         v16,
         v17,
         &v19);
  v7 = v19;
  v8 = v6;
  if ( v6 < 0 )
  {
    v15 = 111;
LABEL_18:
    v14 = v6;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, v15);
    goto LABEL_11;
  }
  v6 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, struct IWICBitmap **))v19)(
         v19,
         &GUID_00000121_a8f2_4877_ba0a_fd2b6645fb94,
         &v18);
  v8 = v6;
  if ( v6 < 0 )
  {
    v15 = 113;
    goto LABEL_18;
  }
  v9 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         104LL);
  v10 = (CBaseObject **)v9;
  if ( v9 )
  {
    *(_QWORD *)(v9 + 16) = 0LL;
    *(_QWORD *)(v9 + 96) = 0LL;
    *(_DWORD *)(v9 + 8) = 1;
    *(_QWORD *)v9 = &CBitmapSource::`vftable';
    *(_DWORD *)(v9 + 80) = 0x80000000;
    *(_DWORD *)(v9 + 88) = 0x80000000;
    *(_DWORD *)(v9 + 84) = 0x80000000;
    *(_DWORD *)(v9 + 92) = 0x80000000;
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
  {
    v8 = -2147024882;
    v15 = 116;
    v14 = -2147024882;
    goto LABEL_20;
  }
  v11 = CBitmapSource::Initialize(v10, a3);
  v8 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x76u);
  }
  else
  {
    v12 = CBitmapSource::Update((CBitmapSource *)v10, v18);
    v8 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x78u);
    }
    else
    {
      *a4 = v10;
      v10 = 0LL;
    }
  }
  if ( v10 )
    CBaseObject::Release((CBaseObject *)v10);
LABEL_11:
  if ( v18 )
    ((void (__fastcall *)(struct IWICBitmap *))v18->lpVtbl->Release)(v18);
  if ( v7 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
