/*
 * XREFs of ?Create@CAtlasButton@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180034E00
 * Callers:
 *     ?Initialize@CButton@@MEAAJPEAUIDwmChannel@@@Z @ 0x180016550 (-Initialize@CButton@@MEAAJPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ??0CAtlasedImage@@IEAA@XZ @ 0x1800209B8 (--0CAtlasedImage@@IEAA@XZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180020D90 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x180045938 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasButton::Create(struct IDwmChannel *a1, struct CAtlasButton **a2)
{
  unsigned int v2; // ebx
  void *(__fastcall *v5)(WPF::ProcessHeapImpl *, size_t); // rax
  CAtlasedImage *v6; // rax
  CAtlasedImage *v7; // rdi

  v2 = 0;
  if ( !a2 )
  {
    v2 = -2147024809;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x7Fu);
    return v2;
  }
  v5 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v5 == WPF::ProcessHeapImpl::AllocClear )
    v6 = (CAtlasedImage *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0xA8uLL);
  else
    v6 = (CAtlasedImage *)v5(WPF::g_pProcessHeap, 168LL);
  v7 = v6;
  if ( v6 )
  {
    memset_0(v6, 0, 0xA8uLL);
    CAtlasedImage::CAtlasedImage(v7);
    *((_QWORD *)v7 + 17) = 0LL;
    *(_QWORD *)v7 = &CAtlasButton::`vftable';
    *((_QWORD *)v7 + 18) = 0LL;
    *((_QWORD *)v7 + 19) = 1LL;
    *((_BYTE *)v7 + 160) = 0;
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
  {
    v2 = -2147024882;
    goto LABEL_12;
  }
  *((_QWORD *)v7 + 13) = a1;
  *a2 = v7;
  return v2;
}
