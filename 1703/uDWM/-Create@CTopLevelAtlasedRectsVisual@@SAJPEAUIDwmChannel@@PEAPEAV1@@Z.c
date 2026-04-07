/*
 * XREFs of ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001A280
 * Callers:
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x18001D1DC (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?Initialize@CTopLevelWindow@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x18002ABF0 (-Initialize@CTopLevelWindow@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CAtlasedRectsVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180021E20 (-Initialize@CAtlasedRectsVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ??0CAtlasedRectsVisual@@IEAA@XZ @ 0x180021EB0 (--0CAtlasedRectsVisual@@IEAA@XZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C850 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelAtlasedRectsVisual::Create(struct IDwmChannel *a1, struct CTopLevelAtlasedRectsVisual **a2)
{
  void *(*v4)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  CAtlasedRectsVisual *v5; // rax
  CAtlasedRectsVisual *v6; // rbx
  __int64 (__fastcall *v7)(CAtlasedRectsVisual *__hidden, struct IDwmChannel *); // rax
  int v8; // eax
  unsigned int v9; // edi

  if ( !a2 )
  {
    v9 = -2147024809;
LABEL_17:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x20u);
    return v9;
  }
  v4 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v4 == WPF::ProcessHeapImpl::AllocClear )
    v5 = (CAtlasedRectsVisual *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x118uLL);
  else
    v5 = (CAtlasedRectsVisual *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v4)(
                                  WPF::g_pProcessHeap,
                                  280LL);
  v6 = v5;
  if ( v5 )
  {
    CAtlasedRectsVisual::CAtlasedRectsVisual(v5);
    *(_QWORD *)v6 = &CTopLevelAtlasedRectsVisual::`vftable';
  }
  if ( !v6 )
  {
    v9 = -2147024882;
    goto LABEL_17;
  }
  v7 = *(__int64 (__fastcall **)(CAtlasedRectsVisual *__hidden, struct IDwmChannel *))(*(_QWORD *)v6 + 8LL);
  if ( v7 == CAtlasedRectsVisual::Initialize )
    v8 = CAtlasedRectsVisual::Initialize(v6, a1);
  else
    v8 = v7(v6, a1);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x20u);
  }
  else
  {
    *a2 = v6;
    v6 = 0LL;
  }
  if ( v6 )
    CBaseObject::Release(v6);
  return v9;
}
