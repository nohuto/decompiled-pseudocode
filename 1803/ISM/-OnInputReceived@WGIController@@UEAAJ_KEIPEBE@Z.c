/*
 * XREFs of ?OnInputReceived@WGIController@@UEAAJ_KEIPEBE@Z @ 0x180079B40
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyCurrentGamepadReading@WGIController@@AEAAJ_N@Z @ 0x180079B58 (-NotifyCurrentGamepadReading@WGIController@@AEAAJ_N@Z.c)
 */

__int64 __fastcall WGIController::OnInputReceived(WGIController *this)
{
  WGIController::NotifyCurrentGamepadReading((WGIController *)((char *)this - 40), 1);
  return 0LL;
}
