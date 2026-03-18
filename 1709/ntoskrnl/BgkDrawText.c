/*
 * XREFs of BgkDrawText @ 0x1407D2C7C
 * Callers:
 *     NtDrawText @ 0x140283894 (NtDrawText.c)
 * Callees:
 *     BgDisplayString @ 0x1407D2DDC (BgDisplayString.c)
 */

__int64 BgkDrawText()
{
  if ( byte_140389F20 && byte_140389F22 )
    return BgDisplayString();
  else
    return 3221225473LL;
}
