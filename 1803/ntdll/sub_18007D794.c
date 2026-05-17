/*
 * XREFs of sub_18007D794 @ 0x18007D794
 * Callers:
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     sub_1800503AC @ 0x1800503AC (sub_1800503AC.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18003B6D8 @ 0x18003B6D8 (sub_18003B6D8.c)
 */

__int64 __fastcall sub_18007D794(void *a1, unsigned __int64 *a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 *v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // rcx

  if ( !a2 )
    RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D118, 0LL, a3, a4);
  v6 = (__int64 *)sub_18003B6D8(a1);
  v7 = (unsigned __int64)v6;
  if ( v6 )
  {
    v8 = *v6;
    if ( *(_QWORD *)(v8 + 8) != v7 || (v9 = *(_QWORD **)(v7 + 8), *v9 != v7) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    _bittestandreset((signed __int32 *)Src, *(_DWORD *)(v7 + 64));
  }
  if ( !a2 )
    RtlReleaseSRWLockExclusive(&qword_18015D118);
  if ( !v7 )
    return 3221226021LL;
  if ( a2 )
    *a2 = v7;
  else
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
  return 0LL;
}
