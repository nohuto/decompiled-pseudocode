/*
 * XREFs of DpiSriovNotification @ 0x1C01FC134
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01F2FD0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C002CEF0 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C003A9B0 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C003AAB0 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DpiFdoGetVirtualGpuType @ 0x1C01F4D24 (DpiFdoGetVirtualGpuType.c)
 */

__int64 __fastcall DpiSriovNotification(_QWORD *a1, struct _IRP *a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned int v11; // ebx
  __int64 v12; // rax
  _BYTE v14[16]; // [rsp+30h] [rbp-28h] BYREF
  int v15; // [rsp+40h] [rbp-18h]

  v5 = a1[8];
  if ( bTracingEnabled )
    VgpuTrace(1, 0, (void *)v5, L"DpiSriovNotification", 0LL);
  if ( a4 < 4 || !a3 )
  {
    v11 = -1073741789;
    v12 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v12 + 24) = -1073741789LL;
    goto LABEL_12;
  }
  v10 = (unsigned int)DpiFdoGetVirtualGpuType((__int64)a2) != 0 ? 0x20 : 0;
  if ( !*(_BYTE *)(v10 + v5 + 5180) || *(_QWORD *)(v10 + v5 + 5160) )
  {
    v11 = -1073741811;
    v12 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
LABEL_12:
    WdLogEvent5_WdError(v12);
    goto LABEL_13;
  }
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v14, a1, a2, 1);
  v11 = v15;
  if ( v15 >= 0 )
  {
    *(_QWORD *)(v10 + v5 + 5160) = a2;
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    IoCsqInsertIrp((PIO_CSQ)(v5 + 5064), a2, 0LL);
    v11 = 259;
    v15 = 259;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v14);
LABEL_13:
  if ( bTracingEnabled )
    VgpuTrace(0, v11, (void *)v5, L"DpiSriovNotification", 0LL);
  return v11;
}
