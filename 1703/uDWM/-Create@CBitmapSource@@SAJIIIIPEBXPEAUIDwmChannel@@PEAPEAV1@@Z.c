/*
 * XREFs of ?Create@CBitmapSource@@SAJIIIIPEBXPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180077888
 * Callers:
 *     ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x180079D88 (-BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z.c)
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x18007A23C (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 *     ?BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z @ 0x18007B5B4 (-BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z.c)
 *     ?RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@22PEAX_K@Z @ 0x1800930E0 (-RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@.c)
 * Callees:
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001A44C (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSource::Create(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        const void *a5,
        struct IDwmChannel *a6,
        struct CBitmapSource **a7)
{
  struct IWICBitmap *v7; // rdi
  unsigned __int64 v9; // r11
  unsigned int v13; // ebx
  int v14; // eax
  const struct _MARGINS *v15; // rdx
  struct IWICBitmap *v16; // rcx
  unsigned int v18; // [rsp+20h] [rbp-40h]
  struct IWICBitmap *v19; // [rsp+50h] [rbp-10h] BYREF
  __int64 v20; // [rsp+58h] [rbp-8h] BYREF

  v19 = 0LL;
  v7 = 0LL;
  v20 = 0LL;
  v9 = 4LL * a1;
  if ( v9 > 0xFFFFFFFF )
  {
    v13 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0x101u);
    goto LABEL_22;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, GUID *, _DWORD, unsigned int, const void *, struct IWICBitmap **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 28) + 160LL))(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28),
          a1,
          a2,
          &GUID_WICPixelFormat32bppPBGRA,
          v9,
          4 * a2 * a1,
          a5,
          &v19);
  v13 = v14;
  if ( v14 >= 0 )
  {
    v16 = v19;
    if ( !v19 )
    {
      v13 = -2147024890;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024890, 0x10Cu);
      goto LABEL_22;
    }
    if ( a3 != a1 || a4 != a2 )
    {
      v19 = 0LL;
      v7 = v16;
      v14 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 28)
                                                         + 88LL))(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28),
              &v20);
      v13 = v14;
      if ( v14 < 0 )
      {
        v18 = 275;
        goto LABEL_21;
      }
      if ( !v20 )
      {
        v13 = -2147024890;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024890, 0x114u);
        goto LABEL_22;
      }
      v14 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmap *, _QWORD, _QWORD, int))(*(_QWORD *)v20 + 64LL))(
              v20,
              v7,
              a3,
              a4,
              1);
      v13 = v14;
      if ( v14 < 0 )
      {
        v18 = 278;
        goto LABEL_21;
      }
      v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, struct IWICBitmap **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                         + 28)
                                                                                      + 144LL))(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28),
              v20,
              2LL,
              &v19);
      v13 = v14;
      if ( v14 < 0 )
      {
        v18 = 280;
        goto LABEL_21;
      }
      v16 = v19;
      if ( !v19 )
      {
        v13 = -2147024890;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024890, 0x119u);
        goto LABEL_22;
      }
    }
    v14 = CBitmapSource::Create(v16, v15, a6, a7);
    v13 = v14;
    if ( v14 >= 0 )
      goto LABEL_22;
    v18 = 290;
  }
  else
  {
    v18 = 267;
  }
LABEL_21:
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, v18);
LABEL_22:
  if ( v19 )
    ((void (__fastcall *)(struct IWICBitmap *))v19->lpVtbl->Release)(v19);
  if ( v7 )
    ((void (__fastcall *)(struct IWICBitmap *))v7->lpVtbl->Release)(v7);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  return v13;
}
