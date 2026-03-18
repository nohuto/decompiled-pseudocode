/*
 * XREFs of DpiIovGetVirtualizationFlags @ 0x1C01E4A50
 * Callers:
 *     DpiGetVirtualizationFlags @ 0x1C01DFC40 (DpiGetVirtualizationFlags.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z @ 0x1C002E088 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C002E174 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C0032978 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkDdiGetVirtualGpuProfile @ 0x1C018A10C (DxgkDdiGetVirtualGpuProfile.c)
 */

__int64 __fastcall DpiIovGetVirtualizationFlags(_DWORD *a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  unsigned int VirtualGpuType; // esi
  void *v8; // [rsp+20h] [rbp-F8h] BYREF
  _BYTE v9[8]; // [rsp+28h] [rbp-F0h] BYREF
  __int64 v10; // [rsp+30h] [rbp-E8h]
  int VirtualGpuProfile; // [rsp+38h] [rbp-E0h]
  unsigned int v12[44]; // [rsp+40h] [rbp-D8h] BYREF

  *a3 = 0;
  if ( a2 )
  {
    v4 = WdLogNewEntry5_WdError(a1);
    v5 = -1073741811;
    *(_QWORD *)(v4 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v4);
  }
  else
  {
    VirtualGpuType = DpiGetVirtualGpuType(a1, &v8);
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v9, v8, 0LL);
    v5 = VirtualGpuProfile;
    if ( VirtualGpuProfile >= 0 )
    {
      memset(v12, 0, 0xA8uLL);
      VirtualGpuProfile = DxgkDdiGetVirtualGpuProfile(*(ADAPTER_RENDER ***)(v10 + 3728), VirtualGpuType, v12);
      v5 = VirtualGpuProfile;
      if ( VirtualGpuProfile >= 0 )
        *a3 = v12[1];
    }
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v9);
  }
  return v5;
}
