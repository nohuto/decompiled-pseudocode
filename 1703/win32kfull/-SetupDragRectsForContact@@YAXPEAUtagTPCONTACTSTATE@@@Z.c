/*
 * XREFs of ?SetupDragRectsForContact@@YAXPEAUtagTPCONTACTSTATE@@@Z @ 0x1C01ABD3C
 * Callers:
 *     ?UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAH@Z @ 0x1C01AC820 (-UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagH.c)
 *     ?xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HKPEAH@Z @ 0x1C01ACC8C (-xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01AE4BC (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 * Callees:
 *     <none>
 */

void __fastcall SetupDragRectsForContact(struct tagTPCONTACTSTATE *a1)
{
  int v1; // r8d
  int v2; // edx

  v1 = *((_DWORD *)a1 + 1);
  *((_DWORD *)a1 + 55) = v1 - gTPThresholds[26];
  *((_DWORD *)a1 + 57) = v1 + gTPThresholds[27];
  v2 = *(_DWORD *)a1;
  *((_DWORD *)a1 + 54) = *(_DWORD *)a1 - gTPThresholds[24];
  *((_DWORD *)a1 + 56) = v2 + gTPThresholds[25];
  *((_DWORD *)a1 + 59) = v1 - gTPThresholds[31];
  *((_DWORD *)a1 + 61) = v1 + gTPThresholds[32];
  *((_DWORD *)a1 + 58) = v2 - gTPThresholds[29];
  *((_DWORD *)a1 + 60) = v2 + gTPThresholds[30];
  *((_DWORD *)a1 + 63) = v1 - gTPThresholds[36];
  *((_DWORD *)a1 + 65) = v1 + gTPThresholds[37];
  *((_DWORD *)a1 + 62) = v2 - gTPThresholds[34];
  *((_DWORD *)a1 + 64) = v2 + gTPThresholds[35];
}
