/*
 * XREFs of RtlUnlockModuleSection @ 0x180083D60
 * Callers:
 *     sub_1800839B4 @ 0x1800839B4 (sub_1800839B4.c)
 *     sub_180083B3C @ 0x180083B3C (sub_180083B3C.c)
 *     sub_180083B74 @ 0x180083B74 (sub_180083B74.c)
 *     sub_180083C00 @ 0x180083C00 (sub_180083C00.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180083E00 @ 0x180083E00 (sub_180083E00.c)
 *     ZwUnlockVirtualMemory @ 0x1800A8A90 (ZwUnlockVirtualMemory.c)
 */

NTSTATUS __cdecl RtlUnlockModuleSection(PVOID Address)
{
  __int64 v2; // rax
  NTSTATUS v3; // edi
  __int64 v4; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rax

  RtlAcquireSRWLockExclusive(&stru_18015C288);
  v2 = sub_180083E00(Address);
  v3 = 0;
  v4 = v2;
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 32))-- == 1 )
    {
      v6 = *(_QWORD *)v2;
      v7 = *(_QWORD **)(v2 + 8);
      if ( *(_QWORD *)(v6 + 8) != v4 || *v7 != v4 )
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
  RtlReleaseSRWLockExclusive(&stru_18015C288);
  return v3;
}
