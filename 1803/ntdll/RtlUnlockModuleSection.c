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

NTSTATUS __cdecl RtlUnlockModuleSection(PVOID Address)
{
  __int64 v2; // rax
  NTSTATUS v3; // edi
  __int64 v4; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rcx

  RtlAcquireSRWLockExclusive(&stru_18015D2C8);
  v2 = sub_180048F08(Address);
  v3 = 0;
  v4 = v2;
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 32))-- == 1 )
    {
      v6 = *(_QWORD *)v2;
      if ( *(_QWORD *)(v6 + 8) != v4 || (v7 = *(_QWORD **)(v4 + 8), *v7 != v4) )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      v3 = ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v4 + 16), (PSIZE_T)(v4 + 24), 1u);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v4);
    }
  }
  else
  {
    v3 = -1073741782;
  }
  RtlReleaseSRWLockExclusive(&stru_18015D2C8);
  return v3;
}
