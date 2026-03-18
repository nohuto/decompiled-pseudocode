/*
 * XREFs of ?SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C0221980
 * Callers:
 *     ?SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C021C6A0 (-SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@.c)
 *     ?OnTimerNotification@InteractiveControlDevice@@QEAAJXZ @ 0x1C0221494 (-OnTimerNotification@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C0221524 (-PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0112544 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?SendHapticFeedbackOutput@SimpleHapticsController@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C0224B50 (-SendHapticFeedbackOutput@SimpleHapticsController@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 */

__int64 __fastcall InteractiveControlDevice::SendHapticFeedbackOutput(
        InteractiveControlDevice *this,
        const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *a2)
{
  unsigned int v4; // ebx
  SimpleHapticsController *v5; // rcx

  v4 = 0;
  if ( *((_DWORD *)InteractiveControlManager::Instance() + 25) )
  {
    v5 = (SimpleHapticsController *)*((_QWORD *)this + 48);
    if ( v5 )
      return (unsigned int)SimpleHapticsController::SendHapticFeedbackOutput(v5, a2);
  }
  return v4;
}
