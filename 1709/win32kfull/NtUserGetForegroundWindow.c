/*
 * XREFs of NtUserGetForegroundWindow @ 0x1C00E1330
 * Callers:
 *     <none>
 * Callees:
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C00090EC (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C005EBDC (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00622F0 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 *     ?wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x1C00E15A0 (-wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 NtUserGetForegroundWindow()
{
  __int64 v0; // rdx
  __int64 v1; // rbx
  __int64 v2; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rdi
  __int64 *ThreadWin32Thread; // rax
  signed __int32 v6; // edi
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rsi
  struct tagWND *Host; // rax
  signed __int32 v12[2]; // [rsp+58h] [rbp-29h] BYREF
  int v13; // [rsp+60h] [rbp-21h] BYREF
  __int128 v14; // [rsp+68h] [rbp-19h] BYREF
  int v15; // [rsp+78h] [rbp-9h]
  __int64 v16; // [rsp+80h] [rbp-1h] BYREF
  __int128 *v17; // [rsp+88h] [rbp+7h] BYREF
  int v18; // [rsp+90h] [rbp+Fh]
  int v19; // [rsp+94h] [rbp+13h]
  _QWORD v20[2]; // [rsp+98h] [rbp+17h] BYREF
  int v21; // [rsp+A8h] [rbp+27h]
  __int128 v22; // [rsp+B0h] [rbp+2Fh] BYREF
  int v23; // [rsp+C0h] [rbp+3Fh]

  EnterSharedCrit(0LL, 1LL);
  v1 = 0LL;
  v2 = gpqForeground;
  if ( gpqForeground && *(_QWORD *)(gpqForeground + 120LL) )
  {
    CurrentThread = KeGetCurrentThread();
    v4 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(gpqForeground, v0) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v4 = *ThreadWin32Thread;
    }
    v2 = *(_QWORD *)(*(_QWORD *)(gpqForeground + 120LL) + 24LL);
    if ( *(_QWORD *)(v4 + 432) == v2 )
    {
      v12[1] = 0x10000;
      v14 = 0uLL;
      v15 = 0;
      v17 = &v14;
      v18 = 0x10000;
      v19 = 0;
      v13 = 3;
      while ( 1 )
      {
        v12[0] = Feature_ComponentUIAwareGetForegroundWindow__private_propertyCache;
        v6 = Feature_ComponentUIAwareGetForegroundWindow__private_propertyCache;
        if ( !(unsigned int)wil_details_SetPropertyFlagCallback((union wil_details_FeaturePropertyCache *)v12, &v17) )
          break;
        if ( v6 == _InterlockedCompareExchange(
                     (volatile signed __int32 *)&Feature_ComponentUIAwareGetForegroundWindow__private_propertyCache,
                     v12[0],
                     v6) )
        {
          v7 = 0;
          v15 = 0;
          goto LABEL_12;
        }
      }
      v7 = 1;
      v15 = 1;
LABEL_12:
      v23 = v7;
      v22 = v14;
      if ( g_wil_details_recordFeatureUsage )
      {
        g_wil_details_recordFeatureUsage(
          0x99EF37u,
          (union wil_details_FeaturePropertyCache *)&Feature_ComponentUIAwareGetForegroundWindow__private_propertyCache,
          (struct wil_details_RecordUsageResult *)&v22);
        if ( (Feature_ComponentUIAwareGetForegroundWindow__private_propertyCache & 0x30) == 0x20 )
        {
          v20[0] = 0LL;
          v21 = 0;
          v20[1] = 2LL;
          ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(10088247LL, 0LL, v20);
        }
      }
      if ( !v23 && g_wil_details_pfnFeatureLoggingHook )
        g_wil_details_pfnFeatureLoggingHook(
          0x99EF37u,
          (const struct FEATURE_LOGGED_TRAITS *)&unk_1C02DEB54,
          0LL,
          1,
          (const enum wil_ReportingKind *)&v13,
          0LL,
          0,
          1uLL);
      v8 = 0LL;
      v2 = gpqForeground;
      v9 = *(_QWORD *)(gpqForeground + 120LL);
      if ( v9 )
      {
        if ( (*(_BYTE *)(v9 + 307) & 2) != 0 )
        {
          if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>(*(_QWORD *)(gpqForeground + 120LL), &v16) )
          {
            v2 = *(unsigned int *)(v16 + 20);
            if ( (_DWORD)v2 )
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
      }
      if ( !v8 )
        goto LABEL_29;
      do
      {
        if ( (unsigned int)IsTopLevelWindow(v8) )
          break;
        v8 = *(_QWORD *)(v8 + 104);
      }
      while ( v8 );
      if ( !v8 )
LABEL_29:
        v8 = v9;
      v1 = *(_QWORD *)v8;
    }
  }
  UserSessionSwitchLeaveCrit(v2, v0);
  return v1;
}
