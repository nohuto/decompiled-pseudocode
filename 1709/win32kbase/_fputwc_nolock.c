/*
 * XREFs of _fputwc_nolock @ 0x1C00A8DA0
 * Callers:
 *     write_char @ 0x1C00A82BC (write_char.c)
 * Callees:
 *     ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers @ 0x1C001AB40 (ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers.c)
 *     _flswbuf @ 0x1C00A8F98 (_flswbuf.c)
 */

wint_t __cdecl fputwc_nolock(wchar_t Ch, FILE *File)
{
  wint_t result; // ax
  bool v3; // sf

  if ( File )
  {
    v3 = File->_cnt - 2 < 0;
    File->_cnt -= 2;
    if ( v3 )
    {
      return flswbuf(Ch);
    }
    else
    {
      *(_WORD *)File->_ptr = Ch;
      result = Ch;
      File->_ptr += 2;
    }
  }
  else
  {
    ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers(0LL);
    return -1;
  }
  return result;
}
