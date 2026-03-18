/*
 * XREFs of ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1C01A79D0
 * Callers:
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C0102064 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 * Callees:
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C01A7180 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 *     ?TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C01A742C (-TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01A7890 (-TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 */

void __fastcall TdrResetFromTimeoutWorkItem(_QWORD *P)
{
  ULONG_PTR v1; // rdi
  __int64 v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _KTHREAD *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD *v13; // rax

  v1 = P[4];
  v3 = *(_QWORD *)(v1 + 32);
  TdrResetFromTimeout(v1);
  v7 = *(struct _KTHREAD **)(v1 + 2896);
  if ( !v7 || KeGetCurrentThread() == v7 )
  {
    TdrCompleteRecoveryContext((struct _TDR_RECOVERY_CONTEXT *)v1, 1, 1);
    v9 = MEMORY[0xFFFFF78000000320];
    v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
    v13[3] = v3;
    v13[4] = v9;
    v13[5] = KeGetCurrentThread();
    v13[6] = v1;
    WdLogEvent5_WdWarning(v13);
  }
  else
  {
    v8 = WdLogNewEntry5_WdEvent(v4, v7, v5, v6);
    *(_QWORD *)(v8 + 24) = 2641LL;
    WdLogEvent5_WdEvent(v8);
  }
  if ( *(struct _KTHREAD **)(v1 + 2896) != KeGetCurrentThread() )
  {
    TdrDereferenceRecoveryContext((_QWORD *)v1, 0);
    ExFreePoolWithTag(P, 0);
  }
}
