/*
 * XREFs of BmlIsSupportedByMonitorTargetMode @ 0x1C00C1EE0
 * Callers:
 *     BmlDoesTargetModeObeyConstraint @ 0x1C00C1A98 (BmlDoesTargetModeObeyConstraint.c)
 * Callees:
 *     ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00BE59C (-IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z.c)
 */

bool __fastcall BmlIsSupportedByMonitorTargetMode(__int64 a1, __int64 a2)
{
  int IsSupportedByMonitor; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rsi
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int8 v13; // [rsp+40h] [rbp+18h] BYREF
  int v14; // [rsp+48h] [rbp+20h] BYREF

  v14 = 0;
  v13 = 0;
  IsSupportedByMonitor = DMMVIDPNTARGETMODE::IsSupportedByMonitor(
                           (DMMVIDPNTARGETMODE *)a1,
                           a2,
                           &v13,
                           (enum _D3DKMDT_MODE_PRUNING_REASON *const)&v14);
  v8 = IsSupportedByMonitor;
  if ( IsSupportedByMonitor >= 0 )
    return v13 != 0;
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v5, v4, v6, v7);
  v10[3] = v8;
  v10[4] = *(unsigned int *)(a1 + 24);
  v11 = *(_QWORD *)(a1 + 40);
  if ( !v11 )
  {
    v12 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v12);
    v11 = *(_QWORD *)(a1 + 40);
  }
  v10[5] = v11;
  return 0;
}
