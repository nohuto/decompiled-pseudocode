/*
 * XREFs of sub_18007CC5C @ 0x18007CC5C
 * Callers:
 *     RtlTimeToSecondsSince1980 @ 0x18007CAF0 (RtlTimeToSecondsSince1980.c)
 *     sub_18007CBC0 @ 0x18007CBC0 (sub_18007CBC0.c)
 *     RtlTimeToSecondsSince1970 @ 0x18007CC20 (RtlTimeToSecondsSince1970.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_18007CC5C(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // rdx

  v3 = (unsigned __int64)((abs64(a1) * (unsigned __int128)a2) >> 64) >> a3;
  if ( a1 < 0 )
    return -(__int64)v3;
  return v3;
}
