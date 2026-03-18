/*
 * XREFs of IPostQuitMessage @ 0x1C00FE028
 * Callers:
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 *     xxxSwitchDesktop @ 0x1C00B8B10 (xxxSwitchDesktop.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x1C00FDE70 (-TerminateDesktopThreads@@YAXXZ.c)
 *     _PostQuitMessage @ 0x1C00FE010 (_PostQuitMessage.c)
 * Callees:
 *     SetWakeBit @ 0x1C004C3B0 (SetWakeBit.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     LogQMsg @ 0x1C01B2438 (LogQMsg.c)
 */

__int64 __fastcall IPostQuitMessage(__int64 a1, int a2)
{
  __int64 v3; // rdi
  _QWORD v5[21]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = a2;
  if ( gMsgQLog )
  {
    memset(v5, 0, 0xA0uLL);
    v5[2] = 0LL;
    v5[5] = 0LL;
    LODWORD(v5[3]) = 18;
    v5[4] = v3;
    LogQMsg(v5);
  }
  EtwTraceWakePump(a1, 0LL, 18LL);
  *(_DWORD *)(a1 + 440) |= 0x40000000u;
  *(_DWORD *)(a1 + 504) = v3;
  SetWakeBit(a1, 0x108u);
  return 1LL;
}
