/*
 * XREFs of RmpClientSubscriptionCleanup @ 0x18000BDD0
 * Callers:
 *     RmpClientConnectionCleanup @ 0x18000BCB0 (RmpClientConnectionCleanup.c)
 * Callees:
 *     RmpClientSubscriptionRemoveCallback @ 0x18000BF40 (RmpClientSubscriptionRemoveCallback.c)
 *     RmpClientWnfDestroySubscription @ 0x18000E8D8 (RmpClientWnfDestroySubscription.c)
 */

__int64 __fastcall RmpClientSubscriptionCleanup(__int64 a1, __int64 a2, __int64 a3)
{
  void *v4; // rcx
  _QWORD **v5; // rcx
  _QWORD *v6; // rbx
  _QWORD **i; // rbx
  void *v8; // r8
  _QWORD **v10; // rcx

  v4 = *(void **)a1;
  if ( v4 )
    RmpClientWnfDestroySubscription(v4);
  RtlAcquireSRWLockExclusive(a1 + 8, a2, a3);
  *(_DWORD *)(a1 + 16) = GetCurrentThreadId();
  v5 = *(_QWORD ***)(a1 + 32);
  if ( !v5 || (v6 = *v5, ((unsigned __int8)*v5 & 1) != 0) )
  {
    for ( i = v5 + 1;
          (unsigned __int64)i < *(_QWORD *)(a1 + 32) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 28) >> 5);
          ++i )
    {
      if ( (*(_BYTE *)i & 1) == 0 )
      {
LABEL_23:
        v6 = *i;
        goto LABEL_10;
      }
    }
LABEL_9:
    v6 = 0LL;
  }
LABEL_10:
  while ( v6 )
  {
    if ( v6[4] != -1LL )
      RmpClientSubscriptionRemoveCallback(a1, v6);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    v10 = *(_QWORD ***)(a1 + 32);
    if ( v10 )
    {
      v6 = *v10;
      if ( ((unsigned __int8)*v10 & 1) == 0 )
        continue;
    }
    for ( i = v10 + 1;
          (unsigned __int64)i < *(_QWORD *)(a1 + 32) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 28) >> 5);
          ++i )
    {
      if ( (*(_BYTE *)i & 1) == 0 )
        goto LABEL_23;
    }
    goto LABEL_9;
  }
  v8 = *(void **)(a1 + 32);
  if ( v8 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
  *(_DWORD *)(a1 + 16) = 0;
  return RtlReleaseSRWLockExclusive(a1 + 8);
}
