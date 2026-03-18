/*
 * XREFs of ?CrossedTPLiftWarpBackThreshold@@YAHPEAUtagTPCONTACTSTATE@@UtagPOINT@@@Z @ 0x1C01ADFB0
 * Callers:
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01B1800 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CrossedTPLiftWarpBackThreshold(struct tagTPCONTACTSTATE *a1, struct tagPOINT a2)
{
  __int64 v2; // rax
  unsigned int v3; // r11d
  unsigned int v4; // ecx

  if ( (gTPThresholds[28] & 0x100) == 0 )
    return 1LL;
  v2 = *((_QWORD *)a1 + 2);
  v4 = gTPThresholds[49] * gTPThresholds[49];
  if ( SHIDWORD(v2) < a2.y )
    v4 = gTPThresholds[50] * gTPThresholds[50];
  v3 = gTPThresholds[48] * gTPThresholds[48];
  return v4 * (__int64)(((int)v2 - a2.x) * ((int)v2 - a2.x))
       + (unsigned __int64)v3 * (HIDWORD(v2) - a2.y) * (HIDWORD(v2) - a2.y) >= v4 * (unsigned __int64)v3;
}
