/*
 * XREFs of sub_18000F30C @ 0x18000F30C
 * Callers:
 *     sub_18000BC3C @ 0x18000BC3C (sub_18000BC3C.c)
 *     RtlInitializeResource @ 0x18000F220 (RtlInitializeResource.c)
 *     RtlInitializeCriticalSectionEx @ 0x18000F440 (RtlInitializeCriticalSectionEx.c)
 *     RtlInitializeCriticalSectionAndSpinCount @ 0x1800673A0 (RtlInitializeCriticalSectionAndSpinCount.c)
 *     RtlInitializeCriticalSection @ 0x1800675C0 (RtlInitializeCriticalSection.c)
 * Callees:
 *     sub_180008E24 @ 0x180008E24 (sub_180008E24.c)
 *     sub_18000F3C8 @ 0x18000F3C8 (sub_18000F3C8.c)
 *     sub_18000F3FC @ 0x18000F3FC (sub_18000F3FC.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall sub_18000F30C(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  signed __int64 v4; // rbx
  int v5; // eax
  volatile signed __int64 v6; // rbx
  signed __int64 *v7; // rax
  signed __int64 v8; // rbx

  v2 = sub_18000F3FC();
  v4 = v2;
  if ( v2 )
  {
    *(_WORD *)v2 = 0;
    if ( (*(_DWORD *)(a1 + 32) & 0x8000000) != 0 )
      *(_WORD *)v2 = 1;
    *(_QWORD *)(v2 + 32) = 0LL;
    *(_DWORD *)(v2 + 40) = 0;
    *(_QWORD *)(v2 + 8) = a1;
    v5 = sub_18000F3C8(2LL, v3);
    *(_WORD *)(v4 + 2) = v5;
    *(_WORD *)(v4 + 44) = HIWORD(v5);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1, v4, -1LL) == -1 )
    {
      v6 = *(_QWORD *)a1;
      RtlAcquireSRWLockExclusive(&stru_18015C1F8);
      v7 = (signed __int64 *)off_180155628[0];
      v8 = v6 + 16;
      if ( *(_UNKNOWN ***)off_180155628[0] != &off_180155620 )
        __fastfail(3u);
      *(_QWORD *)v8 = &off_180155620;
      *(_QWORD *)(v8 + 8) = v7;
      *v7 = v8;
      off_180155628[0] = (_UNKNOWN *)v8;
      RtlReleaseSRWLockExclusive(&stru_18015C1F8);
    }
    else
    {
      sub_180008E24((PSLIST_ENTRY)v4);
    }
  }
  else
  {
    _InterlockedAdd(&dword_18015AE88, 1u);
  }
}
