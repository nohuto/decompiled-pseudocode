/*
 * XREFs of ?PassedCurtainMoveThresholds@@YAH_K0PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z @ 0x1C01AB990
 * Callers:
 *     ?UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAH@Z @ 0x1C01AC820 (-UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagH.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PassedCurtainMoveThresholds(
        __int64 a1,
        __int64 a2,
        struct tagTPSTATE *a3,
        struct tagTPCONTACTSTATE *a4)
{
  unsigned int v4; // r10d
  __int64 v6; // rdx

  v4 = 0;
  if ( !gliQpcFreq || a2 - a1 > gliQpcFreq * (unsigned __int64)(unsigned int)gTPThresholds[44] / 0x3E8 )
    return 0LL;
  v6 = *((_QWORD *)a3 + 216);
  LOBYTE(v4) = (int)((HIDWORD(v6) - HIDWORD(*((_QWORD *)a4 + 1))) * (HIDWORD(v6) - HIDWORD(*((_QWORD *)a4 + 1)))
                   + (v6 - *((_QWORD *)a4 + 1)) * (v6 - *((_QWORD *)a4 + 1))) > (unsigned __int64)(unsigned int)gTPThresholds[45];
  return v4;
}
