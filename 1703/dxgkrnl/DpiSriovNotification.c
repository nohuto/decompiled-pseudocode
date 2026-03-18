/*
 * XREFs of DpiSriovNotification @ 0x1C01C63A4
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01C31F0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z @ 0x1C003D5CC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C003D6B8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 */

__int64 __fastcall DpiSriovNotification(_QWORD *a1, struct _IRP *a2, _DWORD *a3, unsigned int a4, _QWORD *a5)
{
  __int64 v5; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rax
  _BYTE v11[16]; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+30h] [rbp-18h]

  v5 = a1[8];
  if ( a4 < 4 || !a3 )
  {
    v8 = -1073741789;
    v9 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v9 + 24) = -1073741789LL;
    goto LABEL_12;
  }
  if ( !*(_BYTE *)(v5 + 5056) || *(_QWORD *)(v5 + 5000) )
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
    if ( *(_QWORD *)(v5 + 4992) )
    {
      *a3 = 0;
      *a5 = 4LL;
    }
    else
    {
      *(_QWORD *)(v5 + 5000) = a2;
      a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      IoCsqInsertIrp((PIO_CSQ)(v5 + 4896), a2, 0LL);
      v8 = 259;
      v12 = 259;
    }
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v11);
  return v8;
}
