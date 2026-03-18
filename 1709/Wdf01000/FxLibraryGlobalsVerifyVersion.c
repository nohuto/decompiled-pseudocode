/*
 * XREFs of FxLibraryGlobalsVerifyVersion @ 0x1C0036ED8
 * Callers:
 *     FxLibraryGlobalsCommission @ 0x1C0036884 (FxLibraryGlobalsCommission.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003B880 (__security_check_cookie.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 */

__int64 (__fastcall *FxLibraryGlobalsVerifyVersion())(_OSVERSIONINFOEXW *, __int64, __int64)
{
  __int64 (__fastcall *result)(_OSVERSIONINFOEXW *, __int64, __int64); // rax
  __int64 (__fastcall *v1)(_OSVERSIONINFOEXW *, __int64, __int64); // rdi
  __int64 (__fastcall *SystemRoutineAddress)(__int64, __int64, __int64); // rbx
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-158h] BYREF
  _UNICODE_STRING SystemRoutineName; // [rsp+30h] [rbp-148h] BYREF
  _OSVERSIONINFOEXW info; // [rsp+40h] [rbp-138h] BYREF

  RtlInitUnicodeString(&DestinationString, L"RtlVerifyVersionInfo");
  result = (__int64 (__fastcall *)(_OSVERSIONINFOEXW *, __int64, __int64))MmGetSystemRoutineAddress(&DestinationString);
  v1 = result;
  if ( result )
  {
    RtlInitUnicodeString(&SystemRoutineName, L"VerSetConditionMask");
    SystemRoutineAddress = (__int64 (__fastcall *)(__int64, __int64, __int64))MmGetSystemRoutineAddress(&SystemRoutineName);
    memset(&info, 0, sizeof(info));
    info.dwOSVersionInfoSize = 284;
    LOBYTE(v3) = 3;
    info.dwMinorVersion = 2;
    info.dwMajorVersion = 6;
    v4 = SystemRoutineAddress(0LL, 2LL, v3);
    LOBYTE(v5) = 3;
    v6 = SystemRoutineAddress(v4, 1LL, v5);
    result = (__int64 (__fastcall *)(_OSVERSIONINFOEXW *, __int64, __int64))v1(&info, 3LL, v6);
    if ( (int)result >= 0 )
      FxLibraryGlobals.PassiveLevelInterruptSupport = 1;
  }
  return result;
}
