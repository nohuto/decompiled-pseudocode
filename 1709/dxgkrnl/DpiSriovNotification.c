/*
 * XREFs of DpiSriovNotification @ 0x1C01E04C0
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01DC910 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C00248BC (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z @ 0x1C002E088 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C002E174 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DpiFdoGetVirtualGpuType @ 0x1C01DDA0C (DpiFdoGetVirtualGpuType.c)
 */

__int64 __fastcall DpiSriovNotification(_QWORD *a1, struct _IRP *a2, _DWORD *a3, unsigned int a4, _QWORD *a5)
{
  struct _IO_CSQ *v6; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned int v12; // ebx
  __int64 v13; // rax
  _BYTE v15[16]; // [rsp+30h] [rbp-38h] BYREF
  int v16; // [rsp+40h] [rbp-28h]

  v6 = (struct _IO_CSQ *)a1[8];
  if ( bTracingEnabled )
    VgpuTrace(1, 0, v6, L"DpiSriovNotification", 0LL);
  if ( a4 < 4 || !a3 )
  {
    v12 = -1073741789;
    v13 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v13 + 24) = -1073741789LL;
    goto LABEL_14;
  }
  v11 = (unsigned int)DpiFdoGetVirtualGpuType((__int64)a2) != 0 ? 0x20 : 0;
  if ( !*((_BYTE *)&v6[79].CsqCompleteCanceledIrp + v11 + 4)
    || *(PIO_CSQ_ACQUIRE_LOCK *)((char *)&v6[79].CsqAcquireLock + v11) )
  {
    v12 = -1073741811;
    v13 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
LABEL_14:
    WdLogEvent5_WdError(v13);
    goto LABEL_15;
  }
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v15, a1, a2);
  v12 = v16;
  if ( v16 >= 0 )
  {
    if ( v6[80].CsqPeekNextIrp )
    {
      *a3 = 0;
      *a5 = 4LL;
    }
    else
    {
      *(PIO_CSQ_ACQUIRE_LOCK *)((char *)&v6[79].CsqAcquireLock + v11) = (PIO_CSQ_ACQUIRE_LOCK)a2;
      a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      IoCsqInsertIrp(v6 + 78, a2, 0LL);
      v12 = 259;
      v16 = 259;
    }
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v15);
LABEL_15:
  if ( bTracingEnabled )
    VgpuTrace(0, v12, v6, L"DpiSriovNotification", 0LL);
  return v12;
}
