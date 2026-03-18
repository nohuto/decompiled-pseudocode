/*
 * XREFs of ?DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C0032690
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z @ 0x1C002E088 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C002E174 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C0032978 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkDdiReadVirtualFunctionConfigBlock @ 0x1C018A560 (DxgkDdiReadVirtualFunctionConfigBlock.c)
 */

__int64 __fastcall DpiDdiReadVirtualFunctionConfigBlock(void *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int VirtualFunctionConfigBlock; // ebx
  void *v8; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v9[8]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+48h] [rbp-10h]

  DpiGetVirtualGpuType(a1, &v8);
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v9, v8, 0LL);
  VirtualFunctionConfigBlock = v11;
  if ( v11 >= 0 )
  {
    VirtualFunctionConfigBlock = DxgkDdiReadVirtualFunctionConfigBlock(*(void **)(v10 + 3728), a4, a5);
    v11 = VirtualFunctionConfigBlock;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v9);
  return VirtualFunctionConfigBlock;
}
