/*
 * XREFs of sub_18002534C @ 0x18002534C
 * Callers:
 *     sub_1800250A4 @ 0x1800250A4 (sub_1800250A4.c)
 *     RtlGetExePath @ 0x1800814A0 (RtlGetExePath.c)
 *     RtlGetSearchPath @ 0x180082550 (RtlGetSearchPath.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18006DD40 @ 0x18006DD40 (sub_18006DD40.c)
 *     sub_18006DE80 @ 0x18006DE80 (sub_18006DE80.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002534C(__int64 *a1, __int64 (__fastcall *a2)(__int64, __int64), __int64 a3, __int64 a4)
{
  char v8; // r15
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
    RtlAcquireSRWLockExclusive(&stru_18015D3D8);
    v9 = *a1;
    if ( *a1 && (*(_BYTE *)(v9 + 100) || *(_QWORD *)(v9 + 88) == NtCurrentPeb()->ProcessParameters->EnvironmentVersion) )
    {
      ++*(_QWORD *)(v9 + 80);
      RtlReleaseSRWLockExclusive(&stru_18015D3D8);
      return v9;
    }
    RtlReleaseSRWLockExclusive(&stru_18015D3D8);
  }
  if ( a2 == sub_18006DE80 )
  {
    result = sub_18006DE80(a3, a4);
  }
  else if ( a2 == sub_18006DD40 )
  {
    result = sub_18006DD40(a3, a4);
  }
  else
  {
    result = a2(a3, a4);
  }
  v11 = result;
  if ( result )
  {
    *(_QWORD *)(result + 80) = 1LL;
    if ( v8 )
    {
      v12 = 0LL;
      RtlAcquireSRWLockExclusive(&stru_18015D3D8);
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
      RtlReleaseSRWLockExclusive(&stru_18015D3D8);
      if ( v12 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
    }
    return v11;
  }
  return result;
}
