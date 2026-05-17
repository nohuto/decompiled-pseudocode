/*
 * XREFs of RtlInitializeCriticalSection @ 0x180067700
 * Callers:
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_180024408 @ 0x180024408 (sub_180024408.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 */

__int64 __fastcall RtlInitializeCriticalSection(__int64 a1)
{
  __int64 v2; // rax
  bool v3; // zf
  __int64 v4; // rdi
  _DWORD *HotpatchInformation; // rcx
  __int64 v6; // rcx
  _BYTE v8[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v9; // [rsp+26h] [rbp-42h]
  __int64 v10; // [rsp+40h] [rbp-28h]
  __int64 v11; // [rsp+48h] [rbp-20h]

  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 8) = -1;
  if ( NtCurrentPeb()->NumberOfProcessors <= 1 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    v2 = 0LL;
  }
  else
  {
    v2 = 33556432LL;
    *(_QWORD *)(a1 + 32) = 33556432LL;
  }
  v3 = byte_18015AC08 == 0;
  *(_QWORD *)(a1 + 32) = v2;
  *(_QWORD *)a1 = -1LL;
  if ( !v3 )
  {
    sub_180024408(a1);
    if ( *(_QWORD *)a1 == -1LL )
      *(_QWORD *)(a1 + 32) |= 0x1000000uLL;
  }
  v4 = 2147353474LL;
  HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
  if ( HotpatchInformation && *HotpatchInformation )
    v6 = (__int64)NtCurrentPeb()->HotpatchInformation + 552;
  else
    v6 = 2147353474LL;
  if ( *(_BYTE *)v6 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v11 = a1;
    v9 = 5923;
    v10 = *(_QWORD *)(a1 + 32);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v4 = (__int64)NtCurrentPeb()->HotpatchInformation + 552;
    ZwTraceEvent(*(unsigned __int8 *)v4, 66562LL, 16LL, v8);
  }
  return 0LL;
}
