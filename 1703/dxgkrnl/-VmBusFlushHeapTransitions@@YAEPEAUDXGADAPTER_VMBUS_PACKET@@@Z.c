/*
 * XREFs of ?VmBusFlushHeapTransitions@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D810
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?FlushHeapTransitions@ADAPTER_RENDER@@QEAAJXZ @ 0x1C016C6C8 (-FlushHeapTransitions@ADAPTER_RENDER@@QEAAJXZ.c)
 */

unsigned __int8 __fastcall VmBusFlushHeapTransitions(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  ADAPTER_RENDER *v4; // rcx
  _BYTE v6[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  char v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 5);
  v9 = 0;
  v8 = 0;
  v7 = *(_QWORD *)(v1 + 8);
  v3 = v7;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v6);
  if ( *(_DWORD *)(v3 + 176) == 1 )
  {
    v4 = *(ADAPTER_RENDER **)(v3 + 2288);
    if ( v4 )
      ADAPTER_RENDER::FlushHeapTransitions(v4);
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v9, 4u);
  if ( v8 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v6);
  return 1;
}
