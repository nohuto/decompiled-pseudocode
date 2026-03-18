/*
 * XREFs of ?DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z @ 0x1C00324D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z @ 0x1C002E088 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C002E174 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C0032978 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkDdiQueryPhysicalFunctionLuid @ 0x1C018A254 (DxgkDdiQueryPhysicalFunctionLuid.c)
 */

__int64 __fastcall DpiDdiQueryPhysicalFunctionLuid(void *a1, struct _LUID *a2)
{
  unsigned int v2; // ebx
  _BYTE v4[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]
  void *v7; // [rsp+60h] [rbp+18h] BYREF

  DpiGetVirtualGpuType(a1, &v7);
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v4, v7, 0LL);
  v2 = v6;
  if ( v6 >= 0 )
  {
    DxgkDdiQueryPhysicalFunctionLuid(*(void **)(v5 + 3728));
    v2 = 0;
    v6 = 0;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v4);
  return v2;
}
