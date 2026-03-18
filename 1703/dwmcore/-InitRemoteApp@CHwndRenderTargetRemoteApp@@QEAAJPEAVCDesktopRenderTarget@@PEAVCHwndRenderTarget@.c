/*
 * XREFs of ?InitRemoteApp@CHwndRenderTargetRemoteApp@@QEAAJPEAVCDesktopRenderTarget@@PEAVCHwndRenderTarget@@PEAVCRemoteApplicationWindow@@@Z @ 0x180155BB4
 * Callers:
 *     ?EnsureRemoteAppRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18006AAAC (-EnsureRemoteAppRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ??$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z @ 0x18001FC90 (--$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z.c)
 *     ??$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z @ 0x1800CA568 (--$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTargetRemoteApp::InitRemoteApp(
        CHwndRenderTargetRemoteApp *this,
        struct CDesktopRenderTarget *a2,
        struct CHwndRenderTarget *a3,
        struct CRemoteApplicationWindow *a4)
{
  void (__fastcall ***v5)(_QWORD); // rcx
  __int64 v8; // rax

  *((_QWORD *)this + 17) = a2;
  v5 = (void (__fastcall ***)(_QWORD))*((_QWORD *)a3 + 14);
  *((_QWORD *)this + 14) = v5;
  if ( v5 )
    (**v5)(v5);
  *((_DWORD *)this + 98) = *((_DWORD *)a3 + 98) & 0xFFFFFFEF;
  *((_DWORD *)this + 93) = *((_DWORD *)a3 + 93);
  ReplaceInterface<IRenderTargetDisplay,IRenderTargetDisplay>((__int64 *)this + 15, *((_QWORD *)a3 + 15));
  *((_QWORD *)this + 104) = a4;
  (**(void (__fastcall ***)(struct CRemoteApplicationWindow *))a4)(a4);
  *(_OWORD *)((char *)this + 152) = *(_OWORD *)((char *)a3 + 152);
  *(_OWORD *)((char *)this + 168) = *(_OWORD *)((char *)a3 + 168);
  *(_OWORD *)((char *)this + 184) = *(_OWORD *)((char *)a3 + 184);
  *(_OWORD *)((char *)this + 200) = *(_OWORD *)((char *)a3 + 200);
  *(_OWORD *)((char *)this + 216) = *(_OWORD *)((char *)a3 + 216);
  *(_OWORD *)((char *)this + 232) = *(_OWORD *)((char *)a3 + 232);
  *(_OWORD *)((char *)this + 248) = *(_OWORD *)((char *)a3 + 248);
  *(_OWORD *)((char *)this + 264) = *(_OWORD *)((char *)a3 + 264);
  *(_OWORD *)((char *)this + 280) = *(_OWORD *)((char *)a3 + 280);
  *(_OWORD *)((char *)this + 296) = *(_OWORD *)((char *)a3 + 296);
  *(_OWORD *)((char *)this + 312) = *(_OWORD *)((char *)a3 + 312);
  *(_OWORD *)((char *)this + 328) = *(_OWORD *)((char *)a3 + 328);
  *(_OWORD *)((char *)this + 344) = *(_OWORD *)((char *)a3 + 344);
  v8 = *((_QWORD *)a3 + 45);
  *((_DWORD *)this + 101) = 0;
  *((_DWORD *)this + 100) = 0;
  *((_DWORD *)this + 99) = 0;
  *((_DWORD *)this + 102) = 0;
  *((_QWORD *)this + 45) = v8;
  *((_BYTE *)this + 787) = 0;
  ReplaceInterface<IDXGIResource,IDXGIResource>((__int64 *)this + 105, (__int64)a3);
  return 0LL;
}
