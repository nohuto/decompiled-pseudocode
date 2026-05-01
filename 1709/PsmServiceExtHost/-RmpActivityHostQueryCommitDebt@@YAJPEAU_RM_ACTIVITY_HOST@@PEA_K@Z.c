/*
 * XREFs of ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180008A64
 * Callers:
 *     ?RmpTelemetryLogPartitionState@@YAJPEAU_RM_PARTITION@@PEAX@Z @ 0x180004290 (-RmpTelemetryLogPartitionState@@YAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180007450 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180009AF0 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18000FAF0 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180010B70 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 * Callees:
 *     ?RmpActivityHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180008AD8 (-RmpActivityHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostQueryCommitDebt(struct _RM_ACTIVITY_HOST *a1, unsigned __int64 *a2)
{
  const GUID *v3; // r9
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  UINT32 cData; // r10d
  int v8; // [rsp+30h] [rbp-9h] BYREF
  __int64 v9; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  int *v11; // [rsp+60h] [rbp+27h]
  UINT32 v12; // [rsp+68h] [rbp+2Fh]
  int v13; // [rsp+6Ch] [rbp+33h]
  __int64 *v14; // [rsp+70h] [rbp+37h]
  int v15; // [rsp+78h] [rbp+3Fh]
  int v16; // [rsp+7Ch] [rbp+43h]

  *a2 = 0LL;
  v8 = RmpActivityHostActOnProcesses(
         a1,
         0x1000u,
         1u,
         (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpActivityHostCommitDebtCallback,
         a2);
  LODWORD(v3) = v8;
  if ( v8 < 0 )
  {
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v13 = 0;
      v16 = 0;
      v11 = &v8;
      v9 = *((_QWORD *)a1 + 3);
      v14 = &v9;
      v12 = cData;
      v15 = 8;
      TlgWrite(v5, &unk_18005A77A, v6, v3, cData, &pData);
      LODWORD(v3) = v8;
    }
  }
  else
  {
    LODWORD(v3) = 0;
  }
  return (unsigned int)v3;
}
