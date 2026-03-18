/*
 * XREFs of ?FlushHeapTransitions@ADAPTER_RENDER@@QEAAJXZ @ 0x1C016C6C8
 * Callers:
 *     ?VmBusFlushHeapTransitions@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D810 (-VmBusFlushHeapTransitions@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_RENDER::FlushHeapTransitions(ADAPTER_RENDER *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 54) + 8LL) + 1072LL))(*((_QWORD *)this + 55));
}
