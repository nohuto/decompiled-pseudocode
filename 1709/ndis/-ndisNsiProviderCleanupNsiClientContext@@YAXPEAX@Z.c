/*
 * XREFs of ?ndisNsiProviderCleanupNsiClientContext@@YAXPEAX@Z @ 0x1C003F5C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

void __fastcall ndisNsiProviderCleanupNsiClientContext(__int64 a1)
{
  if ( (unsigned __int8)byte_1C009875D >= 4u )
  {
    WPP_SF_q(0x48u, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1);
    if ( (unsigned __int8)byte_1C009875D >= 4u )
      WPP_SF_q(0x49u, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1);
  }
}
