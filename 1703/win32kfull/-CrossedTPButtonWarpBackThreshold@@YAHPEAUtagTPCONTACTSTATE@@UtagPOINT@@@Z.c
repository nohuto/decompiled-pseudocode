/*
 * XREFs of ?CrossedTPButtonWarpBackThreshold@@YAHPEAUtagTPCONTACTSTATE@@UtagPOINT@@@Z @ 0x1C01AAA08
 * Callers:
 *     ?DoTPButtonWarpBack@@YAXPEAUtagTPSTATE@@K@Z @ 0x1C01AAD10 (-DoTPButtonWarpBack@@YAXPEAUtagTPSTATE@@K@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CrossedTPButtonWarpBackThreshold(struct tagTPCONTACTSTATE *a1, struct tagPOINT a2)
{
  __int64 v2; // rax
  unsigned int v3; // r11d
  unsigned int v4; // ecx

  if ( (gTPThresholds[28] & 0x200) == 0 )
    return 1LL;
  v2 = *((_QWORD *)a1 + 2);
  v4 = gTPThresholds[52] * gTPThresholds[52];
  if ( SHIDWORD(v2) < a2.y )
    v4 = gTPThresholds[53] * gTPThresholds[53];
  v3 = gTPThresholds[51] * gTPThresholds[51];
  return v4 * (__int64)(((int)v2 - a2.x) * ((int)v2 - a2.x))
       + (unsigned __int64)v3 * (HIDWORD(v2) - a2.y) * (HIDWORD(v2) - a2.y) >= v4 * (unsigned __int64)v3;
}
