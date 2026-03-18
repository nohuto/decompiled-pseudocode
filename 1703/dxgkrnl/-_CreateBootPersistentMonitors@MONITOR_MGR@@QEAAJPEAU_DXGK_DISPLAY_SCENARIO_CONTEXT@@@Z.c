/*
 * XREFs of ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0114FFC
 * Callers:
 *     ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0115BE4 (-_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00E9DB8 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C0115088 (-_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z.c)
 *     DmmIsTargetForcable @ 0x1C01D6310 (DmmIsTargetForcable.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E2990 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z @ 0x1C01E3190 (-_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_CreateBootPersistentMonitors(
        MONITOR_MGR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // rax
  ULONG v11; // esi
  _DWORD *v12; // rdi
  WCHAR *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  _DWORD *v16; // r15
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r14
  __int64 v23; // rax
  NTSTATUS v24; // eax
  __int64 v25; // rax
  __int64 v26; // r14
  int IsTargetForcable; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  WCHAR *v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  int SimulatedMonitor; // esi
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  NTSTATUS v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rsi
  __int64 v48; // rax
  char v49[8]; // [rsp+30h] [rbp-89h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-81h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-79h] BYREF
  __int64 v52; // [rsp+48h] [rbp-71h]
  UNICODE_STRING String2; // [rsp+50h] [rbp-69h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-59h] BYREF
  char KeyValueInformation[12]; // [rsp+70h] [rbp-49h] BYREF
  unsigned int v56; // [rsp+7Ch] [rbp-3Dh]
  WCHAR SourceString[32]; // [rsp+90h] [rbp-29h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  KeyHandle = 0LL;
  if ( MONITOR_MGR::_OpenPersistencyRegistry(this, 0x20019u, &KeyHandle) >= 0 )
  {
    if ( !KeyHandle )
    {
      v10 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
      WdLogEvent5_WdAssertion(v10);
    }
    v11 = -1;
    v12 = 0LL;
    v13 = 0LL;
    while ( 1 )
    {
      ++v11;
      if ( !v12 )
      {
        v12 = operator new(0x60uLL, 0x4D677844u, PagedPool);
        if ( !v12 )
        {
          v15 = WdLogNewEntry5_WdLowResource(v14);
          WdLogEvent5_WdLowResource(v15);
          return 3221225495LL;
        }
      }
      v12[2] = -1;
      v16 = v12 + 3;
      v17 = ZwEnumerateValueKey(KeyHandle, v11, KeyValueBasicInformation, v12 + 3, 0x4Eu, &ResultLength);
      v22 = v17;
      if ( v17 == -2147483622 )
      {
        v35 = WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
        *(_QWORD *)(v35 + 24) = v11;
        *(_QWORD *)(v35 + 32) = this;
        ExFreePoolWithTag(v12, 0);
        while ( v13 )
        {
          v36 = v13;
          v13 = *(WCHAR **)v13;
          v37 = *((unsigned int *)v36 + 2);
          if ( (_DWORD)v37 == -1 )
          {
            v44 = RtlDeleteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, v36 + 12);
            v47 = v44;
            if ( v44 < 0 )
            {
              v48 = WdLogNewEntry5_WdError(v46, v45);
              *(_QWORD *)(v48 + 24) = v47;
              WdLogEvent5_WdError(v48);
            }
          }
          else
          {
            v52 = 0LL;
            SimulatedMonitor = MONITOR_MGR::_HandleCreateSimulatedMonitor(this, v37, 2LL);
            if ( SimulatedMonitor >= 0 && !v52 )
            {
              v43 = WdLogNewEntry5_WdAssertion(v39, v38, v41, v42);
              WdLogEvent5_WdAssertion(v43);
            }
            MONITOR_MGR::_LogMonitorPresentEvent(
              (__int64)this,
              1073741825LL,
              *((unsigned int *)v36 + 2),
              (unsigned int)SimulatedMonitor,
              0LL);
          }
          ExFreePoolWithTag(v36, 0);
        }
        ZwClose(KeyHandle);
        return 0LL;
      }
      if ( v17 < 0 )
        goto LABEL_13;
      *((_WORD *)v16 + ((unsigned __int64)(unsigned int)v12[5] >> 1) + 6) = 0;
      *(_QWORD *)v12 = v13;
      v13 = (WCHAR *)v12;
      v12 = 0LL;
      if ( v16[1] != 4 )
      {
        v23 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
        *(_QWORD *)(v23 + 24) = v11;
        *(_QWORD *)(v23 + 32) = (unsigned int)v16[1];
        goto LABEL_15;
      }
      v24 = ZwEnumerateValueKey(KeyHandle, v11, KeyValuePartialInformation, KeyValueInformation, 0x13u, &ResultLength);
      v22 = v24;
      if ( v24 == -2147483622 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
        WdLogEvent5_WdAssertion(v25);
      }
      if ( (int)v22 < 0 )
      {
LABEL_13:
        v23 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
        *(_QWORD *)(v23 + 24) = v11;
        *(_QWORD *)(v23 + 32) = v22;
        goto LABEL_15;
      }
      v26 = v56;
      v49[0] = 0;
      IsTargetForcable = DmmIsTargetForcable(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL), v56, v49, 0LL);
      if ( IsTargetForcable < 0 )
      {
        if ( IsTargetForcable == -1071774971 )
          goto LABEL_25;
      }
      else if ( v49[0] )
      {
        if ( MONITOR_MGR::_PersistencyRegNameFromTargetID(0LL, v26, SourceString) >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, (PCWSTR)v16 + 6);
          RtlInitUnicodeString(&String2, SourceString);
          if ( RtlCompareUnicodeString(&DestinationString, &String2, 0) )
          {
            v23 = WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
            goto LABEL_15;
          }
          *((_DWORD *)v13 + 2) = v26;
        }
      }
      else
      {
LABEL_25:
        v23 = WdLogNewEntry5_WdWarning(0LL, v28, v29, v30);
        *(_QWORD *)(v23 + 24) = v26;
LABEL_15:
        WdLogEvent5_WdWarning(v23);
      }
    }
  }
  return 0LL;
}
