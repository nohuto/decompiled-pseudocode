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

__int64 __fastcall RtlInitializeCriticalSectionEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rcx
  _BYTE v12[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v13; // [rsp+26h] [rbp-42h]
  __int64 v14; // [rsp+40h] [rbp-28h]
  __int64 v15; // [rsp+48h] [rbp-20h]

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
    v6 = 1LL;
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
    if ( (a3 & 0x10000000) == 0 && !byte_180159BC8 )
      LOBYTE(v6) = 0;
    *(_QWORD *)a1 = -1LL;
    if ( (_BYTE)v6 )
    {
      sub_18000F30C(a1);
      if ( *(_QWORD *)a1 == -1LL )
        *(_QWORD *)(a1 + 32) |= 0x1000000uLL;
    }
    v10 = 2147353474LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v6, a2, a3, a4) )
      v11 = (__int64)NtCurrentPeb()->HotpatchInformation + 552;
    else
      v11 = 2147353474LL;
    if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
    {
      v15 = a1;
      v13 = 5923;
      v14 = *(_QWORD *)(a1 + 32);
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v11, v7, v8, v9) )
        v10 = (__int64)NtCurrentPeb()->HotpatchInformation + 552;
      ZwTraceEvent(*(unsigned __int8 *)v10, 66562LL, 16LL, v12);
    }
  }
  return 0LL;
}
