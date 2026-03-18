/*
 * XREFs of BgkDrawText @ 0x140759B5C
 * Callers:
 *     NtDrawText @ 0x140259B3C (NtDrawText.c)
 * Callees:
 *     <none>
 */

__int64 BgkDrawText()
{
  if ( byte_14036E49C && byte_14036E49D )
    return BgDisplayString();
  else
    return 3221225473LL;
}
