/*
 * XREFs of TtmiTerminalSetDisplayTimeouts @ 0x1406D8588
 * Callers:
 *     TtmpTerminal0PowerSettingCallback @ 0x1406D9D00 (TtmpTerminal0PowerSettingCallback.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x1406DA7AC (TtmpDispatchSetDisplayTimeouts.c)
 * Callees:
 *     TtmiLogTerminalDisplayTimeouts @ 0x1406DD39C (TtmiLogTerminalDisplayTimeouts.c)
 */

__int64 __fastcall TtmiTerminalSetDisplayTimeouts(_DWORD *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // rdx
  unsigned __int64 v7; // r10

  v5 = 10000000LL * a4;
  v7 = 10000000LL * a3;
  *(_QWORD *)(a2 + 64) = v5;
  *(_QWORD *)(a2 + 56) = v7;
  if ( v7 && v5 )
    *(_QWORD *)(a2 + 56) = v7 & -(__int64)(v7 < v5);
  TtmiLogTerminalDisplayTimeouts(*a1, *(_DWORD *)(a2 + 28), a3, a4, *(_QWORD *)(a2 + 56), 10000000LL * a4);
  *(_DWORD *)(a2 + 32) |= 4u;
  return TtmiScheduleSessionWorker(a1, 2LL);
}
