/*
 * XREFs of DpiSriovAttach @ 0x1C01C5F9C
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01C31F0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z @ 0x1C003D5CC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C003D6B8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 */

__int64 __fastcall DpiSriovAttach(_QWORD *a1, struct _IRP *a2)
{
  __int64 v2; // rbx
  unsigned int v4; // edi
  __int64 v5; // rax
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+30h] [rbp-18h]

  v2 = a1[8];
  if ( *(_BYTE *)(v2 + 5056) || *(_QWORD *)(v2 + 4984) )
  {
    v4 = -1073741811;
    v5 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v5 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v5);
  }
  else
  {
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v7, a1, a2);
    v4 = v8;
    if ( v8 >= 0 )
    {
      if ( *(_DWORD *)(v2 + 236) == 2 )
      {
        *(_BYTE *)(v2 + 5056) = 1;
      }
      else
      {
        *(_QWORD *)(v2 + 4984) = a2;
        a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        IoCsqInsertIrp((PIO_CSQ)(v2 + 4896), a2, 0LL);
        v4 = 259;
        v8 = 259;
      }
    }
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v7);
  }
  return v4;
}
