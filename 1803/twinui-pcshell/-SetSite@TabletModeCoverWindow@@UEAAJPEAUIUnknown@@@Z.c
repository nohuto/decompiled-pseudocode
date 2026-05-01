/*
 * XREFs of ?SetSite@TabletModeCoverWindow@@UEAAJPEAUIUnknown@@@Z @ 0x1802E2800
 * Callers:
 *     <none>
 * Callees:
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180030C68 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabletModeCoverWindow::SetSite(HWND *this, struct IUnknown *a2)
{
  char v2; // r8
  void **v5; // rax
  bool v6; // di
  void *v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  LODWORD(v8) = 0;
  v6 = 0;
  if ( !a2 )
  {
    v5 = CWRLObjectWithGITSite::SiteUnk((CWRLObjectWithGITSite *)this, &v8);
    v2 = 1;
    if ( *v5 )
      v6 = 1;
  }
  if ( (v2 & 1) != 0 )
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&v8);
  if ( v6 )
  {
    (*(void (__fastcall **)(HWND, HWND, _QWORD))(*(_QWORD *)this[24] + 24LL))(this[24], this[13], 0LL);
    DestroyWindow(this[13]);
    this[13] = 0LL;
  }
  return CWRLObjectWithGITSite::SetSite((RTL_SRWLOCK *)this, a2);
}
