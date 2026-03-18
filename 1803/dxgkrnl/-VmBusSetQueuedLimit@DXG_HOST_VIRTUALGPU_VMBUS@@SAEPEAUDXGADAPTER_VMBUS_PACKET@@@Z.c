/*
 * XREFs of ?VmBusSetQueuedLimit@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01866B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D394 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXG.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkSetQueuedLimit @ 0x1C00A0B50 (DxgkSetQueuedLimit.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetQueuedLimit(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int128 *v5; // rbx
  int v6; // eax
  struct VMBPACKETCOMPLETION__ *v7; // rcx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+30h] [rbp-18h]

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_OPENADAPTER>((__int64)a1);
  if ( v2 )
  {
    v5 = (__int128 *)(v2 + 24);
    v9 = 0uLL;
    v10 = 0;
    v6 = DxgkSetQueuedLimit(v2 + 24, v3, v4);
    v7 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
    v10 = v6;
    v9 = *v5;
    VmBusCompletePacket(v7, &v9, 0x14u);
    LOBYTE(v2) = 1;
  }
  return v2;
}
