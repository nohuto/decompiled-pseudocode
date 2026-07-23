/*
 * XREFs of sub_180048388 @ 0x180048388
 * Callers:
 *     RtlExitUserProcess @ 0x180047D70 (RtlExitUserProcess.c)
 * Callees:
 *     RtlUnlockHeap @ 0x18001FB70 (RtlUnlockHeap.c)
 */

char sub_180048388()
{
  struct _PEB *v0; // rax
  _QWORD *ProcessHeap; // r8
  __int64 v2; // rdx
  HANDLE UniqueThread; // rcx

  v0 = NtCurrentPeb();
  ProcessHeap = v0->ProcessHeap;
  if ( *((_DWORD *)ProcessHeap + 4) == -571548178 )
  {
    LOBYTE(v0) = sub_180048F40(v0->ProcessHeap, 1LL);
  }
  else if ( (*((_DWORD *)ProcessHeap + 29) & 0x1000000) == 0 )
  {
    v2 = ProcessHeap[44];
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    *(_QWORD *)(v2 + 24) = 0LL;
    *(_QWORD *)(v2 + 16) = UniqueThread;
    *(_DWORD *)(v2 + 8) = -2;
    *(_DWORD *)(v2 + 12) = 1;
    LOBYTE(v0) = RtlUnlockHeap(ProcessHeap);
  }
  return (char)v0;
}
