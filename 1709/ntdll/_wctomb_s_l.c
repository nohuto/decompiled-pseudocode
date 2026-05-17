/*
 * XREFs of _wctomb_s_l @ 0x18009A8C8
 * Callers:
 *     wctomb_s @ 0x18009A97C (wctomb_s.c)
 * Callees:
 *     RtlUnicodeToMultiByteN @ 0x18002E8B0 (RtlUnicodeToMultiByteN.c)
 *     _errno @ 0x1800875E0 (_errno.c)
 *     _invalid_parameter @ 0x180090BC0 (_invalid_parameter.c)
 */

errno_t __cdecl wctomb_s_l(int *SizeConverted, char *MbCh, size_t SizeInBytes, wchar_t WCh, _locale_t Locale)
{
  int v7; // [rsp+48h] [rbp+10h] BYREF
  wchar_t v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = WCh;
  if ( MbCh || !SizeInBytes )
  {
    if ( SizeConverted )
      *SizeConverted = -1;
    if ( SizeInBytes > 0x7FFFFFFF )
    {
      invalid_parameter();
      return 22;
    }
    if ( MbCh )
    {
      if ( (int)RtlUnicodeToMultiByteN(MbCh, SizeInBytes, (unsigned int *)&v7, &v8, 2u) < 0 )
      {
        *errno() = 42;
        return *errno();
      }
      if ( SizeConverted )
        *SizeConverted = v7;
    }
    else if ( SizeConverted )
    {
      *SizeConverted = _mb_cur_max;
    }
  }
  else if ( SizeConverted )
  {
    *SizeConverted = 0;
  }
  return 0;
}
