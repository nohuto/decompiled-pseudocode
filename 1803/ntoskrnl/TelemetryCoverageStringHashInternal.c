/*
 * XREFs of TelemetryCoverageStringHashInternal @ 0x1400C31C0
 * Callers:
 *     EtwpCoverageValidateCP @ 0x1400C3100 (EtwpCoverageValidateCP.c)
 *     EtwpCoverageHighIrqlCPWorkItemCallback @ 0x1402ADDA0 (EtwpCoverageHighIrqlCPWorkItemCallback.c)
 *     EtwpCoverageProvEnableCallback @ 0x14048BCC0 (EtwpCoverageProvEnableCallback.c)
 *     PsSetProcessFaultInformation @ 0x1405C3C50 (PsSetProcessFaultInformation.c)
 *     PopTransitionTelemetryOsState @ 0x140624944 (PopTransitionTelemetryOsState.c)
 *     EtwpCoverageEnsureContext @ 0x14064D564 (EtwpCoverageEnsureContext.c)
 *     EtwpCoverageReset @ 0x1407A6D88 (EtwpCoverageReset.c)
 *     EtwpCoverageResetCP @ 0x1407A6F68 (EtwpCoverageResetCP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TelemetryCoverageStringHashInternal(_BYTE *a1, _DWORD *a2)
{
  unsigned int v2; // r8d
  int v3; // r10d
  unsigned int v4; // r9d

  v2 = -2128831035;
  v3 = (int)a1;
  v4 = 1;
  while ( *a1 )
    v2 = (char)*a1++ + 16777619 * v2;
  *a2 = (_DWORD)a1 - v3;
  if ( v2 )
    return v2;
  return v4;
}
