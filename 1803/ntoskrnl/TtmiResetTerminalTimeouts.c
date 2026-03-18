/*
 * XREFs of TtmiResetTerminalTimeouts @ 0x140771D4C
 * Callers:
 *     TtmpDisplayBurstPowerSettingCallback @ 0x140653570 (TtmpDisplayBurstPowerSettingCallback.c)
 *     TtmNotifyDeviceInput @ 0x140770870 (TtmNotifyDeviceInput.c)
 *     TtmNotifyConsoleUserPresent @ 0x140772CD8 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifySessionDisplayBurst @ 0x140772DE4 (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionTerminalInput @ 0x140773034 (TtmNotifySessionTerminalInput.c)
 * Callees:
 *     TtmiSetPendingOnOffRequest @ 0x140771F2C (TtmiSetPendingOnOffRequest.c)
 */

char __fastcall TtmiResetTerminalTimeouts(int a1, __int64 a2, int a3, int a4, char a5)
{
  int v5; // eax
  int v6; // r9d

  *(_QWORD *)(a2 + 72) = MEMORY[0xFFFFF78000000008];
  v5 = *(_DWORD *)(a2 + 36);
  if ( (v5 == 3 || !a5) && v5 != 2 )
    return 0;
  v6 = a3;
  LOBYTE(a3) = 1;
  TtmiSetPendingOnOffRequest(a1, a2, a3, v6, a4);
  return 1;
}
