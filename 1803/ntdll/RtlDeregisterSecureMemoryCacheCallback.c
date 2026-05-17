/*
 * XREFs of RtlDeregisterSecureMemoryCacheCallback @ 0x1800F0110
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlDeregisterSecureMemoryCacheCallback(void *a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  _UNKNOWN **i; // rbx
  _QWORD *v8; // rax
  void **v9; // rdx

  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D760, a2, a3, a4);
  for ( i = (_UNKNOWN **)off_180156A40; ; i = (_UNKNOWN **)*i )
  {
    if ( i == &off_180156A40 )
    {
      RtlReleaseSRWLockExclusive(&qword_18015D760);
      return 0;
    }
    if ( i[3] == a1 )
      break;
  }
  if ( (*((_DWORD *)i + 4))-- == 1 )
  {
    v8 = *i;
    if ( *((_UNKNOWN ***)*i + 1) != i || (v9 = (void **)i[1], *v9 != i) )
      __fastfail(3u);
    *v9 = v8;
    v8[1] = v9;
    RtlReleaseSRWLockExclusive(&qword_18015D760);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)i);
  }
  else
  {
    RtlReleaseSRWLockExclusive(&qword_18015D760);
  }
  return 1;
}
