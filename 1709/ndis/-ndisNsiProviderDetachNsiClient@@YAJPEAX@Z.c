/*
 * XREFs of ?ndisNsiProviderDetachNsiClient@@YAJPEAX@Z @ 0x1C003F610
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

__int64 __fastcall ndisNsiProviderDetachNsiClient(__int64 a1)
{
  if ( (unsigned __int8)byte_1C009875D >= 4u )
  {
    WPP_SF_q(0x46u, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1);
    if ( (unsigned __int8)byte_1C009875D >= 4u )
      WPP_SF_q(0x47u, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1);
  }
  return 0LL;
}
