/*
 * XREFs of PspIoRateControlInfoIsAnySet @ 0x140003A70
 * Callers:
 *     PspSetJobIoRateControl @ 0x14041EBBC (PspSetJobIoRateControl.c)
 *     PspSetJobIoRateControlForVolume @ 0x1406E1ADC (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspIoRateControlInfoIsAnySet(_QWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *a1 || a1[1] || a1[9] || a1[12] || a1[13] || a1[14] || a1[2] || a1[7] || a1[10] || a1[6] || a1[8] || a1[11] )
    return 1LL;
  return result;
}
