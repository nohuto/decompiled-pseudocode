/*
 * XREFs of RtlInitializeCriticalSectionEx @ 0x180009D10
 * Callers:
 *     RtlpInitMuiCriticalSection @ 0x1800061E0 (RtlpInitMuiCriticalSection.c)
 *     LdrpInitParallelLoadingSupport @ 0x180006D5C (LdrpInitParallelLoadingSupport.c)
 *     RtlCreateHeap @ 0x180007E70 (RtlCreateHeap.c)
 *     RtlInitializeResource @ 0x180009AF0 (RtlInitializeResource.c)
 *     LdrpInitMuiCrits @ 0x180049210 (LdrpInitMuiCrits.c)
 *     EtwpInitLoggerContext @ 0x180065218 (EtwpInitLoggerContext.c)
 *     LdrpCreateSoftwareEnclave @ 0x1800D0568 (LdrpCreateSoftwareEnclave.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 *     AVrfInitializeVerifier @ 0x1800D9BE0 (AVrfInitializeVerifier.c)
 *     RtlInitializeHeapManager @ 0x1800EEF80 (RtlInitializeHeapManager.c)
 *     RtlTraceDatabaseCreate @ 0x1800FAE40 (RtlTraceDatabaseCreate.c)
 *     BasepInitializeFindFileHandle @ 0x18010EBD8 (BasepInitializeFindFileHandle.c)
 * Callees:
 *     RtlpAddDebugInfoToCriticalSection @ 0x180009BDC (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 */

NTSTATUS __cdecl RtlInitializeCriticalSectionEx(PRTL_CRITICAL_SECTION CriticalSection, ULONG SpinCount, ULONG Flags)
{
  char v5; // cl
  __int64 v6; // rdi
  __int64 v7; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v9; // [rsp+26h] [rbp-42h]
  unsigned __int64 v10; // [rsp+40h] [rbp-28h]
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
    if ( (Flags & 0x10000000) == 0 && !RtlpForceCSDebugInfoCreation )
      v5 = 0;
    CriticalSection->DebugInfo = (_RTL_CRITICAL_SECTION_DEBUG *)-1LL;
    if ( v5 )
    {
      RtlpAddDebugInfoToCriticalSection((__int64)CriticalSection);
      if ( CriticalSection->DebugInfo == (_RTL_CRITICAL_SECTION_DEBUG *)-1LL )
        CriticalSection->SpinCount |= 0x1000000uLL;
    }
    v6 = 2147353474LL;
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)NtCurrentPeb()->SharedData + 552;
    else
      v7 = 2147353474LL;
    if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
    {
      v11 = CriticalSection;
      v9 = 5923;
      v10 = CriticalSection->SpinCount;
      if ( RtlGetCurrentServiceSessionId() )
        v6 = (__int64)NtCurrentPeb()->SharedData + 552;
      NtTraceEvent((HANDLE)*(unsigned __int8 *)v6, 0x10402u, 0x10u, Fields);
    }
  }
  return 0;
}
