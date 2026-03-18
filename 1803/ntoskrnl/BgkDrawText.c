/*
 * XREFs of BgkDrawText @ 0x14083F6EC
 * Callers:
 *     NtDrawText @ 0x1402B7650 (NtDrawText.c)
 * Callees:
 *     BgDisplayString @ 0x14083F84C (BgDisplayString.c)
 */

__int64 BgkDrawText()
{
  if ( byte_1403CDD5C && byte_1403CDD5D )
    return BgDisplayString();
  else
    return 3221225473LL;
}
