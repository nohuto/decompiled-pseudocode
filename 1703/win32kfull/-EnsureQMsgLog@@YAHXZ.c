/*
 * XREFs of ?EnsureQMsgLog@@YAHXZ @ 0x1C01B1F80
 * Callers:
 *     ?InitLogQMsg@@YAXXZ @ 0x1C0117684 (-InitLogQMsg@@YAXXZ.c)
 *     LogQMsg @ 0x1C01B2438 (LogQMsg.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 EnsureQMsgLog(void)
{
  if ( !qword_1C032A830 )
  {
    if ( gMsgQLog )
    {
      qword_1C032A830 = Win32AllocPool(688LL * (unsigned int)dword_1C032A820, 1819374421LL);
      if ( !qword_1C032A830 )
        memset(&gMsgQLog, 0, 0x28uLL);
    }
  }
  return (unsigned int)gMsgQLog;
}
