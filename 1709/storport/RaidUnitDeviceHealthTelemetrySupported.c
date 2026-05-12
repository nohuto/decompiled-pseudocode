/*
 * XREFs of RaidUnitDeviceHealthTelemetrySupported @ 0x1C0004668
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C00043A8 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidUnitDeviceHealthTelemetrySupported(__int64 a1)
{
  __int64 v1; // r8
  char v2; // dl
  _BYTE *v3; // rax
  char v4; // al
  int v5; // eax

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0;
  if ( *(_BYTE *)(v1 + 5452) )
    return 0;
  v3 = *(_BYTE **)(a1 + 96);
  if ( !v3 )
    return 0;
  v4 = *v3 & 0x1F;
  if ( v4 )
  {
    if ( v4 != 20 )
      return 0;
  }
  v5 = *(_DWORD *)(v1 + 4356);
  if ( v5 > 0 && (v5 == 8 || v5 <= 3 || v5 > 9 && (v5 <= 11 || v5 == 17)) )
    return 1;
  return v2;
}
