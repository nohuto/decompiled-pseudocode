/*
 * XREFs of RtlUnlockHeap @ 0x18001FB70
 * Callers:
 *     RtlExitUserProcess @ 0x180047D70 (RtlExitUserProcess.c)
 *     sub_180048388 @ 0x180048388 (sub_180048388.c)
 *     sub_18005FD84 @ 0x18005FD84 (sub_18005FD84.c)
 *     sub_180060AF0 @ 0x180060AF0 (sub_180060AF0.c)
 *     RtlValidateHeap @ 0x1800723C0 (RtlValidateHeap.c)
 *     sub_1800FD510 @ 0x1800FD510 (sub_1800FD510.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     sub_18001FC58 @ 0x18001FC58 (sub_18001FC58.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_1800FE9EC @ 0x1800FE9EC (sub_1800FE9EC.c)
 */

char __fastcall RtlUnlockHeap(__int64 a1)
{
  __int64 v2; // rcx
  _DWORD *HotpatchInformation; // rcx
  __int64 v4; // rcx

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( (*(_BYTE *)(a1 + 20) & 1) == 0 && (*(_WORD *)(a1 + 62))-- == 1 )
    {
      *(_DWORD *)(a1 + 64) = 0;
      RtlReleaseSRWLockExclusive(a1 + 72);
      if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
      {
        RtlReleaseSRWLockExclusive(a1 + 136);
        if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
        {
          RtlReleaseSRWLockExclusive(a1 + 256);
          if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
            RtlReleaseSRWLockExclusive(a1 + 392);
        }
      }
      RtlReleaseSRWLockExclusive(a1 + 608);
    }
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_180156448)();
    if ( !(unsigned __int8)sub_18001FC58(a1, "RtlUnlockHeap") )
      return 0;
    if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
    {
      v2 = *(_QWORD *)(a1 + 352);
      --*(_WORD *)(a1 + 384);
      RtlLeaveCriticalSection(v2);
    }
  }
  HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
  if ( HotpatchInformation && *HotpatchInformation )
    v4 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
  else
    v4 = 2147353472LL;
  if ( *(_BYTE *)v4 )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      sub_1800FE9EC(a1);
  }
  return 1;
}
