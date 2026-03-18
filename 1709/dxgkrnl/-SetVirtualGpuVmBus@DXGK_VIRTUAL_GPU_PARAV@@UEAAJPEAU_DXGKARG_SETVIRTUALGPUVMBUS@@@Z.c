/*
 * XREFs of ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C018E510
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0002AB0 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002E60 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?AddVirtualGpu@DXGPROCESS@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0024AE8 (-AddVirtualGpu@DXGPROCESS@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z @ 0x1C00F0940 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z.c)
 *     ?CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESS@@@Z @ 0x1C018F82C (-CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESS@@@Z.c)
 *     ?CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C018F978 (-CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::SetVirtualGpuVmBus(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_SETVIRTUALGPUVMBUS *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  struct VMBCHANNEL__ **v13; // rcx
  __int64 v14; // rax
  _BYTE v16[40]; // [rsp+20h] [rbp-28h] BYREF
  struct DXGPROCESS *Current; // [rsp+50h] [rbp+8h] BYREF

  LODWORD(v5) = DXG_HOST_VIRTUALGPU_VMBUS::CreateVmBusChannel((struct VMBCHANNEL__ **)this + 15, a2->VmBusHandle, this);
  if ( (int)v5 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v4);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v16, (struct _KTHREAD **)Global + 32);
    Current = DXGPROCESS::GetCurrent(v8, v7);
    v9 = Current;
    if ( !Current )
    {
      v10 = DXGPROCESS::CreateDxgProcess(&Current, 0LL, 0LL);
      v5 = v10;
      if ( v10 < 0 )
      {
        v12 = WdLogNewEntry5_WdLowResource(v11);
        *(_QWORD *)(v12 + 24) = v5;
        WdLogEvent5_WdLowResource(v12);
LABEL_11:
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
        return (unsigned int)v5;
      }
      v9 = Current;
    }
    v13 = (struct VMBCHANNEL__ **)((char *)v9 + 456);
    LODWORD(v5) = 0;
    if ( !*((_QWORD *)v9 + 57) )
    {
      LODWORD(v5) = DXG_HOST_GLOBAL_VMBUS::CreateVmBusChannel(v13, a2->VmBusHandle, v9);
      *((_QWORD *)v9 + 50) = (char *)v9 + 392;
      *((_QWORD *)v9 + 49) = (char *)v9 + 392;
    }
    *((_BYTE *)v9 + 307) |= 4u;
    if ( (int)v5 >= 0 )
    {
      DXGPROCESS::AddVirtualGpu(v9, (struct _LIST_ENTRY *)((char *)this + 168));
      DXGPROCESS::AcquireReference(v9);
      *((_QWORD *)this + 24) = v9;
    }
    else
    {
      v14 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v14 + 24) = (int)v5;
      *(_QWORD *)(v14 + 32) = 267LL;
      WdLogEvent5_WdError(v14);
    }
    goto LABEL_11;
  }
  return (unsigned int)v5;
}
