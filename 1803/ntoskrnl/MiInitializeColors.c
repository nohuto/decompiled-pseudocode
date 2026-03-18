/*
 * XREFs of MiInitializeColors @ 0x14089BED4
 * Callers:
 *     MiCreatePfnDatabase @ 0x140899444 (MiCreatePfnDatabase.c)
 * Callees:
 *     MiInitializeCacheSizes @ 0x14089BF5C (MiInitializeCacheSizes.c)
 */

__int64 MiInitializeColors()
{
  unsigned __int8 v0; // cl
  unsigned int v1; // eax
  unsigned int v2; // eax
  __int64 result; // rax

  MiInitializeCacheSizes();
  v0 = 1;
  _BitScanReverse(&v1, dword_1403CB6DC);
  byte_1403CB69A = v1;
  LOBYTE(v1) = 1;
  MiChannelMaximumPowerOf2 = 1;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    do
    {
      v1 = (unsigned __int8)(2 * v1);
      MiChannelMaximumPowerOf2 = v1;
      v0 = v1;
    }
    while ( v1 < MmNumberOfChannels );
  }
  MiChannelMaximumPowerOf2Mask = v0 - 1;
  _BitScanReverse(&v2, v0);
  byte_1403CB699 = v2 + byte_1403CB69A;
  dword_1403CB690 = (1 << (v2 + byte_1403CB69A)) - 1;
  result = (unsigned int)dword_1403CB6D8;
  KeGetCurrentPrcb()->SecondaryColorMask = dword_1403CB6D8;
  return result;
}
