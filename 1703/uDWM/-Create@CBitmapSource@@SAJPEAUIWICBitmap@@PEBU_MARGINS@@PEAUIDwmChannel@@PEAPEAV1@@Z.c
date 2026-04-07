/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001A44C
 * Callers:
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x18001BCAC (-ValidateResources@CText@@AEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180038AF0 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180077888 (-Create@CBitmapSource@@SAJIIIIPEBXPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z @ 0x18001E7A4 (-Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z.c)
 *     ?Initialize@CBitmapSource@@AEAAJPEAUIDwmChannel@@@Z @ 0x18001E880 (-Initialize@CBitmapSource@@AEAAJPEAUIDwmChannel@@@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C850 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSource::Create(
        struct IWICBitmap *a1,
        const struct _MARGINS *a2,
        struct IDwmChannel *a3,
        struct CBitmapSource **a4)
{
  void *(*v7)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  CBitmapSource *v8; // rax
  CBitmapSource *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax

  v7 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v7 == WPF::ProcessHeapImpl::AllocClear )
    v8 = (CBitmapSource *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x68uLL);
  else
    v8 = (CBitmapSource *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v7)(WPF::g_pProcessHeap, 104LL);
  v9 = v8;
  if ( v8 )
  {
    *((_QWORD *)v8 + 2) = 0LL;
    *((_QWORD *)v8 + 12) = 0LL;
    *((_DWORD *)v8 + 2) = 1;
    *(_QWORD *)v8 = &CBitmapSource::`vftable';
    *((_DWORD *)v8 + 20) = 0x80000000;
    *((_DWORD *)v8 + 22) = 0x80000000;
    *((_DWORD *)v8 + 21) = 0x80000000;
    *((_DWORD *)v8 + 23) = 0x80000000;
    v10 = CBitmapSource::Initialize(v8, a3);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xB3u);
    }
    else
    {
      v12 = CBitmapSource::Update(v9, a1);
      v11 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xB5u);
      }
      else
      {
        *a4 = v9;
        v9 = 0LL;
      }
    }
    if ( v9 )
      CBaseObject::Release(v9);
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xB1u);
  }
  return v11;
}
