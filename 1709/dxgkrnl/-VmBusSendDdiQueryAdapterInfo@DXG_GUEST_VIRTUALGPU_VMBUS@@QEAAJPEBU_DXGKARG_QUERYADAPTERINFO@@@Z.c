/*
 * XREFs of ?VmBusSendDdiQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0196270
 * Callers:
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C008450C (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0198920 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiQueryAdapterInfo(
        struct VMBCHANNEL__ **this,
        const struct _DXGKARG_QUERYADAPTERINFO *a2)
{
  __int64 InputDataSize; // rbx
  _QWORD *PoolWithTag; // rdi
  void *pOutputData; // r9
  struct VMBCHANNEL__ *v8; // rcx
  unsigned int v9; // ebx
  struct _MDL *v10; // [rsp+28h] [rbp-10h]
  unsigned int OutputDataSize; // [rsp+48h] [rbp+10h] BYREF

  InputDataSize = a2->InputDataSize;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, InputDataSize + 40, 0x4B677844u);
  if ( !PoolWithTag )
    return 3221225495LL;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  *((_DWORD *)PoolWithTag + 4) = 3;
  *((_DWORD *)PoolWithTag + 6) = a2->Type;
  *((_DWORD *)PoolWithTag + 7) = a2->InputDataSize;
  *((_DWORD *)PoolWithTag + 8) = a2->OutputDataSize;
  memmove((char *)PoolWithTag + 36, a2->pInputData, a2->InputDataSize);
  pOutputData = a2->pOutputData;
  v8 = *this;
  OutputDataSize = a2->OutputDataSize;
  v9 = VmBusSendSyncMessage(
         v8,
         (struct DXGKVMB_COMMAND_BASE *)PoolWithTag,
         InputDataSize + 40,
         pOutputData,
         &OutputDataSize,
         v10);
  if ( OutputDataSize < a2->OutputDataSize )
    v9 = -1073741823;
  ExFreePoolWithTag(PoolWithTag, 0);
  return v9;
}
