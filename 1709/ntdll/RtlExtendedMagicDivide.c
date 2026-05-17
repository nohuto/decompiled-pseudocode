/*
 * XREFs of RtlExtendedMagicDivide @ 0x18007E72C
 * Callers:
 *     RtlTimeToSecondsSince1980 @ 0x18007E5D0 (RtlTimeToSecondsSince1980.c)
 *     TimeToDaysAndFraction @ 0x18007E6A0 (TimeToDaysAndFraction.c)
 *     RtlTimeToSecondsSince1970 @ 0x18007E6F0 (RtlTimeToSecondsSince1970.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlExtendedMagicDivide(__int64 a1, unsigned __int64 a2, char a3)
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
