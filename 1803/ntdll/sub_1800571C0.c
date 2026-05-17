/*
 * XREFs of sub_1800571C0 @ 0x1800571C0
 * Callers:
 *     <none>
 * Callees:
 *     TpSetWaitEx @ 0x180025710 (TpSetWaitEx.c)
 *     TpReleaseWait @ 0x180058580 (TpReleaseWait.c)
 *     TpAllocWait @ 0x180058B10 (TpAllocWait.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwCreateEvent @ 0x18009B3C0 (ZwCreateEvent.c)
 *     ZwTraceControl @ 0x18009E210 (ZwTraceControl.c)
 */

__int64 sub_1800571C0()
{
  char v1; // [rsp+20h] [rbp-30h]
  __int64 v2; // [rsp+38h] [rbp-18h] BYREF
  __int64 v3; // [rsp+40h] [rbp-10h] BYREF
  int v4; // [rsp+78h] [rbp+28h] BYREF

  v3 = 0LL;
  v2 = 0LL;
  v1 = 0;
  if ( (int)ZwCreateEvent(&v2, 2031619LL, 0LL, 1LL, v1) >= 0 )
  {
    if ( (int)TpAllocWait(&v3, sub_180005610, v2, 0LL) >= 0 )
    {
      TpSetWaitEx(v3, v2, 0LL, 0LL);
      v4 = v2;
      if ( (int)ZwTraceControl(27LL, &v4, 4LL) >= 0 )
        return 1LL;
    }
    if ( v3 )
      TpReleaseWait(v3);
  }
  if ( v2 )
    ZwClose(v2);
  return 0LL;
}
