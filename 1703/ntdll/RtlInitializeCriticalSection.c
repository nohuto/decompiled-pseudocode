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

__int64 __fastcall RtlInitializeCriticalSection(__int64 a1)
{
  bool v2; // zf
  __int64 v3; // rdi
  _DWORD *HotpatchInformation; // rcx
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
  v2 = byte_180159BC8 == 0;
  *(_QWORD *)a1 = -1LL;
  if ( !v2 )
  {
    sub_18000F30C(a1);
    if ( *(_QWORD *)a1 == -1LL )
      *(_QWORD *)(a1 + 32) |= 0x1000000uLL;
  }
  v3 = 2147353474LL;
  HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
  if ( HotpatchInformation && *HotpatchInformation )
    v5 = (__int64)NtCurrentPeb()->HotpatchInformation + 552;
  else
    v5 = 2147353474LL;
  if ( *(_BYTE *)v5 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v10 = a1;
    v8 = 5923;
    v9 = *(_QWORD *)(a1 + 32);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v3 = (__int64)NtCurrentPeb()->HotpatchInformation + 552;
    ZwTraceEvent(*(unsigned __int8 *)v3, 66562LL, 16LL, v7);
  }
  return 0LL;
}
