/*
 * XREFs of ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C01E2370
 * Callers:
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E2990 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C01E2F28 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C0115088 (-_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z.c)
 *     ?_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z @ 0x1C01E3190 (-_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z.c)
 */

int __fastcall MONITOR_MGR::_AddTargetIntoPersistencyRegistry(MONITOR_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  MONITOR_MGR *v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // rax
  int result; // eax
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  const WCHAR *v16; // rdx
  __int64 v17; // rax
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  unsigned int ValueData; // [rsp+30h] [rbp-9h] BYREF
  PCWSTR Path; // [rsp+38h] [rbp-1h] BYREF
  WCHAR ValueName[32]; // [rsp+40h] [rbp+7h] BYREF

  ValueData = a2;
  v5 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v8 = (MONITOR_MGR *)ValueData;
  *(_QWORD *)(v5 + 24) = ValueData;
  v9 = ValueData;
  if ( ValueData == -1 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8, 0xFFFFFFFFLL, v6, v7);
    WdLogEvent5_WdAssertion(v10);
    v9 = -1;
  }
  result = MONITOR_MGR::_PersistencyRegNameFromTargetID(v8, v9, ValueName);
  if ( result >= 0 )
  {
    Path = 0LL;
    result = MONITOR_MGR::_OpenPersistencyRegistry(this, 131078LL, (void **)&Path, v12);
    if ( result >= 0 )
    {
      v16 = Path;
      if ( !Path )
      {
        v17 = WdLogNewEntry5_WdAssertion(v13, 0LL, v14, v15);
        WdLogEvent5_WdAssertion(v17);
        v16 = Path;
      }
      v18 = RtlWriteRegistryValue(0x40000000u, v16, ValueName, 4u, &ValueData, 4u);
      v21 = v18;
      if ( v18 < 0 )
      {
        v22 = WdLogNewEntry5_WdError(v20, v19);
        *(_QWORD *)(v22 + 24) = ValueData;
        *(_QWORD *)(v22 + 32) = v21;
        WdLogEvent5_WdError(v22);
      }
      ZwClose((HANDLE)Path);
      return v21;
    }
  }
  return result;
}
