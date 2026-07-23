/*
 * XREFs of sub_18004CE84 @ 0x18004CE84
 * Callers:
 *     sub_18004CBB4 @ 0x18004CBB4 (sub_18004CBB4.c)
 *     RtlGetSearchPath @ 0x1800503D0 (RtlGetSearchPath.c)
 *     RtlGetExePath @ 0x1800504F0 (RtlGetExePath.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_18004CFC0 @ 0x18004CFC0 (sub_18004CFC0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18004CE84(__int64 *a1, __int64 (__fastcall *a2)(__int64, __int64), __int64 a3, __int64 a4)
{
  char v8; // si
  __int64 v9; // rbx
  __int64 result; // rax
  __int64 v11; // rdi
  void *v12; // rsi

  if ( a3 || a4 )
  {
    v8 = 0;
    v9 = 0LL;
  }
  else
  {
    v8 = 1;
    RtlAcquireSRWLockExclusive(&stru_18015C3A0);
    v9 = *a1;
    if ( *a1 && (*(_BYTE *)(v9 + 100) || *(_QWORD *)(v9 + 88) == NtCurrentPeb()->ProcessParameters->EnvironmentVersion) )
    {
      ++*(_QWORD *)(v9 + 80);
      RtlReleaseSRWLockExclusive(&stru_18015C3A0);
      return v9;
    }
    RtlReleaseSRWLockExclusive(&stru_18015C3A0);
  }
  if ( a2 == sub_18004CFC0 )
    result = sub_18004CFC0(a3, a4);
  else
    result = a2(a3, a4);
  v11 = result;
  if ( result )
  {
    *(_QWORD *)(result + 80) = 1LL;
    if ( v8 )
    {
      v12 = 0LL;
      RtlAcquireSRWLockExclusive(&stru_18015C3A0);
      if ( *a1 == v9 )
      {
        *a1 = v11;
        ++*(_QWORD *)(v11 + 80);
        if ( v9 )
        {
          if ( (*(_QWORD *)(v9 + 80))-- == 1LL )
            v12 = (void *)v9;
        }
      }
      RtlReleaseSRWLockExclusive(&stru_18015C3A0);
      if ( v12 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
    }
    return v11;
  }
  return result;
}
