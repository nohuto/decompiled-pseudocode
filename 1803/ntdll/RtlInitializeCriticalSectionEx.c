/*
 * XREFs of RtlInitializeCriticalSectionEx @ 0x18005C890
 * Callers:
 *     sub_180004D3C @ 0x180004D3C (sub_180004D3C.c)
 *     sub_18001F8B0 @ 0x18001F8B0 (sub_18001F8B0.c)
 *     sub_180031FD4 @ 0x180031FD4 (sub_180031FD4.c)
 *     sub_180059D2C @ 0x180059D2C (sub_180059D2C.c)
 *     RtlCreateHeap @ 0x18005AA80 (RtlCreateHeap.c)
 *     RtlInitializeResource @ 0x18005C7A0 (RtlInitializeResource.c)
 *     sub_1800C9C98 @ 0x1800C9C98 (sub_1800C9C98.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     sub_1800D3DA8 @ 0x1800D3DA8 (sub_1800D3DA8.c)
 *     sub_1800EB1A0 @ 0x1800EB1A0 (sub_1800EB1A0.c)
 *     RtlTraceDatabaseCreate @ 0x1800F7910 (RtlTraceDatabaseCreate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_180024408 @ 0x180024408 (sub_180024408.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 */

NTSTATUS __cdecl RtlInitializeCriticalSectionEx(PRTL_CRITICAL_SECTION CriticalSection, ULONG SpinCount, ULONG Flags)
{
  char v5; // r9
  ULONG_PTR v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v10; // [rsp+26h] [rbp-42h]
  ULONG_PTR v11; // [rsp+40h] [rbp-28h]
  PRTL_CRITICAL_SECTION v12; // [rsp+48h] [rbp-20h]

  if ( (Flags & 0xE0000000) != 0 || (Flags & 0x11000000) == 0x11000000 )
    return -1073741583;
  if ( (SpinCount & 0xFF000000) != 0 )
    return -1073741584;
  if ( (Flags & 0x4000000) == 0 )
  {
    CriticalSection->RecursionCount = 0;
    CriticalSection->OwningThread = 0LL;
    CriticalSection->LockSemaphore = 0LL;
    CriticalSection->LockCount = -1;
    v5 = 1;
    if ( NtCurrentPeb()->NumberOfProcessors <= 1 )
    {
      CriticalSection->SpinCount = 0LL;
      v6 = 0LL;
    }
    else
    {
      if ( (Flags & 0x2000000) == 0 && SpinCount )
        v6 = SpinCount & 0xFFFFFF;
      else
        v6 = 33556432LL;
      CriticalSection->SpinCount = v6;
    }
    CriticalSection->SpinCount = v6 | Flags & 0x9000000;
    if ( (Flags & 0x10000000) == 0 && !byte_18015AC08 )
      v5 = 0;
    CriticalSection->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)-1LL;
    if ( v5 )
    {
      sub_180024408((__int64)CriticalSection);
      if ( CriticalSection->DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)-1LL )
        CriticalSection->SpinCount |= 0x1000000uLL;
    }
    v7 = 2147353474LL;
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[1];
    else
      v8 = 2147353474LL;
    if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
    {
      v12 = CriticalSection;
      v10 = 5923;
      v11 = CriticalSection->SpinCount;
      if ( RtlGetCurrentServiceSessionId() )
        v7 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[1];
      ZwTraceEvent((HANDLE)*(unsigned __int8 *)v7, 0x10402u, 0x10u, Fields);
    }
  }
  return 0;
}
