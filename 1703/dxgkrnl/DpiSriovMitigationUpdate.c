/*
 * XREFs of DpiSriovMitigationUpdate @ 0x1C01C62A4
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01C31F0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z @ 0x1C003D5CC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C003D6B8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 */

__int64 __fastcall DpiSriovMitigationUpdate(
        _QWORD *a1,
        struct _IRP *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v6; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rax
  _BYTE v11[16]; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+30h] [rbp-18h]

  v6 = a1[8];
  if ( a4 < 2 || !a3 || a6 < 2 || !a5 )
  {
    v8 = -1073741789;
    v9 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v9 + 24) = -1073741789LL;
    goto LABEL_12;
  }
  if ( !*(_BYTE *)(v6 + 5056) || *(_QWORD *)(v6 + 5008) )
  {
    v8 = -1073741811;
    v9 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
LABEL_12:
    WdLogEvent5_WdError(v9);
    return v8;
  }
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v11, a1, a2);
  v8 = v12;
  if ( v12 >= 0 )
  {
    KeSetEvent((PRKEVENT)(v6 + 5032), 0, 0);
    *(_QWORD *)(v6 + 5008) = a2;
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    IoCsqInsertIrp((PIO_CSQ)(v6 + 4896), a2, 0LL);
    v8 = 259;
    v12 = 259;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v11);
  return v8;
}
