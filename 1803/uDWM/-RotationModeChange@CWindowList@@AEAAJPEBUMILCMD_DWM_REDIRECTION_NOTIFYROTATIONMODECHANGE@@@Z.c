/*
 * XREFs of ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x180085DFC
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18002A9C0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18000C028 (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?Create@CScreenRotation@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180083598 (-Create@CScreenRotation@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x180098C1C (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?Start@CScreenRotation@@QEAAJXZ @ 0x180099AF0 (-Start@CScreenRotation@@QEAAJXZ.c)
 */

__int64 __fastcall CWindowList::RotationModeChange(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE *a2)
{
  unsigned int v4; // edi
  CScreenRotation *v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = (CScreenRotation *)*((_QWORD *)this + 63);
  if ( *((_DWORD *)a2 + 1) )
  {
    if ( v5
      || (v6 = CScreenRotation::Create(
                 *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                 (struct CScreenRotation **)this + 63),
          v4 = v6,
          v6 >= 0) )
    {
      CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 28));
      v7 = *((_QWORD *)this + 66);
      if ( v7 && *(_BYTE *)(v7 + 68) )
        (**(void (__fastcall ***)(__int64, _QWORD))v7)(v7, *(unsigned int *)(v7 + 64));
      v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
      v4 = v8;
      if ( v8 >= 0 )
      {
        v9 = CScreenRotation::Capture(*((CScreenRotation **)this + 63));
        v4 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x172Cu);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x172Au);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x1721u);
    }
  }
  else if ( v5 && *((_QWORD *)v5 + 3) )
  {
    CScreenRotation::Start(v5);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v4;
}
