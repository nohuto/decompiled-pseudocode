/*
 * XREFs of ?IsDesktopVisible@CPerMonitorDesktopVisibilityService@@UEAAJPEAUIImmersiveMonitor@@PEAH@Z @ 0x18008EF20
 * Callers:
 *     ?PerformModeBasedCallouts@CApplicationManager@@UEAAXQEBUMODE_TRANSITION_INFORMATION@@@Z @ 0x180043F90 (-PerformModeBasedCallouts@CApplicationManager@@UEAAXQEBUMODE_TRANSITION_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPerMonitorDesktopVisibilityService::IsDesktopVisible(
        RTL_SRWLOCK *this,
        struct IImmersiveMonitor *a2,
        int *a3)
{
  RTL_SRWLOCK *v3; // rsi

  v3 = this + 15;
  AcquireSRWLockShared(this + 15);
  *a3 = (int)this[14].Ptr;
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return 0LL;
}
