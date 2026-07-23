/*
 * XREFs of sub_180024408 @ 0x180024408
 * Callers:
 *     sub_180024910 @ 0x180024910 (sub_180024910.c)
 *     RtlInitializeResource @ 0x18005C7A0 (RtlInitializeResource.c)
 *     RtlInitializeCriticalSectionEx @ 0x18005C890 (RtlInitializeCriticalSectionEx.c)
 *     RtlInitializeCriticalSectionAndSpinCount @ 0x180067530 (RtlInitializeCriticalSectionAndSpinCount.c)
 *     RtlInitializeCriticalSection @ 0x180067700 (RtlInitializeCriticalSection.c)
 * Callees:
 *     sub_1800244C4 @ 0x1800244C4 (sub_1800244C4.c)
 *     sub_1800244F8 @ 0x1800244F8 (sub_1800244F8.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180029EA4 @ 0x180029EA4 (sub_180029EA4.c)
 */

void __fastcall sub_180024408(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  signed __int64 v4; // rbx
  int v5; // eax
  volatile signed __int64 v6; // rbx
  signed __int64 *v7; // rax
  signed __int64 v8; // rbx

  v2 = sub_1800244F8();
  v4 = v2;
  if ( v2 )
  {
    *(_WORD *)v2 = 0;
    if ( (*(_DWORD *)(a1 + 32) & 0x8000000) != 0 )
      *(_WORD *)v2 = 1;
    *(_QWORD *)(v2 + 32) = 0LL;
    *(_DWORD *)(v2 + 40) = 0;
    *(_QWORD *)(v2 + 8) = a1;
    v5 = sub_1800244C4(2LL, v3);
    *(_WORD *)(v4 + 2) = v5;
    *(_WORD *)(v4 + 44) = HIWORD(v5);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1, v4, -1LL) == -1 )
    {
      v6 = *(_QWORD *)a1;
      RtlAcquireSRWLockExclusive(&stru_18015D258);
      v7 = (signed __int64 *)off_180156630[0];
      v8 = v6 + 16;
      if ( *(_UNKNOWN ***)off_180156630[0] != &off_180156628 )
        __fastfail(3u);
      *(_QWORD *)v8 = &off_180156628;
      *(_QWORD *)(v8 + 8) = v7;
      *v7 = v8;
      off_180156630[0] = (_UNKNOWN **)v8;
      RtlReleaseSRWLockExclusive(&stru_18015D258);
    }
    else
    {
      sub_180029EA4((PSLIST_ENTRY)v4);
    }
  }
  else
  {
    _InterlockedAdd(&dword_18015BEA8, 1u);
  }
}
