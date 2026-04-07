/*
 * XREFs of ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800981E0
 * Callers:
 *     ?_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002B50 (-_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEA.c)
 *     ?CommonAnimate@CLauncherLaunch@@AEAAJPEAVCWindowData@@PEAPEAVCAnimationComponent@@@Z @ 0x180095FF8 (-CommonAnimate@CLauncherLaunch@@AEAAJPEAVCWindowData@@PEAPEAVCAnimationComponent@@@Z.c)
 *     ?_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z @ 0x18009893C (-_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800997E0 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x18009A2C0 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800057BC (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180092210 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 */

__int64 __fastcall CStoryboard::_CreateAndAddDesktopAnimationComponent(
        CStoryboard *this,
        struct CWindowData *a2,
        int a3,
        const struct tagRECT *a4,
        bool a5,
        struct CAnimationComponent **a6)
{
  char v10; // al
  int v11; // eax
  unsigned int v12; // edi
  volatile signed __int32 *v13; // rbx
  int v14; // eax
  struct CAnimationComponent *v16; // [rsp+50h] [rbp+8h] BYREF

  v16 = 0LL;
  v10 = (*(__int64 (__fastcall **)(CStoryboard *, _QWORD))(*(_QWORD *)this + 96LL))(this, *((_DWORD *)a2 + 150) & 0xFFF);
  v11 = CTransitionVisualController::CreateDesktopAnimationComponent(
          *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
          a2,
          a3,
          a4,
          a5,
          (v10 & 4) != 0,
          this,
          &v16);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v13 = (volatile signed __int32 *)v16;
    v14 = CStoryboard::_AddAnimationComponent(this, v16);
    v12 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v14, 0x14DCu);
      goto LABEL_8;
    }
    *a6 = (struct CAnimationComponent *)v13;
    if ( !v13 )
      return v12;
    _InterlockedIncrement(v13 + 2);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v11, 0x14DBu);
  }
  v13 = (volatile signed __int32 *)v16;
LABEL_8:
  if ( v13 )
    CBaseObject::Release((CBaseObject *)v13);
  return v12;
}
