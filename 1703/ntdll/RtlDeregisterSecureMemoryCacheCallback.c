/*
 * XREFs of RtlDeregisterSecureMemoryCacheCallback @ 0x1800F3030
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlDeregisterSecureMemoryCacheCallback(void *a1)
{
  _UNKNOWN **i; // rbx
  _QWORD *v5; // rdx
  void **v6; // rax

  RtlAcquireSRWLockExclusive(&qword_18015C730);
  for ( i = (_UNKNOWN **)off_1801559E0; ; i = (_UNKNOWN **)*i )
  {
    if ( i == &off_1801559E0 )
    {
      RtlReleaseSRWLockExclusive(&qword_18015C730);
      return 0;
    }
    if ( i[3] == a1 )
      break;
  }
  if ( (*((_DWORD *)i + 4))-- == 1 )
  {
    v5 = *i;
    v6 = (void **)i[1];
    if ( *((_UNKNOWN ***)*i + 1) != i || *v6 != i )
      __fastfail(3u);
    *v6 = v5;
    v5[1] = v6;
    RtlReleaseSRWLockExclusive(&qword_18015C730);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)i);
  }
  else
  {
    RtlReleaseSRWLockExclusive(&qword_18015C730);
  }
  return 1;
}
