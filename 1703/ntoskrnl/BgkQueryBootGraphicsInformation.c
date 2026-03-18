/*
 * XREFs of BgkQueryBootGraphicsInformation @ 0x140757760
 * Callers:
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgkQueryBootGraphicsInformation(int a1, __int64 a2)
{
  if ( byte_14036E49C )
    return BgQueryBootGraphicsInformation(a1, a2);
  else
    return 3221225473LL;
}
