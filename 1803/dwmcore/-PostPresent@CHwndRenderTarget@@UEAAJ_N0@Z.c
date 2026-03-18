/*
 * XREFs of ?PostPresent@CHwndRenderTarget@@UEAAJ_N0@Z @ 0x180060C30
 * Callers:
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x18002E2A8 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_N@Z @ 0x180046970 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::PostPresent(CHwndRenderTarget *this, char a2, char a3)
{
  CHwDisplayRenderTarget *v4; // rcx
  void (__fastcall *v5)(CHwDisplayRenderTarget *, char); // rax
  void (__fastcall *v6)(CHwDisplayRenderTarget *, char); // rdx

  *((_BYTE *)this + 793) = 0;
  v4 = (CHwDisplayRenderTarget *)*((_QWORD *)this + 14);
  if ( v4 && (!a2 || *(int *)(*((_QWORD *)this - 6) + 1184LL) >= 3) )
  {
    v6 = CHwDisplayRenderTarget::AdvanceFrame;
    v5 = *(void (__fastcall **)(CHwDisplayRenderTarget *, char))(*(_QWORD *)v4 + 248LL);
    LOBYTE(v6) = a3;
    if ( v5 == CHwDisplayRenderTarget::AdvanceFrame )
      CHwDisplayRenderTarget::AdvanceFrame(v4, a3);
    else
      v5(v4, (char)v6);
  }
  return 0LL;
}
