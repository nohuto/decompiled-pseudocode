/*
 * XREFs of ?OnInputSuspended@WGIController@@UEAAJ_K@Z @ 0x1800796A0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyCurrentGamepadReading@WGIController@@AEAAJ_N@Z @ 0x180079B58 (-NotifyCurrentGamepadReading@WGIController@@AEAAJ_N@Z.c)
 */

__int64 __fastcall WGIController::OnInputSuspended(WGIController *this)
{
  WGIController::NotifyCurrentGamepadReading(this, 0);
  return 0LL;
}
