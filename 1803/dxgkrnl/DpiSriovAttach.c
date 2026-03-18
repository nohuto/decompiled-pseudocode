/*
 * XREFs of DpiSriovAttach @ 0x1C01FBBAC
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01F2FD0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C002CEF0 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C003A9B0 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C003AAB0 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x1C0175408 (DxgkpCheckProcessForVirtualMachineManagementAccess.c)
 *     DpiFdoGetVirtualGpuType @ 0x1C01F4D24 (DpiFdoGetVirtualGpuType.c)
 */

__int64 __fastcall DpiSriovAttach(_QWORD *a1, struct _IRP *a2)
{
  __int64 v3; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // edi
  int v9; // eax
  _BYTE v11[16]; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+40h] [rbp-18h]

  v3 = a1[8];
  if ( bTracingEnabled )
    VgpuTrace(1, 0, (void *)v3, L"DpiSriovAttach", 0LL);
  v6 = (unsigned int)DpiFdoGetVirtualGpuType((__int64)a2) != 0 ? 0x20 : 0;
  if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    v8 = -1073741790;
    *(_QWORD *)(v7 + 24) = -1073741790LL;
LABEL_14:
    WdLogEvent5_WdError(v7);
    goto LABEL_15;
  }
  if ( *(_BYTE *)(v6 + v3 + 5180) || *(_QWORD *)(v6 + v3 + 5152) )
  {
    v8 = -1073741811;
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    goto LABEL_14;
  }
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v11, a1, a2, 1);
  v9 = v12;
  if ( v12 >= 0 )
  {
    if ( *(_DWORD *)(v3 + 236) == 2 )
    {
      *(_BYTE *)(v6 + v3 + 5180) = 1;
    }
    else
    {
      *(_QWORD *)(v6 + v3 + 5152) = a2;
      a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      IoCsqInsertIrp((PIO_CSQ)(v3 + 5064), a2, 0LL);
      v9 = 259;
      v12 = 259;
    }
  }
  v8 = v9;
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v11);
LABEL_15:
  if ( bTracingEnabled )
    VgpuTrace(0, v8, (void *)v3, L"DpiSriovAttach", 0LL);
  return v8;
}
