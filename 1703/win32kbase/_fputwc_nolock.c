/*
 * XREFs of _fputwc_nolock @ 0x1C009F114
 * Callers:
 *     write_char @ 0x1C009E5B0 (write_char.c)
 * Callees:
 *     ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers @ 0x1C0095640 (ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers.c)
 */

wint_t __cdecl fputwc_nolock(wchar_t Ch, FILE *File)
{
  wint_t result; // ax
  int v3; // eax

  if ( File )
  {
    v3 = File->_cnt - 2;
    File->_cnt = v3;
    if ( v3 < 0 )
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
    ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers();
    return -1;
  }
  return result;
}
