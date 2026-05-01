/*
 * XREFs of ?RmpResourceSetCleanup@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x180034C90
 * Callers:
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180009AF0 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180014AD0 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 */

void __fastcall RmpResourceSetCleanup(struct _RM_RESOURCE_SET *a1)
{
  void *v1; // r8
  void *v3; // r8
  void *v4; // rcx

  v1 = (void *)*((_QWORD *)a1 + 12);
  if ( v1 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
  v3 = (void *)*((_QWORD *)a1 + 9);
  if ( v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  RmpPartitionRelease(*((HANDLE **)a1 + 14));
  v4 = (void *)*((_QWORD *)a1 + 15);
  if ( v4 )
    NtClose(v4);
}
