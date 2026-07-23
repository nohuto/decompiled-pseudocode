/*
 * XREFs of RtlInitializeCriticalSection @ 0x1800675C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F30C @ 0x18000F30C (sub_18000F30C.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 */

NTSTATUS __cdecl RtlInitializeCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  bool v2; // zf
  __int64 v3; // rdi
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 v5; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v8; // [rsp+26h] [rbp-42h]
  ULONG_PTR SpinCount; // [rsp+40h] [rbp-28h]
  PRTL_CRITICAL_SECTION v10; // [rsp+48h] [rbp-20h]

  CriticalSection->RecursionCount = 0;
  CriticalSection->OwningThread = 0LL;
  CriticalSection->LockSemaphore = 0LL;
  CriticalSection->LockCount = -1;
  if ( NtCurrentPeb()->NumberOfProcessors <= 1 )
    CriticalSection->SpinCount = 0LL;
  else
    CriticalSection->SpinCount = 33556432LL;
  v2 = byte_180159BC8 == 0;
  CriticalSection->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)-1LL;
  if ( !v2 )
  {
    sub_18000F30C((__int64)CriticalSection);
    if ( CriticalSection->DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)-1LL )
      CriticalSection->SpinCount |= 0x1000000uLL;
  }
  v3 = 2147353474LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && SharedData->ServiceSessionId )
    v5 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[1];
  else
    v5 = 2147353474LL;
  if ( *(_BYTE *)v5 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v10 = CriticalSection;
    v8 = 5923;
    SpinCount = CriticalSection->SpinCount;
    if ( RtlGetCurrentServiceSessionId() )
      v3 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[1];
    ZwTraceEvent((HANDLE)*(unsigned __int8 *)v3, 0x10402u, 0x10u, Fields);
  }
  return 0;
}
