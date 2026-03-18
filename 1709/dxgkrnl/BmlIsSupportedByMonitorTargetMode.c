/*
 * XREFs of BmlIsSupportedByMonitorTargetMode @ 0x1C00D9470
 * Callers:
 *     BmlDoesTargetModeObeyConstraint @ 0x1C00D4744 (BmlDoesTargetModeObeyConstraint.c)
 * Callees:
 *     ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00D733C (-IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z.c)
 */

bool __fastcall BmlIsSupportedByMonitorTargetMode(__int64 a1, __int64 a2)
{
  int IsSupportedByMonitor; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int8 v11; // [rsp+40h] [rbp+18h] BYREF
  int v12; // [rsp+48h] [rbp+20h] BYREF

  v12 = 0;
  v11 = 0;
  IsSupportedByMonitor = DMMVIDPNTARGETMODE::IsSupportedByMonitor(
                           (DMMVIDPNTARGETMODE *)a1,
                           a2,
                           &v11,
                           (enum _D3DKMDT_MODE_PRUNING_REASON *const)&v12);
  v6 = IsSupportedByMonitor;
  if ( IsSupportedByMonitor >= 0 )
    return v11 != 0;
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(v5, v4);
  v8[3] = v6;
  v9 = *(unsigned int *)(a1 + 24);
  v8[4] = v9;
  if ( !*(_QWORD *)(a1 + 40) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v10);
  }
  v8[5] = *(_QWORD *)(a1 + 40);
  return 0;
}
