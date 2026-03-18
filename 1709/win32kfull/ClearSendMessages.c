/*
 * XREFs of ClearSendMessages @ 0x1C0060394
 * Callers:
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 * Callees:
 *     SetWakeBit @ 0x1C00A0D10 (SetWakeBit.c)
 *     xxxInterSendMsgEx @ 0x1C00A1890 (xxxInterSendMsgEx.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 ClearSendMessages()
{
  return gsmsList;
}
