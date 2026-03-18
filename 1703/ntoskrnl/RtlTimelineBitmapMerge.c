/*
 * XREFs of RtlTimelineBitmapMerge @ 0x1401FCDC8
 * Callers:
 *     KeFoldProcessStatisticsThread @ 0x1400885DC (KeFoldProcessStatisticsThread.c)
 *     PsAddProcessEnergyValues @ 0x140238F6C (PsAddProcessEnergyValues.c)
 *     PsQueryProcessEnergyValues @ 0x1405400F0 (PsQueryProcessEnergyValues.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlTimelineBitmapMerge(unsigned int *a1, unsigned int *a2)
{
  __int64 result; // rax
  unsigned int v4; // ecx
  unsigned int v5; // ecx

  result = *a2;
  v4 = *a1;
  if ( (unsigned int)result <= v4 )
  {
    v5 = v4 - result;
    if ( v5 >= 0x20 )
      return result;
    result = a2[1] << v5;
  }
  else
  {
    *a1 = result;
    if ( (unsigned int)result - v4 >= 0x20 )
      a1[1] = 0;
    else
      a1[1] <<= result - v4;
    result = a2[1];
  }
  a1[1] |= result;
  return result;
}
