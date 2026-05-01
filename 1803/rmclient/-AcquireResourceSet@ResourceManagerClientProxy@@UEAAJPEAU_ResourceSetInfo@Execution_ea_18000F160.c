/*
 * XREFs of ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEBU_GUID@@PEA_NPEAUIResourceSet@3@PEAPEAU63@@Z @ 0x18000F160
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180006FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180007B70 (memset_0.c)
 */

__int64 __fastcall ResourceManagerClientProxy::AcquireResourceSet(
        ResourceManagerClientProxy *this,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct ExecutionModel::IResourceSetCallback *a3,
        const struct _GUID *a4)
{
  HANDLE CurrentProcess; // rax
  _DWORD v6[4]; // [rsp+20h] [rbp-588h] BYREF
  void *v7; // [rsp+30h] [rbp-578h]
  CONTEXT ContextRecord; // [rsp+C0h] [rbp-4E8h] BYREF
  void *retaddr; // [rsp+5A8h] [rbp+0h]

  memset_0(&ContextRecord, 0, sizeof(ContextRecord));
  RtlCaptureContext(&ContextRecord);
  memset_0(v6, 0, 0x98uLL);
  v7 = retaddr;
  v6[0] = -1073741637;
  v6[1] = 1;
  RtlReportException(v6, &ContextRecord, 8LL);
  CurrentProcess = GetCurrentProcess();
  NtTerminateProcess(CurrentProcess, -1073741637);
  return 2147500037LL;
}
