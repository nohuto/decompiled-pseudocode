/*
 * XREFs of ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010D428
 * Callers:
 *     ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010DE84 (-_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00B05A0 (-DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00B0DD4 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C010D4B4 (-_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FD150 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z @ 0x1C01FDAE0 (-_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_CreateBootPersistentMonitors(
        MONITOR_MGR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  ULONG v6; // esi
  _DWORD *v7; // rdi
  WCHAR *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  _DWORD *v11; // r15
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r14
  __int64 v17; // rax
  NTSTATUS v18; // eax
  __int64 v19; // rax
  __int64 v20; // r14
  int IsTargetForcable; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  WCHAR *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  int SimulatedMonitor; // esi
  __int64 v32; // rax
  NTSTATUS v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // rax
  unsigned __int8 v37[8]; // [rsp+30h] [rbp-89h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-81h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-79h] BYREF
  __int64 v40; // [rsp+48h] [rbp-71h]
  UNICODE_STRING String2; // [rsp+50h] [rbp-69h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-59h] BYREF
  char KeyValueInformation[12]; // [rsp+70h] [rbp-49h] BYREF
  unsigned int v44; // [rsp+7Ch] [rbp-3Dh]
  WCHAR SourceString[32]; // [rsp+90h] [rbp-29h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  KeyHandle = 0LL;
  if ( MONITOR_MGR::_OpenPersistencyRegistry(this, 0x20019u, &KeyHandle) >= 0 )
  {
    if ( !KeyHandle )
    {
      v5 = WdLogNewEntry5_WdAssertion(v3);
      WdLogEvent5_WdAssertion(v5);
    }
    v6 = -1;
    v7 = 0LL;
    v8 = 0LL;
    while ( 1 )
    {
      ++v6;
      if ( !v7 )
      {
        v7 = operator new(0x60uLL, 0x4D677844u, PagedPool);
        if ( !v7 )
        {
          v10 = WdLogNewEntry5_WdLowResource(v9);
          WdLogEvent5_WdLowResource(v10);
          return 3221225495LL;
        }
      }
      v7[2] = -1;
      v11 = v7 + 3;
      v12 = ZwEnumerateValueKey(KeyHandle, v6, KeyValueBasicInformation, v7 + 3, 0x4Eu, &ResultLength);
      v16 = v12;
      if ( v12 == -2147483622 )
      {
        v27 = WdLogNewEntry5_WdTrace(v14, v13);
        *(_QWORD *)(v27 + 24) = v6;
        *(_QWORD *)(v27 + 32) = this;
        ExFreePoolWithTag(v7, 0);
        while ( v8 )
        {
          v28 = v8;
          v8 = *(WCHAR **)v8;
          v29 = *((unsigned int *)v28 + 2);
          if ( (_DWORD)v29 == -1 )
          {
            v33 = RtlDeleteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, v28 + 12);
            v35 = v33;
            if ( v33 < 0 )
            {
              v36 = WdLogNewEntry5_WdError(v34);
              *(_QWORD *)(v36 + 24) = v35;
              WdLogEvent5_WdError(v36);
            }
          }
          else
          {
            v40 = 0LL;
            SimulatedMonitor = MONITOR_MGR::_HandleCreateSimulatedMonitor(this, v29, 2LL);
            if ( SimulatedMonitor >= 0 && !v40 )
            {
              v32 = WdLogNewEntry5_WdAssertion(v30);
              WdLogEvent5_WdAssertion(v32);
            }
            MONITOR_MGR::_LogMonitorPresentEvent((__int64)this, 1073741825, *((_DWORD *)v28 + 2), SimulatedMonitor, 0LL);
          }
          ExFreePoolWithTag(v28, 0);
        }
        ZwClose(KeyHandle);
        return 0LL;
      }
      if ( v12 < 0 )
        goto LABEL_13;
      *((_WORD *)v11 + ((unsigned __int64)(unsigned int)v7[5] >> 1) + 6) = 0;
      *(_QWORD *)v7 = v8;
      v8 = (WCHAR *)v7;
      v7 = 0LL;
      if ( v11[1] != 4 )
      {
        v17 = WdLogNewEntry5_WdWarning(v14, v13, v15);
        *(_QWORD *)(v17 + 24) = v6;
        *(_QWORD *)(v17 + 32) = (unsigned int)v11[1];
        goto LABEL_15;
      }
      v18 = ZwEnumerateValueKey(KeyHandle, v6, KeyValuePartialInformation, KeyValueInformation, 0x13u, &ResultLength);
      v16 = v18;
      if ( v18 == -2147483622 )
      {
        v19 = WdLogNewEntry5_WdAssertion(v14);
        WdLogEvent5_WdAssertion(v19);
      }
      if ( (int)v16 < 0 )
      {
LABEL_13:
        v17 = WdLogNewEntry5_WdWarning(v14, v13, v15);
        *(_QWORD *)(v17 + 24) = v6;
        *(_QWORD *)(v17 + 32) = v16;
        goto LABEL_15;
      }
      v20 = v44;
      v37[0] = 0;
      IsTargetForcable = DmmIsTargetForcable(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL), v44, v37, 0);
      if ( IsTargetForcable < 0 )
      {
        if ( IsTargetForcable == -1071774971 )
          goto LABEL_25;
      }
      else if ( v37[0] )
      {
        if ( MONITOR_MGR::_PersistencyRegNameFromTargetID(0LL, v20, SourceString) >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, (PCWSTR)v11 + 6);
          RtlInitUnicodeString(&String2, SourceString);
          if ( RtlCompareUnicodeString(&DestinationString, &String2, 0) )
          {
            v17 = WdLogNewEntry5_WdWarning(v25, v24, v26);
            goto LABEL_15;
          }
          *((_DWORD *)v8 + 2) = v20;
        }
      }
      else
      {
LABEL_25:
        v17 = WdLogNewEntry5_WdWarning(0LL, v22, v23);
        *(_QWORD *)(v17 + 24) = v20;
LABEL_15:
        WdLogEvent5_WdWarning(v17);
      }
    }
  }
  return 0LL;
}
