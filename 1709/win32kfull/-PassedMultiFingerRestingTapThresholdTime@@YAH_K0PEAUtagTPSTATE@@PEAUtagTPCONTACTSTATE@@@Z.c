/*
 * XREFs of ?PassedMultiFingerRestingTapThresholdTime@@YAH_K0PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z @ 0x1C01AEE44
 * Callers:
 *     ?UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAH@Z @ 0x1C01AFBAC (-UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagH.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PassedMultiFingerRestingTapThresholdTime(
        __int64 a1,
        __int64 a2,
        struct tagTPSTATE *a3,
        struct tagTPCONTACTSTATE *a4)
{
  unsigned int v4; // r9d

  v4 = 0;
  if ( !gliQpcFreq )
    return 0LL;
  if ( (gTPThresholds[28] & 0x800) != 0 || !*((_QWORD *)a3 + 229) )
    *((_QWORD *)a3 + 229) = gliQpcFreq * (unsigned int)gTPThresholds[23] / 1000LL;
  LOBYTE(v4) = (unsigned __int64)(a2 - a1) > *((_QWORD *)a3 + 229);
  return v4;
}
