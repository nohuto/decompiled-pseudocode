/*
 * XREFs of ?OnCaptureMonitorTerminated@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800A53F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x180077320 (WPP_SF_qq.c)
 */

void __fastcall CMonitorManager::OnCaptureMonitorTerminated(
        PTP_CALLBACK_INSTANCE Instance,
        PVOID Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Bu,
      (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids,
      Context,
      *((_QWORD *)Context + 8));
  }
  CMonitorManager::ScheduleMonitorRestartTimer(*((CMonitorManager **)Context + 7));
}
