/*
 * XREFs of ?Apply@ResourceSetClientProxy@@UEAAJK@Z @ 0x18000E3F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180006FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180007B70 (memset_0.c)
 */

CLIENT_CALL_RETURN __fastcall ResourceSetClientProxy::Apply(ResourceSetClientProxy *this, int a2)
{
  HANDLE CurrentProcess; // rax
  CLIENT_CALL_RETURN result; // rax
  _DWORD v5[4]; // [rsp+50h] [rbp-588h] BYREF
  void *v6; // [rsp+60h] [rbp-578h]
  CONTEXT ContextRecord; // [rsp+F0h] [rbp-4E8h] BYREF
  void *retaddr; // [rsp+5D8h] [rbp+0h]

  if ( a2 )
  {
    memset_0(&ContextRecord, 0, sizeof(ContextRecord));
    RtlCaptureContext(&ContextRecord);
    memset_0(v5, 0, 0x98uLL);
    v5[0] = -1073741637;
    v5[1] = 1;
    v6 = retaddr;
    RtlReportException(v5, &ContextRecord, 8LL);
    CurrentProcess = GetCurrentProcess();
    NtTerminateProcess(CurrentProcess, -1073741637);
    return (CLIENT_CALL_RETURN)2147500037LL;
  }
  else
  {
    result.Pointer = NdrClientCall3(
                       (MIDL_STUBLESS_PROXY_INFO *)&stru_180010BD8,
                       3u,
                       0LL,
                       *((_QWORD *)this + 2),
                       *((_QWORD *)this + 3)).Pointer;
    if ( SLODWORD(result.Simple) >= 0 )
    {
      *((_DWORD *)this + 104) = 0;
      *((_DWORD *)this + 120) = 1;
    }
  }
  return result;
}
