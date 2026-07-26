/*
 * XREFs of ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEBU_GUID@@@Z @ 0x1C00EA690
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0071484 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 * Callees:
 *     ndisGetTimeInterval @ 0x1C0012370 (ndisGetTimeInterval.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     Template_cjqzr2jx @ 0x1C0073244 (Template_cjqzr2jx.c)
 *     ndisPublishSleepStudyNapsCustomData @ 0x1C00EA248 (ndisPublishSleepStudyNapsCustomData.c)
 *     ndisPublishSleepStudyNapsOidCustomData @ 0x1C00EA448 (ndisPublishSleepStudyNapsOidCustomData.c)
 *     ndisPublishSleepStudyNicAutoPowerSaverCustomData @ 0x1C00EA558 (ndisPublishSleepStudyNicAutoPowerSaverCustomData.c)
 */

void __fastcall ndisPublishSleepStudyNicAutoPowerSaverStats(
        struct _NDIS_MINIPORT_BLOCK *a1,
        char a2,
        const struct _GUID *a3)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rdi
  ULONGLONG TimeInterval; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r9
  ULONGLONG v11; // r15
  unsigned int v12; // r12d
  ULONGLONG v13; // r13
  __int64 v14; // rdx
  __int64 v15; // [rsp+20h] [rbp-59h]
  __int64 v16; // [rsp+20h] [rbp-59h]
  int v17; // [rsp+50h] [rbp-29h] BYREF
  ULONGLONG v18; // [rsp+58h] [rbp-21h]
  const wchar_t *v19; // [rsp+60h] [rbp-19h] BYREF
  int v20; // [rsp+68h] [rbp-11h]
  const wchar_t *v21; // [rsp+70h] [rbp-9h] BYREF
  int v22; // [rsp+78h] [rbp-1h]
  GUID v23; // [rsp+80h] [rbp+7h] BYREF

  SelectiveSuspend = a1->SelectiveSuspend;
  if ( SelectiveSuspend )
  {
    v23 = GUID_CS_BLOCKER_GEN;
    TimeInterval = ndisGetTimeInterval((_LARGE_INTEGER *)&SelectiveSuspend->TelemetryData.StartTime.QuadPart);
    v11 = SelectiveSuspend->TotalSuspendedTimeMs - SelectiveSuspend->TelemetryData.StartingSuspendTimeMs;
    v12 = SelectiveSuspend->SuspendCount - SelectiveSuspend->TelemetryData.StartingSuspendCount;
    v13 = SelectiveSuspend->TotalResumeLatencyMs - SelectiveSuspend->TelemetryData.StartingResumeLatencyMs;
    v18 = TimeInterval;
    if ( ndisEnableNicAutoPowerSaverInSleepStudy == 1 )
    {
      v20 = 25;
      v19 = L"Events preventing Nic Dx";
      a3 = &v23;
      v22 = 36;
      v21 = L"Breakdown of OIDs preventing Nic Dx";
      v23.Data3 = a1->IfIndex;
      v23.Data4[0] = 0x80;
      v17 = 1;
      if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
        Template_cjqzr2jx(v9, v8, &a1->InterfaceGuid, a2, v10, 21, (__int64)L"Nic Auto Power Saver", (__int64)&v23, 0);
      LOBYTE(v8) = a2;
      ndisPublishSleepStudyNapsCustomData(
        (__int64)a1,
        v8,
        (__int64)&v23,
        (__int64)&v19,
        v15,
        (__int64)SelectiveSuspend->TelemetryData.Reasons,
        (char *)&v17);
      LOBYTE(v14) = a2;
      ndisPublishSleepStudyNapsOidCustomData(
        (__int64)a1,
        v14,
        (__int64)&v23,
        (__int64)&v21,
        v16,
        (__int64)SelectiveSuspend->TelemetryData.ReasonOids,
        &v17);
      TimeInterval = v18;
    }
    ndisPublishSleepStudyNicAutoPowerSaverCustomData((__int64)a1, a2, a3, TimeInterval, v11, v12, v13);
  }
}
