/*
 * XREFs of ?HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z @ 0x18007BB58
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002B020 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18000D8F4 (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?Create@CScreenRotation@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18007A220 (-Create@CScreenRotation@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x18009046C (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?Start@CScreenRotation@@QEAAJXZ @ 0x180091358 (-Start@CScreenRotation@@QEAAJXZ.c)
 *     ?UpdateAngle@CScreenRotation@@QEAAXHH@Z @ 0x180091518 (-UpdateAngle@CScreenRotation@@QEAAXHH@Z.c)
 */

__int64 __fastcall CWindowList::HandleHardwareExpressionActivation(CWindowList *this, int a2)
{
  CScreenRotation **v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  CScreenRotation *v8; // rdx
  int v9; // eax
  int v10; // eax
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = (CScreenRotation **)((char *)this + 512);
  if ( *v4
    || (v5 = CScreenRotation::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4), v4),
        v6 = v5,
        v5 >= 0) )
  {
    CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 28));
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
    v6 = v7;
    if ( v7 >= 0 )
    {
      v8 = *v4;
      *((_DWORD *)v8 + 94) = 1065353216;
      *((float *)v8 + 91) = GammaLUT_sRGB_to_scRGB[(unsigned __int8)a2] / 255.0;
      *((float *)v8 + 92) = GammaLUT_sRGB_to_scRGB[BYTE1(a2)] / 255.0;
      *((float *)v8 + 93) = GammaLUT_sRGB_to_scRGB[BYTE2(a2)] / 255.0;
      v9 = CScreenRotation::Capture(*v4);
      v6 = v9;
      if ( v9 >= 0 )
      {
        CScreenRotation::UpdateAngle(*v4, 360, 360);
        v10 = CScreenRotation::Start(*v4);
        v6 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x513u);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x50Fu);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x50Cu);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x507u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v6;
}
