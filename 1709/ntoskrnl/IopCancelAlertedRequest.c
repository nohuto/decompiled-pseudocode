/*
 * XREFs of IopCancelAlertedRequest @ 0x1405EF31C
 * Callers:
 *     NtSetInformationFile @ 0x14005F8B0 (NtSetInformationFile.c)
 *     IopWaitForSynchronousIo @ 0x140061054 (IopWaitForSynchronousIo.c)
 *     NtQueryInformationFile @ 0x14049A060 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x1404AD220 (IopSynchronousServiceTail.c)
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     IopSynchronousApiServiceTail @ 0x1405753C0 (IopSynchronousApiServiceTail.c)
 *     IoSetInformation @ 0x14059BCF0 (IoSetInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     IoCancelIrp @ 0x140108640 (IoCancelIrp.c)
 */

char __fastcall IopCancelAlertedRequest(_DWORD *Object, PIRP Irp)
{
  unsigned __int8 CurrentIrql; // di
  char result; // al
  LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( Object[1] )
  {
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  else
  {
    result = IoCancelIrp(Irp);
    __writecr8(CurrentIrql);
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
