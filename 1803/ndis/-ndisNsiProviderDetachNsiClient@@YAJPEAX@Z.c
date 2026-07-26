/*
 * XREFs of ?ndisNsiProviderDetachNsiClient@@YAJPEAX@Z @ 0x1C00406F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

__int64 __fastcall ndisNsiProviderDetachNsiClient(__int64 a1)
{
  if ( (unsigned __int8)byte_1C009961D >= 4u )
  {
    WPP_SF_q(0x46u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1);
    if ( (unsigned __int8)byte_1C009961D >= 4u )
      WPP_SF_q(0x47u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1);
  }
  return 0LL;
}
