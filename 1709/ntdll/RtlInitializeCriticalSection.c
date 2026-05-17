/*
 * XREFs of RtlInitializeCriticalSection @ 0x18006C990
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpAddDebugInfoToCriticalSection @ 0x180009BDC (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 */

__int64 __fastcall RtlInitializeCriticalSection(__int64 a1)
{
  bool v2; // zf
  __int64 v3; // rdi
  _DWORD *SharedData; // rcx
  __int64 v5; // rcx
  _BYTE v7[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v8; // [rsp+26h] [rbp-42h]
  __int64 v9; // [rsp+40h] [rbp-28h]
  __int64 v10; // [rsp+48h] [rbp-20h]

  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 8) = -1;
  if ( NtCurrentPeb()->NumberOfProcessors <= 1 )
    *(_QWORD *)(a1 + 32) = 0LL;
  else
    *(_QWORD *)(a1 + 32) = 33556432LL;
  v2 = RtlpForceCSDebugInfoCreation == 0;
  *(_QWORD *)a1 = -1LL;
  if ( !v2 )
  {
    RtlpAddDebugInfoToCriticalSection(a1);
    if ( *(_QWORD *)a1 == -1LL )
      *(_QWORD *)(a1 + 32) |= 0x1000000uLL;
  }
  v3 = 2147353474LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v5 = (__int64)NtCurrentPeb()->SharedData + 552;
  else
    v5 = 2147353474LL;
  if ( *(_BYTE *)v5 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v10 = a1;
    v8 = 5923;
    v9 = *(_QWORD *)(a1 + 32);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v3 = (__int64)NtCurrentPeb()->SharedData + 552;
    NtTraceEvent(*(unsigned __int8 *)v3, 66562LL, 16LL, v7);
  }
  return 0LL;
}
