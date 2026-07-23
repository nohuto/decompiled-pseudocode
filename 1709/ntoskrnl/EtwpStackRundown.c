/*
 * XREFs of EtwpStackRundown @ 0x140282000
 * Callers:
 *     EtwpStopLoggerInstance @ 0x1404F0374 (EtwpStopLoggerInstance.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x14074CCA4 (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     EtwpDereferenceStackEntry @ 0x140281F90 (EtwpDereferenceStackEntry.c)
 *     EtwpTraceCachedStack @ 0x1402820F4 (EtwpTraceCachedStack.c)
 */

PSLIST_ENTRY __fastcall EtwpStackRundown(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 i; // rdi
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rsi
  unsigned __int8 CurrentIrql; // r15
  volatile signed __int32 *j; // rdx
  PSLIST_ENTRY result; // rax
  _SLIST_ENTRY **v12; // r14
  _SLIST_ENTRY *v13; // rbx
  _QWORD v14[4]; // [rsp+20h] [rbp-68h] BYREF

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 8); i = (unsigned int)(i + 1) )
  {
    v7 = (volatile signed __int32 *)(a1 + 32 + 24 * i);
    if ( *(volatile signed __int32 **)v7 != v7 )
    {
      v8 = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      KxAcquireSpinLock((PKSPIN_LOCK)v7 + 2);
      for ( j = *(volatile signed __int32 **)v7; j != v7; j = *(volatile signed __int32 **)j )
      {
        _InterlockedIncrement(j + 6);
        v14[v8] = j;
        v8 = (unsigned int)(v8 + 1);
      }
      KxReleaseSpinLock((PKSPIN_LOCK)v7 + 2);
      result = (PSLIST_ENTRY)CurrentIrql;
      __writecr8(CurrentIrql);
      if ( (_DWORD)v8 )
      {
        v12 = (_SLIST_ENTRY **)v14;
        do
        {
          v13 = *v12;
          EtwpTraceCachedStack(a2, a3, 6180LL, *v12);
          result = EtwpDereferenceStackEntry(v13, (unsigned int **)a1);
          ++v12;
          --v8;
        }
        while ( v8 );
      }
    }
  }
  return result;
}
