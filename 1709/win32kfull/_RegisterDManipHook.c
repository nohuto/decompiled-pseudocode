/*
 * XREFs of _RegisterDManipHook @ 0x1C010B6C4
 * Callers:
 *     NtUserRegisterDManipHook @ 0x1C010B680 (NtUserRegisterDManipHook.c)
 * Callees:
 *     AddHmodDependency @ 0x1C00590AC (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C00590E8 (GetHmodTableIndex.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     RtlStringCchCopyW @ 0x1C009DD08 (RtlStringCchCopyW.c)
 *     RtlStringCbCatW @ 0x1C010B7E4 (RtlStringCbCatW.c)
 *     RtlStringCopyWorkerW @ 0x1C010B850 (RtlStringCopyWorkerW.c)
 *     IsPrivileged @ 0x1C010BDF0 (IsPrivileged.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall RegisterDManipHook(__int64 a1, size_t a2)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  const wchar_t *NtSystemRoot; // rax
  size_t *v8; // r8
  const wchar_t *v9; // r8
  int HmodTableIndex; // eax
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rcx
  size_t v14; // [rsp+20h] [rbp-248h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-238h] BYREF
  wchar_t pszDest[264]; // [rsp+40h] [rbp-228h] BYREF

  if ( gihmodDManipHook >= 0
    || (unsigned __int8)IsRestricted(KeGetCurrentThread())
    || (v3 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v2) + 740), (_DWORD)v3 != luidSystem[0])
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3),
        a2 = (unsigned int)luidSystem[1],
        *(_DWORD *)(CurrentProcessWin32Process + 744) != (_DWORD)a2)
    || !(unsigned int)IsPrivileged(psTcb) )
  {
    v11 = 5LL;
    goto LABEL_10;
  }
  NtSystemRoot = (const wchar_t *)RtlGetNtSystemRoot(v5, a2, v6);
  if ( RtlStringCopyWorkerW(pszDest, 0x82uLL, v8, NtSystemRoot, v14) < 0 || RtlStringCbCatW(pszDest, a2, v9) < 0 )
  {
    v11 = 3LL;
    goto LABEL_10;
  }
  RtlStringCchCopyW(&gszModuleDManipHook, 0x104uLL, pszDest);
  RtlInitUnicodeString(&DestinationString, pszDest);
  HmodTableIndex = GetHmodTableIndex((ULONG64)&DestinationString);
  gihmodDManipHook = HmodTableIndex;
  if ( HmodTableIndex == -1 )
  {
    v11 = 126LL;
LABEL_10:
    UserSetLastError(v11, a2);
    return 0LL;
  }
  AddHmodDependency(HmodTableIndex);
  gppiDManipHook = PsGetCurrentProcessWin32Process(v13);
  result = 1LL;
  *gpsi |= 0x10u;
  return result;
}
