/*
 * XREFs of RtlUnlockHeap @ 0x180021980
 * Callers:
 *     sub_180005870 @ 0x180005870 (sub_180005870.c)
 *     sub_180005AE0 @ 0x180005AE0 (sub_180005AE0.c)
 *     RtlExitUserProcess @ 0x18006F940 (RtlExitUserProcess.c)
 *     sub_180070388 @ 0x180070388 (sub_180070388.c)
 *     RtlValidateHeap @ 0x180077E50 (RtlValidateHeap.c)
 *     sub_1800FECE0 @ 0x1800FECE0 (sub_1800FECE0.c)
 * Callees:
 *     sub_18001F9B0 @ 0x18001F9B0 (sub_18001F9B0.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

char __fastcall RtlUnlockHeap(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  _DWORD *HotpatchInformation; // rcx
  __int64 v8; // rcx
  __int64 v10; // rcx
  _BYTE v11[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v12; // [rsp+26h] [rbp-32h]
  __int64 v13; // [rsp+40h] [rbp-18h]

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( (*(_BYTE *)(a1 + 20) & 1) == 0 && (*(_WORD *)(a1 + 38))-- == 1 )
    {
      *(_DWORD *)(a1 + 40) = 0;
      RtlReleaseSRWLockExclusive(a1 + 48);
      if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
      {
        RtlReleaseSRWLockExclusive(a1 + 88);
        if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
          RtlReleaseSRWLockExclusive(a1 + 176);
      }
      RtlReleaseSRWLockExclusive(a1 + 336);
    }
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_180155458)();
    if ( !sub_18001F9B0((_DWORD *)a1, "RtlUnlockHeap") )
      return 0;
    if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
    {
      v10 = *(_QWORD *)(a1 + 352);
      --*(_WORD *)(a1 + 384);
      RtlLeaveCriticalSection(v10);
    }
  }
  v6 = 2147353472LL;
  HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
  if ( HotpatchInformation && *HotpatchInformation )
    v8 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
  else
    v8 = 2147353472LL;
  if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    v13 = a1;
    v12 = 4140;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v8, a2, a3, a4) )
      v6 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
    ZwTraceEvent(*(unsigned __int8 *)v6, 1026LL, 8LL, v11);
  }
  return 1;
}
