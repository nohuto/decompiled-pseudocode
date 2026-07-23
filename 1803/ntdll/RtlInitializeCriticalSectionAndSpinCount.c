/*
 * XREFs of RtlInitializeCriticalSectionAndSpinCount @ 0x180067530
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_180024408 @ 0x180024408 (sub_180024408.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 */

NTSTATUS __cdecl RtlInitializeCriticalSectionAndSpinCount(PRTL_CRITICAL_SECTION CriticalSection, ULONG SpinCount)
{
  ULONG v2; // edx
  ULONG_PTR v4; // rax
  bool v5; // zf
  __int64 v6; // rdi
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 v8; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v11; // [rsp+26h] [rbp-42h]
  ULONG_PTR v12; // [rsp+40h] [rbp-28h]
  PRTL_CRITICAL_SECTION v13; // [rsp+48h] [rbp-20h]

  CriticalSection->RecursionCount = 0;
  CriticalSection->OwningThread = 0LL;
  v2 = SpinCount & 0xFFFFFF;
  CriticalSection->LockSemaphore = 0LL;
  CriticalSection->LockCount = -1;
  if ( NtCurrentPeb()->NumberOfProcessors <= 1 )
  {
    CriticalSection->SpinCount = 0LL;
    v4 = 0LL;
  }
  else
  {
    v4 = v2;
    if ( !v2 )
      v4 = 33556432LL;
    CriticalSection->SpinCount = v4;
  }
  v5 = byte_18015AC08 == 0;
  CriticalSection->SpinCount = v4;
  CriticalSection->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)-1LL;
  if ( !v5 )
  {
    sub_180024408((__int64)CriticalSection);
    if ( CriticalSection->DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)-1LL )
      CriticalSection->SpinCount |= 0x1000000uLL;
  }
  v6 = 2147353474LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && SharedData->ServiceSessionId )
    v8 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[1];
  else
    v8 = 2147353474LL;
  if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v13 = CriticalSection;
    v11 = 5923;
    v12 = CriticalSection->SpinCount;
    if ( RtlGetCurrentServiceSessionId() )
      v6 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[1];
    ZwTraceEvent((HANDLE)*(unsigned __int8 *)v6, 0x10402u, 0x10u, Fields);
  }
  return 0;
}
