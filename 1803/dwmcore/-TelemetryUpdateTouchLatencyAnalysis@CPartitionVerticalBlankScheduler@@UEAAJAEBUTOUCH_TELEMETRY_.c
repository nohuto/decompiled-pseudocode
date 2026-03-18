/*
 * XREFs of ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x180013F20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPrimaryAdapterLuid@CDisplaySet@@QEBA?AU_LUID@@XZ @ 0x18000A7E8 (-GetPrimaryAdapterLuid@CDisplaySet@@QEBA-AU_LUID@@XZ.c)
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x180013C20 (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIU_LUID@@2PEAPEAUTouchUpdateInfo@1@@Z @ 0x180014878 (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18001F1FC (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsWARPAdapterAtIndex@CDisplaySet@@QEBAJIPEA_N@Z @ 0x1800B6A78 (-IsWARPAdapterAtIndex@CDisplaySet@@QEBAJIPEA_N@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x1800B6AE8 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     McTemplateU0xxxxxqqx @ 0x180149254 (McTemplateU0xxxxxqqx.c)
 *     ?IsManipulationStateChange@CTelemetryTouchLatencyAnalysis@@QEAAHPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K@Z @ 0x18014D9D0 (-IsManipulationStateChange@CTelemetryTouchLatencyAnalysis@@QEAAHPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 *     ?UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@PEAUTouchUpdateInfo@1@_K@Z @ 0x18014F6B4 (-UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@P.c)
 *     ?RemoveAt@?$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z @ 0x180158240 (-RemoveAt@-$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::TelemetryUpdateTouchLatencyAnalysis(
        CPartitionVerticalBlankScheduler *this,
        const struct TOUCH_TELEMETRY_UPDATE_INFO *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // r13d
  CDisplayManager *v6; // rcx
  __int64 v7; // rsi
  char v8; // si
  unsigned int v9; // r15d
  struct _LUID v10; // rbx
  unsigned int v11; // edx
  CDisplaySet *v12; // rdi
  struct _LUID *PrimaryAdapterLuid; // rax
  unsigned __int64 *v14; // r10
  unsigned __int64 v15; // r8
  bool v16; // zf
  int updated; // eax
  __int64 v18; // r10
  __int64 v19; // rcx
  unsigned int v20; // edx
  __int64 v22; // rbx
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // r8
  int v25; // edx
  int v26; // ecx
  unsigned int v27; // [rsp+20h] [rbp-30h]
  CTelemetryTouchLatencyAnalysis *v28; // [rsp+90h] [rbp+40h] BYREF
  struct CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v29; // [rsp+A0h] [rbp+50h] BYREF
  CDisplaySet *v30; // [rsp+A8h] [rbp+58h] BYREF

  v2 = *((_QWORD *)this + 3230);
  v3 = 0;
  if ( !v2 )
    return v3;
  v6 = (CDisplayManager *)*(unsigned int *)(v2 + 1136);
  v7 = 0LL;
  if ( (_DWORD)v6 )
  {
    while ( 1 )
    {
      v22 = *(_QWORD *)(*(_QWORD *)(v2 + 1112) + 8 * v7);
      if ( v22 )
      {
        if ( *(_QWORD *)v22 == *(_QWORD *)a2 )
          break;
      }
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= (unsigned int)v6 )
        goto LABEL_3;
    }
    v23 = *(_QWORD *)v2;
    v24 = *(_QWORD *)v2;
    v28 = (CPartitionVerticalBlankScheduler *)((char *)this + 26760);
    if ( !CTelemetryTouchLatencyAnalysis::IsManipulationStateChange(
            (CPartitionVerticalBlankScheduler *)((char *)this + 26760),
            a2,
            v24) )
    {
      CTelemetryTouchLatencyAnalysis::UpdateLastTelemetryInfo(
        v28,
        a2,
        (struct CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *)v22,
        v23);
      return v3;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      McTemplateU0xxxxxqqx(
        v26,
        v25,
        *(_QWORD *)v22,
        *(_QWORD *)(v22 + 8),
        *(_QWORD *)(v22 + 16),
        *(_QWORD *)(v22 + 24),
        *(_QWORD *)(v22 + 32),
        *(_DWORD *)(v22 + 40),
        *(_DWORD *)(v22 + 44),
        v23);
      v2 = *((_QWORD *)this + 3230);
    }
    DynArray<CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *,0>::RemoveAt(v2 + 1112, (unsigned int)v7);
    CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'((CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *)v22);
  }
LABEL_3:
  v30 = 0LL;
  v8 = 0;
  v9 = 0;
  LOBYTE(v28) = 0;
  v10 = 0LL;
  CDisplayManager::GetCurrentDisplaySet(v6, &v30);
  v12 = v30;
  if ( v30 )
  {
    CDisplaySet::IsWARPAdapterAtIndex(v30, v11, (bool *)&v28);
    PrimaryAdapterLuid = (struct _LUID *)CDisplaySet::GetPrimaryAdapterLuid(v12, (struct _LUID *)&v30);
    v9 = *((_DWORD *)v12 + 18);
    v10 = *PrimaryAdapterLuid;
    CDisplaySet::Release(v12);
    v8 = (char)v28;
  }
  v14 = (unsigned __int64 *)*((_QWORD *)this + 3230);
  v29 = 0LL;
  v15 = *v14;
  v16 = *((_DWORD *)this + 7639) == 0;
  v28 = (CTelemetryTouchLatencyAnalysis *)(10000000 * (v14[183] / g_qpcFrequency.QuadPart)
                                         + 10000000 * (v14[183] % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart);
  updated = CTelemetryTouchLatencyAnalysis::UpdateInteractionProgress(
              (CPartitionVerticalBlankScheduler *)((char *)this + 26760),
              a2,
              v15,
              !v16,
              (const unsigned __int64 *)&v28,
              v9,
              v10,
              v8,
              &v29);
  v3 = updated;
  if ( updated < 0 )
  {
    v27 = 2370;
    goto LABEL_25;
  }
  if ( v29 )
  {
    v18 = *((_QWORD *)this + 3230);
    v19 = *(unsigned int *)(v18 + 1136);
    v20 = v19 + 1;
    if ( (int)v19 + 1 < (unsigned int)v19 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, (int)v19 + 1 < (unsigned int)v19 ? 0x80070216 : 0, 0xB5u);
      return v3;
    }
    if ( v20 <= *(_DWORD *)(v18 + 1132) )
    {
      *(_QWORD *)(*(_QWORD *)(v18 + 1112) + 8 * v19) = v29;
      *(_DWORD *)(v18 + 1136) = v20;
      return v3;
    }
    updated = DynArrayImpl<0>::AddMultipleAndSet(v18 + 1112, 8LL, 1LL, &v29);
    if ( updated < 0 )
    {
      v27 = 192;
LABEL_25:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, v27);
    }
  }
  return v3;
}
