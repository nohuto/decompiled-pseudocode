/*
 * XREFs of ?VmBusQueryStatistics@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01813E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_QUERYSTATISTICS@@@@YAPEAUDXGKVMB_COMMAND_QUERYSTATISTICS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D4AC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_QUERYSTATISTICS@@@@YAPEAUDXGKVMB_COMMAND_QUERYSTATISTICS@.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkQueryStatisticsInternal @ 0x1C0168B08 (DxgkQueryStatisticsInternal.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryStatistics(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v5; // r8
  int StatisticsInternal; // eax
  __int64 v7; // rcx
  _OWORD *v8; // rax
  _OWORD *v9; // rdx
  __int128 v10; // xmm1
  struct VMBPACKETCOMPLETION__ *v11; // rcx
  _DWORD v12[196]; // [rsp+20h] [rbp-328h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_QUERYSTATISTICS>((__int64)a1);
  v3 = v2;
  if ( !v2 || *(_QWORD *)(v2 + 40) )
    return 0;
  *(_QWORD *)(v2 + 28) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) + 268LL);
  memset(v12, 0, sizeof(v12));
  StatisticsInternal = DxgkQueryStatisticsInternal(v3 + 24, 0, v5);
  v7 = 6LL;
  v12[0] = StatisticsInternal;
  v8 = (_OWORD *)(v3 + 48);
  v9 = &v12[2];
  do
  {
    *v9 = *v8;
    v9[1] = v8[1];
    v9[2] = v8[2];
    v9[3] = v8[3];
    v9[4] = v8[4];
    v9[5] = v8[5];
    v9[6] = v8[6];
    v9 += 8;
    v10 = v8[7];
    v8 += 8;
    *(v9 - 1) = v10;
    --v7;
  }
  while ( v7 );
  v11 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
  *(_QWORD *)v9 = *(_QWORD *)v8;
  VmBusCompletePacket(v11, v12, 0x310u);
  return 1;
}
