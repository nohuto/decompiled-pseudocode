/*
 * XREFs of IPostQuitMessage @ 0x1C00D7230
 * Callers:
 *     xxxSwitchDesktop @ 0x1C005089C (xxxSwitchDesktop.c)
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x1C00D7100 (-TerminateDesktopThreads@@YAXXZ.c)
 *     _PostQuitMessage @ 0x1C00D7210 (_PostQuitMessage.c)
 * Callees:
 *     SetWakeBit @ 0x1C00A0D10 (SetWakeBit.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     LogQMsg @ 0x1C01B54C0 (LogQMsg.c)
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
  *(_DWORD *)(a1 + 464) |= 0x40000000u;
  *(_DWORD *)(a1 + 560) = v3;
  SetWakeBit(a1, 264LL);
  return 1LL;
}
