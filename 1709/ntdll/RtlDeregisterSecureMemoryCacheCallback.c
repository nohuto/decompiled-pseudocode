/*
 * XREFs of RtlDeregisterSecureMemoryCacheCallback @ 0x1800F3CA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlDeregisterSecureMemoryCacheCallback(void *a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  _UNKNOWN **i; // rbx
  _QWORD *v8; // rax
  void **v9; // rdx

  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpSecMemLock, a2, a3, a4);
  for ( i = (_UNKNOWN **)RtlpSecMemListHead; ; i = (_UNKNOWN **)*i )
  {
    if ( i == &RtlpSecMemListHead )
    {
      RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
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
    RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)i);
  }
  else
  {
    RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
  }
  return 1;
}
