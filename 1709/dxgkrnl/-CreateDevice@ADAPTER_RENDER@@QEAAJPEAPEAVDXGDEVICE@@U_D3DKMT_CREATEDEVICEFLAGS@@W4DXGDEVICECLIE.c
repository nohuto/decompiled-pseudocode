/*
 * XREFs of ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C00830DC
 * Callers:
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C00B3724 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z.c)
 *     ?DxgkCreateDeviceInternal@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C00B5930 (-DxgkCreateDeviceInternal@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@@Z.c)
 *     ?VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0191DA0 (-VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z @ 0x1C01B9BEC (-GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_GDXGDEVICE@@QEAAPEAXI@Z @ 0x1C001D4DC (--_GDXGDEVICE@@QEAAPEAXI@Z.c)
 *     ??0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAUDXGK_VIRTUAL_GPU_PARAV@@U_D3DKMT_CREATEDEVICEFLAGS@@PEAVDXGPROCESS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@@Z @ 0x1C009BEC4 (--0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAUDXGK_VIRTUAL_GPU_PARAV@@U_D3DKMT_CREATEDEVICEFLAGS@@P.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C009C23C (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C009C68C (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateDevice(
        DXGADAPTER **a1,
        __int64 *a2,
        unsigned int a3,
        int a4,
        DXGADAPTER *a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        __int64 a8)
{
  __int64 v12; // rcx
  __int64 v13; // rcx
  struct DXGPROCESS *Current; // rbp
  PVOID PoolWithQuotaTag; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rcx
  int v19; // esi
  struct _KTHREAD *CurrentThread; // rax
  DXGADAPTER **v21; // rdi
  DXGADAPTER *v22; // rax
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1[2]) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v27 + 24) = 1413LL;
    WdLogEvent5_WdAssertion(v27);
  }
  if ( a5 && (!DXGADAPTER::IsCoreResourceSharedOwner(a5) || !*((_QWORD *)a5 + 288)) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v28 + 24) = 1416LL;
    WdLogEvent5_WdAssertion(v28);
  }
  if ( !a2 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v29 + 24) = 1417LL;
    WdLogEvent5_WdAssertion(v29);
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v30 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v30 + 24) = 1423LL;
    WdLogEvent5_WdAssertion(v30);
  }
  *a2 = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)a1[2] + 3);
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x6D0uLL, 0x4B677844u);
  if ( PoolWithQuotaTag )
    v17 = DXGDEVICE::DXGDEVICE(PoolWithQuotaTag, a1, a8, a3, Current, a4, a5);
  else
    v17 = 0LL;
  if ( !v17 )
  {
    v31 = WdLogNewEntry5_WdLowResource(v16);
    v19 = -1073741801;
    *(_QWORD *)(v31 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v31);
LABEL_29:
    DXGADAPTER::ReleaseReferenceNoTracking(a1[2]);
    return (unsigned int)v19;
  }
  v19 = DXGDEVICE::Initialize((DXGDEVICE *)v17, a6, a7);
  if ( v19 < 0 )
  {
    DXGDEVICE::DestroyAllDeviceState((DXGDEVICE *)v17, 0LL);
    DXGDEVICE::`scalar deleting destructor'((DXGDEVICE *)v17);
    goto LABEL_29;
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(_DWORD *)(v17 + 328) == 2 )
  {
    if ( a1[6] != CurrentThread )
    {
      v32 = WdLogNewEntry5_WdAssertion(v18);
      *(_QWORD *)(v32 + 24) = 1483LL;
      WdLogEvent5_WdAssertion(v32);
    }
    v21 = a1 + 17;
    v22 = *v21;
    if ( *((DXGADAPTER ***)*v21 + 1) != v21 )
      __fastfail(3u);
  }
  else
  {
    if ( a1[4] != CurrentThread )
    {
      v33 = WdLogNewEntry5_WdAssertion(v18);
      *(_QWORD *)(v33 + 24) = 1488LL;
      WdLogEvent5_WdAssertion(v33);
    }
    v21 = a1 + 15;
    v22 = *v21;
    if ( *((DXGADAPTER ***)*v21 + 1) != v21 )
      __fastfail(3u);
  }
  *(_QWORD *)v17 = v22;
  v23 = (_QWORD *)((char *)Current + 256);
  *(_QWORD *)(v17 + 8) = v21;
  *((_QWORD *)v22 + 1) = v17;
  v24 = (_QWORD *)(v17 + 24);
  *v21 = (DXGADAPTER *)v17;
  v25 = *((_QWORD *)Current + 32);
  if ( *(struct DXGPROCESS **)(v25 + 8) != (struct DXGPROCESS *)((char *)Current + 256) )
    __fastfail(3u);
  *v24 = v25;
  *(_QWORD *)(v17 + 32) = v23;
  *(_QWORD *)(v25 + 8) = v24;
  *v23 = v24;
  *a2 = v17;
  return (unsigned int)v19;
}
