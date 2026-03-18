/*
 * XREFs of _fgetwc_nolock @ 0x140173904
 * Callers:
 *     ReadString_0 @ 0x140172A08 (ReadString_0.c)
 *     _whiteout @ 0x140172E50 (_whiteout.c)
 *     _winput_s @ 0x140172EA8 (_winput_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14014A440 (xHalTimerWatchdogStop.c)
 */

wint_t __cdecl fgetwc_nolock(FILE *File)
{
  wint_t result; // ax
  int v3; // eax
  char *ptr; // rcx

  if ( File )
  {
    v3 = File->_cnt - 2;
    File->_cnt = v3;
    if ( v3 < 0 )
    {
      return filwbuf_s(File, File);
    }
    else
    {
      ptr = File->_ptr;
      result = *(_WORD *)ptr;
      File->_ptr = ptr + 2;
    }
  }
  else
  {
    xHalTimerWatchdogStop();
    return -1;
  }
  return result;
}
