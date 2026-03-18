/*
 * XREFs of PspFindThreadForTeb @ 0x140718928
 * Callers:
 *     KiSwapToUmsThread @ 0x1406D8E40 (KiSwapToUmsThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14071C9D4 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     PsLookupThreadByThreadId @ 0x1404C5690 (PsLookupThreadByThreadId.c)
 */

PETHREAD __fastcall PspFindThreadForTeb(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  PETHREAD Thread; // [rsp+40h] [rbp+8h] BYREF

  Thread = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( a1
    && PsLookupThreadByThreadId(*(HANDLE *)(a1 + 72), &Thread) >= 0
    && (Thread->Process != CurrentThread->Process || (Thread->Header.Reserved1 & 0x40) == 0) )
  {
    ObfDereferenceObject(Thread);
    return 0LL;
  }
  return Thread;
}
