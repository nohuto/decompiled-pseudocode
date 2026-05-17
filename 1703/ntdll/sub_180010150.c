/*
 * XREFs of sub_180010150 @ 0x180010150
 * Callers:
 *     <none>
 * Callees:
 *     TpReleaseWait @ 0x1800135B0 (TpReleaseWait.c)
 *     TpAllocWait @ 0x180013DF0 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x180017300 (TpSetWaitEx.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwCreateEvent @ 0x1800A5C00 (ZwCreateEvent.c)
 *     ZwTraceControl @ 0x1800A8990 (ZwTraceControl.c)
 */

__int64 sub_180010150()
{
  char v1; // [rsp+20h] [rbp-30h]
  _BYTE v2[8]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v3; // [rsp+38h] [rbp-18h] BYREF
  __int64 v4; // [rsp+40h] [rbp-10h] BYREF
  int v5; // [rsp+78h] [rbp+28h] BYREF

  v4 = 0LL;
  v3 = 0LL;
  v1 = 0;
  if ( (int)ZwCreateEvent(&v3, 2031619LL, 0LL, 1LL, v1) >= 0 )
  {
    if ( (int)TpAllocWait(&v4, sub_180052270, v3, 0LL) >= 0 )
    {
      TpSetWaitEx(v4, v3, 0LL, 0LL);
      v5 = v3;
      if ( (int)ZwTraceControl(27LL, &v5, 4LL, 0LL, 0, v2) >= 0 )
        return 1LL;
    }
    if ( v4 )
      TpReleaseWait(v4);
  }
  if ( v3 )
    ZwClose(v3);
  return 0LL;
}
