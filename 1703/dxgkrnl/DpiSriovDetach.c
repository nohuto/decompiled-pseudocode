/*
 * XREFs of DpiSriovDetach @ 0x1C01C605C
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01C31F0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z @ 0x1C003D5CC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C003D6B8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 */

__int64 __fastcall DpiSriovDetach(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // ebx
  __int64 v4; // rax
  void *v5; // rdx
  PIRP v6; // rax
  void *v7; // rdx
  PIRP v8; // rax
  void *v9; // rdx
  PIRP v10; // rax
  void *v11; // rdx
  PIRP v12; // rax
  _BYTE v14[16]; // [rsp+20h] [rbp-28h] BYREF
  int v15; // [rsp+30h] [rbp-18h]

  v2 = a1[8];
  if ( *(_BYTE *)(v2 + 5056) || *(_QWORD *)(v2 + 4984) )
  {
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v14, a1, 0LL);
    if ( v15 >= 0 )
    {
      v5 = *(void **)(v2 + 4984);
      *(_BYTE *)(v2 + 5056) = 0;
      if ( v5 )
      {
        v6 = IoCsqRemoveNextIrp((PIO_CSQ)(v2 + 4896), v5);
        *(_QWORD *)(v2 + 4984) = 0LL;
        if ( v6 )
        {
          v6->IoStatus.Status = -1073741536;
          v6->IoStatus.Information = 0LL;
          IofCompleteRequest(v6, 0);
        }
      }
      v7 = *(void **)(v2 + 4992);
      if ( v7 )
      {
        v8 = IoCsqRemoveNextIrp((PIO_CSQ)(v2 + 4896), v7);
        *(_QWORD *)(v2 + 4992) = 0LL;
        if ( v8 )
        {
          v8->IoStatus.Status = 0;
          v8->IoStatus.Information = 0LL;
          IofCompleteRequest(v8, 0);
        }
      }
      v9 = *(void **)(v2 + 5000);
      if ( v9 )
      {
        v10 = IoCsqRemoveNextIrp((PIO_CSQ)(v2 + 4896), v9);
        *(_QWORD *)(v2 + 5000) = 0LL;
        if ( v10 )
        {
          v10->IoStatus.Status = -1073741536;
          v10->IoStatus.Information = 0LL;
          IofCompleteRequest(v10, 0);
        }
      }
      v11 = *(void **)(v2 + 5008);
      if ( v11 )
      {
        v12 = IoCsqRemoveNextIrp((PIO_CSQ)(v2 + 4896), v11);
        *(_QWORD *)(v2 + 5008) = 0LL;
        if ( v12 )
        {
          v12->IoStatus.Status = -1073741536;
          v12->IoStatus.Information = 0LL;
          IofCompleteRequest(v12, 0);
        }
      }
    }
    KeClearEvent((PRKEVENT)(v2 + 5032));
    v3 = v15;
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v14);
  }
  else
  {
    v3 = -1073741811;
    v4 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v4 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v4);
  }
  return v3;
}
