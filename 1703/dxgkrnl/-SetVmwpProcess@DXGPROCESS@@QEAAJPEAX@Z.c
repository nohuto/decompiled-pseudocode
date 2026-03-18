/*
 * XREFs of ?SetVmwpProcess@DXGPROCESS@@QEAAJPEAX@Z @ 0x1C01A22EC
 * Callers:
 *     ?SetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJPEAU_LUID@@PEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C002AD2C (-SetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJPEAU_LUID@@PEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 * Callees:
 *     ?CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESS@@@Z @ 0x1C0026E74 (-CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall DXGPROCESS::SetVmwpProcess(DXGPROCESS *this, __int64 a2)
{
  __int64 result; // rax
  struct VMBCHANNEL__ **v4; // rcx

  result = 0LL;
  v4 = (struct VMBCHANNEL__ **)((char *)this + 408);
  if ( !*v4 )
    result = DXG_HOST_GLOBAL_VMBUS::CreateVmBusChannel(v4, a2, this);
  *((_QWORD *)this + 45) = (char *)this + 352;
  *((_QWORD *)this + 44) = (char *)this + 352;
  *((_BYTE *)this + 275) |= 2u;
  return result;
}
