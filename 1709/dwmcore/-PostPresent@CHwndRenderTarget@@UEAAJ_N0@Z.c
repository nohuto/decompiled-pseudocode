/*
 * XREFs of ?PostPresent@CHwndRenderTarget@@UEAAJ_N0@Z @ 0x180018550
 * Callers:
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x1800AB6B0 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z @ 0x18002BF40 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::PostPresent(CHwndRenderTarget *this, char a2, bool a3)
{
  CHwDisplayRenderTarget *v3; // r9
  unsigned __int64 v5; // rdx
  void (*v6)(CHwDisplayRenderTarget *__hidden, unsigned __int64, bool); // rax

  v3 = (CHwDisplayRenderTarget *)*((_QWORD *)this + 7);
  *((_BYTE *)this + 749) = 0;
  if ( v3 && (!a2 || *(_DWORD *)(*((_QWORD *)this - 6) + 1160LL) == 3) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this - 6) + 360LL);
    v6 = *(void (**)(CHwDisplayRenderTarget *__hidden, unsigned __int64, bool))(*(_QWORD *)v3 + 200LL);
    if ( v6 == CHwDisplayRenderTarget::AdvanceFrame )
      CHwDisplayRenderTarget::AdvanceFrame(v3, v5, a3);
    else
      ((void (__fastcall *)(CHwDisplayRenderTarget *, unsigned __int64))v6)(v3, v5);
  }
  return 0LL;
}
