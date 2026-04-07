/*
 * XREFs of ?Create@CRippleEffect@@SAJPEAUIDwmChannel@@PEAPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x180087910
 * Callers:
 *     ?EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ @ 0x180087EBC (-EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CVisual@@IEAA@XZ @ 0x1800238B0 (--0CVisual@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CRippleEffect@@IEAAJPEAUIDwmChannel@@PEAPEAVCBitmapSource@@@Z @ 0x1800879EC (-Initialize@CRippleEffect@@IEAAJPEAUIDwmChannel@@PEAPEAVCBitmapSource@@@Z.c)
 */

__int64 __fastcall CRippleEffect::Create(struct IDwmChannel *a1, struct CBitmapSource **a2, struct CRippleEffect **a3)
{
  CVisual *v6; // rax
  CVisual *v7; // rbx
  unsigned int v8; // edi
  int v9; // eax

  v6 = (CVisual *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    384LL);
  v7 = v6;
  if ( v6 )
  {
    CVisual::CVisual(v6);
    *((_QWORD *)v7 + 33) = 0LL;
    *((_QWORD *)v7 + 35) = 0LL;
    *(_QWORD *)v7 = &CRippleEffect::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v9 = CRippleEffect::Initialize(v7, a1, a2);
    v8 = v9;
    if ( v9 >= 0 )
    {
      *a3 = v7;
      _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x34u);
    }
    CBaseObject::Release(v7);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x32u);
  }
  return v8;
}
