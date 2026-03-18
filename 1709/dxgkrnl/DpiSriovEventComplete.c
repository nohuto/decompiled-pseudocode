/*
 * XREFs of DpiSriovEventComplete @ 0x1C01E01BC
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01DC910 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C00248BC (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z @ 0x1C002E088 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C002E174 (--1CInterfaceCallContext@@QEAA@XZ.c)
 */

__int64 __fastcall DpiSriovEventComplete(_QWORD *a1, int a2, NTSTATUS *a3, unsigned int a4)
{
  struct _IO_CSQ *v5; // rdi
  unsigned __int64 v9; // rbx
  unsigned int v10; // ebx
  __int64 v11; // rax
  int v12; // esi
  PIO_CSQ_PEEK_NEXT_IRP CsqPeekNextIrp; // rdx
  PIRP v14; // rax
  IRP *v15; // rcx
  NTSTATUS v16; // eax
  _BYTE v18[16]; // [rsp+30h] [rbp-28h] BYREF
  int v19; // [rsp+40h] [rbp-18h]

  v5 = (struct _IO_CSQ *)a1[8];
  if ( bTracingEnabled )
    VgpuTrace(1, 0, v5, L"DpiSriovEventComplete", 0LL);
  if ( a4 < 4 || !a3 )
  {
    v10 = -1073741789;
    v11 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v11 + 24) = -1073741789LL;
    goto LABEL_14;
  }
  v9 = -(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFE0uLL;
  if ( !*((_BYTE *)&v5[79].CsqCompleteCanceledIrp + (a2 != 0 ? 0x20 : 0) + 4) )
  {
    v10 = -1073741811;
    v11 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
LABEL_14:
    WdLogEvent5_WdError(v11);
    goto LABEL_15;
  }
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v18, a1, 0LL);
  v12 = v19;
  if ( v19 >= 0 )
  {
    CsqPeekNextIrp = v5[80].CsqPeekNextIrp;
    if ( CsqPeekNextIrp )
    {
      if ( !*((_BYTE *)&v5[80].CsqRemoveIrp + v9 + 4) )
      {
        v14 = IoCsqRemoveNextIrp(v5 + 78, CsqPeekNextIrp);
        v5[80].CsqPeekNextIrp = 0LL;
        v15 = v14;
        if ( v14 )
        {
          v16 = *a3;
          v15->IoStatus.Information = 0LL;
          v15->IoStatus.Status = v16;
          IofCompleteRequest(v15, 0);
        }
      }
    }
  }
  v10 = v12;
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v18);
LABEL_15:
  if ( bTracingEnabled )
    VgpuTrace(0, v10, v5, L"DpiSriovEventComplete", 0LL);
  return v10;
}
