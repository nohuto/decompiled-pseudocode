/*
 * XREFs of RtlInitializeCriticalSectionAndSpinCount @ 0x18006B8B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddDebugInfoToCriticalSection @ 0x180009BDC (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 */

__int64 __fastcall RtlInitializeCriticalSectionAndSpinCount(__int64 a1, int a2)
{
  unsigned int v2; // edx
  bool v4; // zf
  __int64 v5; // rdi
  _DWORD *SharedData; // rcx
  __int64 v7; // rcx
  _BYTE v9[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v10; // [rsp+26h] [rbp-42h]
  __int64 v11; // [rsp+40h] [rbp-28h]
  __int64 v12; // [rsp+48h] [rbp-20h]

  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  v2 = a2 & 0xFFFFFF;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 8) = -1;
  if ( NtCurrentPeb()->NumberOfProcessors <= 1 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  else if ( v2 )
  {
    *(_QWORD *)(a1 + 32) = v2;
  }
  else
  {
    *(_QWORD *)(a1 + 32) = 33556432LL;
  }
  v4 = RtlpForceCSDebugInfoCreation == 0;
  *(_QWORD *)a1 = -1LL;
  if ( !v4 )
  {
    RtlpAddDebugInfoToCriticalSection(a1);
    if ( *(_QWORD *)a1 == -1LL )
      *(_QWORD *)(a1 + 32) |= 0x1000000uLL;
  }
  v5 = 2147353474LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v7 = (__int64)NtCurrentPeb()->SharedData + 552;
  else
    v7 = 2147353474LL;
  if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v12 = a1;
    v10 = 5923;
    v11 = *(_QWORD *)(a1 + 32);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v5 = (__int64)NtCurrentPeb()->SharedData + 552;
    NtTraceEvent(*(unsigned __int8 *)v5, 66562LL, 16LL, v9);
  }
  return 0LL;
}
