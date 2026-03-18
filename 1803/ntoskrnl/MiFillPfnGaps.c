/*
 * XREFs of MiFillPfnGaps @ 0x1408BAA64
 * Callers:
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 * Callees:
 *     MiFillGapAddresses @ 0x14017C840 (MiFillGapAddresses.c)
 *     MiInitializeGapFrames @ 0x1408BAAB8 (MiInitializeGapFrames.c)
 */

__int64 MiFillPfnGaps()
{
  __int64 v0; // rcx

  if ( !(unsigned int)MiInitializeGapFrames(0LL, &qword_1403CC468) )
    return 0LL;
  MiFillGapAddresses(v0, 48 * qword_1403CB780 - 0x57FFFFFFFD1LL, (int)&qword_1403CC468);
  return 1LL;
}
