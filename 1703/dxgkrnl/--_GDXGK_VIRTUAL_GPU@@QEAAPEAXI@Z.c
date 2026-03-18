/*
 * XREFs of ??_GDXGK_VIRTUAL_GPU@@QEAAPEAXI@Z @ 0x1C0026144
 * Callers:
 *     ?DestroyParavirtualizedGpu@ADAPTER_RENDER@@QEAAXI@Z @ 0x1C0029D1C (-DestroyParavirtualizedGpu@ADAPTER_RENDER@@QEAAXI@Z.c)
 *     ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C0029D78 (-DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z.c)
 * Callees:
 *     ?DestroyVirtualGpu@DXGK_VIRTUAL_GPU@@QEAAXE@Z @ 0x1C0029F50 (-DestroyVirtualGpu@DXGK_VIRTUAL_GPU@@QEAAXE@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 */

DXGK_VIRTUAL_GPU *__fastcall DXGK_VIRTUAL_GPU::`scalar deleting destructor'(DXGK_VIRTUAL_GPU *this)
{
  DXGK_VIRTUAL_GPU::DestroyVirtualGpu(this, 1u);
  operator delete(this);
  return this;
}
