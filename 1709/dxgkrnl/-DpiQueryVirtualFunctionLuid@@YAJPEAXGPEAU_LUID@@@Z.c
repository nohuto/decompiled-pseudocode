/*
 * XREFs of ?DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z @ 0x1C0032A20
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z @ 0x1C002E088 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C002E174 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C0032978 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkDdiQueryVirtualFunctionLuid @ 0x1C018A428 (DxgkDdiQueryVirtualFunctionLuid.c)
 */

__int64 __fastcall DpiQueryVirtualFunctionLuid(_DWORD *a1, __int64 a2, struct _LUID *a3)
{
  unsigned int VirtualFunctionLuid; // ebx
  _BYTE v5[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]
  void *v8; // [rsp+68h] [rbp+20h] BYREF

  DpiGetVirtualGpuType(a1, &v8);
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v5, v8, 0LL);
  VirtualFunctionLuid = v7;
  if ( v7 >= 0 )
  {
    VirtualFunctionLuid = DxgkDdiQueryVirtualFunctionLuid(*(void **)(v6 + 3728));
    v7 = VirtualFunctionLuid;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v5);
  return VirtualFunctionLuid;
}
