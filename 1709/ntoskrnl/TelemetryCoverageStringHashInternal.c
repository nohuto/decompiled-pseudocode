/*
 * XREFs of TelemetryCoverageStringHashInternal @ 0x14011E7C8
 * Callers:
 *     EtwpCoverageValidateCP @ 0x14011E708 (EtwpCoverageValidateCP.c)
 *     EtwpCoverageHighIrqlCPWorkItemCallback @ 0x14027ABD0 (EtwpCoverageHighIrqlCPWorkItemCallback.c)
 *     EtwpCoverageProvEnableCallback @ 0x1404F18A0 (EtwpCoverageProvEnableCallback.c)
 *     PsSetProcessFaultInformation @ 0x140578FB0 (PsSetProcessFaultInformation.c)
 *     PopTransitionTelemetryOsState @ 0x1405ACF48 (PopTransitionTelemetryOsState.c)
 *     EtwpCoverageEnsureContext @ 0x1405E714C (EtwpCoverageEnsureContext.c)
 *     EtwpCoverageReset @ 0x140745074 (EtwpCoverageReset.c)
 *     EtwpCoverageResetCP @ 0x140745254 (EtwpCoverageResetCP.c)
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
