/*
 * XREFs of ?VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C019A030
 * Callers:
 *     <none>
 * Callees:
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C0085D50 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSubmitCommand(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rbx
  unsigned __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v8; // r8
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 9);
  v10 = 0;
  v3 = 4LL * *(unsigned int *)(v1 + 392);
  if ( v3 <= 0xFFFFFFFF )
  {
    v5 = *((unsigned int *)a1 + 20);
    if ( v5 - 408 >= (unsigned __int64)(unsigned int)v3 )
    {
      v6 = v5 - (unsigned int)v3 - 408;
      if ( v6 >= *(unsigned int *)(v1 + 320) )
      {
        *(_QWORD *)(v1 + 400) = v1 + 408;
        *(_QWORD *)(v1 + 312) = (unsigned int)v3 + v1 + 408;
        Current = DXGPROCESS::GetCurrent(v6, (unsigned int)v3);
        v10 = DxgkSubmitCommandInternal((const struct _D3DKMT_SUBMITCOMMAND *)(v1 + 24), Current, v8);
        goto LABEL_9;
      }
      v4 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v4 + 24) = *((unsigned int *)a1 + 20);
      *(_QWORD *)(v4 + 32) = 3046LL;
    }
    else
    {
      v4 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v4 + 24) = *((unsigned int *)a1 + 20);
    }
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(0xFFFFFFFFLL);
    *(_QWORD *)(v4 + 24) = 3034LL;
  }
  WdLogEvent5_WdError(v4);
  v10 = -1073741811;
LABEL_9:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v10, 4u);
  return 1;
}
