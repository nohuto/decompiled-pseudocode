/*
 * XREFs of _fputwc_nolock @ 0x1C003C424
 * Callers:
 *     write_char @ 0x1C003C2CC (write_char.c)
 * Callees:
 *     ?AddChildList@FxDeviceBase@@UEAAXPEAVFxChildList@@@Z @ 0x1C000D110 (-AddChildList@FxDeviceBase@@UEAAXPEAVFxChildList@@@Z.c)
 *     _flswbuf @ 0x1C003C550 (_flswbuf.c)
 */

int __fastcall fputwc_nolock(wchar_t ch, _iobuf *str)
{
  int result; // eax
  bool v3; // sf

  if ( str )
  {
    v3 = str->_cnt - 2 < 0;
    str->_cnt -= 2;
    if ( v3 )
    {
      return flswbuf(ch, str);
    }
    else
    {
      *(_WORD *)str->_ptr = ch;
      result = ch;
      str->_ptr += 2;
    }
  }
  else
  {
    FxDeviceBase::AddChildList(0LL);
    return 0xFFFF;
  }
  return result;
}
