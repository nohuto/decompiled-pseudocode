/*
 * XREFs of RtlLockHeap @ 0x18001F870
 * Callers:
 *     sub_180005870 @ 0x180005870 (sub_180005870.c)
 *     sub_180005AE0 @ 0x180005AE0 (sub_180005AE0.c)
 *     RtlExitUserProcess @ 0x18006F940 (RtlExitUserProcess.c)
 *     RtlValidateHeap @ 0x180077E50 (RtlValidateHeap.c)
 *     sub_1800FECE0 @ 0x1800FECE0 (sub_1800FECE0.c)
 * Callees:
 *     sub_18001F91C @ 0x18001F91C (sub_18001F91C.c)
 *     sub_18001F9B0 @ 0x18001F9B0 (sub_18001F9B0.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

char __fastcall RtlLockHeap(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdi
  _DWORD *HotpatchInformation; // rcx
  __int64 v7; // rcx
  _BYTE v9[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v10; // [rsp+26h] [rbp-32h]
  __int64 v11; // [rsp+40h] [rbp-18h]

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    sub_18001F91C();
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_180155450)();
    if ( !(unsigned __int8)sub_18001F9B0(a1, "RtlLockHeap") )
      return 0;
    if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      ++*(_WORD *)(a1 + 384);
    }
  }
  v5 = 2147353472LL;
  HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
  if ( HotpatchInformation && *HotpatchInformation )
    v7 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
  else
    v7 = 2147353472LL;
  if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    v11 = a1;
    v10 = 4139;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v7, v2, v3, v4) )
      v5 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
    ZwTraceEvent(*(unsigned __int8 *)v5, 1026LL, 8LL, v9);
  }
  return 1;
}
