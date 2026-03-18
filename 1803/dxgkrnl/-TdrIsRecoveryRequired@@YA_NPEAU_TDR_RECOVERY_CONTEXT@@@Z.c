/*
 * XREFs of ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C019A2D0
 * Callers:
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x1C01D73C4 (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0015AA8 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C014DAA0 (-PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C0198B30 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrHistoryIsLimitExhausted@@YA_NPEBU_TDR_HISTORY@@PEBU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C0199C70 (-TdrHistoryIsLimitExhausted@@YA_NPEBU_TDR_HISTORY@@PEBU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrIsDisplayOnlyTdr@@YA_NW4_TDR_TIMEOUT_REASON@@@Z @ 0x1C019A26C (-TdrIsDisplayOnlyTdr@@YA_NW4_TDR_TIMEOUT_REASON@@@Z.c)
 *     ?TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z @ 0x1C019A72C (-TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C019A830 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     TdrAllowToDebugTimeout @ 0x1C019AB3C (TdrAllowToDebugTimeout.c)
 *     TdrBugcheckOnTimeout @ 0x1C019ACA4 (TdrBugcheckOnTimeout.c)
 */

char __fastcall TdrIsRecoveryRequired(struct _TDR_RECOVERY_CONTEXT *a1)
{
  __int64 v2; // rcx
  unsigned __int8 CurrentIrql; // di
  __int64 v4; // rax
  unsigned int v6; // eax
  int v7; // ecx
  __int64 v8; // rax
  DXGADAPTER *v9; // rcx
  int v10; // eax
  unsigned int v11; // [rsp+38h] [rbp+10h] BYREF

  if ( !g_TdrConfig
    || (unsigned int)TdrAllowToDebugTimeout()
    || _InterlockedCompareExchange64((volatile signed __int64 *)&g_TdrRecoveryInProgress, (signed __int64)a1, 0LL) )
  {
    return 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql )
  {
    v4 = WdLogNewEntry5_WdCriticalError(v2);
    *(_QWORD *)(v4 + 32) = CurrentIrql;
    *(_QWORD *)(v4 + 24) = a1;
    WdLogEvent5_WdCriticalError(v4);
    return 0;
  }
  if ( KeAreAllApcsDisabled() )
  {
    v6 = *((_DWORD *)a1 + 4);
    if ( v6 > 0xB || (v7 = 3730, !_bittest(&v7, v6)) )
    {
      TdrCollectDbgInfoStage1(a1, 0);
      TdrRetrieveSecondaryBucketingKey(a1, &v11);
      *((_QWORD *)a1 + 354) = 0LL;
      TdrBugcheckOnTimeout((ULONG_PTR)a1);
    }
    WdDiagNotifyUser(8LL, 2LL, 0LL, 0LL);
    return 0;
  }
  TdrUpdateDbgReport(a1, 1);
  v8 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 2464LL);
  if ( v8
    && (*(int (__fastcall **)(struct _TDR_RECOVERY_CONTEXT *))(*(_QWORD *)(*(_QWORD *)(v8 + 520) + 8LL) + 592LL))(a1) < 0 )
  {
    *((_QWORD *)a1 + 13) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 2464LL) + 520LL) + 8LL)
                                     + 592LL);
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
    v10 = DXGADAPTER::PrepareToReset(v9, a1);
    if ( v10 < 0 )
    {
      if ( v10 != -1073741643 )
        *((_QWORD *)a1 + 13) = -1LL;
      TdrBugcheckOnTimeout((ULONG_PTR)a1);
    }
  }
  return 1;
}
