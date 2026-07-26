/*
 * XREFs of ?ndisNsiProviderDetachNsiClient@@YAJPEAX@Z @ 0x1C0042AD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

__int64 __fastcall ndisNsiProviderDetachNsiClient(__int64 a1)
{
  if ( (unsigned __int8)byte_1C009261D >= 4u )
  {
    WPP_SF_q(0x46u, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, a1);
    if ( (unsigned __int8)byte_1C009261D >= 4u )
      WPP_SF_q(0x47u, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, a1);
  }
  return 0LL;
}
