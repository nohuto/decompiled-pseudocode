/*
 * XREFs of DpiSriovAttach @ 0x1C01DFE70
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01DC910 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C00248BC (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z @ 0x1C002E088 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C002E174 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x1C018A9F0 (DxgkpCheckProcessForVirtualMachineManagementAccess.c)
 *     DpiFdoGetVirtualGpuType @ 0x1C01DDA0C (DpiFdoGetVirtualGpuType.c)
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
  if ( *(_BYTE *)(v6 + v3 + 5108) || *(_QWORD *)(v6 + v3 + 5080) )
  {
    v8 = -1073741811;
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    goto LABEL_14;
  }
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v11, a1, a2);
  v9 = v12;
  if ( v12 >= 0 )
  {
    if ( *(_DWORD *)(v3 + 236) == 2 )
    {
      *(_BYTE *)(v6 + v3 + 5108) = 1;
    }
    else
    {
      *(_QWORD *)(v6 + v3 + 5080) = a2;
      a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      IoCsqInsertIrp((PIO_CSQ)(v3 + 4992), a2, 0LL);
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
