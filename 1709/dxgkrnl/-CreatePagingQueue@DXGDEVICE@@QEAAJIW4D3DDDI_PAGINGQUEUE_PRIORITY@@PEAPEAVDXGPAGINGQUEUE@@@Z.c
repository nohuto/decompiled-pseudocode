/*
 * XREFs of ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C0092C50
 * Callers:
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C009177C (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??_GDXGPAGINGQUEUE@@IEAAPEAXI@Z @ 0x1C001D6A0 (--_GDXGPAGINGQUEUE@@IEAAPEAXI@Z.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00919E4 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C0091A90 (-Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z.c)
 *     ?MapCpuVaForParavirtualization@DXGDEVICESYNCOBJECT@@QEAAJ_K@Z @ 0x1C018FF08 (-MapCpuVaForParavirtualization@DXGDEVICESYNCOBJECT@@QEAAJ_K@Z.c)
 *     ?VmBusSendCreatePagingQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATEPAGINGQUEUE@@PEAUDXGKVMB_COMMAND_CREATEPAGINGQUEUE_RETURN@@@Z @ 0x1C0195CB0 (-VmBusSendCreatePagingQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATEPAGINGQUEUE@@PE.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B9AF8 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGDEVICE::CreatePagingQueue(
        DXGDEVICE *this,
        unsigned int a2,
        enum D3DDDI_PAGINGQUEUE_PRIORITY a3,
        struct DXGPAGINGQUEUE **a4)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD *PoolWithQuotaTag; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rbp
  DXGPAGINGQUEUE *v16; // rax
  DXGPAGINGQUEUE **v17; // rcx
  __int64 v18; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  DXGPROCESS *v24; // rcx
  unsigned int v25; // ebx
  unsigned int HostProcess; // eax
  DXGDEVICESYNCOBJECT *v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  _D3DKMT_CREATEPAGINGQUEUE v31; // [rsp+30h] [rbp-78h] BYREF
  __int64 v32; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v33; // [rsp+58h] [rbp-50h]
  __int64 v34; // [rsp+60h] [rbp-48h]

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v20 + 24) = 7218LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v21 + 24) = 7219LL;
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !a4 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v22 + 24) = 7220LL;
    WdLogEvent5_WdAssertion(v22);
  }
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x40uLL, 0x4B677844u);
  if ( PoolWithQuotaTag )
  {
    v12 = 0LL;
    PoolWithQuotaTag[2] = this;
    *PoolWithQuotaTag = 0LL;
    PoolWithQuotaTag[1] = 0LL;
    *((_DWORD *)PoolWithQuotaTag + 6) = 0;
    *((_DWORD *)PoolWithQuotaTag + 7) = 0;
    PoolWithQuotaTag[4] = 0LL;
    PoolWithQuotaTag[5] = 0LL;
    PoolWithQuotaTag[6] = 1LL;
    *((_BYTE *)PoolWithQuotaTag + 56) = 0;
  }
  *a4 = (struct DXGPAGINGQUEUE *)PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    LODWORD(v14) = DXGPAGINGQUEUE::Initialize((DXGPAGINGQUEUE *)PoolWithQuotaTag, a2, (unsigned int)a3);
    if ( (int)v14 >= 0 )
    {
      v15 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( !*(_BYTE *)(v15 + 185) )
      {
LABEL_13:
        v16 = *a4;
        v17 = (DXGPAGINGQUEUE **)((char *)this + 376);
        v18 = *((_QWORD *)this + 47);
        if ( *(DXGDEVICE **)(v18 + 8) != (DXGDEVICE *)((char *)this + 376) )
          __fastfail(3u);
        *(_QWORD *)v16 = v18;
        *((_QWORD *)v16 + 1) = v17;
        *(_QWORD *)(v18 + 8) = v16;
        *v17 = v16;
        _InterlockedIncrement64((volatile signed __int64 *)this + 8);
        return 0LL;
      }
      v32 = 0LL;
      v33 = 0LL;
      v34 = 0LL;
      memset(&v31, 0, sizeof(v31));
      v24 = (DXGPROCESS *)*((_QWORD *)this + 5);
      v25 = *((_DWORD *)this + 84);
      v31.PhysicalAdapterIndex = a2;
      v31.Priority = a3;
      HostProcess = DXGPROCESS::GetHostProcess(v24);
      LODWORD(v14) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreatePagingQueue(
                       (DXG_GUEST_VIRTUALGPU_VMBUS *)(v15 + 3888),
                       HostProcess,
                       v25,
                       &v31,
                       (struct DXGKVMB_COMMAND_CREATEPAGINGQUEUE_RETURN *)&v32);
      if ( (int)v14 >= 0 )
      {
        v27 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)*a4 + 5);
        *((_DWORD *)*a4 + 7) = v32;
        *((_DWORD *)v27 + 11) = HIDWORD(v32);
        v28 = DXGDEVICESYNCOBJECT::MapCpuVaForParavirtualization(v27, v33);
        v14 = v28;
        if ( v28 >= 0 )
          goto LABEL_13;
        v30 = WdLogNewEntry5_WdError(v29);
        *(_QWORD *)(v30 + 24) = v14;
        *(_QWORD *)(v30 + 32) = 7268LL;
        WdLogEvent5_WdError(v30);
      }
    }
  }
  else
  {
    v23 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    LODWORD(v14) = -1073741801;
    *(_QWORD *)(v23 + 24) = this;
    *(_QWORD *)(v23 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v23);
  }
  if ( *a4 )
  {
    DXGPAGINGQUEUE::DestroyCoreState(*a4, 0LL);
    if ( *a4 )
      DXGPAGINGQUEUE::`scalar deleting destructor'(*a4);
    *a4 = 0LL;
  }
  return (unsigned int)v14;
}
