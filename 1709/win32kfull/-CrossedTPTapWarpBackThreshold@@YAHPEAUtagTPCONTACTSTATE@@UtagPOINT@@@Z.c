/*
 * XREFs of ?CrossedTPTapWarpBackThreshold@@YAHPEAUtagTPCONTACTSTATE@@UtagPOINT@@@Z @ 0x1C01AE040
 * Callers:
 *     ?UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAH@Z @ 0x1C01AFBAC (-UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagH.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CrossedTPTapWarpBackThreshold(struct tagTPCONTACTSTATE *a1, struct tagPOINT a2)
{
  __int64 v2; // rax
  __int64 v3; // r10
  unsigned int v4; // r11d
  unsigned int v5; // ecx

  if ( (gTPThresholds[28] & 0x400) == 0 )
    return 1LL;
  v2 = *(_QWORD *)a1;
  v3 = HIDWORD(*(_QWORD *)a1);
  v5 = gTPThresholds[26] * gTPThresholds[26];
  if ( (int)v3 < a2.y )
    v5 = gTPThresholds[27] * gTPThresholds[27];
  v4 = gTPThresholds[24] * gTPThresholds[24];
  return v5 * (__int64)(((int)v2 - a2.x) * ((int)v2 - a2.x))
       + (unsigned __int64)v4 * ((int)v3 - a2.y) * ((int)v3 - a2.y) >= v5 * (unsigned __int64)v4;
}
