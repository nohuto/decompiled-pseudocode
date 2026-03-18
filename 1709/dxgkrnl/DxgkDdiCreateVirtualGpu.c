/*
 * XREFs of DxgkDdiCreateVirtualGpu @ 0x1C0189CE0
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01DC910 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C00248BC (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0188FC0 (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkDdiCreateVirtualGpu(_QWORD *a1, int a2, char a3, _DWORD *a4)
{
  ADAPTER_RENDER *v4; // rdi
  int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax

  v4 = (ADAPTER_RENDER *)a1[289];
  v9 = ADAPTER_RENDER::EnsureVirtualGpuProcess(v4);
  if ( v9 >= 0 )
  {
    if ( a2 == 1 )
      v11 = *((_QWORD *)v4 + 154);
    else
      v11 = *((_QWORD *)v4 + 153);
    if ( v11 )
    {
      LOBYTE(v10) = a3;
      v9 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64))(*(_QWORD *)v11 + 16LL))(v11, a4, v10);
    }
    else
    {
      v12 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v12 + 24) = 986LL;
      WdLogEvent5_WdError(v12);
      v9 = -1073741811;
    }
  }
  if ( bTracingEnabled )
    VgpuTrace(1, v9, a1, L"DxgkDdiCreateVirtualGpu", (wchar_t *)L"%d", *a4);
  return (unsigned int)v9;
}
