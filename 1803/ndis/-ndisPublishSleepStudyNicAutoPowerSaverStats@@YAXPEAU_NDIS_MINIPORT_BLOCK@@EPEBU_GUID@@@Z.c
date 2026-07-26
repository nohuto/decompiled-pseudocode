/*
 * XREFs of ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEBU_GUID@@@Z @ 0x1C00F680C
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0073678 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 * Callees:
 *     ndisGetTimeInterval @ 0x1C000FAF8 (ndisGetTimeInterval.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     McTemplateK0cjqzr2jx @ 0x1C00754AC (McTemplateK0cjqzr2jx.c)
 *     ndisPublishSleepStudyNapsCustomData @ 0x1C00F63B0 (ndisPublishSleepStudyNapsCustomData.c)
 *     ndisPublishSleepStudyNapsOidCustomData @ 0x1C00F65B0 (ndisPublishSleepStudyNapsOidCustomData.c)
 *     ndisPublishSleepStudyNicAutoPowerSaverCustomData @ 0x1C00F66C0 (ndisPublishSleepStudyNicAutoPowerSaverCustomData.c)
 */

void __fastcall ndisPublishSleepStudyNicAutoPowerSaverStats(
        struct _NDIS_MINIPORT_BLOCK *a1,
        char a2,
        const struct _GUID *a3)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rdi
  unsigned __int64 TimeInterval; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  ULONGLONG v10; // r15
  unsigned int v11; // r12d
  ULONGLONG v12; // r13
  ULONGLONG LastResumeLatencyMs; // rcx
  __int64 v14; // rdx
  __int64 v15; // [rsp+20h] [rbp-59h]
  __int64 v16; // [rsp+20h] [rbp-59h]
  int v17; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-21h]
  ULONGLONG v19; // [rsp+60h] [rbp-19h]
  const wchar_t *v20; // [rsp+68h] [rbp-11h] BYREF
  int v21; // [rsp+70h] [rbp-9h]
  const wchar_t *v22; // [rsp+78h] [rbp-1h] BYREF
  int v23; // [rsp+80h] [rbp+7h]
  GUID v24; // [rsp+88h] [rbp+Fh] BYREF

  SelectiveSuspend = a1->SelectiveSuspend;
  if ( SelectiveSuspend )
  {
    v24 = GUID_CS_BLOCKER_GEN;
    TimeInterval = ndisGetTimeInterval((_LARGE_INTEGER *)&SelectiveSuspend->TelemetryData.StartTime.QuadPart);
    v10 = SelectiveSuspend->TotalSuspendedTimeMs - SelectiveSuspend->TelemetryData.StartingSuspendTimeMs;
    v11 = SelectiveSuspend->SuspendCount - SelectiveSuspend->TelemetryData.StartingSuspendCount;
    v12 = SelectiveSuspend->TotalResumeLatencyMs - SelectiveSuspend->TelemetryData.StartingResumeLatencyMs;
    LastResumeLatencyMs = SelectiveSuspend->LastResumeLatencyMs;
    v18 = TimeInterval;
    v19 = LastResumeLatencyMs;
    if ( ndisEnableNicAutoPowerSaverInSleepStudy == 1 )
    {
      v21 = 25;
      v20 = L"Events preventing Nic Dx";
      a3 = &v24;
      v23 = 36;
      v22 = L"Breakdown of OIDs preventing Nic Dx";
      v24.Data3 = a1->IfIndex;
      v24.Data4[0] = 0x80;
      v17 = 1;
      if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
        McTemplateK0cjqzr2jx(
          LastResumeLatencyMs,
          v8,
          &a1->InterfaceGuid,
          a2,
          v9,
          21,
          (__int64)L"Nic Auto Power Saver",
          (__int64)&v24,
          0);
      LOBYTE(v8) = a2;
      ndisPublishSleepStudyNapsCustomData(
        (__int64)a1,
        v8,
        (__int64)&v24,
        (__int64)&v20,
        v15,
        (__int64)SelectiveSuspend->TelemetryData.Reasons,
        (char *)&v17);
      LOBYTE(v14) = a2;
      ndisPublishSleepStudyNapsOidCustomData(
        (__int64)a1,
        v14,
        (__int64)&v24,
        (__int64)&v22,
        v16,
        (__int64)SelectiveSuspend->TelemetryData.ReasonOids,
        &v17);
      TimeInterval = v18;
      LastResumeLatencyMs = v19;
    }
    ndisPublishSleepStudyNicAutoPowerSaverCustomData(
      (__int64)a1,
      a2,
      a3,
      TimeInterval,
      LastResumeLatencyMs,
      v10,
      v11,
      v12);
  }
}
