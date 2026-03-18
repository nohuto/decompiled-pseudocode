/*
 * XREFs of MiInitializeColors @ 0x14082CAE0
 * Callers:
 *     MiCreatePfnDatabase @ 0x140829C3C (MiCreatePfnDatabase.c)
 * Callees:
 *     MiInitializeCacheSizes @ 0x14082CB68 (MiInitializeCacheSizes.c)
 */

__int64 MiInitializeColors()
{
  unsigned __int8 v0; // cl
  unsigned int v1; // eax
  unsigned int v2; // edx
  __int64 result; // rax

  MiInitializeCacheSizes();
  v0 = 1;
  _BitScanReverse(&v1, dword_140388544);
  MiChannelMaximumPowerOf2 = 1;
  byte_140388502 = v1;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    do
      v0 *= 2;
    while ( v0 < (unsigned int)MmNumberOfChannels );
    MiChannelMaximumPowerOf2 = v0;
  }
  MiChannelMaximumPowerOf2Mask = v0 - 1;
  _BitScanReverse(&v2, v0);
  byte_140388501 = v2 + byte_140388502;
  dword_1403884F8 = (1 << (v2 + byte_140388502)) - 1;
  result = (unsigned int)dword_140388540;
  KeGetCurrentPrcb()->SecondaryColorMask = dword_140388540;
  return result;
}
