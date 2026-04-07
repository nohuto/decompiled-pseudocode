/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180035578
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x18000FDA4 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x1800143BC (-ValidateResources@CText@@AEAAJXZ.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18006D108 (-Create@CBitmapSource@@SAJIIIIPEBXPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180020D90 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z @ 0x180025310 (-Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z.c)
 *     ?Initialize@CBitmapSource@@AEAAJPEAUIDwmChannel@@@Z @ 0x1800253EC (-Initialize@CBitmapSource@@AEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSource::Create(
        struct IWICBitmap *a1,
        const struct _MARGINS *a2,
        struct IDwmChannel *a3,
        struct CBitmapSource **a4)
{
  void *(__fastcall *v7)(WPF::ProcessHeapImpl *, size_t); // rax
  CBitmapSource *v8; // rax
  CBitmapSource *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax

  v7 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v7 == WPF::ProcessHeapImpl::AllocClear )
    v8 = (CBitmapSource *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x68uLL);
  else
    v8 = (CBitmapSource *)v7(WPF::g_pProcessHeap, 104LL);
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
    v10 = CBitmapSource::Initialize((CBaseObject **)v8, a3);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xB3u);
    }
    else
    {
      v12 = CBitmapSource::Update(v9, a1);
      v11 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xB5u);
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xB1u);
  }
  return v11;
}
