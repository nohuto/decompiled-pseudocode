/*
 * XREFs of ?DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z @ 0x1C0032440
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z @ 0x1C002E088 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C002E174 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C0032978 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkDdiGetVendorAndDevice @ 0x1C0189FF8 (DxgkDdiGetVendorAndDevice.c)
 */

void __fastcall DpiDdiGetVendorAndDevice(void *a1, __int64 a2, unsigned __int16 *a3, unsigned __int16 *a4)
{
  void *v5; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v6[8]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]
  int v8; // [rsp+48h] [rbp-10h]

  DpiGetVirtualGpuType(a1, &v5);
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v6, v5, 0LL);
  if ( v8 >= 0 )
    DxgkDdiGetVendorAndDevice(*(void **)(v7 + 3728), (__int64)a4);
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v6);
}
