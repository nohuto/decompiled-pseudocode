/*
 * XREFs of ?DestroyParavirtualizedGpu@ADAPTER_RENDER@@QEAAXI@Z @ 0x1C0029D1C
 * Callers:
 *     ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C0029D78 (-DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z.c)
 * Callees:
 *     ??_GDXGK_VIRTUAL_GPU@@QEAAPEAXI@Z @ 0x1C0026144 (--_GDXGK_VIRTUAL_GPU@@QEAAPEAXI@Z.c)
 *     ?DestroyVirtualGpu@DXGK_VIRTUAL_GPU@@QEAAXE@Z @ 0x1C0029F50 (-DestroyVirtualGpu@DXGK_VIRTUAL_GPU@@QEAAXE@Z.c)
 */

void __fastcall ADAPTER_RENDER::DestroyParavirtualizedGpu(ADAPTER_RENDER *this, unsigned int a2)
{
  __int64 v3; // rdi
  DXGK_VIRTUAL_GPU *v4; // rcx

  --*((_DWORD *)this + 283);
  v3 = a2;
  DXGK_VIRTUAL_GPU::DestroyVirtualGpu(*(DXGK_VIRTUAL_GPU **)(*((_QWORD *)this + 142) + 8LL * a2), 1u);
  v4 = *(DXGK_VIRTUAL_GPU **)(*((_QWORD *)this + 142) + 8 * v3);
  if ( v4 )
    DXGK_VIRTUAL_GPU::`scalar deleting destructor'(v4);
  *(_QWORD *)(*((_QWORD *)this + 142) + 8 * v3) = 0LL;
}
