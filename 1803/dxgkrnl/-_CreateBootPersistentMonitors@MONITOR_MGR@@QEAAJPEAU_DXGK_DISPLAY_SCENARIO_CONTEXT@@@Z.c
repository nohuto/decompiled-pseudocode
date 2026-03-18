/*
 * XREFs of ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022A678
 * Callers:
 *     ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022CCAC (-_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00BA5C4 (-DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00BAA4C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022B9B8 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C022CD2C (-_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z.c)
 *     ?_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z @ 0x1C022CF6C (-_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_CreateBootPersistentMonitors(
        MONITOR_MGR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  ULONG v7; // esi
  _DWORD *v8; // rdi
  WCHAR *v9; // rbx
  __int64 v10; // rcx
  _DWORD *v11; // r15
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r14
  __int64 v18; // rax
  NTSTATUS v19; // eax
  __int64 v20; // rax
  __int64 v21; // r14
  int IsTargetForcable; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v30; // rax
  WCHAR *v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  int SimulatedMonitor; // esi
  __int64 v35; // rax
  NTSTATUS v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // rax
  bool v40; // [rsp+30h] [rbp-89h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-81h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-79h] BYREF
  __int64 v43; // [rsp+48h] [rbp-71h]
  UNICODE_STRING String2; // [rsp+50h] [rbp-69h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-59h] BYREF
  char KeyValueInformation[12]; // [rsp+70h] [rbp-49h] BYREF
  unsigned int v47; // [rsp+7Ch] [rbp-3Dh]
  WCHAR SourceString[32]; // [rsp+90h] [rbp-29h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  KeyHandle = 0LL;
  if ( MONITOR_MGR::_OpenPersistencyRegistry(this, 0x20019u, &KeyHandle) >= 0 )
  {
    if ( !KeyHandle )
    {
      v6 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v6);
    }
    v7 = -1;
    v8 = 0LL;
    v9 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        ++v7;
        if ( !v8 )
        {
          v8 = operator new[](0x60uLL, 0x4D677844u, PagedPool);
          if ( !v8 )
          {
            v28 = WdLogNewEntry5_WdLowResource(v10);
            WdLogEvent5_WdLowResource(v28);
            return 3221225495LL;
          }
        }
        v8[2] = -1;
        v11 = v8 + 3;
        v12 = ZwEnumerateValueKey(KeyHandle, v7, KeyValueBasicInformation, v8 + 3, 0x4Eu, &ResultLength);
        v17 = v12;
        if ( v12 == -2147483622 )
        {
          v30 = WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
          *(_QWORD *)(v30 + 24) = v7;
          *(_QWORD *)(v30 + 32) = this;
          operator delete[](v8);
          while ( v9 )
          {
            v31 = v9;
            v9 = *(WCHAR **)v9;
            v32 = *((unsigned int *)v31 + 2);
            if ( (_DWORD)v32 == -1 )
            {
              v36 = RtlDeleteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, v31 + 12);
              v38 = v36;
              if ( v36 < 0 )
              {
                v39 = WdLogNewEntry5_WdError(v37);
                *(_QWORD *)(v39 + 24) = v38;
                WdLogEvent5_WdError(v39);
              }
            }
            else
            {
              v43 = 0LL;
              SimulatedMonitor = MONITOR_MGR::_HandleCreateSimulatedMonitor(this, v32, 2LL);
              if ( SimulatedMonitor >= 0 && !v43 )
              {
                v35 = WdLogNewEntry5_WdAssertion(v33);
                WdLogEvent5_WdAssertion(v35);
              }
              MONITOR_MGR::_LogMonitorPresentEvent(
                (__int64)this,
                1073741825,
                *((_DWORD *)v31 + 2),
                SimulatedMonitor,
                0LL);
            }
            operator delete[](v31);
          }
          ZwClose(KeyHandle);
          return 0LL;
        }
        if ( v12 < 0 )
        {
LABEL_9:
          v18 = WdLogNewEntry5_WdWarning(v14, v13, v15);
          *(_QWORD *)(v18 + 24) = v7;
          *(_QWORD *)(v18 + 32) = v17;
          goto LABEL_10;
        }
        *((_WORD *)v11 + ((unsigned __int64)(unsigned int)v8[5] >> 1) + 6) = 0;
        *(_QWORD *)v8 = v9;
        v9 = (WCHAR *)v8;
        v8 = 0LL;
        if ( v11[1] != 4 )
        {
          v18 = WdLogNewEntry5_WdWarning(v14, v13, v15);
          *(_QWORD *)(v18 + 24) = v7;
          *(_QWORD *)(v18 + 32) = (unsigned int)v11[1];
          goto LABEL_10;
        }
        v19 = ZwEnumerateValueKey(KeyHandle, v7, KeyValuePartialInformation, KeyValueInformation, 0x13u, &ResultLength);
        v17 = v19;
        if ( v19 == -2147483622 )
        {
          v20 = WdLogNewEntry5_WdAssertion(v14);
          WdLogEvent5_WdAssertion(v20);
        }
        if ( (int)v17 < 0 )
          goto LABEL_9;
        v21 = v47;
        v40 = 0;
        IsTargetForcable = DmmIsTargetForcable(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL), v47, &v40, 0);
        if ( IsTargetForcable < 0 )
          break;
        if ( !v40 )
          goto LABEL_18;
        if ( MONITOR_MGR::_PersistencyRegNameFromTargetID(0LL, v21, SourceString) >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, (PCWSTR)v11 + 6);
          RtlInitUnicodeString(&String2, SourceString);
          if ( RtlCompareUnicodeString(&DestinationString, &String2, 0) )
          {
            v18 = WdLogNewEntry5_WdWarning(v26, v25, v27);
LABEL_10:
            WdLogEvent5_WdWarning(v18);
          }
          else
          {
            *((_DWORD *)v9 + 2) = v21;
          }
        }
      }
      if ( IsTargetForcable == -1071774971 )
      {
LABEL_18:
        v18 = WdLogNewEntry5_WdWarning(0LL, v23, v24);
        *(_QWORD *)(v18 + 24) = v21;
        goto LABEL_10;
      }
    }
  }
  return 0LL;
}
