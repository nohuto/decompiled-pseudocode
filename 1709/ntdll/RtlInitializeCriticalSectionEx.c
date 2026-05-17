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

__int64 __fastcall RtlInitializeCriticalSectionEx(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rcx
  _BYTE v9[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v10; // [rsp+26h] [rbp-42h]
  __int64 v11; // [rsp+40h] [rbp-28h]
  __int64 v12; // [rsp+48h] [rbp-20h]

  if ( (a3 & 0xE0000000) != 0 || (a3 & 0x11000000) == 0x11000000 )
    return 3221225713LL;
  if ( (a2 & 0xFF000000) != 0 )
    return 3221225712LL;
  if ( (a3 & 0x4000000) == 0 )
  {
    *(_DWORD *)(a1 + 12) = 0;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_DWORD *)(a1 + 8) = -1;
    v5 = 1LL;
    if ( NtCurrentPeb()->NumberOfProcessors <= 1 )
    {
      *(_QWORD *)(a1 + 32) = 0LL;
    }
    else if ( (a3 & 0x2000000) != 0 || !(_DWORD)a2 )
    {
      *(_QWORD *)(a1 + 32) = 33556432LL;
    }
    else
    {
      *(_QWORD *)(a1 + 32) = a2 & 0xFFFFFF;
    }
    *(_QWORD *)(a1 + 32) |= a3 & 0x9000000;
    if ( (a3 & 0x10000000) == 0 && !RtlpForceCSDebugInfoCreation )
      LOBYTE(v5) = 0;
    *(_QWORD *)a1 = -1LL;
    if ( (_BYTE)v5 )
    {
      RtlpAddDebugInfoToCriticalSection(a1);
      if ( *(_QWORD *)a1 == -1LL )
        *(_QWORD *)(a1 + 32) |= 0x1000000uLL;
    }
    v7 = 2147353474LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v5, a2) )
      v8 = (__int64)NtCurrentPeb()->SharedData + 552;
    else
      v8 = 2147353474LL;
    if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
    {
      v12 = a1;
      v10 = 5923;
      v11 = *(_QWORD *)(a1 + 32);
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v8, v6) )
        v7 = (__int64)NtCurrentPeb()->SharedData + 552;
      NtTraceEvent(*(unsigned __int8 *)v7, 66562LL, 16LL, v9);
    }
  }
  return 0LL;
}
