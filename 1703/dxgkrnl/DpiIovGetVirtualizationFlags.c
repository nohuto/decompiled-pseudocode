/*
 * XREFs of DpiIovGetVirtualizationFlags @ 0x1C01CA6A0
 * Callers:
 *     DpiGetVirtualizationFlags @ 0x1C01C5E14 (DpiGetVirtualizationFlags.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgkDdiGetVirtualGpuProfile @ 0x1C0033C20 (DxgkDdiGetVirtualGpuProfile.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z @ 0x1C003D5CC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C003D6B8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DxgkIsGpuParavirtualizationSupported @ 0x1C010FE60 (DxgkIsGpuParavirtualizationSupported.c)
 */

__int64 __fastcall DpiIovGetVirtualizationFlags(_QWORD *a1, __int64 a2, ULONG *a3)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  char IsGpuParavirtualizationSupported; // al
  _BYTE v8[8]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v9; // [rsp+28h] [rbp-E0h]
  int VirtualGpuProfile; // [rsp+30h] [rbp-D8h]
  struct _DXGKARG_GETVIRTUALGPUPROFILE v11; // [rsp+40h] [rbp-C8h] BYREF

  *a3 = 0;
  if ( a2 )
  {
    v4 = WdLogNewEntry5_WdError(a1, a2);
    v5 = -1073741811;
    *(_QWORD *)(v4 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v4);
  }
  else
  {
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v8, a1, 0LL);
    v5 = VirtualGpuProfile;
    if ( VirtualGpuProfile >= 0 )
    {
      memset(&v11, 0, sizeof(v11));
      IsGpuParavirtualizationSupported = DxgkIsGpuParavirtualizationSupported();
      VirtualGpuProfile = DxgkDdiGetVirtualGpuProfile(*(_QWORD *)(v9 + 3704), &v11, IsGpuParavirtualizationSupported);
      v5 = VirtualGpuProfile;
      if ( VirtualGpuProfile >= 0 )
        *a3 = v11.VirtualizationFlags;
    }
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v8);
  }
  return v5;
}
