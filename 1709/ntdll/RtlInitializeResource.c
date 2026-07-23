/*
 * XREFs of RtlInitializeResource @ 0x180009AF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x180002AF0 (RtlRaiseStatus.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180009BDC (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlLogStackBackTraceEx @ 0x180009C98 (RtlLogStackBackTraceEx.c)
 *     RtlpAllocateDebugInfo @ 0x180009CCC (RtlpAllocateDebugInfo.c)
 *     RtlInitializeCriticalSectionEx @ 0x180009D10 (RtlInitializeCriticalSectionEx.c)
 *     RtlpFreeDebugInfo @ 0x180061594 (RtlpFreeDebugInfo.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtCreateSemaphore @ 0x1800A17B0 (NtCreateSemaphore.c)
 */

void __cdecl RtlInitializeResource(PRTL_RESOURCE Resource)
{
  __int64 DebugInfo; // rax
  __int64 v3; // rdx
  _RTL_CRITICAL_SECTION_DEBUG *v4; // rdi
  int v5; // eax
  int v6; // esi
  int v7; // esi
  HANDLE v8; // rax
  HANDLE SemaphoreHandle; // [rsp+58h] [rbp+10h] BYREF
  HANDLE v10; // [rsp+60h] [rbp+18h] BYREF

  DebugInfo = RtlpAllocateDebugInfo();
  v4 = (_RTL_CRITICAL_SECTION_DEBUG *)DebugInfo;
  if ( !DebugInfo )
    RtlRaiseStatus(-1073741801);
  *(_DWORD *)(DebugInfo + 36) = 0;
  v5 = RtlLogStackBackTraceEx(1LL, v3);
  v4->CreatorBackTraceIndex = v5;
  v4->CreatorBackTraceIndexHigh = HIWORD(v5);
  v6 = NtCreateSemaphore(&SemaphoreHandle, 0x100003u, 0LL, 0, 0x7FFFFFFF);
  if ( v6 < 0 )
  {
    RtlpFreeDebugInfo(v4);
    RtlRaiseStatus(v6);
  }
  v7 = NtCreateSemaphore(&v10, 0x100003u, 0LL, 0, 0x7FFFFFFF);
  if ( v7 < 0 )
  {
    NtClose(SemaphoreHandle);
    RtlpFreeDebugInfo(v4);
    RtlRaiseStatus(v7);
  }
  v8 = SemaphoreHandle;
  Resource->NumberOfWaitingShared = 0;
  Resource->NumberOfWaitingExclusive = 0;
  Resource->NumberOfActive = 0;
  Resource->ExclusiveOwnerThread = 0LL;
  Resource->Flags = 0;
  Resource->SharedSemaphore = v8;
  Resource->ExclusiveSemaphore = v10;
  Resource->DebugInfo = v4;
  RtlInitializeCriticalSectionEx(&Resource->CriticalSection, 0, 0x8000000u);
  RtlpAddDebugInfoToCriticalSection(Resource);
  if ( Resource->CriticalSection.DebugInfo != (_RTL_CRITICAL_SECTION_DEBUG *)-1LL )
    Resource->CriticalSection.DebugInfo->Type = 1;
}
