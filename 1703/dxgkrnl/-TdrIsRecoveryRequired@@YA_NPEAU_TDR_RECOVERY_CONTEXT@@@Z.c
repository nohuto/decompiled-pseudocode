/*
 * XREFs of ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0192B40
 * Callers:
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x1C01B6930 (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0005D94 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C016E650 (-PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C01918D0 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrHistoryIsLimitExhausted@@YA_NPEBU_TDR_HISTORY@@PEBU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C0192A10 (-TdrHistoryIsLimitExhausted@@YA_NPEBU_TDR_HISTORY@@PEBU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrIsDisplayOnlyTdr@@YA_NW4_TDR_TIMEOUT_REASON@@@Z @ 0x1C0192AF4 (-TdrIsDisplayOnlyTdr@@YA_NW4_TDR_TIMEOUT_REASON@@@Z.c)
 *     ?TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z @ 0x1C0192FA0 (-TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C01930A0 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     TdrAllowToDebugTimeout @ 0x1C01933A4 (TdrAllowToDebugTimeout.c)
 *     TdrBugcheckOnTimeout @ 0x1C019350C (TdrBugcheckOnTimeout.c)
 */

char __fastcall TdrIsRecoveryRequired(struct _TDR_RECOVERY_CONTEXT *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned __int8 CurrentIrql; // di
  __int64 v6; // rax
  unsigned int v8; // eax
  int v9; // ecx
  __int64 v10; // rax
  DXGADAPTER *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  unsigned int v15; // [rsp+38h] [rbp+10h] BYREF

  if ( !g_TdrConfig
    || (unsigned int)TdrAllowToDebugTimeout()
    || _InterlockedCompareExchange64((volatile signed __int64 *)&g_TdrRecoveryInProgress, (signed __int64)a1, 0LL) )
  {
    return 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql )
  {
    v6 = WdLogNewEntry5_WdCriticalError(v3, v2, v4);
    *(_QWORD *)(v6 + 32) = CurrentIrql;
    *(_QWORD *)(v6 + 24) = a1;
    WdLogEvent5_WdCriticalError(v6);
    return 0;
  }
  if ( KeAreAllApcsDisabled() )
  {
    v8 = *((_DWORD *)a1 + 4);
    if ( v8 > 0xA || (v9 = 1682, !_bittest(&v9, v8)) )
    {
      TdrCollectDbgInfoStage1(a1, 0);
      TdrRetrieveSecondaryBucketingKey(a1, &v15);
      *((_QWORD *)a1 + 354) = 0LL;
      TdrBugcheckOnTimeout((ULONG_PTR)a1);
    }
    WdDiagNotifyUser(8LL, 2LL, 0LL, 0LL);
    return 0;
  }
  TdrUpdateDbgReport(a1, 1);
  v10 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 2288LL);
  if ( v10
    && (*(int (__fastcall **)(struct _TDR_RECOVERY_CONTEXT *))(*(_QWORD *)(*(_QWORD *)(v10 + 408) + 8LL) + 496LL))(a1) < 0 )
  {
    *((_QWORD *)a1 + 13) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 2288LL) + 408LL) + 8LL)
                                     + 496LL);
    TdrBugcheckOnTimeout((ULONG_PTR)a1);
  }
  TdrCollectDbgInfoStage1(a1, 1);
  if ( ((*((_DWORD *)a1 + 4) - 2) & 0xFFFFFFFB) == 0 && !*((_QWORD *)a1 + 9) && g_TdrDebugMode != 3 )
    TdrBugcheckOnTimeout((ULONG_PTR)a1);
  if ( TdrHistoryIsLimitExhausted((const struct _TDR_HISTORY *)&g_TdrHistory, a1, 0) && g_TdrDebugMode != 3 )
    TdrBugcheckOnTimeout((ULONG_PTR)a1);
  if ( g_TdrConfig == 1 )
    TdrBugcheckOnTimeout((ULONG_PTR)a1);
  if ( !TdrIsDisplayOnlyTdr(*((_DWORD *)a1 + 4)) && !DXGADAPTER::IsDxgmms2(*((DXGADAPTER **)a1 + 4)) )
  {
    v14 = DXGADAPTER::PrepareToReset(v11, a1, v12, v13);
    if ( v14 < 0 )
    {
      if ( v14 != -1073741643 )
        *((_QWORD *)a1 + 13) = -1LL;
      TdrBugcheckOnTimeout((ULONG_PTR)a1);
    }
  }
  return 1;
}
