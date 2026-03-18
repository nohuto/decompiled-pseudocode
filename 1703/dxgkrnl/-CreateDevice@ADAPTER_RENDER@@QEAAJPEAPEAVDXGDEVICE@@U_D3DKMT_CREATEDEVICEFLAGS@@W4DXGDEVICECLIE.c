/*
 * XREFs of ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU@@@Z @ 0x1C00CFB00
 * Callers:
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0026584 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z.c)
 *     ?VmBusCreateDevice@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002C3B0 (-VmBusCreateDevice@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkCreateDeviceInternal@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU@@@Z @ 0x1C00F6E18 (-DxgkCreateDeviceInternal@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU@@@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C00FB684 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00061C0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_GDXGDEVICE@@QEAAPEAXI@Z @ 0x1C002024C (--_GDXGDEVICE@@QEAAPEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAUDXGK_VIRTUAL_GPU@@U_D3DKMT_CREATEDEVICEFLAGS@@PEAVDXGPROCESS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@@Z @ 0x1C00C8640 (--0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAUDXGK_VIRTUAL_GPU@@U_D3DKMT_CREATEDEVICEFLAGS@@PEAVDXG.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C00C89B8 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00C8DFC (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateDevice(
        __int64 a1,
        __int64 *a2,
        int a3,
        int a4,
        DXGADAPTER *a5,
        char a6,
        unsigned __int8 a7,
        __int64 a8)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct DXGPROCESS *Current; // rbp
  __int64 v19; // r8
  __int64 v20; // r9
  PVOID PoolWithQuotaTag; // rax
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // esi
  __int64 v27; // r8
  __int64 v28; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v30; // rdi
  __int64 v31; // rax
  _QWORD *v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(a1 + 16)) )
  {
    v36 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v36 + 24) = 1368LL;
    WdLogEvent5_WdAssertion(v36);
  }
  if ( a5 && (!DXGADAPTER::IsCoreResourceSharedOwner(a5) || !*((_QWORD *)a5 + 285)) )
  {
    v37 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v37 + 24) = 1371LL;
    WdLogEvent5_WdAssertion(v37);
  }
  if ( !a2 )
  {
    v38 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v38 + 24) = 1372LL;
    WdLogEvent5_WdAssertion(v38);
  }
  Current = DXGPROCESS::GetCurrent(v13);
  if ( !Current )
  {
    v39 = WdLogNewEntry5_WdAssertion(v17, v16, v19, v20);
    *(_QWORD *)(v39 + 24) = 1378LL;
    WdLogEvent5_WdAssertion(v39);
  }
  *a2 = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 16) + 24LL));
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x748uLL, 0x4B677844u);
  if ( PoolWithQuotaTag )
    v23 = DXGDEVICE::DXGDEVICE((__int64)PoolWithQuotaTag, a1, a8, a3, (__int64)Current, a4, (__int64)a5);
  else
    v23 = 0LL;
  if ( !v23 )
  {
    v40 = WdLogNewEntry5_WdLowResource(v22);
    v26 = -1073741801;
    *(_QWORD *)(v40 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v40);
LABEL_29:
    DXGADAPTER::ReleaseReferenceNoTracking(*(DXGADAPTER **)(a1 + 16));
    return (unsigned int)v26;
  }
  v26 = DXGDEVICE::Initialize((DXGDEVICE *)v23, a6, a7);
  if ( v26 < 0 )
  {
    DXGDEVICE::DestroyAllDeviceState((DXGDEVICE *)v23, 0LL);
    DXGDEVICE::`scalar deleting destructor'((DXGDEVICE *)v23);
    goto LABEL_29;
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(_DWORD *)(v23 + 328) == 2 )
  {
    if ( *(struct _KTHREAD **)(a1 + 48) != CurrentThread )
    {
      v41 = WdLogNewEntry5_WdAssertion(v25, v24, v27, v28);
      *(_QWORD *)(v41 + 24) = 1438LL;
      WdLogEvent5_WdAssertion(v41);
    }
    v30 = a1 + 136;
    v31 = *(_QWORD *)v30;
    if ( *(_QWORD *)(*(_QWORD *)v30 + 8LL) != v30 )
      __fastfail(3u);
  }
  else
  {
    if ( *(struct _KTHREAD **)(a1 + 32) != CurrentThread )
    {
      v42 = WdLogNewEntry5_WdAssertion(v25, v24, v27, v28);
      *(_QWORD *)(v42 + 24) = 1443LL;
      WdLogEvent5_WdAssertion(v42);
    }
    v30 = a1 + 120;
    v31 = *(_QWORD *)v30;
    if ( *(_QWORD *)(*(_QWORD *)v30 + 8LL) != v30 )
      __fastfail(3u);
  }
  *(_QWORD *)v23 = v31;
  v32 = (_QWORD *)((char *)Current + 224);
  *(_QWORD *)(v23 + 8) = v30;
  *(_QWORD *)(v31 + 8) = v23;
  v33 = (_QWORD *)(v23 + 24);
  *(_QWORD *)v30 = v23;
  v34 = *((_QWORD *)Current + 28);
  if ( *(struct DXGPROCESS **)(v34 + 8) != (struct DXGPROCESS *)((char *)Current + 224) )
    __fastfail(3u);
  *v33 = v34;
  *(_QWORD *)(v23 + 32) = v32;
  *(_QWORD *)(v34 + 8) = v33;
  *v32 = v33;
  *a2 = v23;
  return (unsigned int)v26;
}
