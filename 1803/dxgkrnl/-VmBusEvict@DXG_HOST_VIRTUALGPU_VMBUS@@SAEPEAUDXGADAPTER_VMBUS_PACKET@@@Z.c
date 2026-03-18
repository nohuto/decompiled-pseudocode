/*
 * XREFs of ?VmBusEvict@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017F250
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D394 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXG.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C00D5E3C (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusEvict(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdi
  struct VMBPACKETCOMPLETION__ *v9; // rcx
  __int64 v11; // rax
  _D3DKMT_EVICT v12; // [rsp+20h] [rbp-28h] BYREF
  UINT64 NumBytesToTrim; // [rsp+58h] [rbp+10h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_OPENADAPTER>((__int64)a1);
  v3 = v2;
  if ( v2 )
  {
    v4 = *(unsigned int *)(v2 + 32);
    if ( (_DWORD)v4 && ((unsigned __int64)*((unsigned int *)a1 + 20) - 36) / v4 >= 4 )
    {
      memset(&v12, 0, sizeof(v12));
      v12.Flags.Value = *(_DWORD *)(v3 + 28);
      v12.AllocationList = (const D3DKMT_HANDLE *)(v3 + 36);
      v12.NumAllocations = *(_DWORD *)(v3 + 32);
      v12.hDevice = *(_DWORD *)(v3 + 24);
      v6 = DxgkEvictInternal(&v12, 0, v5);
      v8 = v6;
      if ( v6 >= 0 )
      {
        v9 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
        NumBytesToTrim = v12.NumBytesToTrim;
        VmBusCompletePacket(v9, &NumBytesToTrim, 8u);
        return 1;
      }
      v11 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v11 + 24) = v8;
    }
    else
    {
      v11 = WdLogNewEntry5_WdError(v4);
      *(_QWORD *)(v11 + 24) = *((unsigned int *)a1 + 20);
    }
    WdLogEvent5_WdError(v11);
  }
  return 0;
}
