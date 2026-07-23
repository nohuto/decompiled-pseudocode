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
  HANDLE Handles; // [rsp+30h] [rbp-18h] BYREF
  __int64 v2; // [rsp+38h] [rbp-10h]
  LARGE_INTEGER Timeout; // [rsp+50h] [rbp+8h] BYREF

  result = 0;
  Handles = 0LL;
  v2 = 0LL;
  if ( TrkContext )
  {
    Handles = (HANDLE)*((_QWORD *)TrkContext + 1);
    v2 = *((_QWORD *)TrkContext + 3);
    Timeout.QuadPart = -100000000LL;
    ZwSetEvent(*((HANDLE *)TrkContext + 2), 0LL);
    if ( NtWaitForMultipleObjects(2u, &Handles, WaitAny, 0, &Timeout) == 1 )
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
