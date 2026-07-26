/*
 * XREFs of ndisTraceNicAutoPowerSaver @ 0x1C00702EC
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0071484 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     ndisNicAutoPowerInsertIntoSortedArray @ 0x1C006CC00 (ndisNicAutoPowerInsertIntoSortedArray.c)
 *     WPP_SF__guid_ZDDDDDDDDDDDDDDDDDDDDDDDD @ 0x1C006DF4C (WPP_SF__guid_ZDDDDDDDDDDDDDDDDDDDDDDDD.c)
 *     WPP_SF__guid_ZDDDIDDDIDDDIDDDIDDDIDDDIDDDI @ 0x1C006E1A4 (WPP_SF__guid_ZDDDIDDDIDDDIDDDIDDDIDDDIDDDI.c)
 *     WPP_SF__guid_ZDIDIII @ 0x1C006E460 (WPP_SF__guid_ZDIDIII.c)
 *     ?NdisTraceLoggingNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K1K1KPEAU_NDIS_NAPS_TELEMETRY_REASON_DATA@@KPEAU_NDIS_NAPS_TELEMETRY_OID_DATA@@@Z @ 0x1C0076C74 (-NdisTraceLoggingNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K1K1KPEAU_NDIS_NAPS_TELEMETRY.c)
 */

void __fastcall ndisTraceNicAutoPowerSaver(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 a2)
{
  int v2; // ebx
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rsi
  _NDIS_NAPS_TELEMETRY_OID_DATA *hProvider; // r13
  unsigned int v6; // r12d
  unsigned __int64 v7; // r15
  __int64 v8; // rdx
  _NDIS_NAPS_TELEMETRY_REASON_DATA *Reasons; // r14
  unsigned int v10; // ebp
  _NDIS_NAPS_TELEMETRY_REASON_DATA *v11; // rsi
  _NDIS_MINIPORT_AOAC *AoAc; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // [rsp+20h] [rbp-1C8h]
  char WakeCount; // [rsp+28h] [rbp-1C0h]
  unsigned int v16; // [rsp+30h] [rbp-1B8h]
  __int64 v17; // [rsp+30h] [rbp-1B8h]
  unsigned int v18; // [rsp+40h] [rbp-1A8h]
  unsigned __int64 v20; // [rsp+108h] [rbp-E0h]
  __int64 v21; // [rsp+110h] [rbp-D8h]
  struct _NDIS_NAPS_TELEMETRY_REASON_DATA v22[8]; // [rsp+120h] [rbp-C8h] BYREF

  v2 = 0;
  if ( (a1->PMHardwareCapabilities.Flags & 4) != 0 )
  {
    SelectiveSuspend = a1->SelectiveSuspend;
    if ( SelectiveSuspend )
    {
      hProvider = SelectiveSuspend->TelemetryData.ReasonOids;
      memset(v22, 0, sizeof(v22));
      v6 = SelectiveSuspend->SuspendCount - SelectiveSuspend->TelemetryData.StartingSuspendCount;
      v7 = SelectiveSuspend->TotalResumeLatencyMs - SelectiveSuspend->TelemetryData.StartingResumeLatencyMs;
      v8 = (unsigned __int128)((MEMORY[0xFFFFF78000000014] - SelectiveSuspend->TelemetryData.StartTime.QuadPart)
                             * (__int128)0x346DC5D63886594BLL) >> 64;
      v21 = (MEMORY[0xFFFFF78000000014] - SelectiveSuspend->TelemetryData.StartTime.QuadPart) / 10000;
      v20 = SelectiveSuspend->TotalSuspendedTimeMs - SelectiveSuspend->TelemetryData.StartingSuspendTimeMs;
      if ( v6 > 1 )
      {
        v8 = (v7 + ((unsigned __int64)v6 >> 1)) % v6;
        v7 = (v7 + ((unsigned __int64)v6 >> 1)) / v6;
      }
      Reasons = SelectiveSuspend->TelemetryData.Reasons;
      v10 = 0;
      v11 = SelectiveSuspend->TelemetryData.Reasons;
      do
      {
        if ( v11->WakeCount + v11->BusyCount )
          ndisNicAutoPowerInsertIntoSortedArray(&Reasons[v10].WakeCount, v8, &v22[0].WakeCount);
        ++v10;
        ++v11;
      }
      while ( v10 < 0x31 );
      NdisTraceLoggingNicAutoPowerSaver(a1, a2, v21, v20, v6, v7, v16, v22, v18, (TraceLoggingHProvider)hProvider);
      if ( (unsigned __int8)byte_1C0092616 >= 4u )
      {
        if ( a2 )
        {
          v13 = 0LL;
        }
        else
        {
          AoAc = a1->AoAc;
          v13 = AoAc->TotalCsActiveTime / 0x2710;
        }
        LOBYTE(v2) = a2 == 0;
        LODWORD(v17) = v6;
        LODWORD(v14) = v2;
        WPP_SF__guid_ZDIDIII(
          (__int64)AoAc,
          v13,
          (__int64)&a1->InterfaceGuid,
          &a1->pAdapterInstanceName->Length,
          v14,
          v21,
          v17,
          v20,
          v7,
          v13);
        if ( (unsigned __int8)byte_1C0092616 >= 4u )
        {
          WPP_SF__guid_ZDDDIDDDIDDDIDDDIDDDIDDDIDDDI(
            v22[0].TotalTimeMs,
            v22[0].BusyCount,
            (__int64)&a1->InterfaceGuid,
            &a1->pAdapterInstanceName->Length,
            v22[0].Reason.StopReason,
            v22[0].WakeCount,
            v22[0].BusyCount,
            v22[0].TotalTimeMs,
            v22[0].Reason.StopReason,
            v22[0].WakeCount,
            v22[0].BusyCount,
            v22[0].TotalTimeMs,
            v22[0].Reason.StopReason,
            v22[0].WakeCount,
            v22[0].BusyCount,
            v22[0].TotalTimeMs,
            v22[0].Reason.StopReason,
            v22[0].WakeCount,
            v22[0].BusyCount,
            v22[0].TotalTimeMs,
            v22[0].Reason.StopReason,
            v22[0].WakeCount,
            v22[0].BusyCount,
            v22[0].TotalTimeMs,
            v22[0].Reason.StopReason,
            v22[0].WakeCount,
            v22[0].BusyCount,
            v22[0].TotalTimeMs,
            v22[0].Reason.StopReason,
            v22[0].WakeCount,
            v22[0].BusyCount,
            v22[0].TotalTimeMs);
          if ( (unsigned __int8)byte_1C0092616 >= 4u )
          {
            WakeCount = hProvider->WakeCount;
            WPP_SF__guid_ZDDDDDDDDDDDDDDDDDDDDDDDD(
              hProvider->Oid,
              hProvider->BusyCount,
              (__int64)&a1->InterfaceGuid,
              &a1->pAdapterInstanceName->Length,
              hProvider->Oid,
              WakeCount,
              hProvider->BusyCount,
              hProvider->Oid,
              WakeCount,
              hProvider->BusyCount,
              hProvider->Oid,
              WakeCount,
              hProvider->BusyCount,
              hProvider->Oid,
              WakeCount,
              hProvider->BusyCount,
              hProvider->Oid,
              WakeCount,
              hProvider->BusyCount,
              hProvider->Oid,
              WakeCount,
              hProvider->BusyCount,
              hProvider->Oid,
              WakeCount,
              hProvider->BusyCount,
              hProvider->Oid,
              WakeCount,
              hProvider->BusyCount);
          }
        }
      }
    }
  }
}
