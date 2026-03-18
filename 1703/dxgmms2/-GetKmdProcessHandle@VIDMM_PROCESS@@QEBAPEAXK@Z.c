/*
 * XREFs of ?GetKmdProcessHandle@VIDMM_PROCESS@@QEBAPEAXK@Z @ 0x1C004E7D8
 * Callers:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C00026DC (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C00530B0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 * Callees:
 *     <none>
 */

void *__fastcall VIDMM_PROCESS::GetKmdProcessHandle(VIDMM_PROCESS *this, unsigned int a2)
{
  return *(void **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 40LL) + 8LL * a2) + 16LL);
}
