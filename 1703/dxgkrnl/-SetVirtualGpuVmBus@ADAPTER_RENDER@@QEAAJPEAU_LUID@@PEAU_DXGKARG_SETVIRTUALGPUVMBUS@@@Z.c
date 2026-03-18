/*
 * XREFs of ?SetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJPEAU_LUID@@PEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C002AD2C
 * Callers:
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1C003D748 (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000738C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?AddVirtualGpu@DXGPROCESS@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C002616C (-AddVirtualGpu@DXGPROCESS@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU@@@Z @ 0x1C0026FC0 (-CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU@@@Z.c)
 *     ?DdiSetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C002951C (-DdiSetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAIPEAU_LUID@@@Z @ 0x1C002A204 (-FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAIPEAU_LUID@@@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z @ 0x1C009BE20 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C009C184 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SetVmwpProcess@DXGPROCESS@@QEAAJPEAX@Z @ 0x1C01A22EC (-SetVmwpProcess@DXGPROCESS@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::SetVirtualGpuVmBus(
        ADAPTER_RENDER *this,
        struct _LUID *a2,
        struct _DXGKARG_SETVIRTUALGPUVMBUS *a3)
{
  ADAPTER_RENDER *v4; // rbx
  ULONG VirtualGpuByLuid; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v10; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  DXGPROCESS *v14; // rdi
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  _BYTE v22[40]; // [rsp+20h] [rbp-28h] BYREF
  struct DXGPROCESS *Current; // [rsp+60h] [rbp+18h] BYREF

  v4 = this;
  VirtualGpuByLuid = ADAPTER_RENDER::FindVirtualGpuByLuid(this, a2);
  a3->VirtualGpuIndex = VirtualGpuByLuid;
  if ( VirtualGpuByLuid == -1 )
  {
    v8 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v8 + 24) = 1889LL;
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
  v10 = *(_QWORD *)(*((_QWORD *)v4 + 142) + 8LL * VirtualGpuByLuid);
  if ( !*(_BYTE *)(v10 + 121) )
  {
    LODWORD(v4) = ADAPTER_RENDER::DdiSetVirtualGpuVmBus(v4, a3);
    return (unsigned int)v4;
  }
  LODWORD(v4) = DXG_HOST_VIRTUALGPU_VMBUS::CreateVmBusChannel(
                  (struct VMBCHANNEL__ **)(v10 + 128),
                  (__int64)a3->VmBusHandle,
                  (struct DXGK_VIRTUAL_GPU *)v10);
  if ( (int)v4 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v22,
      (struct _KTHREAD **)Global + 32,
      v12,
      v13);
    Current = DXGPROCESS::GetCurrent();
    v14 = Current;
    if ( !Current )
    {
      v15 = DXGPROCESS::CreateDxgProcess(&Current, 0, 0LL);
      v4 = (ADAPTER_RENDER *)v15;
      if ( v15 < 0 )
      {
        v17 = WdLogNewEntry5_WdLowResource(v16);
        *(_QWORD *)(v17 + 24) = v4;
        WdLogEvent5_WdLowResource(v17);
LABEL_12:
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
        return (unsigned int)v4;
      }
      v14 = Current;
    }
    v18 = DXGPROCESS::SetVmwpProcess(v14, a3->VmBusHandle);
    v4 = (ADAPTER_RENDER *)v18;
    if ( v18 >= 0 )
    {
      DXGPROCESS::AddVirtualGpu(v14, (struct _LIST_ENTRY *)(v10 + 96));
      *(_QWORD *)(v10 + 88) = v14;
    }
    else
    {
      v21 = WdLogNewEntry5_WdError(v20, v19);
      *(_QWORD *)(v21 + 24) = v4;
      *(_QWORD *)(v21 + 32) = 1929LL;
      WdLogEvent5_WdError(v21);
      DXGPROCESS::DestroyDxgProcess(v14);
    }
    goto LABEL_12;
  }
  return (unsigned int)v4;
}
