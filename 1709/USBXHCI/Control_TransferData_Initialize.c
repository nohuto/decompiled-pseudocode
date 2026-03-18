/*
 * XREFs of Control_TransferData_Initialize @ 0x1C002518C
 * Callers:
 *     Control_WdfEvtIoCanceledOnQueue @ 0x1C0026610 (Control_WdfEvtIoCanceledOnQueue.c)
 *     Control_WdfEvtIoDefault @ 0x1C00267A0 (Control_WdfEvtIoDefault.c)
 * Callees:
 *     McTemplateK0cqqq @ 0x1C0007E38 (McTemplateK0cqqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 */

int __fastcall Control_TransferData_Initialize(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int result; // eax
  __int64 v9; // rax

  memset(a4, 0, 0xF8uLL);
  a4[1] = a4;
  *a4 = a4;
  *((_DWORD *)a4 + 16) = 0;
  a4[9] = 0LL;
  a4[10] = 0LL;
  a4[11] = 0LL;
  a4[12] = 0LL;
  *((_BYTE *)a4 + 16) = 1;
  a4[3] = a2;
  a4[6] = a3;
  a4[7] = a1;
  *((_DWORD *)a4 + 26) = *(_DWORD *)(a3 + 36);
  *(_QWORD *)((char *)a4 + 108) = 0LL;
  *((_DWORD *)a4 + 29) = 0;
  a4[15] = 259LL;
  a4[17] = *(_QWORD *)(a1 + 176);
  *((_DWORD *)a4 + 36) = *(_DWORD *)(a1 + 192);
  a4[19] = *(_QWORD *)(a1 + 176);
  *((_DWORD *)a4 + 40) = *(_DWORD *)(a1 + 192);
  *((_DWORD *)a4 + 50) = 0;
  *(_DWORD *)(a3 + 36) = 0;
  if ( *(_BYTE *)(a1 + 280) )
  {
    *((_DWORD *)a4 + 52) = 1;
    a4[28] = 0LL;
    *((_DWORD *)a4 + 58) = 0;
    a4[12] = a4 + 26;
  }
  result = (unsigned int)memset(a4 + 21, 0, 0x20uLL);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x100) != 0 )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    result = IoGetActivityIdIrp(v9, a4 + 4);
    if ( result < 0 )
      result = EtwActivityIdControl(3u, (LPGUID)a4 + 2);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x100) != 0 )
      return McTemplateK0cqqq(
               *(_QWORD *)(a1 + 56),
               *(_QWORD *)(a1 + 48),
               (const GUID *)a4 + 2,
               *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
               *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
               0,
               *((_DWORD *)a4 + 26));
  }
  return result;
}
