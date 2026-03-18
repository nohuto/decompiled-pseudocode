/*
 * XREFs of ?EnsureQMsgLog@@YAHXZ @ 0x1C01B5138
 * Callers:
 *     ?InitLogQMsg@@YAXXZ @ 0x1C0123028 (-InitLogQMsg@@YAXXZ.c)
 *     LogQMsg @ 0x1C01B54C0 (LogQMsg.c)
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 EnsureQMsgLog(void)
{
  if ( !qword_1C0326828 )
  {
    if ( gMsgQLog )
    {
      qword_1C0326828 = Win32AllocPool(688LL * (unsigned int)dword_1C0326818, 1819374421LL);
      if ( !qword_1C0326828 )
        memset(&gMsgQLog, 0, 0x28uLL);
    }
  }
  return (unsigned int)gMsgQLog;
}
