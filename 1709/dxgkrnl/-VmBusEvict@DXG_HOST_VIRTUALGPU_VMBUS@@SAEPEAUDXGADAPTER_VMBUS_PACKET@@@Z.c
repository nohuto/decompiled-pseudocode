/*
 * XREFs of ?VmBusEvict@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0193130
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C00BC8C4 (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusEvict(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdi
  unsigned __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rdi
  struct VMBPACKETCOMPLETION__ *v8; // rcx
  __int64 v10; // rax
  _D3DKMT_EVICT v11; // [rsp+20h] [rbp-28h] BYREF
  UINT64 NumBytesToTrim; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 9);
  v3 = *(unsigned int *)(v1 + 32);
  if ( (_DWORD)v3 && ((unsigned __int64)*((unsigned int *)a1 + 20) - 36) / v3 >= 4 )
  {
    memset(&v11, 0, sizeof(v11));
    v11.Flags.Value = *(_DWORD *)(v1 + 28);
    v11.AllocationList = (const D3DKMT_HANDLE *)(v1 + 36);
    v11.NumAllocations = *(_DWORD *)(v1 + 32);
    v11.hDevice = *(_DWORD *)(v1 + 24);
    v5 = DxgkEvictInternal(&v11, 0LL, v4);
    v7 = v5;
    if ( v5 >= 0 )
    {
      v8 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
      NumBytesToTrim = v11.NumBytesToTrim;
      VmBusCompletePacket(v8, &NumBytesToTrim, 8u);
      return 1;
    }
    v10 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v10 + 24) = v7;
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v10 + 24) = *((unsigned int *)a1 + 20);
  }
  WdLogEvent5_WdError(v10);
  return 0;
}
