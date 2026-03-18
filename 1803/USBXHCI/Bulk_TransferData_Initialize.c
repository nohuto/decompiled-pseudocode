/*
 * XREFs of Bulk_TransferData_Initialize @ 0x1C002EFA4
 * Callers:
 *     Bulk_RetrieveNextStage @ 0x1C002D78C (Bulk_RetrieveNextStage.c)
 *     Bulk_WdfEvtIoCanceledOnQueue @ 0x1C002F7C0 (Bulk_WdfEvtIoCanceledOnQueue.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     McTemplateK0cqqq @ 0x1C00245CC (McTemplateK0cqqq.c)
 */

int __fastcall Bulk_TransferData_Initialize(__int64 a1, _QWORD *a2, __int64 a3)
{
  int result; // eax
  __int64 v7; // rsi
  unsigned int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rax
  _QWORD v11[5]; // [rsp+40h] [rbp-58h] BYREF

  memset(v11, 0, sizeof(v11));
  LOWORD(v11[0]) = 40;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
             WdfDriverGlobals,
             a3,
             v11);
  if ( !*((_BYTE *)a2 + 16) )
  {
    v7 = v11[1];
    v8 = *(unsigned __int16 *)(v11[1] + 2LL);
    if ( v8 <= 0x38 || (v9 = 16LL, v8 > 0x3A) )
      v9 = 0LL;
    memset(a2, 0, 0x160uLL);
    a2[1] = a2;
    *a2 = a2;
    a2[6] = v7;
    *((_BYTE *)a2 + 16) = 1;
    a2[3] = a3;
    a2[7] = a1;
    a2[8] = 0LL;
    a2[9] = 259LL;
    a2[10] = 0LL;
    a2[11] = 0LL;
    a2[12] = 0LL;
    result = *(_DWORD *)(v9 + v7 + 36);
    *((_DWORD *)a2 + 26) = result;
    *(_QWORD *)((char *)a2 + 108) = 0LL;
    *(_QWORD *)((char *)a2 + 116) = 0LL;
    *((_DWORD *)a2 + 32) = 464;
    *((_WORD *)a2 + 66) = 0;
    *((_BYTE *)a2 + 134) = 0;
    *(_DWORD *)(v9 + v7 + 36) = 0;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x200) != 0 )
    {
      v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2280))(WdfDriverGlobals, a3);
      result = IoGetActivityIdIrp(v10, a2 + 4);
      if ( result < 0 )
        result = EtwActivityIdControl(3u, (LPGUID)a2 + 2);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x200) != 0 )
        return McTemplateK0cqqq(
                 *(_QWORD *)(a1 + 56),
                 *(_QWORD *)(a1 + 48),
                 (const GUID *)a2 + 2,
                 *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
                 *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
                 *(_DWORD *)(a1 + 64),
                 *((_DWORD *)a2 + 26));
    }
  }
  return result;
}
