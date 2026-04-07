/*
 * XREFs of ?Create@CBitmapSource@@SAJIIIIPEBXPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180073EC8
 * Callers:
 *     ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x18007700C (-BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z.c)
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x1800772BC (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 *     ?BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z @ 0x1800778B8 (-BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z.c)
 *     ?RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@22PEAX_K@Z @ 0x180097E80 (-RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@.c)
 * Callees:
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800372B8 (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
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
  unsigned __int64 v10; // rax
  int v13; // r8d
  unsigned int v14; // ebx
  int v15; // eax
  const struct _MARGINS *v16; // rdx
  struct IWICBitmap *v17; // rcx
  unsigned int v19; // [rsp+20h] [rbp-40h]
  struct IWICBitmap *v20; // [rsp+50h] [rbp-10h] BYREF
  __int64 v21; // [rsp+58h] [rbp-8h] BYREF

  v20 = 0LL;
  v7 = 0LL;
  v21 = 0LL;
  v10 = 4LL * a1;
  v13 = -1;
  if ( v10 <= 0xFFFFFFFF )
    v13 = 4 * a1;
  v14 = v10 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v10 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0xD8u);
    goto LABEL_24;
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, GUID *, int, unsigned int, const void *, struct IWICBitmap **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 34) + 160LL))(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 34),
          a1,
          a2,
          &GUID_WICPixelFormat32bppPBGRA,
          v13,
          4 * a2 * a1,
          a5,
          &v20);
  v14 = v15;
  if ( v15 >= 0 )
  {
    v17 = v20;
    if ( !v20 )
    {
      v14 = -2147024890;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024890, 0xE3u);
      goto LABEL_24;
    }
    if ( a3 != a1 || a4 != a2 )
    {
      v20 = 0LL;
      v7 = v17;
      v15 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 34)
                                                         + 88LL))(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 34),
              &v21);
      v14 = v15;
      if ( v15 < 0 )
      {
        v19 = 234;
        goto LABEL_23;
      }
      if ( !v21 )
      {
        v14 = -2147024890;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024890, 0xEBu);
        goto LABEL_24;
      }
      v15 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmap *, _QWORD, _QWORD, int))(*(_QWORD *)v21 + 64LL))(
              v21,
              v7,
              a3,
              a4,
              1);
      v14 = v15;
      if ( v15 < 0 )
      {
        v19 = 237;
        goto LABEL_23;
      }
      v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, struct IWICBitmap **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                         + 34)
                                                                                      + 144LL))(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 34),
              v21,
              2LL,
              &v20);
      v14 = v15;
      if ( v15 < 0 )
      {
        v19 = 239;
        goto LABEL_23;
      }
      v17 = v20;
      if ( !v20 )
      {
        v14 = -2147024890;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024890, 0xF0u);
        goto LABEL_24;
      }
    }
    v15 = CBitmapSource::Create(v17, v16, a6, a7);
    v14 = v15;
    if ( v15 >= 0 )
      goto LABEL_24;
    v19 = 249;
  }
  else
  {
    v19 = 226;
  }
LABEL_23:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, v19);
LABEL_24:
  if ( v20 )
    ((void (__fastcall *)(struct IWICBitmap *))v20->lpVtbl->Release)(v20);
  if ( v7 )
    ((void (__fastcall *)(struct IWICBitmap *))v7->lpVtbl->Release)(v7);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  return v14;
}
