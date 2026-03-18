/*
 * XREFs of ?AddInteractionUpdateInfo@CTelemetryInfo@DirectComposition@@QEAAJPEAUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1C014784C
 * Callers:
 *     NtDCompositionTelemetryTouchInteractionUpdate @ 0x1C0143BA0 (NtDCompositionTelemetryTouchInteractionUpdate.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C00192D0 (Win32AllocPoolWithQuota.c)
 */

__int64 __fastcall DirectComposition::CTelemetryInfo::AddInteractionUpdateInfo(
        DirectComposition::CTelemetryInfo *this,
        struct TOUCH_TELEMETRY_UPDATE_INFO *a2)
{
  __int64 v4; // rax
  DirectComposition::CTelemetryInfo **v5; // rdx

  v4 = Win32AllocPoolWithQuota(80LL, 0x6F744344u);
  if ( v4 )
  {
    *(_OWORD *)(v4 + 16) = *(_OWORD *)a2;
    *(_OWORD *)(v4 + 32) = *((_OWORD *)a2 + 1);
    *(_OWORD *)(v4 + 48) = *((_OWORD *)a2 + 2);
    *(_OWORD *)(v4 + 64) = *((_OWORD *)a2 + 3);
    v5 = (DirectComposition::CTelemetryInfo **)*((_QWORD *)this + 3);
    if ( *v5 != (DirectComposition::CTelemetryInfo *)((char *)this + 16) )
      __fastfail(3u);
    *(_QWORD *)v4 = (char *)this + 16;
    *(_QWORD *)(v4 + 8) = v5;
    *v5 = (DirectComposition::CTelemetryInfo *)v4;
    *((_QWORD *)this + 3) = v4;
  }
  return v4 == 0 ? 0xC0000017 : 0;
}
