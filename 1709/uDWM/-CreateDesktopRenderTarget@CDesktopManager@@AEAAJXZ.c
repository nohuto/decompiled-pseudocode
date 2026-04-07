/*
 * XREFs of ?CreateDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x18003B784
 * Callers:
 *     ?StartupEnd@CWindowList@@AEAAJXZ @ 0x18003D1BC (-StartupEnd@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?CreateRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180017690 (-CreateRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x180027E80 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180027F4C (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateDcompDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x18003B860 (-CreateDcompDesktopRenderTarget@CDesktopManager@@AEAAJXZ.c)
 *     ?SetRenderTargetForDesktops@CWindowList@@QEAAXPEAUIDCompositionDesktopTargetPartner@@@Z @ 0x18003D64C (-SetRenderTargetForDesktops@CWindowList@@QEAAXPEAUIDCompositionDesktopTargetPartner@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::CreateDesktopRenderTarget(struct IDCompositionDesktopTargetPartner **this)
{
  int DcompDesktopRenderTarget; // eax
  unsigned int v3; // ebx
  CWindowList *v4; // rbx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // eax
  int RenderTargets; // eax
  unsigned __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  DcompDesktopRenderTarget = CDesktopManager::CreateDcompDesktopRenderTarget((CDesktopManager *)this);
  v3 = DcompDesktopRenderTarget;
  if ( DcompDesktopRenderTarget < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DcompDesktopRenderTarget, 0x4E1u);
  }
  else
  {
    GetDesktopID(1LL, &v11);
    v4 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 57);
    RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(v4, v11);
    CWindowList::BringDesktopToFront(v4, RenderTargetRootVisualForDesktop);
    v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 57) + 80LL) + 16LL);
    if ( v6 )
      v7 = *(unsigned int *)(v6 + 24);
    else
      v7 = 0LL;
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(**((_QWORD **)this[17] + 2) + 432LL))(
           *((_QWORD *)this[17] + 2),
           *((unsigned int *)this[17] + 6),
           v7,
           0LL);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x4EAu);
    }
    else
    {
      CWindowList::SetRenderTargetForDesktops(
        *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 57),
        this[9]);
      RenderTargets = CDesktopManager::CreateRenderTargets((CDesktopManager *)this);
      v3 = RenderTargets;
      if ( RenderTargets < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RenderTargets, 0x4EEu);
    }
  }
  return v3;
}
