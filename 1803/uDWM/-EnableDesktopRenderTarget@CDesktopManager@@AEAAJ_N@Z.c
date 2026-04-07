/*
 * XREFs of ?EnableDesktopRenderTarget@CDesktopManager@@AEAAJ_N@Z @ 0x18004A270
 * Callers:
 *     ?EnableDesktopTarget@CDesktopManager@@SAJ_N@Z @ 0x18004A470 (-EnableDesktopTarget@CDesktopManager@@SAJ_N@Z.c)
 * Callees:
 *     ?SetRenderTargetForDesktops@CWindowList@@QEAAXPEAUIDCompositionDesktopTargetPartner@@@Z @ 0x18002719C (-SetRenderTargetForDesktops@CWindowList@@QEAAXPEAUIDCompositionDesktopTargetPartner@@@Z.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x180027234 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180027300 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x180027320 (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180032598 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180049FF4 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18004B0D8 (-ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::EnableDesktopRenderTarget(CDesktopManager *this, char a2)
{
  CDesktopManager *v2; // rdi
  unsigned int v3; // ebx
  int v5; // eax
  CWindowList *v6; // rbx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // eax
  int MonitorRenderTargets; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  unsigned __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v17 = (unsigned __int64)this;
  v2 = CDesktopManager::s_pDesktopManagerInstance;
  v3 = 0;
  if ( a2 != *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 16) )
  {
    if ( a2 )
    {
      GetDesktopID(1LL, &v17);
      v5 = CDesktopManager::SendSwitchModeCommand(v17);
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x57Du);
        return v3;
      }
      v6 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 56);
      RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(v6, v17);
      CWindowList::BringDesktopToFront(v6, RenderTargetRootVisualForDesktop);
      v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 56) + 80LL) + 16LL);
      if ( v8 )
        v9 = *(unsigned int *)(v8 + 24);
      else
        v9 = 0LL;
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(**(_QWORD **)(*((_QWORD *)v2 + 17) + 16LL)
                                                                       + 448LL))(
              *(_QWORD *)(*((_QWORD *)v2 + 17) + 16LL),
              *(unsigned int *)(*((_QWORD *)v2 + 17) + 24LL),
              v9,
              0LL);
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x584u);
        return v3;
      }
      CWindowList::SetRenderTargetForDesktops(
        *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56),
        *((struct IDCompositionDesktopTargetPartner **)v2 + 9));
      MonitorRenderTargets = CDesktopManager::CreateMonitorRenderTargets(v2);
      v3 = MonitorRenderTargets;
      if ( MonitorRenderTargets < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, MonitorRenderTargets, 0x588u);
        return v3;
      }
      CWindowList::CreateOrDestroyDesktopWindowReplacementForDesktops(
        *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56),
        1);
      v12 = DwmRedirectionManagerSetClientRenderTarget(
              *(struct IDwmChannel **)(*((_QWORD *)v2 + 8) + 16LL),
              *(_DWORD *)(*((_QWORD *)v2 + 8) + 24LL));
      v3 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x58Fu);
        return v3;
      }
    }
    else
    {
      CWindowList::SetRenderTargetForDesktops(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56), 0LL);
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)v2 + 8) + 16LL) + 736LL))(
              *(_QWORD *)(*((_QWORD *)v2 + 8) + 16LL),
              *(unsigned int *)(*((_QWORD *)v2 + 8) + 24LL),
              0LL);
      v3 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x59Bu);
        return v3;
      }
      v14 = CDesktopManager::ReleaseMonitorRenderTargets(v2);
      v3 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x59Du);
        return v3;
      }
      CWindowList::CreateOrDestroyDesktopWindowReplacementForDesktops(
        *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56),
        0);
      v15 = DwmRedirectionManagerSetClientRenderTarget(0LL, 0);
      v3 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x5A5u);
        return v3;
      }
    }
    *((_BYTE *)v2 + 16) = a2;
  }
  return v3;
}
