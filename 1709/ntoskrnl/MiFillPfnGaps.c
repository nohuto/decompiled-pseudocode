/*
 * XREFs of MiFillPfnGaps @ 0x140849A2C
 * Callers:
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 * Callees:
 *     MiFillGapAddresses @ 0x14014BDC0 (MiFillGapAddresses.c)
 *     MiInitializeGapFrames @ 0x140849A88 (MiInitializeGapFrames.c)
 */

__int64 MiFillPfnGaps()
{
  if ( !(unsigned int)MiInitializeGapFrames(0LL, &qword_1403891E8) )
    return 0LL;
  MiFillGapAddresses(0xFFFFFA8000000000uLL, 48 * qword_1403885E0 - 0x57FFFFFFFD1LL, (int)&qword_1403891E8);
  return 1LL;
}
