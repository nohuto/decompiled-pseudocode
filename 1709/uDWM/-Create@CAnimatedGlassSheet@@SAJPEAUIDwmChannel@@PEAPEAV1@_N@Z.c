/*
 * XREFs of ?Create@CAnimatedGlassSheet@@SAJPEAUIDwmChannel@@PEAPEAV1@_N@Z @ 0x18007DEB4
 * Callers:
 *     ?EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ @ 0x18007F31C (-EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ.c)
 * Callees:
 *     ??0CAtlasedRectsVisual@@IEAA@XZ @ 0x180024440 (--0CAtlasedRectsVisual@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x18007DFB0 (-Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 */

__int64 __fastcall CAnimatedGlassSheet::Create(struct IDwmChannel *a1, struct CAnimatedGlassSheet **a2)
{
  CAtlasedRectsVisual *v4; // rax
  CAnimatedGlassSheet *v5; // rbx
  unsigned int v6; // edi
  int v7; // eax

  v4 = (CAtlasedRectsVisual *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 16LL))(
                                WPF::g_pProcessHeap,
                                496LL);
  v5 = v4;
  if ( v4 )
  {
    CAtlasedRectsVisual::CAtlasedRectsVisual(v4);
    *(_QWORD *)v5 = &CAnimatedGlassSheet::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v7 = CAnimatedGlassSheet::Initialize(v5, a1, 1);
    v6 = v7;
    if ( v7 >= 0 )
    {
      *a2 = v5;
      v5 = 0LL;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x36u);
    }
    if ( v5 )
      CBaseObject::Release(v5);
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x34u);
  }
  return v6;
}
