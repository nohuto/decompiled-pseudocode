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

__int64 __fastcall RtlInitializeCriticalSectionEx(__int64 a1, int a2, int a3)
{
  char v5; // r9
  __int64 v6; // rcx
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
    v5 = 1;
    if ( NtCurrentPeb()->NumberOfProcessors <= 1 )
    {
      *(_QWORD *)(a1 + 32) = 0LL;
      v6 = 0LL;
    }
    else
    {
      if ( (a3 & 0x2000000) == 0 && a2 )
        v6 = a2 & 0xFFFFFF;
      else
        v6 = 33556432LL;
      *(_QWORD *)(a1 + 32) = v6;
    }
    *(_QWORD *)(a1 + 32) = v6 | a3 & 0x9000000;
    if ( (a3 & 0x10000000) == 0 && !byte_18015AC08 )
      v5 = 0;
    *(_QWORD *)a1 = -1LL;
    if ( v5 )
    {
      sub_180024408(a1);
      if ( *(_QWORD *)a1 == -1LL )
        *(_QWORD *)(a1 + 32) |= 0x1000000uLL;
    }
    v7 = 2147353474LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->HotpatchInformation + 552;
    else
      v8 = 2147353474LL;
    if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
    {
      v12 = a1;
      v10 = 5923;
      v11 = *(_QWORD *)(a1 + 32);
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v7 = (__int64)NtCurrentPeb()->HotpatchInformation + 552;
      ZwTraceEvent(*(unsigned __int8 *)v7, 66562LL, 16LL, v9);
    }
  }
  return 0LL;
}
