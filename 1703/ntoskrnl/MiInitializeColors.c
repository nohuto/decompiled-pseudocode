/*
 * XREFs of MiInitializeColors @ 0x140802A54
 * Callers:
 *     MiCreatePfnDatabase @ 0x1407FFCB0 (MiCreatePfnDatabase.c)
 * Callees:
 *     <none>
 */

__int64 MiInitializeColors()
{
  unsigned int v0; // ecx
  int v1; // r8d
  int v2; // edx
  __int64 result; // rax

  v0 = (unsigned int)dword_14036C1FC >> 12;
  dword_14036C1FC = v0;
  if ( !v0 )
  {
    if ( qword_1403817D0 < 0x80000 )
    {
      v0 = qword_1403817D0 < 0x40000 ? 64 : 128;
      goto LABEL_4;
    }
LABEL_3:
    v0 = 256;
LABEL_4:
    dword_14036C1FC = v0;
    goto LABEL_5;
  }
  if ( v0 > 0x100 )
    goto LABEL_3;
  if ( ((v0 - 1) & v0) != 0 || v0 < 8 )
  {
    v0 = 64;
    goto LABEL_4;
  }
LABEL_5:
  _BitScanReverse((unsigned int *)&v1, v0);
  LOBYTE(v2) = 1;
  byte_14036C1BA = v1;
  dword_14036C1F8 = v0 - 1;
  MiChannelMaximumPowerOf2 = 1;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    do
      LOBYTE(v2) = 2 * v2;
    while ( (unsigned __int8)v2 < (unsigned int)MmNumberOfChannels );
    MiChannelMaximumPowerOf2 = v2;
  }
  MiChannelMaximumPowerOf2Mask = v2 - 1;
  _BitScanReverse((unsigned int *)&v2, (unsigned __int8)v2);
  byte_14036C1B9 = v2 + v1;
  dword_14036C1B0 = (1 << (v2 + v1)) - 1;
  result = (unsigned int)dword_14036C1F8;
  KeGetCurrentPrcb()->SecondaryColorMask = dword_14036C1F8;
  return result;
}
