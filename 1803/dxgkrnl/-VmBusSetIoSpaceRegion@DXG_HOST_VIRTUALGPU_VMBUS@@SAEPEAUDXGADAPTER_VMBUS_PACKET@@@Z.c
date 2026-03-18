/*
 * XREFs of ?VmBusSetIoSpaceRegion@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0186600
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D394 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXG.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetIoSpaceRegion(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0;
  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_OPENADAPTER>((__int64)a1);
  v4 = v2;
  if ( v2 )
  {
    Global = DXGGLOBAL::GetGlobal(v3);
    v7 = *(_QWORD *)(v4 + 32);
    if ( v7 == *((_QWORD *)Global + 158) )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 208LL) + 456LL);
      if ( !*(_QWORD *)(v9 + 160) )
      {
        *(_QWORD *)(v9 + 160) = *(_QWORD *)(v4 + 24);
        *(_QWORD *)(v9 + 168) = v7;
      }
    }
    else
    {
      v8 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v8 + 24) = *(_QWORD *)(v4 + 32);
      WdLogEvent5_WdAssertion(v8);
      v11 = -1073741811;
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v11, 4u);
    LOBYTE(v2) = 1;
  }
  return v2;
}
