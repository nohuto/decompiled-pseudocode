/*
 * XREFs of ?SetupQpcThresholdTimes@@YAHPEAUtagTPSTATE@@@Z @ 0x1C01ABE04
 * Callers:
 *     ?UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAH@Z @ 0x1C01AC820 (-UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagH.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetupQpcThresholdTimes(struct tagTPSTATE *a1)
{
  if ( !gliQpcFreq )
    return 0LL;
  if ( (gTPThresholds[28] & 0x800) != 0 || !*((_QWORD *)a1 + 225) )
    *((_QWORD *)a1 + 225) = gliQpcFreq * gTPThresholds[0] / 1000LL;
  if ( (gTPThresholds[28] & 0x800) != 0 || !*((_QWORD *)a1 + 226) )
    *((_QWORD *)a1 + 226) = gliQpcFreq * (unsigned int)gTPThresholds[15] / 1000LL;
  if ( (gTPThresholds[28] & 0x800) != 0 || !*((_QWORD *)a1 + 227) )
    *((_QWORD *)a1 + 227) = gliQpcFreq * (unsigned int)gTPThresholds[33] / 1000LL;
  if ( (gTPThresholds[28] & 0x800) != 0 || !*((_QWORD *)a1 + 228) )
    *((_QWORD *)a1 + 228) = gliQpcFreq * (unsigned int)gTPThresholds[38] / 1000LL;
  return 1LL;
}
