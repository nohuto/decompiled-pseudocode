/*
 * XREFs of ?PendingActivation_@IamTraceLogging@@QEAAXPEAUHWND__@@@Z @ 0x18001DF0C
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_bb299bb733d931796faa9380238be063___::operator() @ 0x18001ABF0 (CDelayIAMOperations--CDelayedOperation__lambda_bb299bb733d931796faa9380238be063___--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180027104 (-Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

void __fastcall IamTraceLogging::PendingActivation_(IamTraceLogging *this, HWND a2)
{
  const struct _TlgProvider_t *v3; // rax
  DWORD dwProcessId; // [rsp+30h] [rbp-19h] BYREF
  DWORD WindowThreadProcessId; // [rsp+34h] [rbp-15h] BYREF
  HWND v6; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  HWND *v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  DWORD *p_dwProcessId; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  DWORD *p_WindowThreadProcessId; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]

  WindowThreadProcessId = GetWindowThreadProcessId(a2, &dwProcessId);
  v3 = CAppManagerLogging::Provider();
  if ( *(_DWORD *)v3 > 5u )
  {
    v6 = a2;
    v8 = &v6;
    p_dwProcessId = &dwProcessId;
    p_WindowThreadProcessId = &WindowThreadProcessId;
    v9 = 8LL;
    v11 = 4LL;
    v13 = 4LL;
    TlgWrite(v3, &unk_180254325, 0LL, 0LL, 5u, &pData);
  }
}
