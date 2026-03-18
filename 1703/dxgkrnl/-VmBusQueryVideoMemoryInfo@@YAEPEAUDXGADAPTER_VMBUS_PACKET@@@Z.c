/*
 * XREFs of ?VmBusQueryVideoMemoryInfo@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002E9D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1C008AD40 (DxgkQueryVideoMemoryInfo.c)
 */

unsigned __int8 __fastcall VmBusQueryVideoMemoryInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rbx
  struct VMBPACKETCOMPLETION__ *v3; // rcx
  _QWORD v5[7]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v6[4]; // [rsp+58h] [rbp-28h] BYREF

  v1 = *((_QWORD *)a1 + 9);
  memset(v5, 0, sizeof(v5));
  v5[1] = *(_QWORD *)(v1 + 16);
  LODWORD(v5[6]) = *(_DWORD *)(v1 + 24);
  if ( (int)DxgkQueryVideoMemoryInfo(v5) < 0 )
    return 0;
  memset(v6, 0, sizeof(v6));
  v3 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
  v6[3] = v5[5];
  v6[0] = v5[2];
  v6[2] = v5[4];
  v6[1] = v5[3];
  VmBusCompletePacket(v3, v6, 0x20u);
  return 1;
}
