/*
 * XREFs of ?VmBusEvict@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D350
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C009DF70 (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z.c)
 */

unsigned __int8 __fastcall VmBusEvict(struct DXGADAPTER_VMBUS_PACKET *a1, unsigned __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  struct VMBPACKETCOMPLETION__ *v9; // rcx
  __int64 v11; // rax
  _D3DKMT_EVICT v12; // [rsp+20h] [rbp-28h] BYREF
  UINT64 NumBytesToTrim; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 9);
  v4 = *(unsigned int *)(v2 + 24);
  if ( (_DWORD)v4
    && (a2 = ((unsigned __int64)*((unsigned int *)a1 + 20) - 28) % v4,
        ((unsigned __int64)*((unsigned int *)a1 + 20) - 28) / v4 >= 4) )
  {
    memset(&v12, 0, sizeof(v12));
    v12.Flags.Value = *(_DWORD *)(v2 + 20);
    v12.AllocationList = (const D3DKMT_HANDLE *)(v2 + 28);
    v12.NumAllocations = *(_DWORD *)(v2 + 24);
    v12.hDevice = *(_DWORD *)(v2 + 16);
    v5 = DxgkEvictInternal(&v12, 0);
    v8 = v5;
    if ( v5 >= 0 )
    {
      v9 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
      NumBytesToTrim = v12.NumBytesToTrim;
      VmBusCompletePacket(v9, &NumBytesToTrim, 8u);
      return 1;
    }
    v11 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v11 + 24) = v8;
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v4, a2);
    *(_QWORD *)(v11 + 24) = *((unsigned int *)a1 + 20);
  }
  WdLogEvent5_WdError(v11);
  return 0;
}
