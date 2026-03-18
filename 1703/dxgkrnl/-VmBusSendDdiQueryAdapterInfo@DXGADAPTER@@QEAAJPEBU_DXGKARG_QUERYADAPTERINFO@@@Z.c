/*
 * XREFs of ?VmBusSendDdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C002FCA0
 * Callers:
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00D2FBC (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 * Callees:
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0032214 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendDdiQueryAdapterInfo(
        DXGADAPTER *this,
        const struct _DXGKARG_QUERYADAPTERINFO *a2)
{
  __int64 InputDataSize; // rbx
  _DWORD *PoolWithTag; // rax
  struct DXGKVMB_COMMAND *v6; // rsi
  void *pOutputData; // r9
  struct VMBCHANNEL__ *v9; // rcx
  unsigned int v10; // ebx
  struct _MDL *v11; // [rsp+28h] [rbp-10h]
  unsigned int OutputDataSize; // [rsp+48h] [rbp+10h] BYREF

  InputDataSize = a2->InputDataSize;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, InputDataSize + 32, 0x4B677844u);
  v6 = (struct DXGKVMB_COMMAND *)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  PoolWithTag[2] = 5;
  PoolWithTag[4] = a2->Type;
  PoolWithTag[5] = a2->InputDataSize;
  PoolWithTag[6] = a2->OutputDataSize;
  memmove(PoolWithTag + 7, a2->pInputData, a2->InputDataSize);
  pOutputData = a2->pOutputData;
  v9 = (struct VMBCHANNEL__ *)*((_QWORD *)this + 484);
  OutputDataSize = a2->OutputDataSize;
  v10 = VmBusSendSyncMessage(v9, v6, InputDataSize + 32, pOutputData, &OutputDataSize, v11);
  if ( OutputDataSize < a2->OutputDataSize )
    v10 = -1073741823;
  ExFreePoolWithTag(v6, 0);
  return v10;
}
