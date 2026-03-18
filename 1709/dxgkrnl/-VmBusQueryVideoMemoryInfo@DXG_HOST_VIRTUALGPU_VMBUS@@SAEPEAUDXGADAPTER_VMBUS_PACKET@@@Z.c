/*
 * XREFs of ?VmBusQueryVideoMemoryInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0194EF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1C007CCE0 (DxgkQueryVideoMemoryInfo.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryVideoMemoryInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  _DWORD *v1; // rbx
  struct VMBPACKETCOMPLETION__ *v3; // rcx
  _BYTE v5[56]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v6[4]; // [rsp+58h] [rbp-28h] BYREF

  v1 = (_DWORD *)*((_QWORD *)a1 + 9);
  memset(v5, 0, sizeof(v5));
  *(_DWORD *)&v5[8] = v1[6];
  *(_DWORD *)&v5[12] = v1[7];
  *(_DWORD *)&v5[48] = v1[8];
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
