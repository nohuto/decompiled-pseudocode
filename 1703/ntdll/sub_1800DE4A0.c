/*
 * XREFs of sub_1800DE4A0 @ 0x1800DE4A0
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DD4D0 (RtlReportExceptionEx.c)
 *     sub_1800DD9C0 @ 0x1800DD9C0 (sub_1800DD9C0.c)
 * Callees:
 *     PssNtCaptureSnapshot @ 0x1800019F0 (PssNtCaptureSnapshot.c)
 *     RtlQueryResourcePolicy @ 0x18000F560 (RtlQueryResourcePolicy.c)
 *     ZwQueryInformationProcess @ 0x1800A5620 (ZwQueryInformationProcess.c)
 */

int __fastcall sub_1800DE4A0(HANDLE ProcessHandle, void *a2)
{
  int result; // eax
  int v5; // [rsp+50h] [rbp+18h] BYREF
  HANDLE SnapshotHandle; // [rsp+58h] [rbp+20h] BYREF

  result = ZwQueryInformationProcess(ProcessHandle, ProcessBreakOnTermination, &v5, 4u, 0LL);
  if ( result >= 0 )
  {
    if ( v5 )
    {
      return -1073741823;
    }
    else
    {
      result = RtlQueryResourcePolicy(0, 0, (__int64)&SnapshotHandle, 4LL);
      if ( result >= 0 )
      {
        if ( (int)SnapshotHandle > 10 )
        {
          SnapshotHandle = a2;
          result = PssNtCaptureSnapshot(&SnapshotHandle, ProcessHandle, 0xFC0019FF, 0x10001Fu);
          if ( result >= 0 )
            return 0;
        }
        else
        {
          return -1073741801;
        }
      }
    }
  }
  return result;
}
