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

__int64 __fastcall RtlInitializeCriticalSectionAndSpinCount(__int64 a1, int a2)
{
  unsigned int v2; // edx
  __int64 v4; // rax
  bool v5; // zf
  __int64 v6; // rdi
  _DWORD *HotpatchInformation; // rcx
  __int64 v8; // rcx
  _BYTE v10[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v11; // [rsp+26h] [rbp-42h]
  __int64 v12; // [rsp+40h] [rbp-28h]
  __int64 v13; // [rsp+48h] [rbp-20h]

  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  v2 = a2 & 0xFFFFFF;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 8) = -1;
  if ( NtCurrentPeb()->NumberOfProcessors <= 1 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    v4 = 0LL;
  }
  else
  {
    v4 = v2;
    if ( !v2 )
      v4 = 33556432LL;
    *(_QWORD *)(a1 + 32) = v4;
  }
  v5 = byte_18015AC08 == 0;
  *(_QWORD *)(a1 + 32) = v4;
  *(_QWORD *)a1 = -1LL;
  if ( !v5 )
  {
    sub_180024408(a1);
    if ( *(_QWORD *)a1 == -1LL )
      *(_QWORD *)(a1 + 32) |= 0x1000000uLL;
  }
  v6 = 2147353474LL;
  HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
  if ( HotpatchInformation && *HotpatchInformation )
    v8 = (__int64)NtCurrentPeb()->HotpatchInformation + 552;
  else
    v8 = 2147353474LL;
  if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v13 = a1;
    v11 = 5923;
    v12 = *(_QWORD *)(a1 + 32);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v6 = (__int64)NtCurrentPeb()->HotpatchInformation + 552;
    ZwTraceEvent(*(unsigned __int8 *)v6, 66562LL, 16LL, v10);
  }
  return 0LL;
}
