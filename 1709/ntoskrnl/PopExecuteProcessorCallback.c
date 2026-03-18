/*
 * XREFs of PopExecuteProcessorCallback @ 0x14011B930
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueTargetDpc @ 0x14008ECA4 (PopQueueTargetDpc.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

BOOLEAN __fastcall PopExecuteProcessorCallback(__int64 a1, __int64 a2)
{
  int v4; // eax

  v4 = (*(__int64 (__fastcall **)(struct _KPRCB *, _QWORD, _QWORD))a2)(
         KeGetCurrentPrcb(),
         *(_QWORD *)(a2 + 8),
         *(_QWORD *)(a2 + 16));
  if ( v4 < 0 )
    *(_DWORD *)(a2 + 40) = v4;
  return PopQueueTargetDpc(a1, a2);
}
