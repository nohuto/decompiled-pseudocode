/*
 * XREFs of ?ConvertDipsToScreenSpaceUnits@CPalmRejectZoneInfo@@AEAAJUtagPOINT@@J@Z @ 0x1C012C458
 * Callers:
 *     ?HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C012C6E4 (-HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTe.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C001F400 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     PtInRect @ 0x1C0055DE4 (PtInRect.c)
 *     EngMulDiv @ 0x1C0057F90 (EngMulDiv.c)
 */

__int64 __fastcall CPalmRejectZoneInfo::ConvertDipsToScreenSpaceUnits(
        CPalmRejectZoneInfo *this,
        struct tagPOINT a2,
        INT a3)
{
  unsigned __int64 v4; // r9
  unsigned int v5; // r10d
  __int64 i; // rbx
  __int64 v7; // rcx
  unsigned __int16 v8; // di
  __int64 v9; // rcx

  v4 = (unsigned __int64)a2;
  v5 = 0;
  for ( i = *(_QWORD *)(gpDispInfo + 104); i; i = *(_QWORD *)(i + 56) )
  {
    v7 = *(_QWORD *)(i + 40);
    if ( (*(_DWORD *)(v7 + 24) & 1) != 0 && PtInRect((_DWORD *)(v7 + 28), v4) )
    {
      v8 = 96;
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
      {
        v8 = *(_WORD *)(*(_QWORD *)(i + 40) + 64LL);
      }
      else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
      {
        v8 = *(_WORD *)(PsGetCurrentProcessWin32Process(v9) + 284);
      }
      return (unsigned int)EngMulDiv(a3, *(unsigned __int16 *)(i + 224), v8);
    }
  }
  return v5;
}
