/*
 * XREFs of ?GetProcessCommandLine@@YAPEAGXZ @ 0x1C008BCD8
 * Callers:
 *     NtUserWin32kSysCallFilterStub @ 0x1C00EB9F0 (NtUserWin32kSysCallFilterStub.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0026FA0 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     RtlStringCchCopyNW @ 0x1C008BE1C (RtlStringCchCopyNW.c)
 */

unsigned __int16 *GetProcessCommandLine(void)
{
  __int64 v0; // rbx
  STRSAFE_PCNZWCH *v1; // rdi
  BOOL v2; // esi
  STRSAFE_PCNZWCH *v3; // rax
  wchar_t *v4; // rax
  struct _CLIENT_ID ClientId; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ProcessInformationLength; // [rsp+90h] [rbp+20h] BYREF
  void *ProcessHandle; // [rsp+98h] [rbp+28h] BYREF

  v0 = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  v1 = 0LL;
  ClientId.UniqueThread = 0LL;
  v2 = 0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 512;
  ClientId.UniqueProcess = (HANDLE)PsGetCurrentThreadProcessId();
  if ( ZwOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId) >= 0
    && ZwQueryInformationProcess(
         ProcessHandle,
         ProcessImageFileMapping|ProcessUserModeIOPL,
         0LL,
         0,
         &ProcessInformationLength) == -1073741820
    && ProcessInformationLength >= 0x10 )
  {
    v3 = (STRSAFE_PCNZWCH *)Win32AllocPoolWithQuotaZInit(ProcessInformationLength + 2LL, 0x79747355u);
    v1 = v3;
    if ( v3 )
    {
      if ( ZwQueryInformationProcess(
             ProcessHandle,
             ProcessImageFileMapping|ProcessUserModeIOPL,
             v3,
             ProcessInformationLength,
             0LL) >= 0 )
      {
        v4 = (wchar_t *)Win32AllocPoolWithQuotaZInit(*(unsigned __int16 *)v1 + 2LL, 0x79747355u);
        v0 = (__int64)v4;
        if ( v4 )
          v2 = RtlStringCchCopyNW(
                 v4,
                 *(unsigned __int16 *)v1 + 1LL,
                 v1[1],
                 (unsigned __int64)*(unsigned __int16 *)v1 >> 1) >= 0;
      }
    }
  }
  if ( ProcessHandle )
    ZwClose(ProcessHandle);
  if ( v1 )
    Win32FreePool((__int64)v1);
  if ( !v2 && v0 )
  {
    Win32FreePool(v0);
    return 0LL;
  }
  return (unsigned __int16 *)v0;
}
