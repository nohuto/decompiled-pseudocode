/*
 * XREFs of BgkQueryBootGraphicsInformation @ 0x14083B524
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 * Callees:
 *     BgQueryBootGraphicsInformation @ 0x140164DD4 (BgQueryBootGraphicsInformation.c)
 */

__int64 __fastcall BgkQueryBootGraphicsInformation(int a1, __int64 a2)
{
  if ( byte_1403CDD5C )
    return BgQueryBootGraphicsInformation(a1, a2);
  else
    return 3221225473LL;
}
