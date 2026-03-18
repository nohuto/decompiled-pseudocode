/*
 * XREFs of DpiSriovEventComplete @ 0x1C01C61D4
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01C31F0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z @ 0x1C003D5CC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C003D6B8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 */

__int64 __fastcall DpiSriovEventComplete(_QWORD *a1, NTSTATUS *a2, unsigned int a3)
{
  __int64 v3; // rbx
  unsigned int v5; // ebx
  __int64 v6; // rax
  void *v7; // rdx
  PIRP v8; // rax
  IRP *v9; // rcx
  NTSTATUS v10; // eax
  _BYTE v12[16]; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+30h] [rbp-18h]

  v3 = a1[8];
  if ( a3 < 4 || !a2 )
  {
    v5 = -1073741789;
    v6 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v6 + 24) = -1073741789LL;
    goto LABEL_11;
  }
  if ( !*(_BYTE *)(v3 + 5056) )
  {
    v5 = -1073741811;
    v6 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
LABEL_11:
    WdLogEvent5_WdError(v6);
    return v5;
  }
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v12, a1, 0LL);
  if ( v13 >= 0 )
  {
    v7 = *(void **)(v3 + 4992);
    if ( v7 )
    {
      v8 = IoCsqRemoveNextIrp((PIO_CSQ)(v3 + 4896), v7);
      *(_QWORD *)(v3 + 4992) = 0LL;
      v9 = v8;
      if ( v8 )
      {
        v10 = *a2;
        v9->IoStatus.Information = 0LL;
        v9->IoStatus.Status = v10;
        IofCompleteRequest(v9, 0);
      }
    }
  }
  v5 = v13;
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v12);
  return v5;
}
