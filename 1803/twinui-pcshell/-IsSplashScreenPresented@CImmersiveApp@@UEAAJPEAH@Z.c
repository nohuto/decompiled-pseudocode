/*
 * XREFs of ?IsSplashScreenPresented@CImmersiveApp@@UEAAJPEAH@Z @ 0x18004C3D0
 * Callers:
 *     ?IsSplashScreenPresented@CWinRTApplicationView@@UEAAJPEAH@Z @ 0x18001BB00 (-IsSplashScreenPresented@CWinRTApplicationView@@UEAAJPEAH@Z.c)
 * Callees:
 *     ?GetSystemVisual@CFrameApplicationPresentation@@UEBA?AW4FRAME_SYSTEM_VISUAL@@XZ @ 0x180014940 (-GetSystemVisual@CFrameApplicationPresentation@@UEBA-AW4FRAME_SYSTEM_VISUAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::IsSplashScreenPresented(CImmersiveApp *this, int *a2)
{
  __int64 v4; // rcx
  __int64 (*v5)(void); // rax
  int SystemVisual; // eax
  RTL_SRWLOCK *v7; // rcx

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = *((_QWORD *)this + 39);
  v5 = *(__int64 (**)(void))(*(_QWORD *)v4 + 48LL);
  if ( (char *)v5 == (char *)CFrameApplicationPresentation::GetSystemVisual )
    SystemVisual = CFrameApplicationPresentation::GetSystemVisual(v4);
  else
    SystemVisual = v5();
  v7 = CApplicationManagerUtility::g_pIAMGlobals;
  *a2 = SystemVisual == 1;
  ReleaseSRWLockExclusive(v7);
  return 0LL;
}
