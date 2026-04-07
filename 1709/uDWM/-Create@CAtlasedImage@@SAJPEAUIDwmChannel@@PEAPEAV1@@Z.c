/*
 * XREFs of ?Create@CAtlasedImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800090C8
 * Callers:
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180008720 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x18007DFB0 (-Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 * Callees:
 *     ??0CAtlasedImage@@IEAA@XZ @ 0x1800209B8 (--0CAtlasedImage@@IEAA@XZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180020D90 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedImage::Create(struct IDwmChannel *a1, struct CAtlasedImage **a2)
{
  unsigned int v2; // ebx
  void *(*v5)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  CAtlasedImage *v6; // rax
  CAtlasedImage *v7; // rax

  v2 = 0;
  if ( !a2 )
  {
    v2 = -2147024809;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xA5u);
    return v2;
  }
  v5 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v5 == WPF::ProcessHeapImpl::AllocClear )
    v6 = (CAtlasedImage *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x88uLL);
  else
    v6 = (CAtlasedImage *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v5)(WPF::g_pProcessHeap, 136LL);
  if ( v6 )
    v7 = CAtlasedImage::CAtlasedImage(v6);
  else
    v7 = 0LL;
  if ( !v7 )
  {
    v2 = -2147024882;
    goto LABEL_13;
  }
  *((_QWORD *)v7 + 13) = a1;
  *a2 = v7;
  return v2;
}
