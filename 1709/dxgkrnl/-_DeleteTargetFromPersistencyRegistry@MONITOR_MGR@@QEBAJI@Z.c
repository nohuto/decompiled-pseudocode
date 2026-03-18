/*
 * XREFs of ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C01FCEF8
 * Callers:
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FD634 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C01FD878 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C010D4B4 (-_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z.c)
 *     ?_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z @ 0x1C01FDAE0 (-_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z.c)
 */

int __fastcall MONITOR_MGR::_DeleteTargetFromPersistencyRegistry(MONITOR_MGR *this, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdi
  MONITOR_MGR *v5; // rcx
  __int64 v6; // rax
  int result; // eax
  __int64 v8; // rcx
  const WCHAR *v9; // rdx
  __int64 v10; // rax
  NTSTATUS v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  PCWSTR Path; // [rsp+20h] [rbp-68h] BYREF
  WCHAR ValueName[32]; // [rsp+30h] [rbp-58h] BYREF

  v2 = a2;
  v4 = (unsigned int)a2;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = (unsigned int)a2;
  if ( v2 == -1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v6);
  }
  result = MONITOR_MGR::_PersistencyRegNameFromTargetID(v5, v2, ValueName);
  if ( result >= 0 )
  {
    Path = 0LL;
    result = MONITOR_MGR::_OpenPersistencyRegistry(this, 0xF003Fu, (void **)&Path);
    if ( result >= 0 )
    {
      v9 = Path;
      if ( !Path )
      {
        v10 = WdLogNewEntry5_WdAssertion(v8);
        WdLogEvent5_WdAssertion(v10);
        v9 = Path;
      }
      v11 = RtlDeleteRegistryValue(0x40000000u, v9, ValueName);
      v13 = v11;
      if ( v11 < 0 )
      {
        v14 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v14 + 24) = v4;
        *(_QWORD *)(v14 + 32) = v13;
        WdLogEvent5_WdError(v14);
      }
      ZwClose((HANDLE)Path);
      return v13;
    }
  }
  return result;
}
