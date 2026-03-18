/*
 * XREFs of ?_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z @ 0x1C01E3190
 * Callers:
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0114FFC (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C01E2370 (-_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C01E2738 (-_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MONITOR_MGR::_PersistencyRegNameFromTargetID(
        MONITOR_MGR *this,
        __int64 a2,
        unsigned __int16 *const a3,
        __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rax
  struct _UNICODE_STRING String; // [rsp+20h] [rbp-18h] BYREF

  v4 = (unsigned int)a2;
  if ( (_DWORD)a2 == -1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  *a3 = 0;
  *(_DWORD *)&String.Length = 4063232;
  String.Buffer = a3;
  v8 = RtlIntegerToUnicodeString(v4, 0x10u, &String);
  v11 = v8;
  if ( v8 < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = v4;
    *(_QWORD *)(v12 + 32) = v11;
    WdLogEvent5_WdError(v12);
  }
  else
  {
    a3[String.Length] = 0;
  }
  return (unsigned int)v11;
}
