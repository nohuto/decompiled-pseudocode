/*
 * XREFs of ?GetApplicationName@@YAJKPEAGI@Z @ 0x18006E380
 * Callers:
 *     ?ReportHangInternal@@YAJPEAUHWND__@@PEAKKKKPEBG@Z @ 0x18006E540 (-ReportHangInternal@@YAJPEAUHWND__@@PEAKKKKPEBG@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800288A0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     LocalFree_0 @ 0x18003EE10 (LocalFree_0.c)
 *     OpenProcess_0 @ 0x18003EE46 (OpenProcess_0.c)
 *     CloseHandle_0 @ 0x18003EE4C (CloseHandle_0.c)
 *     LocalAlloc_0 @ 0x18003EE64 (LocalAlloc_0.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x18006E7DC (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 */

__int64 __fastcall GetApplicationName(DWORD dwProcessId, char *a2)
{
  HANDLE v3; // rbp
  NTSTATUS InformationProcess; // ebx
  HLOCAL v5; // rax
  const unsigned __int16 **v6; // rdi
  unsigned __int64 v7; // rdx
  wchar_t *v8; // rax
  char *v9; // r8
  ULONG ProcessInformationLength[4]; // [rsp+30h] [rbp-248h] BYREF
  wchar_t Str[264]; // [rsp+40h] [rbp-238h] BYREF

  ProcessInformationLength[0] = 0;
  if ( !a2 )
    return 3221225473LL;
  *(_WORD *)a2 = 0;
  v3 = OpenProcess_0(0x400u, 0, dwProcessId);
  if ( !v3 )
    return 3221225473LL;
  if ( NtQueryInformationProcess(v3, ProcessImageFileName, 0LL, 0, ProcessInformationLength) == -1073741820
    && (v5 = LocalAlloc_0(0, ProcessInformationLength[0]), (v6 = (const unsigned __int16 **)v5) != 0LL) )
  {
    InformationProcess = NtQueryInformationProcess(v3, ProcessImageFileName, v5, ProcessInformationLength[0], 0LL);
    if ( InformationProcess >= 0 )
    {
      if ( (int)StringCchCopyNW(Str, v7, v6[1], *(unsigned __int16 *)v6) >= 0 )
      {
        v8 = wcsrchr(Str, 0x5Cu);
        v9 = (char *)Str;
        if ( v8 )
          v9 = (char *)(v8 + 1);
        StringCchCopyW(a2, 260LL, v9);
        InformationProcess = 0;
      }
      else
      {
        InformationProcess = -1073741823;
      }
    }
    LocalFree_0(v6);
  }
  else
  {
    InformationProcess = -1073741823;
  }
  CloseHandle_0(v3);
  if ( InformationProcess )
    *(_WORD *)a2 = 0;
  return (unsigned int)InformationProcess;
}
