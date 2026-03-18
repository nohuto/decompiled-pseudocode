/*
 * XREFs of IoCancelThreadIo @ 0x14053F190
 * Callers:
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 * Callees:
 *     IoCancelIrp @ 0x140018D10 (IoCancelIrp.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     IopDisassociateThreadIrp @ 0x1401EF7E0 (IopDisassociateThreadIrp.c)
 */

struct _KTHREAD *__fastcall IoCancelThreadIo(LARGE_INTEGER a1)
{
  struct _KTHREAD *result; // rax
  void **p_FirstArgument; // rbx
  unsigned __int8 CurrentIrql; // si
  void **i; // rdi
  unsigned int v5; // edi
  unsigned int v6; // ebp
  bool v7; // zf
  unsigned int v8; // eax
  LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  Interval = a1;
  result = KeGetCurrentThread();
  p_FirstArgument = &result[1].FirstArgument;
  if ( *p_FirstArgument != p_FirstArgument )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    for ( i = (void **)*p_FirstArgument; p_FirstArgument != i; i = (void **)*i )
      IoCancelIrp((PIRP)(i - 4));
    v5 = 0;
    Interval.QuadPart = -100000LL;
    v6 = 100 * IopIrpCompletionTimeoutInSeconds;
    __writecr8(CurrentIrql);
    while ( 1 )
    {
      LOBYTE(result) = KeGetCurrentIrql();
      __writecr8(1uLL);
      result = (struct _KTHREAD *)(unsigned __int8)result;
      v7 = *p_FirstArgument == p_FirstArgument;
      __writecr8((unsigned __int8)result);
      if ( v7 )
        break;
      KeDelayExecutionThread(0, 0, &Interval);
      v8 = v5++;
      if ( v8 > v6 )
        IopDisassociateThreadIrp();
    }
  }
  return result;
}
