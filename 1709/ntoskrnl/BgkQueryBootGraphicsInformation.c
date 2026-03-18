/*
 * XREFs of BgkQueryBootGraphicsInformation @ 0x1407CFA58
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 * Callees:
 *     BgQueryBootGraphicsInformation @ 0x14013B8F0 (BgQueryBootGraphicsInformation.c)
 */

__int64 __fastcall BgkQueryBootGraphicsInformation(int a1, __int64 a2)
{
  if ( byte_140389F20 )
    return BgQueryBootGraphicsInformation(a1, a2);
  else
    return 3221225473LL;
}
