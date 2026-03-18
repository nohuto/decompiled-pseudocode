/*
 * XREFs of ?TdrDeleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0192898
 * Callers:
 *     ?TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C019290C (-TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 * Callees:
 *     ??_GCTDR_DUMP_BUFFER@@QEAAPEAXI@Z @ 0x1C01912EC (--_GCTDR_DUMP_BUFFER@@QEAAPEAXI@Z.c)
 */

void __fastcall TdrDeleteRecoveryContext(struct _TDR_RECOVERY_CONTEXT *a1)
{
  __int64 v2; // rcx
  CTDR_DUMP_BUFFER *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  v2 = *((_QWORD *)a1 + 354);
  if ( v2 )
    WdDbgReportComplete(v2);
  v3 = (CTDR_DUMP_BUFFER *)*((_QWORD *)a1 + 357);
  if ( v3 )
    CTDR_DUMP_BUFFER::`scalar deleting destructor'(v3);
  v4 = (void *)*((_QWORD *)a1 + 355);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x52445476u);
  v5 = (void *)*((_QWORD *)a1 + 358);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x52445476u);
  ExFreePoolWithTag(a1, 0x52445476u);
}
