/*
 * XREFs of _CSwitchController::_GetMonitorForAppSwitch_::_1_::dtor$0 @ 0x1802B24FD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwitchController::_GetMonitorForAppSwitch_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IOSTaskCompletion>::~ComPtr<IOSTaskCompletion>((__int64 *)(a2 + 48));
}
