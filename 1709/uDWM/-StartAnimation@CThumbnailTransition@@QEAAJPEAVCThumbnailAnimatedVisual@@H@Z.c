/*
 * XREFs of ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x18009CDE8
 * Callers:
 *     ?_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z @ 0x18000F7D4 (-_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x18002D588 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x18002D918 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x18002DFB0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180030830 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?_CleanupAnimation@CThumbnailTransition@@AEAAXXZ @ 0x18009CF88 (-_CleanupAnimation@CThumbnailTransition@@AEAAXXZ.c)
 */

__int64 __fastcall CThumbnailTransition::StartAnimation(
        CThumbnailTransition *this,
        struct CThumbnailAnimatedVisual *a2)
{
  CAnimationEngine *v4; // rax
  CAnimationEngine *v5; // rdi
  int v6; // ebx
  int v7; // eax
  __int64 v8; // rax
  int started; // eax
  struct IAnimatedVisual *v11; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *((_QWORD *)this + 3) = a2;
  if ( a2 )
    (*(void (__fastcall **)(char *))(*((_QWORD *)a2 + 35) + 264LL))((char *)a2 + 280);
  v4 = CDesktopManager::AcquireAnimationEngine();
  v5 = v4;
  if ( !v4 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Cu);
LABEL_15:
    CThumbnailTransition::_CleanupAnimation(this);
    goto LABEL_16;
  }
  v7 = CAnimationEngine::RegisterForAnimationCompleteNotification(v4, (CThumbnailTransition *)((char *)this + 16));
  v6 = v7;
  if ( v7 >= 0 )
  {
    v8 = *((_QWORD *)this + 3);
    if ( v8 )
      v11 = (struct IAnimatedVisual *)(v8 + 280);
    else
      v11 = 0LL;
    started = CAnimationEngine::ScheduleStartAnimation(v5, 62, &v11, 1u, (unsigned int *)this + 8);
    v6 = started;
    if ( started >= 0 )
      *((_BYTE *)this + 36) = 1;
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x23u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x1Du);
  }
  if ( v6 < 0 )
    goto LABEL_15;
LABEL_16:
  if ( v5 )
    CAnimationEngine::Release(v5);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return (unsigned int)v6;
}
