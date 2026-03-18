/*
 * XREFs of ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00BFDFC
 * Callers:
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C00FC010 (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??_GDXGPAGINGQUEUE@@IEAAPEAXI@Z @ 0x1C00203B0 (--_GDXGPAGINGQUEUE@@IEAAPEAXI@Z.c)
 *     ?MapCpuVaForParavirtualization@DXGDEVICESYNCOBJECT@@QEAAJ_K@Z @ 0x1C002A5EC (-MapCpuVaForParavirtualization@DXGDEVICESYNCOBJECT@@QEAAJ_K@Z.c)
 *     ?VmBusSendCreatePagingQueue@DXGADAPTER@@QEAAJIIPEBU_D3DKMT_CREATEPAGINGQUEUE@@PEAUDXGKVMB_COMMAND_CREATEPAGINGQUEUE_RETURN@@@Z @ 0x1C002F724 (-VmBusSendCreatePagingQueue@DXGADAPTER@@QEAAJIIPEBU_D3DKMT_CREATEPAGINGQUEUE@@PEAUDXGKVMB_COMMAN.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00FE5F8 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C00FE6A4 (-Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01A1DC4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGDEVICE::CreatePagingQueue(
        DXGDEVICE *this,
        unsigned int a2,
        enum D3DDDI_PAGINGQUEUE_PRIORITY a3,
        struct DXGPAGINGQUEUE **a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *PoolWithQuotaTag; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbx
  DXGADAPTER *v22; // rbp
  _QWORD *v23; // rax
  _QWORD *v24; // rcx
  __int64 v25; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  DXGPROCESS *v31; // rcx
  int v32; // ebx
  int HostProcess; // eax
  DXGDEVICESYNCOBJECT *v34; // rcx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  _D3DKMT_CREATEPAGINGQUEUE v39; // [rsp+30h] [rbp-78h] BYREF
  __int64 v40; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v41; // [rsp+58h] [rbp-50h]
  __int64 v42; // [rsp+60h] [rbp-48h]

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v27 + 24) = 7216LL;
    WdLogEvent5_WdAssertion(v27);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v28 + 24) = 7217LL;
    WdLogEvent5_WdAssertion(v28);
  }
  if ( !a4 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v29 + 24) = 7218LL;
    WdLogEvent5_WdAssertion(v29);
  }
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x40uLL, 0x4B677844u);
  if ( PoolWithQuotaTag )
  {
    v18 = 0LL;
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
    LODWORD(v21) = DXGPAGINGQUEUE::Initialize((DXGPAGINGQUEUE *)PoolWithQuotaTag, a2, a3);
  }
  else
  {
    v30 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
    LODWORD(v21) = -1073741801;
    *(_QWORD *)(v30 + 24) = this;
    *(_QWORD *)(v30 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v30);
  }
  v22 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL);
  if ( *((_BYTE *)v22 + 186) )
  {
    v40 = 0LL;
    v41 = 0LL;
    v42 = 0LL;
    memset(&v39, 0, sizeof(v39));
    v31 = (DXGPROCESS *)*((_QWORD *)this + 5);
    v32 = *((_DWORD *)this + 84);
    v39.PhysicalAdapterIndex = a2;
    v39.Priority = a3;
    HostProcess = DXGPROCESS::GetHostProcess(v31);
    LODWORD(v21) = DXGADAPTER::VmBusSendCreatePagingQueue(
                     v22,
                     HostProcess,
                     v32,
                     &v39,
                     (struct DXGKVMB_COMMAND_CREATEPAGINGQUEUE_RETURN *)&v40);
    if ( (int)v21 < 0 )
      goto LABEL_21;
    v34 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)*a4 + 5);
    *((_DWORD *)*a4 + 7) = v40;
    *(_DWORD *)(*((_QWORD *)v34 + 4) + 76LL) = HIDWORD(v40);
    v35 = DXGDEVICESYNCOBJECT::MapCpuVaForParavirtualization(v34, v41);
    v21 = v35;
    if ( v35 >= 0 )
      goto LABEL_14;
    v38 = WdLogNewEntry5_WdError(v37, v36);
    *(_QWORD *)(v38 + 24) = v21;
    *(_QWORD *)(v38 + 32) = 7261LL;
    WdLogEvent5_WdError(v38);
  }
  if ( (int)v21 >= 0 )
  {
LABEL_14:
    v23 = *a4;
    v24 = (_QWORD *)((char *)this + 376);
    v25 = *((_QWORD *)this + 47);
    if ( *(DXGDEVICE **)(v25 + 8) != (DXGDEVICE *)((char *)this + 376) )
      __fastfail(3u);
    *v23 = v25;
    v23[1] = v24;
    *(_QWORD *)(v25 + 8) = v23;
    *v24 = v23;
    _InterlockedIncrement64((volatile signed __int64 *)this + 8);
    return (unsigned int)v21;
  }
LABEL_21:
  DXGPAGINGQUEUE::DestroyCoreState(*a4, 0LL);
  if ( *a4 )
    DXGPAGINGQUEUE::`scalar deleting destructor'(*a4);
  *a4 = 0LL;
  return (unsigned int)v21;
}
