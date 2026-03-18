/*
 * XREFs of ?VmBusSendQueryAdapterInfo@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADAPTERINFO@@@Z @ 0x1C0030EF0
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00D94F0 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0032214 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01A1DC4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendQueryAdapterInfo(
        DXGADAPTER *this,
        struct DXGPROCESS *a2,
        struct _D3DKMT_QUERYADAPTERINFO *a3)
{
  __int64 PrivateDriverDataSize; // rbx
  _DWORD *PoolWithTag; // rsi
  UINT v9; // eax
  void *pPrivateDriverData; // r9
  struct VMBCHANNEL__ *v11; // rcx
  unsigned int v12; // ebx
  struct _MDL *v13; // [rsp+28h] [rbp-20h]
  unsigned int v14; // [rsp+60h] [rbp+18h] BYREF

  PrivateDriverDataSize = a3->PrivateDriverDataSize;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, PrivateDriverDataSize + 24, 0x4B677844u);
  if ( !PoolWithTag )
    return 3221225495LL;
  v9 = a3->PrivateDriverDataSize;
  if ( v9 )
    memmove(PoolWithTag + 6, a3->pPrivateDriverData, v9);
  PoolWithTag[2] = 4;
  PoolWithTag[3] = DXGPROCESS::GetHostProcess(a2);
  PoolWithTag[4] = a3->Type;
  PoolWithTag[5] = a3->PrivateDriverDataSize;
  pPrivateDriverData = a3->pPrivateDriverData;
  v11 = (struct VMBCHANNEL__ *)*((_QWORD *)this + 484);
  v14 = (a3->PrivateDriverDataSize + 7) & 0xFFFFFFF8;
  v12 = VmBusSendSyncMessage(
          v11,
          (struct DXGKVMB_COMMAND *)PoolWithTag,
          PrivateDriverDataSize + 24,
          pPrivateDriverData,
          &v14,
          v13);
  if ( v14 < a3->PrivateDriverDataSize )
    v12 = -1073741823;
  ExFreePoolWithTag(PoolWithTag, 0);
  return v12;
}
