/*
 * XREFs of ?ndisNsiProviderCleanupNsiClientContext@@YAXPEAX@Z @ 0x1C00406A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void __fastcall ndisNsiProviderCleanupNsiClientContext(__int64 a1)
{
  if ( (unsigned __int8)byte_1C009961D >= 4u )
  {
    WPP_SF_q(0x48u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1);
    if ( (unsigned __int8)byte_1C009961D >= 4u )
      WPP_SF_q(0x49u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1);
  }
}
