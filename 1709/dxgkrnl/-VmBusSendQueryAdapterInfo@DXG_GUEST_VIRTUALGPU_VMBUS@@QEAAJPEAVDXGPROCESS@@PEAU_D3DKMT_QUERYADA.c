/*
 * XREFs of ?VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADAPTERINFO@@I@Z @ 0x1C01974A4
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C008E700 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0198920 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B9AF8 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAdapterInfo(
        struct VMBCHANNEL__ **this,
        struct DXGPROCESS *a2,
        struct _D3DKMT_QUERYADAPTERINFO *a3,
        unsigned int a4)
{
  __int64 PrivateDriverDataSize; // rax
  __int64 v9; // rax
  UINT v11; // ebx
  _DWORD *PoolWithTag; // rdi
  unsigned int HostProcess; // eax
  UINT v14; // eax
  void *pPrivateDriverData; // r9
  struct VMBCHANNEL__ *v16; // rcx
  unsigned int v17; // ebx
  struct _MDL *v18; // [rsp+28h] [rbp-20h]
  unsigned int v19; // [rsp+60h] [rbp+18h] BYREF

  PrivateDriverDataSize = a3->PrivateDriverDataSize;
  if ( (unsigned int)PrivateDriverDataSize <= 0x20000 )
  {
    v11 = a3->PrivateDriverDataSize;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, PrivateDriverDataSize + 32, 0x4B677844u);
    if ( PoolWithTag )
    {
      HostProcess = DXGPROCESS::GetHostProcess(a2);
      *(_QWORD *)PoolWithTag = 0LL;
      PoolWithTag[3] = 0;
      PoolWithTag[2] = HostProcess;
      PoolWithTag[4] = 2;
      v14 = a3->PrivateDriverDataSize;
      if ( v14 )
        memmove(PoolWithTag + 8, a3->pPrivateDriverData, v14);
      PoolWithTag[6] = a3->Type;
      PoolWithTag[7] = a3->PrivateDriverDataSize;
      pPrivateDriverData = a3->pPrivateDriverData;
      v16 = *this;
      v19 = a4;
      v17 = VmBusSendSyncMessage(
              v16,
              (struct DXGKVMB_COMMAND_BASE *)PoolWithTag,
              v11 + 32,
              pPrivateDriverData,
              &v19,
              v18);
      if ( v19 < a3->PrivateDriverDataSize )
        v17 = -1073741823;
      ExFreePoolWithTag(PoolWithTag, 0);
      return v17;
    }
    else
    {
      return 3221225495LL;
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 3942LL;
    WdLogEvent5_WdAssertion(v9);
    return 3221225485LL;
  }
}
