/*
 * XREFs of ?OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180020090
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAJW4AppViewExecutionState@23456@PEAUIApplicationView@@PEAPEAUIAppViewExecutionData@23456@@Z @ 0x18001F6E0 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18005FC70 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18005FDD0 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1ListenerTelemetrySignalTracker@@QEAA@XZ @ 0x1800FA514 (--1ListenerTelemetrySignalTracker@@QEAA@XZ.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DocumentsCollection@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1801A8954 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DocumentsCollection@@@wil@@C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::OnApplicationViewChanged(
        __int64 a1,
        WCHAR *a2,
        int a3,
        struct wil_details_RecordUsageResult *a4)
{
  __int64 v6; // rdx
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // ebx
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // eax
  unsigned int v20; // ebx
  __int64 result; // rax
  __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // ebx
  int v25; // [rsp+20h] [rbp-A8h]
  int v26; // [rsp+50h] [rbp-78h] BYREF
  __int16 v27; // [rsp+54h] [rbp-74h]
  __int64 v28; // [rsp+58h] [rbp-70h] BYREF
  int v29; // [rsp+60h] [rbp-68h] BYREF
  __int16 v30; // [rsp+64h] [rbp-64h]
  __int64 v31; // [rsp+68h] [rbp-60h]
  _BYTE v32[24]; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v33[2]; // [rsp+88h] [rbp-40h] BYREF
  int v34; // [rsp+98h] [rbp-30h]
  int v35; // [rsp+9Ch] [rbp-2Ch]
  __int128 v36; // [rsp+A0h] [rbp-28h] BYREF
  __int64 v37; // [rsp+B0h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v31 = -2LL;
  try
  {
    v6 = 0LL;
    v28 = 0LL;
    if ( a3 )
    {
      v7 = a3 - 1;
      if ( v7 )
      {
        v8 = v7 - 6;
        if ( v8 )
        {
          v9 = v8 - 2;
          if ( v9 )
          {
            if ( v9 != 5 )
            {
LABEL_21:
              if ( v6 )
              {
                v28 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
              }
              return 0LL;
            }
            v10 = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState(
                    a1,
                    4,
                    a2,
                    &v28);
            v11 = v10;
            if ( v10 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x99,
                (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
                (const char *)(unsigned int)v10,
                v25);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
              return v11;
            }
          }
          else
          {
            v19 = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState(
                    a1,
                    3,
                    a2,
                    &v28);
            v20 = v19;
            if ( v19 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x93,
                (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
                (const char *)(unsigned int)v19,
                v25);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
              return v20;
            }
          }
        }
        else
        {
          v12 = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState(
                  a1,
                  2,
                  a2,
                  &v28);
          v13 = v12;
          if ( v12 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x86,
              (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
              (const char *)(unsigned int)v12,
              v25);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
            return v13;
          }
          if ( (`wil::Feature<__WilFeatureTraits_Feature_DocumentsCollection>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
            wil::Feature<__WilFeatureTraits_Feature_DocumentsCollection>::GetCachedFeatureEnabledState();
          LOBYTE(v27) = 0;
          v29 = 0;
          v30 = v27;
          v26 = 3;
          v25 = 1;
          v14 = wil_details_RecordUsageInPropertyCache(
                  v32,
                  &`wil::Feature<__WilFeatureTraits_Feature_DocumentsCollection>::GetFeaturePropertyCache'::`2'::data,
                  6LL);
          v36 = *(_OWORD *)v14;
          v37 = *(_QWORD *)(v14 + 16);
          if ( g_wil_details_recordFeatureUsage )
          {
            if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
              wil::details::RecordFeatureUsageCallback(
                (wil::details *)0xD48BA0,
                (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_DocumentsCollection>::GetFeaturePropertyCache'::`2'::data,
                (union wil_details_FeaturePropertyCache *)&v36,
                a4);
            else
              g_wil_details_recordFeatureUsage(
                0xD48BA0u,
                (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_DocumentsCollection>::GetFeaturePropertyCache'::`2'::data,
                (struct wil_details_RecordUsageResult *)&v36);
            if ( (`wil::Feature<__WilFeatureTraits_Feature_DocumentsCollection>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
            {
              v33[0] = 0LL;
              v34 = 0;
              v33[1] = 6LL;
              v35 = (`wil::Feature<__WilFeatureTraits_Feature_DocumentsCollection>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
              ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(13929376LL, 0LL, v33);
            }
          }
          if ( !(_DWORD)v37 && g_wil_details_pfnFeatureLoggingHook )
            g_wil_details_pfnFeatureLoggingHook(
              0xD48BA0u,
              (const struct FEATURE_LOGGED_TRAITS *)&v29,
              0LL,
              0,
              (const enum wil_ReportingKind *)&v26,
              0LL,
              0,
              1uLL);
        }
      }
      else
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
        v23 = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState(
                v22,
                1,
                a2,
                &v28);
        v24 = v23;
        if ( v23 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x80,
            (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
            (const char *)(unsigned int)v23,
            v25);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
          return v24;
        }
      }
    }
    else
    {
      v17 = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState(
              a1,
              0,
              a2,
              &v28);
      v18 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7A,
          (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
          (const char *)(unsigned int)v17,
          v25);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
        return v18;
      }
    }
    v6 = v28;
    if ( v28 )
    {
      LOWORD(v26) = 0;
      v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 64LL))(*(_QWORD *)(a1 + 64));
      v16 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA1,
          (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
          (const char *)(unsigned int)v15,
          v25);
        ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)&v26);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
        return v16;
      }
      v6 = v28;
    }
    goto LABEL_21;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA7,
                           (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
                           (const char *)a4);
  }
  return result;
}
