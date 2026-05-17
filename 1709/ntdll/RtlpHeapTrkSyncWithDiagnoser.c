/*
 * XREFs of RtlpHeapTrkSyncWithDiagnoser @ 0x1800F79E8
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x1800F7700 (RtlpHeapTrkLeakCallback.c)
 *     RtlpHeapTrkReportResult @ 0x1800F78F8 (RtlpHeapTrkReportResult.c)
 * Callees:
 *     ZwSetEvent @ 0x1800A0280 (ZwSetEvent.c)
 *     NtWaitForMultipleObjects @ 0x1800A0C10 (NtWaitForMultipleObjects.c)
 */

char RtlpHeapTrkSyncWithDiagnoser()
{
  char result; // al

  result = 0;
  if ( TrkContext )
  {
    ZwSetEvent();
    if ( (unsigned int)NtWaitForMultipleObjects() == 1 )
    {
      return 1;
    }
    else
    {
      byte_1801608C0 = 1;
      return 0;
    }
  }
  else
  {
    byte_1801608C0 = 1;
  }
  return result;
}
