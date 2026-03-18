/*
 * XREFs of ?VmBusSendDdiQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0182A64
 * Callers:
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00F4918 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 * Callees:
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C018557C (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiQueryAdapterInfo(
        struct VMBCHANNEL__ **this,
        const struct _DXGKARG_QUERYADAPTERINFO *a2)
{
  __int64 InputDataSize; // rbx
  char *PoolWithTag; // rax
  struct DXGKVMB_COMMAND_BASE *v6; // rdi
  void *pOutputData; // r9
  struct VMBCHANNEL__ *v9; // rcx
  int v10; // ebx
  struct _MDL *v11; // [rsp+28h] [rbp-10h]
  unsigned int OutputDataSize; // [rsp+48h] [rbp+10h] BYREF

  InputDataSize = a2->InputDataSize;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, InputDataSize + 40, 0x4B677844u);
  v6 = (struct DXGKVMB_COMMAND_BASE *)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  *(_QWORD *)PoolWithTag = 0LL;
  *((_DWORD *)PoolWithTag + 2) = 0;
  *((_DWORD *)PoolWithTag + 3) = 0;
  *((_DWORD *)PoolWithTag + 4) = 3;
  *((_DWORD *)PoolWithTag + 6) = a2->Type;
  *((_DWORD *)PoolWithTag + 7) = a2->InputDataSize;
  *((_DWORD *)PoolWithTag + 8) = a2->OutputDataSize;
  memmove(PoolWithTag + 36, a2->pInputData, a2->InputDataSize);
  pOutputData = a2->pOutputData;
  v9 = *this;
  OutputDataSize = a2->OutputDataSize;
  v10 = VmBusSendSyncMessage(v9, v6, InputDataSize + 40, pOutputData, &OutputDataSize, v11);
  if ( v10 >= 0 && OutputDataSize < a2->OutputDataSize )
    v10 = -1073741823;
  ExFreePoolWithTag(v6, 0);
  return (unsigned int)v10;
}
