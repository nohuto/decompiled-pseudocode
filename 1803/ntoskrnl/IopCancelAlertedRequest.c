/*
 * XREFs of IopCancelAlertedRequest @ 0x14071957C
 * Callers:
 *     NtSetInformationFile @ 0x1400ECB00 (NtSetInformationFile.c)
 *     IopWaitForSynchronousIo @ 0x1400EE730 (IopWaitForSynchronousIo.c)
 *     IopSynchronousApiServiceTail @ 0x1405610F8 (IopSynchronousApiServiceTail.c)
 *     NtQueryInformationFile @ 0x140596F20 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x14059D990 (IopSynchronousServiceTail.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 *     IoSetInformation @ 0x1405E7BF0 (IoSetInformation.c)
 * Callees:
 *     IoCancelIrp @ 0x1400B6B20 (IoCancelIrp.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 */

unsigned __int8 __fastcall IopCancelAlertedRequest(_DWORD *Object, PIRP Irp)
{
  unsigned __int8 result; // al
  unsigned __int64 v4; // rdi
  LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  result = KeGetCurrentIrql();
  __writecr8(1uLL);
  v4 = result;
  if ( Object[1] )
  {
    __writecr8(result);
  }
  else
  {
    result = IoCancelIrp(Irp);
    __writecr8(v4);
    if ( result )
    {
      Interval.QuadPart = -100000LL;
      while ( !Object[1] )
        result = KeDelayExecutionThread(0, 0, &Interval);
    }
    else
    {
      return KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
    }
  }
  return result;
}
