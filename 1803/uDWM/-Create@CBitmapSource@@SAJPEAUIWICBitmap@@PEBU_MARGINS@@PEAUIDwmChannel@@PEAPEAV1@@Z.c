/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800372B8
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180012CFC (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x1800148B0 (-ValidateResources@CText@@AEAAJXZ.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180073EC8 (-Create@CBitmapSource@@SAJIIIIPEBXPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z @ 0x180013F00 (-Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z.c)
 *     ?Initialize@CBitmapSource@@AEAAJPEAUIDwmChannel@@@Z @ 0x180013FDC (-Initialize@CBitmapSource@@AEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180021080 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
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
    v10 = CBitmapSource::Initialize(v8, a3);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x8Eu);
    }
    else
    {
      v12 = CBitmapSource::Update(v9, a1);
      v11 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x90u);
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x8Cu);
  }
  return v11;
}
