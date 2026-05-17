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

__int64 __fastcall sub_1800DE4A0(__int64 a1, void *a2)
{
  __int64 result; // rax
  int v5; // [rsp+50h] [rbp+18h]
  void *v6; // [rsp+58h] [rbp+20h] BYREF

  result = ZwQueryInformationProcess();
  if ( (int)result >= 0 )
  {
    if ( v5 )
    {
      return 3221225473LL;
    }
    else
    {
      result = RtlQueryResourcePolicy(0, 0, (__int64)&v6, 4LL);
      if ( (int)result >= 0 )
      {
        if ( (int)v6 > 10 )
        {
          v6 = a2;
          result = PssNtCaptureSnapshot(&v6, a1, 0xFC0019FF, 0x10001Fu);
          if ( (int)result >= 0 )
            return 0LL;
        }
        else
        {
          return 3221225495LL;
        }
      }
    }
  }
  return result;
}
