/*
 * XREFs of EtwpStackRundown @ 0x1402583B0
 * Callers:
 *     EtwpStopLoggerInstance @ 0x140434A54 (EtwpStopLoggerInstance.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x14070FFFC (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     EtwpDereferenceStackEntry @ 0x14025834C (EtwpDereferenceStackEntry.c)
 *     EtwpTraceCachedStack @ 0x14025849C (EtwpTraceCachedStack.c)
 */

PSLIST_ENTRY __fastcall EtwpStackRundown(__int64 a1, unsigned int a2)
{
  __int64 i; // rdi
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rsi
  unsigned __int8 CurrentIrql; // r15
  volatile signed __int32 *j; // rdx
  PSLIST_ENTRY result; // rax
  PSLIST_ENTRY *v10; // r14
  _QWORD v11[4]; // [rsp+20h] [rbp-58h] BYREF

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 4); i = (unsigned int)(i + 1) )
  {
    v5 = (volatile signed __int32 *)(a1 + 32 + 24 * i);
    if ( *(volatile signed __int32 **)v5 != v5 )
    {
      v6 = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      KxAcquireSpinLock((PKSPIN_LOCK)v5 + 2);
      for ( j = *(volatile signed __int32 **)v5; j != v5; j = *(volatile signed __int32 **)j )
      {
        _InterlockedIncrement(j + 6);
        v11[v6] = j;
        v6 = (unsigned int)(v6 + 1);
      }
      KxReleaseSpinLock((PKSPIN_LOCK)v5 + 2);
      result = (PSLIST_ENTRY)CurrentIrql;
      __writecr8(CurrentIrql);
      if ( (_DWORD)v6 )
      {
        v10 = (PSLIST_ENTRY *)v11;
        do
        {
          EtwpTraceCachedStack(a2, 6180LL, *v10);
          result = EtwpDereferenceStackEntry(*v10++, (_SLIST_HEADER *)a1);
          --v6;
        }
        while ( v6 );
      }
    }
  }
  return result;
}
