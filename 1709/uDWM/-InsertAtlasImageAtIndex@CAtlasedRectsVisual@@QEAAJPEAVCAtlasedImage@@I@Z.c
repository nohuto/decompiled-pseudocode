/*
 * XREFs of ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x180024338
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180015D5C (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?Initialize@CButton@@MEAAJPEAUIDwmChannel@@@Z @ 0x180016550 (-Initialize@CButton@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x18007DFB0 (-Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCAtlasedImage@@$0A@@@QEAAJAEBQEAVCAtlasedImage@@I@Z @ 0x180030ED8 (-InsertAt@-$DynArray@PEAVCAtlasedImage@@$0A@@@QEAAJAEBQEAVCAtlasedImage@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::InsertAtlasImageAtIndex(
        CAtlasedRectsVisual *this,
        struct CAtlasedImage *a2,
        __int64 a3)
{
  int v4; // eax
  unsigned int v5; // edi
  void (__fastcall *v6)(CVisual *, int); // rax
  struct CAtlasedImage *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v4 = DynArray<CAtlasedImage *,0>::InsertAt((char *)this + 240, &v8, a3);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x73u);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)v8 + 2);
    *((_QWORD *)v8 + 10) = this;
    v6 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)this + 24LL);
    if ( v6 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 0x2000);
    else
      v6(this, 0x2000);
  }
  return v5;
}
