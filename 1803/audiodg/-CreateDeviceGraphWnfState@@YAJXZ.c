/*
 * XREFs of ?CreateDeviceGraphWnfState@@YAJXZ @ 0x140033E28
 * Callers:
 *     AudioDGGetDeviceGraphWnfStateName @ 0x1400413E0 (AudioDGGetDeviceGraphWnfStateName.c)
 * Callees:
 *     <none>
 */

__int64 CreateDeviceGraphWnfState(void)
{
  unsigned int v0; // ebx
  int LastError; // eax
  int WnfStateName; // eax
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp+8h] BYREF

  v0 = 0;
  SecurityDescriptor = 0LL;
  if ( !g_DeviceGraphWnfStateNameCreated )
  {
    if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
           L"D:P(A;;GA;;;WD)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1692970155-4054893335-185714091-3362601943-3526593181-11598"
            "16984-2199008581-497492991)",
           1u,
           &SecurityDescriptor,
           0LL) )
    {
      WnfStateName = NtCreateWnfStateName(g_hSqmSession.Data4, 3LL, 0LL);
      if ( WnfStateName >= 0 )
      {
        g_DeviceGraphWnfStateNameCreated = 1;
        goto LABEL_9;
      }
      LastError = WnfStateName | 0x10000000;
    }
    else
    {
      LastError = GetLastError();
      if ( LastError > 0 )
      {
        v0 = (unsigned __int16)LastError | 0x80070000;
        goto LABEL_9;
      }
    }
    v0 = LastError;
  }
LABEL_9:
  LocalFree(SecurityDescriptor);
  return v0;
}
