/*
 * XREFs of ?EnvironmentChanged@CPTPProcessor@@SAXXZ @ 0x1C0012E60
 * Callers:
 *     UpdateTPCurrentActiveState @ 0x1C0012E20 (UpdateTPCurrentActiveState.c)
 * Callees:
 *     ?EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z @ 0x1C000EFE0 (-EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z.c)
 */

void CPTPProcessor::EnvironmentChanged(void)
{
  if ( gpHidInput )
  {
    if ( CBaseInput::_sessionInitialized )
      CBaseInput::EnumDevices(
        gpHidInput,
        0LL,
        (unsigned __int8 (__fastcall *)(struct DEVICEINFO *, void *))lambda_9809129e8e2c8ffa8590d024b20886a2_::_lambda_invoker_cdecl_);
  }
}
