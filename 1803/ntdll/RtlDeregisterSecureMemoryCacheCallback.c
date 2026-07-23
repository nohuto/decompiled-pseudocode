/*
 * XREFs of RtlDeregisterSecureMemoryCacheCallback @ 0x1800F0110
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

NTSTATUS __cdecl RtlDeregisterSecureMemoryCacheCallback(PRTL_SECURE_MEMORY_CACHE_CALLBACK Callback)
{
  PRTL_SECURE_MEMORY_CACHE_CALLBACK *i; // rbx
  NTSTATUS result; // eax
  PRTL_SECURE_MEMORY_CACHE_CALLBACK v5; // rax
  PVOID *v6; // rdx

  RtlAcquireSRWLockExclusive(&stru_18015D760);
  for ( i = (PRTL_SECURE_MEMORY_CACHE_CALLBACK *)off_180156A40; ; i = (PRTL_SECURE_MEMORY_CACHE_CALLBACK *)*i )
  {
    if ( i == (PRTL_SECURE_MEMORY_CACHE_CALLBACK *)&off_180156A40 )
    {
      RtlReleaseSRWLockExclusive(&stru_18015D760);
      LOBYTE(result) = 0;
      return result;
    }
    if ( i[3] == Callback )
      break;
  }
  if ( (*((_DWORD *)i + 4))-- == 1 )
  {
    v5 = *i;
    if ( *((PRTL_SECURE_MEMORY_CACHE_CALLBACK **)*i + 1) != i || (v6 = (PVOID *)i[1], *v6 != i) )
      __fastfail(3u);
    *v6 = v5;
    *((_QWORD *)v5 + 1) = v6;
    RtlReleaseSRWLockExclusive(&stru_18015D760);
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, i);
  }
  else
  {
    RtlReleaseSRWLockExclusive(&stru_18015D760);
  }
  LOBYTE(result) = 1;
  return result;
}
