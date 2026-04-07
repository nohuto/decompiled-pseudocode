/*
 * XREFs of ?Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z @ 0x18001E6F4
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800165E0 (-Create@CBitmapSource@@SAJPEAUHICON__@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?CreateFormatConverterToPBGRA@@YAJPEAUIWICBitmapSource@@PEAPEAUIWICBitmap@@@Z @ 0x1800164F4 (-CreateFormatConverterToPBGRA@@YAJPEAUIWICBitmapSource@@PEAPEAUIWICBitmap@@@Z.c)
 *     ?Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z @ 0x18001E7A4 (-Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z.c)
 *     ?DoStackCapture@@YAXJI@Z @ 0x18004DD38 (-DoStackCapture@@YAXJI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSource::Update(CBitmapSource *this, HICON a2)
{
  int v3; // eax
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  struct IWICBitmap *v8; // [rsp+50h] [rbp+18h] BYREF
  struct IWICBitmapSource *v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, HICON, struct IWICBitmapSource **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                               + 28)
                                                                            + 176LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28),
         a2,
         &v9);
  if ( v3 < 0 )
  {
    DoStackCapture(v3, 0x1C7u);
    v5 = 0;
  }
  else
  {
    v4 = CreateFormatConverterToPBGRA(v9, &v8);
    v5 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x1D3u);
    }
    else
    {
      v6 = CBitmapSource::Update(this, v8);
      v5 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1D5u);
    }
  }
  if ( v8 )
    ((void (__fastcall *)(struct IWICBitmap *))v8->lpVtbl->Release)(v8);
  if ( v9 )
    ((void (__fastcall *)(struct IWICBitmapSource *))v9->lpVtbl->Release)(v9);
  return v5;
}
