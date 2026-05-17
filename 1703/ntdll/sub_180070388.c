/*
 * XREFs of sub_180070388 @ 0x180070388
 * Callers:
 *     RtlExitUserProcess @ 0x18006F940 (RtlExitUserProcess.c)
 * Callees:
 *     RtlUnlockHeap @ 0x180021980 (RtlUnlockHeap.c)
 */

char __fastcall sub_180070388(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _PEB *v4; // rax
  __int64 ProcessHeap; // r8
  __int64 v6; // rdx
  HANDLE UniqueThread; // rcx

  v4 = NtCurrentPeb();
  ProcessHeap = (__int64)v4->ProcessHeap;
  if ( *(_DWORD *)(ProcessHeap + 16) == -571548178 )
  {
    LOBYTE(v4) = sub_1800706A4(v4->ProcessHeap, 1LL);
  }
  else if ( (*(_DWORD *)(ProcessHeap + 116) & 0x1000000) == 0 )
  {
    v6 = *(_QWORD *)(ProcessHeap + 352);
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_QWORD *)(v6 + 16) = UniqueThread;
    *(_DWORD *)(v6 + 8) = -2;
    *(_DWORD *)(v6 + 12) = 1;
    LOBYTE(v4) = RtlUnlockHeap(ProcessHeap, v6, ProcessHeap, a4);
  }
  return (char)v4;
}
