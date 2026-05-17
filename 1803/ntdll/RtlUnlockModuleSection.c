/*
 * XREFs of RtlUnlockModuleSection @ 0x180048D60
 * Callers:
 *     sub_180048CCC @ 0x180048CCC (sub_180048CCC.c)
 *     sub_180049134 @ 0x180049134 (sub_180049134.c)
 *     sub_1800491C0 @ 0x1800491C0 (sub_1800491C0.c)
 *     sub_18004930C @ 0x18004930C (sub_18004930C.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180048F08 @ 0x180048F08 (sub_180048F08.c)
 *     ZwUnlockVirtualMemory @ 0x18009E310 (ZwUnlockVirtualMemory.c)
 */

__int64 __fastcall RtlUnlockModuleSection(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v5; // rax
  unsigned int v6; // edi
  unsigned __int64 v7; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rcx

  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D2C8, a2, a3, a4);
  v5 = sub_180048F08(a1);
  v6 = 0;
  v7 = v5;
  if ( v5 )
  {
    if ( (*(_DWORD *)(v5 + 32))-- == 1 )
    {
      v9 = *(_QWORD *)v5;
      if ( *(_QWORD *)(v9 + 8) != v7 || (v10 = *(_QWORD **)(v7 + 8), *v10 != v7) )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      v6 = ZwUnlockVirtualMemory(-1LL, v7 + 16, v7 + 24, 1LL);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
    }
  }
  else
  {
    v6 = -1073741782;
  }
  RtlReleaseSRWLockExclusive(&qword_18015D2C8);
  return v6;
}
