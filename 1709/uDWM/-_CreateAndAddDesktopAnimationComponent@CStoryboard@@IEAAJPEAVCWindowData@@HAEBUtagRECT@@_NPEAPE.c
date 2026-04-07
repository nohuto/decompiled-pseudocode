/*
 * XREFs of ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800951E0
 * Callers:
 *     ?_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800023D0 (-_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEA.c)
 *     ?CommonAnimate@CLauncherLaunch@@AEAAJPEAVCWindowData@@PEAPEAVCAnimationComponent@@@Z @ 0x180092CE4 (-CommonAnimate@CLauncherLaunch@@AEAAJPEAVCWindowData@@PEAPEAVCAnimationComponent@@@Z.c)
 *     ?_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z @ 0x180095C40 (-_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180096D00 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800977E0 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18000465C (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008E32C (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 */

__int64 __fastcall CStoryboard::_CreateAndAddDesktopAnimationComponent(
        CStoryboard *this,
        struct CWindowData *a2,
        int a3,
        const struct tagRECT *a4,
        bool a5,
        struct CAnimationComponent **a6)
{
  __int64 v6; // rax
  int v8; // edx
  char v12; // al
  int v13; // eax
  unsigned int v14; // edi
  volatile signed __int32 *v15; // rbx
  int v16; // eax
  struct CAnimationComponent *v18; // [rsp+68h] [rbp+10h] BYREF

  v6 = *(_QWORD *)this;
  v8 = *((_DWORD *)a2 + 150);
  v18 = 0LL;
  v12 = (*(__int64 (__fastcall **)(CStoryboard *, _QWORD))(v6 + 96))(this, v8 & 0xFFF);
  v13 = CTransitionVisualController::CreateDesktopAnimationComponent(
          *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 29),
          a2,
          a3,
          a4,
          a5,
          (v12 & 4) != 0,
          this,
          &v18);
  v14 = v13;
  if ( v13 >= 0 )
  {
    v15 = (volatile signed __int32 *)v18;
    v16 = CStoryboard::_AddAnimationComponent(this, v18);
    v14 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v16, 0x14D3u);
      goto LABEL_8;
    }
    *a6 = (struct CAnimationComponent *)v15;
    if ( !v15 )
      return v14;
    _InterlockedIncrement(v15 + 2);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v13, 0x14D2u);
  }
  v15 = (volatile signed __int32 *)v18;
LABEL_8:
  if ( v15 )
    CBaseObject::Release((CBaseObject *)v15);
  return v14;
}
