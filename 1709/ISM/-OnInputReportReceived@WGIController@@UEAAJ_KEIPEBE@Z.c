/*
 * XREFs of ?OnInputReportReceived@WGIController@@UEAAJ_KEIPEBE@Z @ 0x1800A0FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyCurrentGamepadReading@WGIController@@AEAAJXZ @ 0x1800A0FF4 (-NotifyCurrentGamepadReading@WGIController@@AEAAJXZ.c)
 */

__int64 __fastcall WGIController::OnInputReportReceived(WGIController *this)
{
  WGIController::NotifyCurrentGamepadReading((WGIController *)((char *)this - 32));
  return 0LL;
}
