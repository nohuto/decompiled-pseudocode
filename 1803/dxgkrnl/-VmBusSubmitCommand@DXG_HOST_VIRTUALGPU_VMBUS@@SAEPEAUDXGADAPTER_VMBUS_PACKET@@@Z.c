/*
 * XREFs of ?VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0186E10
 * Callers:
 *     <none>
 * Callees:
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_SUBMITCOMMAND@@@@YAPEAUDXGKVMB_COMMAND_SUBMITCOMMAND@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D4FC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_SUBMITCOMMAND@@@@YAPEAUDXGKVMB_COMMAND_SUBMITCOMMAND@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00E71E0 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSubmitCommand(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v10; // r8
  struct VMBPACKETCOMPLETION__ *v11; // rcx
  int v13; // [rsp+38h] [rbp+10h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_SUBMITCOMMAND>((__int64)a1);
  v3 = v2;
  if ( v2 )
  {
    v13 = 0;
    v4 = 4LL * *(unsigned int *)(v2 + 392);
    if ( v4 <= 0xFFFFFFFF )
    {
      v7 = *((unsigned int *)a1 + 20);
      if ( v7 - 408 >= (unsigned __int64)(unsigned int)v4 )
      {
        v8 = v7 - (unsigned int)v4 - 408;
        if ( v8 >= *(unsigned int *)(v3 + 320) )
        {
          *(_QWORD *)(v3 + 400) = v3 + 408;
          *(_QWORD *)(v3 + 312) = (unsigned int)v4 + v3 + 408;
          Current = DXGPROCESS::GetCurrent(v8, (unsigned int)v4);
          v6 = DxgkSubmitCommandInternal((const struct _D3DKMT_SUBMITCOMMAND *)(v3 + 24), Current, v10);
          goto LABEL_10;
        }
        v5 = WdLogNewEntry5_WdError(v8);
        *(_QWORD *)(v5 + 24) = *((unsigned int *)a1 + 20);
        *(_QWORD *)(v5 + 32) = 3481LL;
      }
      else
      {
        v5 = WdLogNewEntry5_WdError(v7);
        *(_QWORD *)(v5 + 24) = *((unsigned int *)a1 + 20);
      }
    }
    else
    {
      v5 = WdLogNewEntry5_WdError(0xFFFFFFFFLL);
      *(_QWORD *)(v5 + 24) = 3469LL;
    }
    WdLogEvent5_WdError(v5);
    v6 = -1073741811;
LABEL_10:
    v11 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
    v13 = v6;
    VmBusCompletePacket(v11, &v13, 4u);
    LOBYTE(v2) = 1;
  }
  return v2;
}
