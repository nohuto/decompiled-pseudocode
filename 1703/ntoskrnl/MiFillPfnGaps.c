/*
 * XREFs of MiFillPfnGaps @ 0x14081654C
 * Callers:
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 * Callees:
 *     MiFillGapAddresses @ 0x14015A700 (MiFillGapAddresses.c)
 *     MiInitializeGapFrames @ 0x1408165A8 (MiInitializeGapFrames.c)
 */

__int64 MiFillPfnGaps()
{
  if ( !(unsigned int)MiInitializeGapFrames(0LL, &qword_14036CF28) )
    return 0LL;
  MiFillGapAddresses(0xFFFFFA8000000000uLL, 48 * qword_14036C290 - 0x57FFFFFFFD1LL, (int)&qword_14036CF28);
  return 1LL;
}
