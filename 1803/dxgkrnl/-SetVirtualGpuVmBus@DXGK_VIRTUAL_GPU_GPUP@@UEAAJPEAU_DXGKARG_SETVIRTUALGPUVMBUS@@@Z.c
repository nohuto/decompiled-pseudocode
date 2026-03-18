/*
 * XREFs of ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C017A260
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C0177FAC (-DdiSetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::SetVirtualGpuVmBus(
        DXGK_VIRTUAL_GPU_GPUP *this,
        struct _DXGKARG_SETVIRTUALGPUVMBUS *a2,
        __int64 a3)
{
  a2->VirtualGpuIndex = *((_DWORD *)this + 6);
  return ADAPTER_RENDER::DdiSetVirtualGpuVmBus(*((ADAPTER_RENDER **)this + 1), a2, a3);
}
