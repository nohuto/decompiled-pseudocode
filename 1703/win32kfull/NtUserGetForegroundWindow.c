/*
 * XREFs of NtUserGetForegroundWindow @ 0x1C00DA7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C0004F34 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0062854 (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C006288C (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1C00DA954 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 NtUserGetForegroundWindow()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  struct tagWND *Host; // rax
  int v12; // [rsp+58h] [rbp-9h] BYREF
  __int64 v13; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v14[24]; // [rsp+68h] [rbp+7h] BYREF
  _QWORD v15[2]; // [rsp+80h] [rbp+1Fh] BYREF
  int v16; // [rsp+90h] [rbp+2Fh]
  __int128 v17; // [rsp+98h] [rbp+37h] BYREF
  int v18; // [rsp+A8h] [rbp+47h]

  EnterSharedCrit(0LL, 1LL);
  v3 = 0LL;
  v4 = gpqForeground;
  if ( gpqForeground && *(_QWORD *)(gpqForeground + 88LL) )
  {
    v5 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
    v4 = *(_QWORD *)(*(_QWORD *)(gpqForeground + 88LL) + 24LL);
    if ( *(_QWORD *)(v5 + 408) == v4 )
    {
      v12 = 3;
      v7 = wil_details_RecordUsageInPropertyCache(
             v14,
             &Feature_ComponentUIAwareGetForegroundWindow__private_propertyCache);
      v17 = *(_OWORD *)v7;
      v18 = *(_DWORD *)(v7 + 16);
      if ( g_wil_details_recordFeatureUsage )
      {
        g_wil_details_recordFeatureUsage(
          0x99EF37u,
          (union wil_details_FeaturePropertyCache *)&Feature_ComponentUIAwareGetForegroundWindow__private_propertyCache,
          (struct wil_details_RecordUsageResult *)&v17);
        if ( (Feature_ComponentUIAwareGetForegroundWindow__private_propertyCache & 0x30) == 0x20 )
        {
          v15[0] = 0LL;
          v16 = 0;
          v15[1] = 2LL;
          ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(10088247LL, 0LL, v15);
        }
      }
      if ( !v18 && g_wil_details_pfnFeatureLoggingHook )
        g_wil_details_pfnFeatureLoggingHook(
          0x99EF37u,
          (const struct FEATURE_LOGGED_TRAITS *)&unk_1C02E4A14,
          0LL,
          1,
          (const enum wil_ReportingKind *)&v12,
          0LL,
          0,
          1uLL);
      v8 = 0LL;
      v4 = gpqForeground;
      v9 = *(_QWORD *)(gpqForeground + 88LL);
      if ( (*(_BYTE *)(v9 + 307) & 2) != 0 )
      {
        if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>(*(_QWORD *)(gpqForeground + 88LL), &v13) )
        {
          v4 = *(unsigned int *)(v13 + 20);
          if ( (_DWORD)v4 )
          {
            v8 = v9;
            do
            {
              Host = CoreWindowProp::GetHost((struct tagWND *)v8);
              v8 = (__int64)Host;
            }
            while ( Host && (unsigned int)CoreWindowProp::IsComponent(Host) );
          }
        }
      }
      if ( !v8 )
        goto LABEL_10;
      do
      {
        if ( (unsigned int)IsTopLevelWindow(v8) )
          break;
        v8 = *(_QWORD *)(v8 + 104);
      }
      while ( v8 );
      if ( !v8 )
LABEL_10:
        v8 = v9;
      v3 = *(_QWORD *)v8;
    }
  }
  UserSessionSwitchLeaveCrit(v4, v0, v1, v2);
  return v3;
}
