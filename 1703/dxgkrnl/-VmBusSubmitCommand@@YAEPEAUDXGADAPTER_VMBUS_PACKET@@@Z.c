/*
 * XREFs of ?VmBusSubmitCommand@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0033480
 * Callers:
 *     <none>
 * Callees:
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00CBD30 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 */

unsigned __int8 __fastcall VmBusSubmitCommand(struct DXGADAPTER_VMBUS_PACKET *a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  struct DXGPROCESS *Current; // rax
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 9);
  v10 = 0;
  v4 = 4LL * *(unsigned int *)(v2 + 384);
  if ( v4 <= 0xFFFFFFFF )
  {
    v6 = *((unsigned int *)a1 + 20);
    if ( v6 - 400 >= (unsigned __int64)(unsigned int)v4 )
    {
      v7 = v6 - (unsigned int)v4 - 400;
      if ( v7 >= *(unsigned int *)(v2 + 312) )
      {
        *(_QWORD *)(v2 + 392) = v2 + 400;
        *(_QWORD *)(v2 + 304) = (unsigned int)v4 + v2 + 400;
        Current = DXGPROCESS::GetCurrent();
        v10 = DxgkSubmitCommandInternal((const struct _D3DKMT_SUBMITCOMMAND *)(v2 + 16), Current);
        goto LABEL_9;
      }
      v5 = WdLogNewEntry5_WdError(v7, (unsigned int)v4);
      *(_QWORD *)(v5 + 24) = *((unsigned int *)a1 + 20);
      *(_QWORD *)(v5 + 32) = 6687LL;
    }
    else
    {
      v5 = WdLogNewEntry5_WdError(v6, (unsigned int)v4);
      *(_QWORD *)(v5 + 24) = *((unsigned int *)a1 + 20);
    }
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(0xFFFFFFFFLL, a2);
    *(_QWORD *)(v5 + 24) = 6675LL;
  }
  WdLogEvent5_WdError(v5);
  v10 = -1073741811;
LABEL_9:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v10, 4u);
  return 1;
}
