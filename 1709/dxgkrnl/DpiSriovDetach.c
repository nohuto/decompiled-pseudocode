/*
 * XREFs of DpiSriovDetach @ 0x1C01DFFC0
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01DC910 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C00248BC (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z @ 0x1C002E088 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C002E174 (--1CInterfaceCallContext@@QEAA@XZ.c)
 */

__int64 __fastcall DpiSriovDetach(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  int v4; // edi
  unsigned int v6; // ebp
  unsigned __int64 v7; // rsi
  __int64 v8; // rdi
  _QWORD *v9; // rax
  void *v10; // rdx
  PIRP v11; // rax
  void *v12; // rdx
  PIRP v13; // rax
  void *v14; // rdx
  PIRP v15; // rax
  void *v16; // rdx
  PIRP v17; // rax
  _BYTE v19[16]; // [rsp+30h] [rbp-38h] BYREF
  int v20; // [rsp+40h] [rbp-28h]

  v3 = a1[8];
  v4 = a2;
  v6 = 0;
  if ( bTracingEnabled )
    VgpuTrace(1, 0, (void *)v3, L"DpiSriovDetach", 0LL);
  v7 = -(__int64)(v4 != 0) & 0xFFFFFFFFFFFFFFE0uLL;
  v8 = v4 != 0 ? 5112LL : 5080LL;
  if ( *(_BYTE *)(v8 + v3 + 28) || *(_QWORD *)(v8 + v3) )
  {
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v19, a1, 0LL);
    v6 = v20;
    if ( v20 >= 0 )
    {
      v10 = *(void **)(v8 + v3);
      *(_BYTE *)(v8 + v3 + 28) = 0;
      if ( v10 )
      {
        v11 = IoCsqRemoveNextIrp((PIO_CSQ)(v3 + 4992), v10);
        *(_QWORD *)(v8 + v3) = 0LL;
        if ( v11 )
        {
          v11->IoStatus.Status = -1073741536;
          v11->IoStatus.Information = 0LL;
          IofCompleteRequest(v11, 0);
        }
      }
      v12 = *(void **)(v3 + 5144);
      if ( v12 )
      {
        if ( !*(_QWORD *)(v7 + v3 + 5112) )
        {
          v13 = IoCsqRemoveNextIrp((PIO_CSQ)(v3 + 4992), v12);
          *(_QWORD *)(v3 + 5144) = 0LL;
          if ( v13 )
          {
            v13->IoStatus.Status = 0;
            v13->IoStatus.Information = 0LL;
            IofCompleteRequest(v13, 0);
          }
        }
      }
      v14 = *(void **)(v8 + v3 + 8);
      if ( v14 )
      {
        v15 = IoCsqRemoveNextIrp((PIO_CSQ)(v3 + 4992), v14);
        *(_QWORD *)(v8 + v3 + 8) = 0LL;
        if ( v15 )
        {
          v15->IoStatus.Status = -1073741536;
          v15->IoStatus.Information = 0LL;
          IofCompleteRequest(v15, 0);
        }
      }
      v16 = *(void **)(v8 + v3 + 16);
      if ( v16 )
      {
        v17 = IoCsqRemoveNextIrp((PIO_CSQ)(v3 + 4992), v16);
        *(_QWORD *)(v8 + v3 + 16) = 0LL;
        if ( v17 )
        {
          v17->IoStatus.Status = -1073741536;
          v17->IoStatus.Information = 0LL;
          IofCompleteRequest(v17, 0);
        }
      }
    }
    KeClearEvent((PRKEVENT)(v3 + 5168));
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v19);
  }
  else
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3);
    v9[3] = DpiFdoDispatchIoctl;
    v9[4] = DpiSriovDetach;
    v9[5] = 0LL;
    WdLogEvent5_WdWarning(v9);
  }
  if ( bTracingEnabled )
    VgpuTrace(0, v6, (void *)v3, L"DpiSriovDetach", 0LL);
  return v6;
}
