/*
 * XREFs of ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAX@Z @ 0x1C01B71A0
 * Callers:
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C0179140 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2E@Z @ 0x1C01B723C (-InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2E@Z.c)
 * Callees:
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C000BE20 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ?CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESSVMWP@@@Z @ 0x1C017AB0C (-CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESSVMWP@@@Z.c)
 *     ?SetVailObject@DXGVIRTUALMACHINE@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C01B7D0C (-SetVailObject@DXGVIRTUALMACHINE@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 *     ?Create@DXGVAILOBJECT@@SAJPEAXPEAPEAV1@@Z @ 0x1C01E61C8 (-Create@DXGVAILOBJECT@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C01E6BC0 (-IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 */

__int64 __fastcall DXGVIRTUALMACHINE::InitializeVirtualMachine(struct DXGPROCESSVMWP **this, void *a2)
{
  struct VMBCHANNEL__ **v3; // rcx
  int VmBusChannel; // eax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  DxgkCompositionObject *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  v3 = this + 11;
  if ( *v3 )
    return 0LL;
  VmBusChannel = DXG_HOST_GLOBAL_VMBUS::CreateVmBusChannel(v3, (__int64)a2, this[7]);
  v7 = VmBusChannel;
  if ( VmBusChannel < 0 )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = v7;
    WdLogEvent5_WdError(v8);
  }
  if ( DXGVAILOBJECT::IsFeatureEnabled() && (int)v7 >= 0 )
  {
    LODWORD(v7) = DXGVAILOBJECT::Create(a2, &v10);
    if ( (int)v7 >= 0 )
    {
      DXGVIRTUALMACHINE::SetVailObject((DXGVIRTUALMACHINE *)this, v10);
      DxgkCompositionObject::Release(v10);
    }
  }
  return (unsigned int)v7;
}
