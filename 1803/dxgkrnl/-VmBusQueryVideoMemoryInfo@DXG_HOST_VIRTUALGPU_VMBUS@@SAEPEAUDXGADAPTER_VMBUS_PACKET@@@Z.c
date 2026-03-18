/*
 * XREFs of ?VmBusQueryVideoMemoryInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01814F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D394 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXG.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1C009AB00 (DxgkQueryVideoMemoryInfo.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryVideoMemoryInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  _DWORD *v2; // rbx
  struct VMBPACKETCOMPLETION__ *v3; // rcx
  _BYTE v5[56]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v6[4]; // [rsp+58h] [rbp-28h] BYREF

  v2 = (_DWORD *)CastToVmBusCommand<DXGKVMB_COMMAND_OPENADAPTER>((__int64)a1);
  if ( !v2 )
    return 0;
  memset(v5, 0, sizeof(v5));
  *(_DWORD *)&v5[8] = v2[6];
  *(_DWORD *)&v5[12] = v2[7];
  *(_DWORD *)&v5[48] = v2[8];
  if ( (int)DxgkQueryVideoMemoryInfo(v5) < 0 )
    return 0;
  memset(v6, 0, sizeof(v6));
  v3 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
  v6[3] = *(_QWORD *)&v5[40];
  v6[0] = *(_QWORD *)&v5[16];
  v6[2] = *(_QWORD *)&v5[32];
  v6[1] = *(_QWORD *)&v5[24];
  VmBusCompletePacket(v3, v6, 0x20u);
  return 1;
}
