/*
 * XREFs of IoCancelThreadIo @ 0x1404B979C
 * Callers:
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 * Callees:
 *     IoCancelIrp @ 0x1400B6B20 (IoCancelIrp.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     IopDisassociateThreadIrp @ 0x14023240C (IopDisassociateThreadIrp.c)
 */

struct _KTHREAD *__fastcall IoCancelThreadIo(LARGE_INTEGER a1)
{
  struct _KTHREAD *result; // rax
  unsigned int *p_SystemCallNumber; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int *i; // rdi
  unsigned int v5; // edi
  unsigned int v6; // ebp
  unsigned int *v7; // rcx
  unsigned int v8; // eax
  LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  Interval = a1;
  result = KeGetCurrentThread();
  p_SystemCallNumber = &result[1].SystemCallNumber;
  if ( *(unsigned int **)p_SystemCallNumber != p_SystemCallNumber )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    for ( i = *(unsigned int **)p_SystemCallNumber; p_SystemCallNumber != i; i = *(unsigned int **)i )
      IoCancelIrp((PIRP)(i - 8));
    v5 = 0;
    Interval.QuadPart = -100000LL;
    v6 = 100 * IopIrpCompletionTimeoutInSeconds;
    __writecr8(CurrentIrql);
    while ( 1 )
    {
      LOBYTE(result) = KeGetCurrentIrql();
      __writecr8(1uLL);
      v7 = *(unsigned int **)p_SystemCallNumber;
      result = (struct _KTHREAD *)(unsigned __int8)result;
      __writecr8((unsigned __int8)result);
      if ( v7 == p_SystemCallNumber )
        break;
      KeDelayExecutionThread(0, 0, &Interval);
      v8 = v5++;
      if ( v8 > v6 )
        IopDisassociateThreadIrp();
    }
  }
  return result;
}
