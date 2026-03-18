/*
 * XREFs of _ungetc_nolock @ 0x1401921EC
 * Callers:
 *     ReadString @ 0x1401905C4 (ReadString.c)
 *     _input_s @ 0x14019093C (_input_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14016CD90 (xHalTimerWatchdogStop.c)
 */

int __cdecl ungetc_nolock(int Ch, FILE *File)
{
  unsigned __int8 v2; // r9
  int result; // eax
  int flag; // ecx
  char *base; // rax
  char *ptr; // r8
  char *v7; // r10

  v2 = Ch;
  if ( !File )
    goto LABEL_2;
  if ( Ch == -1 )
    return -1;
  flag = File->_flag;
  if ( (flag & 1) == 0 && (flag & 0x82) != 0x80 )
    return -1;
  base = File->_base;
  if ( !base )
  {
LABEL_2:
    xHalTimerWatchdogStop();
    return -1;
  }
  ptr = File->_ptr;
  if ( File->_ptr != base )
    goto LABEL_11;
  if ( File->_cnt )
    return -1;
  File->_ptr = ++ptr;
LABEL_11:
  v7 = ptr - 1;
  File->_ptr = ptr - 1;
  if ( (flag & 0x40) != 0 )
  {
    if ( *v7 != v2 )
    {
      File->_ptr = ptr;
      return -1;
    }
  }
  else
  {
    *v7 = v2;
    flag = File->_flag;
  }
  ++File->_cnt;
  result = v2;
  File->_flag = flag & 0xFFFFFFEE | 1;
  return result;
}
