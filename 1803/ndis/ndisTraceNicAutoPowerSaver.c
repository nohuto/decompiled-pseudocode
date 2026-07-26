/*
 * XREFs of ndisTraceNicAutoPowerSaver @ 0x1C0072308
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0073678 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     ndisNicAutoPowerInsertIntoSortedArray @ 0x1C006EA98 (ndisNicAutoPowerInsertIntoSortedArray.c)
 *     WPP_SF__guid_ZDDDDDDDDDDDDDDDDDDDDDDDD @ 0x1C006FE9C (WPP_SF__guid_ZDDDDDDDDDDDDDDDDDDDDDDDD.c)
 *     WPP_SF__guid_ZDDDIDDDIDDDIDDDIDDDIDDDIDDDI @ 0x1C00700FC (WPP_SF__guid_ZDDDIDDDIDDDIDDDIDDDIDDDIDDDI.c)
 *     WPP_SF__guid_ZDIDIII @ 0x1C00703C0 (WPP_SF__guid_ZDIDIII.c)
 *     ?NdisTraceLoggingNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K1K11KPEAU_NDIS_NAPS_TELEMETRY_REASON_DATA@@KPEAU_NDIS_NAPS_TELEMETRY_OID_DATA@@@Z @ 0x1C0078FDC (-NdisTraceLoggingNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K1K11KPEAU_NDIS_NAPS_TELEMETR.c)
 */

void __fastcall ndisTraceNicAutoPowerSaver(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 a2)
{
  int v2; // edi
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rsi
  struct _NDIS_NAPS_TELEMETRY_OID_DATA *ReasonOids; // r14
  unsigned int v6; // r13d
  unsigned __int64 v7; // r12
  __int64 v8; // rdx
  _NDIS_NAPS_TELEMETRY_REASON_DATA *Reasons; // r15
  unsigned int v10; // ebp
  _NDIS_NAPS_TELEMETRY_REASON_DATA *v11; // rsi
  _NDIS_MINIPORT_AOAC *AoAc; // rcx
  unsigned __int64 v13; // rdx
  _GUID *p_InterfaceGuid; // rsi
  __int64 v15; // [rsp+20h] [rbp-1C8h]
  char WakeCount; // [rsp+28h] [rbp-1C0h]
  char v17[8]; // [rsp+30h] [rbp-1B8h]
  unsigned int v18; // [rsp+38h] [rbp-1B0h]
  unsigned int v19; // [rsp+48h] [rbp-1A0h]
  unsigned __int64 v21; // [rsp+108h] [rbp-E0h]
  char v22[8]; // [rsp+110h] [rbp-D8h]
  __int64 v23; // [rsp+118h] [rbp-D0h]
  struct _NDIS_NAPS_TELEMETRY_REASON_DATA v24[8]; // [rsp+120h] [rbp-C8h] BYREF

  v2 = 0;
  if ( (a1->PMHardwareCapabilities.Flags & 6) != 0 )
  {
    SelectiveSuspend = a1->SelectiveSuspend;
    if ( SelectiveSuspend )
    {
      ReasonOids = SelectiveSuspend->TelemetryData.ReasonOids;
      memset(v24, 0, sizeof(v24));
      v6 = SelectiveSuspend->SuspendCount - SelectiveSuspend->TelemetryData.StartingSuspendCount;
      v7 = SelectiveSuspend->TotalResumeLatencyMs - SelectiveSuspend->TelemetryData.StartingResumeLatencyMs;
      v8 = (unsigned __int128)((MEMORY[0xFFFFF78000000014] - SelectiveSuspend->TelemetryData.StartTime.QuadPart)
                             * (__int128)0x346DC5D63886594BLL) >> 64;
      v23 = (MEMORY[0xFFFFF78000000014] - SelectiveSuspend->TelemetryData.StartTime.QuadPart) / 10000;
      v21 = SelectiveSuspend->TotalSuspendedTimeMs - SelectiveSuspend->TelemetryData.StartingSuspendTimeMs;
      *(_QWORD *)v22 = SelectiveSuspend->LastResumeLatencyMs;
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
          ndisNicAutoPowerInsertIntoSortedArray(&Reasons[v10].WakeCount, v8, &v24[0].WakeCount);
        ++v10;
        ++v11;
      }
      while ( v10 < 0x31 );
      NdisTraceLoggingNicAutoPowerSaver(a1, a2, v23, v21, v6, v7, v22[0], v18, v24, v19, ReasonOids);
      if ( (unsigned __int8)byte_1C0099616 < 4u )
      {
        p_InterfaceGuid = &a1->InterfaceGuid;
      }
      else
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
        p_InterfaceGuid = &a1->InterfaceGuid;
        LOBYTE(v2) = a2 == 0;
        *(_DWORD *)v17 = v6;
        LODWORD(v15) = v2;
        WPP_SF__guid_ZDIDIII(
          (__int64)AoAc,
          v13,
          (__int64)&a1->InterfaceGuid,
          &a1->pAdapterInstanceName->Length,
          v15,
          v23,
          *(_QWORD *)v17,
          v21,
          v7,
          v13);
      }
      if ( (unsigned __int8)byte_1C0099616 >= 4u )
      {
        WPP_SF__guid_ZDDDIDDDIDDDIDDDIDDDIDDDIDDDI(
          v24[0].TotalTimeMs,
          v24[0].BusyCount,
          (__int64)p_InterfaceGuid,
          &a1->pAdapterInstanceName->Length,
          v24[0].Reason.StopReason,
          v24[0].WakeCount,
          v24[0].BusyCount,
          v24[0].TotalTimeMs,
          v24[0].Reason.StopReason,
          v24[0].WakeCount,
          v24[0].BusyCount,
          v24[0].TotalTimeMs,
          v24[0].Reason.StopReason,
          v24[0].WakeCount,
          v24[0].BusyCount,
          v24[0].TotalTimeMs,
          v24[0].Reason.StopReason,
          v24[0].WakeCount,
          v24[0].BusyCount,
          v24[0].TotalTimeMs,
          v24[0].Reason.StopReason,
          v24[0].WakeCount,
          v24[0].BusyCount,
          v24[0].TotalTimeMs,
          v24[0].Reason.StopReason,
          v24[0].WakeCount,
          v24[0].BusyCount,
          v24[0].TotalTimeMs,
          v24[0].Reason.StopReason,
          v24[0].WakeCount,
          v24[0].BusyCount,
          v24[0].TotalTimeMs);
        if ( (unsigned __int8)byte_1C0099616 >= 4u )
        {
          WakeCount = ReasonOids->WakeCount;
          WPP_SF__guid_ZDDDDDDDDDDDDDDDDDDDDDDDD(
            ReasonOids->Oid,
            ReasonOids->BusyCount,
            (__int64)p_InterfaceGuid,
            &a1->pAdapterInstanceName->Length,
            ReasonOids->Oid,
            WakeCount,
            ReasonOids->BusyCount,
            ReasonOids->Oid,
            WakeCount,
            ReasonOids->BusyCount,
            ReasonOids->Oid,
            WakeCount,
            ReasonOids->BusyCount,
            ReasonOids->Oid,
            WakeCount,
            ReasonOids->BusyCount,
            ReasonOids->Oid,
            WakeCount,
            ReasonOids->BusyCount,
            ReasonOids->Oid,
            WakeCount,
            ReasonOids->BusyCount,
            ReasonOids->Oid,
            WakeCount,
            ReasonOids->BusyCount,
            ReasonOids->Oid,
            WakeCount,
            ReasonOids->BusyCount);
        }
      }
    }
  }
}
