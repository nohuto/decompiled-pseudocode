/*
 * XREFs of ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1C0192EC0
 * Callers:
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C0104760 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 * Callees:
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C0192660 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 *     ?TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C019290C (-TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0192D80 (-TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 */

void __fastcall TdrResetFromTimeoutWorkItem(_QWORD *P, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rdi
  __int64 v6; // rbp
  __int64 v7; // rcx
  struct _KTHREAD *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rax

  v4 = P[4];
  v6 = *(_QWORD *)(v4 + 32);
  TdrResetFromTimeout(v4, a2, a3, a4);
  v8 = *(struct _KTHREAD **)(v4 + 2896);
  if ( !v8 || KeGetCurrentThread() == v8 )
  {
    TdrCompleteRecoveryContext((struct _TDR_RECOVERY_CONTEXT *)v4, 1, 1);
    v10 = MEMORY[0xFFFFF78000000320];
    v15 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
    v15[3] = v6;
    v15[4] = v10;
    v15[5] = KeGetCurrentThread();
    v15[6] = v4;
    WdLogEvent5_WdWarning(v15);
  }
  else
  {
    v9 = WdLogNewEntry5_WdEvent(v7);
    *(_QWORD *)(v9 + 24) = 2639LL;
    WdLogEvent5_WdEvent(v9);
  }
  if ( *(struct _KTHREAD **)(v4 + 2896) != KeGetCurrentThread() )
  {
    TdrDereferenceRecoveryContext((struct _TDR_RECOVERY_CONTEXT *)v4, 0);
    ExFreePoolWithTag(P, 0);
  }
}
