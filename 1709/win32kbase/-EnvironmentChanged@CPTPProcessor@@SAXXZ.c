/*
 * XREFs of ?EnvironmentChanged@CPTPProcessor@@SAXXZ @ 0x1C008D570
 * Callers:
 *     UpdateTPCurrentActiveState @ 0x1C008D530 (UpdateTPCurrentActiveState.c)
 * Callees:
 *     ?EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z @ 0x1C001A28C (-EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z.c)
 */

void __fastcall CPTPProcessor::EnvironmentChanged(CBaseInput *a1, void *a2)
{
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceObject )
  {
    if ( CBaseInput::_sessionInitialized )
      CBaseInput::EnumDevices(
        a1,
        a2,
        (bool (*)(struct DEVICEINFO *const, void *))lambda_9e8b74e3f8861f09181d3f126c379c9e_::_lambda_invoker_cdecl_);
  }
}
