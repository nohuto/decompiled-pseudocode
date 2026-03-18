/*
 * XREFs of _ungetwc_nolock @ 0x14017395C
 * Callers:
 *     ReadString_0 @ 0x140172A08 (ReadString_0.c)
 *     _winput_s @ 0x140172EA8 (_winput_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14014A440 (xHalTimerWatchdogStop.c)
 */

wint_t __cdecl ungetwc_nolock(wint_t Ch, FILE *File)
{
  int flag; // r9d
  char *v4; // rax
  char *ptr; // rax
  int v6; // eax

  if ( !File )
  {
    xHalTimerWatchdogStop();
    return -1;
  }
  if ( Ch == 0xFFFF )
    return -1;
  flag = File->_flag;
  if ( (flag & 1) == 0 && (flag & 0x82) != 0x80 )
    return -1;
  v4 = File->_base + 2;
  if ( File->_ptr < v4 )
  {
    if ( File->_cnt || File->_bufsiz < 2u )
      return -1;
    File->_ptr = v4;
  }
  File->_ptr -= 2;
  ptr = File->_ptr;
  if ( (flag & 0x40) != 0 )
  {
    if ( *(_WORD *)ptr != Ch )
    {
      File->_ptr = ptr + 2;
      return -1;
    }
  }
  else
  {
    *(_WORD *)ptr = Ch;
  }
  v6 = File->_flag;
  File->_cnt += 2;
  File->_flag = v6 & 0xFFFFFFEE | 1;
  return Ch;
}
