/*
 * XREFs of ??1?$shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAA@XZ @ 0x18004517C
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x180046E40 (wil--details--_dynamic_atexit_destructor_for__g_enabledStateManager__.c)
 * Callees:
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x1800318F0 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 */

void __fastcall wil::shutdown_aware_object<wil::details::EnabledStateManager>::~shutdown_aware_object<wil::details::EnabledStateManager>(
        wil *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  unsigned int v3; // r9d

  if ( wil::ProcessShutdownInProgress(a1) )
  {
    wil::details::g_enabledStateManager = 0;
    wil::details::EnabledStateManager::RecordCachedUsageUnderLock(
      (wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager,
      v1,
      v2,
      v3);
  }
  else
  {
    wil::details::EnabledStateManager::`scalar deleting destructor'(
      (wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager,
      v1);
  }
}
