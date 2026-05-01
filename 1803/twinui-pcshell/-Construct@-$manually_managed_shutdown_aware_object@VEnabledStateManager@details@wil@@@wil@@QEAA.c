/*
 * XREFs of ?Construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x1800975C4
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001040 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::Construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  qword_180438200 = 0LL;
  SRWLock.Ptr = 0LL;
  byte_180438208 = 0;
  unk_180438210 = 0LL;
  xmmword_180438220 = 0LL;
  xmmword_180438230 = 0LL;
  xmmword_180438240 = 0LL;
  xmmword_180438250 = 0LL;
  return result;
}
