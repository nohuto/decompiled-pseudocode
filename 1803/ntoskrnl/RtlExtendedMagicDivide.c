/*
 * XREFs of RtlExtendedMagicDivide @ 0x1401459F8
 * Callers:
 *     TimeToDaysAndFraction @ 0x1401459A0 (TimeToDaysAndFraction.c)
 *     RtlTimeToSecondsSince1980 @ 0x14015F320 (RtlTimeToSecondsSince1980.c)
 *     RtlTimeToSecondsSince1970 @ 0x1402861C0 (RtlTimeToSecondsSince1970.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER __stdcall RtlExtendedMagicDivide(LARGE_INTEGER Dividend, LARGE_INTEGER MagicDivisor, CCHAR ShiftCount)
{
  unsigned __int64 v3; // rdx

  v3 = (unsigned __int64)((abs64(Dividend.QuadPart) * (unsigned __int128)(unsigned __int64)MagicDivisor.QuadPart) >> 64) >> ShiftCount;
  if ( Dividend.QuadPart < 0 )
    return (LARGE_INTEGER)-(__int64)v3;
  return (LARGE_INTEGER)v3;
}
