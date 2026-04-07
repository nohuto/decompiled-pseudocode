/*
 * XREFs of ?UpdateCaptureControllerCaptureState@CProjectionBorderManager@@UEAAJPEAUHWND__@@_N@Z @ 0x18007D7F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??$UpdateCaptureControllerCaptureState@AEAPEAUHWND__@@AEA_N@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@AEA_N@Z @ 0x18007AB60 (--$UpdateCaptureControllerCaptureState@AEAPEAUHWND__@@AEA_N@WindowFrameLoggingTelemetry@@SAXAEAP.c)
 *     ?_PauseOrResumeWindowCapture@CProjectionBorderManager@@AEAAJI_N@Z @ 0x18007E988 (-_PauseOrResumeWindowCapture@CProjectionBorderManager@@AEAAJI_N@Z.c)
 */

int __fastcall CProjectionBorderManager::UpdateCaptureControllerCaptureState(
        CProjectionBorderManager *this,
        HWND a2,
        bool a3)
{
  unsigned int v5; // ebx
  HWND *v6; // rax
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+40h] [rbp+8h] BYREF
  PVOID RestartKey; // [rsp+48h] [rbp+10h] BYREF
  bool v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  RestartKey = a2;
  WindowFrameLoggingTelemetry::UpdateCaptureControllerCaptureState<HWND__ * &,bool &>(
    (__int64 *)&RestartKey,
    (__int64)&v10);
  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = 0;
  RestartKey = 0LL;
  while ( 1 )
  {
    v6 = (HWND *)RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 440), &RestartKey);
    if ( !v6 )
      break;
    if ( v6[2] == a2 )
    {
      v5 = *((_DWORD *)v6 + 2);
      break;
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return CProjectionBorderManager::_PauseOrResumeWindowCapture(this, v5, v10);
}
