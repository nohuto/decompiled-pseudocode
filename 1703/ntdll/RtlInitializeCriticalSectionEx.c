/*
 * XREFs of RtlInitializeCriticalSectionEx @ 0x18000F440
 * Callers:
 *     sub_18000BBF4 @ 0x18000BBF4 (sub_18000BBF4.c)
 *     RtlCreateHeap @ 0x18000CA40 (RtlCreateHeap.c)
 *     RtlInitializeResource @ 0x18000F220 (RtlInitializeResource.c)
 *     sub_18002FBD4 @ 0x18002FBD4 (sub_18002FBD4.c)
 *     sub_18005395C @ 0x18005395C (sub_18005395C.c)
 *     sub_180061420 @ 0x180061420 (sub_180061420.c)
 *     sub_18006E3A0 @ 0x18006E3A0 (sub_18006E3A0.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     sub_1800DA690 @ 0x1800DA690 (sub_1800DA690.c)
 *     RtlTraceDatabaseCreate @ 0x1800F9930 (RtlTraceDatabaseCreate.c)
 *     sub_18010BC9C @ 0x18010BC9C (sub_18010BC9C.c)
 * Callees:
 *     sub_18000F30C @ 0x18000F30C (sub_18000F30C.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 */

NTSTATUS __cdecl RtlInitializeCriticalSectionEx(PRTL_CRITICAL_SECTION CriticalSection, ULONG SpinCount, ULONG Flags)
{
  char v5; // cl
  __int64 v6; // rdi
  __int64 v7; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v9; // [rsp+26h] [rbp-42h]
  ULONG_PTR v10; // [rsp+40h] [rbp-28h]
  PRTL_CRITICAL_SECTION v11; // [rsp+48h] [rbp-20h]

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
    }
    else if ( (Flags & 0x2000000) != 0 || !SpinCount )
    {
      CriticalSection->SpinCount = 33556432LL;
    }
    else
    {
      CriticalSection->SpinCount = SpinCount & 0xFFFFFF;
    }
    CriticalSection->SpinCount |= Flags & 0x9000000;
    if ( (Flags & 0x10000000) == 0 && !byte_180159BC8 )
      v5 = 0;
    CriticalSection->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)-1LL;
    if ( v5 )
    {
      sub_18000F30C((__int64)CriticalSection);
      if ( CriticalSection->DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)-1LL )
        CriticalSection->SpinCount |= 0x1000000uLL;
    }
    v6 = 2147353474LL;
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[1];
    else
      v7 = 2147353474LL;
    if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
    {
      v11 = CriticalSection;
      v9 = 5923;
      v10 = CriticalSection->SpinCount;
      if ( RtlGetCurrentServiceSessionId() )
        v6 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[1];
      ZwTraceEvent((HANDLE)*(unsigned __int8 *)v6, 0x10402u, 0x10u, Fields);
    }
  }
  return 0;
}
