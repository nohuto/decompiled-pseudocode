/*
 * XREFs of sub_18008221C @ 0x18008221C
 * Callers:
 *     RtlTimeToSecondsSince1980 @ 0x1800820C0 (RtlTimeToSecondsSince1980.c)
 *     sub_180082190 @ 0x180082190 (sub_180082190.c)
 *     RtlTimeToSecondsSince1970 @ 0x1800821E0 (RtlTimeToSecondsSince1970.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18008221C(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int128 v3; // rax
  __int64 v4; // rdx

  if ( a1 < 0 )
    v3 = (unsigned __int64)-a1 * (unsigned __int128)a2;
  else
    v3 = (unsigned __int64)a1 * (unsigned __int128)a2;
  v4 = *((_QWORD *)&v3 + 1) >> a3;
  if ( a1 < 0 )
    return -v4;
  return v4;
}
