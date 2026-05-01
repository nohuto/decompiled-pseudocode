/*
 * XREFs of ?HampWakeContextDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180033970
 * Callers:
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 * Callees:
 *     CemRcObjectCleanup @ 0x180024C80 (CemRcObjectCleanup.c)
 */

void __fastcall HampWakeContextDestroy(struct _CEM_RC_OBJECT *a1)
{
  __int64 v2; // rcx
  void *v3; // rcx

  if ( *((_QWORD *)a1 + 15) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  if ( *((_QWORD *)a1 + 12) )
    TpReleaseWork();
  v2 = *((_QWORD *)a1 + 13);
  if ( v2 )
    TpReleaseTimer(v2);
  v3 = (void *)*((_QWORD *)a1 + 14);
  if ( v3 )
    NtClose(v3);
  CemRcObjectCleanup(a1);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
