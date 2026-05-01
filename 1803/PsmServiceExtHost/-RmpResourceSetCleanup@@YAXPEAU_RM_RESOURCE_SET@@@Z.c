/*
 * XREFs of ?RmpResourceSetCleanup@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x1800527F0
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001A400 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800229A4 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 */

void __fastcall RmpResourceSetCleanup(struct _RM_RESOURCE_SET *a1)
{
  void *v1; // r8
  void *v3; // r8
  void *v4; // rcx

  v1 = (void *)*((_QWORD *)a1 + 13);
  if ( v1 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
  v3 = (void *)*((_QWORD *)a1 + 10);
  if ( v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  RmpPartitionRelease(*((HANDLE **)a1 + 15));
  v4 = (void *)*((_QWORD *)a1 + 16);
  if ( v4 )
    NtClose(v4);
}
