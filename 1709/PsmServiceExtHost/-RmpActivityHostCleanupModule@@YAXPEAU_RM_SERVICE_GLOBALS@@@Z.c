/*
 * XREFs of ?RmpActivityHostCleanupModule@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800358CC
 * Callers:
 *     RmpDestroyResourceManagerServer @ 0x180031264 (RmpDestroyResourceManagerServer.c)
 * Callees:
 *     ?RmpObjectTableCleanup@@YAXPEAU_RM_OBJECT_TABLE@@@Z @ 0x180039D4C (-RmpObjectTableCleanup@@YAXPEAU_RM_OBJECT_TABLE@@@Z.c)
 */

void __fastcall RmpActivityHostCleanupModule(struct _RM_SERVICE_GLOBALS *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  void *v4; // r8
  void *v5; // r8

  RmpObjectTableCleanup((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 16));
  v2 = *((_QWORD *)a1 + 198);
  if ( v2 )
    TpReleaseCleanupGroup(v2);
  v3 = *((_QWORD *)a1 + 209);
  if ( v3 )
    TpReleaseCleanupGroup(v3);
  if ( *((_QWORD *)a1 + 208) )
    TpReleasePool();
  v4 = (void *)*((_QWORD *)a1 + 195);
  if ( v4 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  v5 = (void *)*((_QWORD *)a1 + 197);
  if ( v5 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
}
