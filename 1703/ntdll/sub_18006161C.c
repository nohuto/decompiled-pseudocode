/*
 * XREFs of sub_18006161C @ 0x18006161C
 * Callers:
 *     sub_180061420 @ 0x180061420 (sub_180061420.c)
 *     sub_18010057C @ 0x18010057C (sub_18010057C.c)
 * Callees:
 *     ZwQueryInformationProcess @ 0x1800A5620 (ZwQueryInformationProcess.c)
 */

unsigned __int64 sub_18006161C()
{
  unsigned int ProcessInformation; // [rsp+40h] [rbp+8h] BYREF

  ProcessInformation = 0;
  if ( ZwQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL) < 0 )
    return 0LL;
  else
    return (2147483629 * (unsigned __int64)ProcessInformation + 2147483587) % 0x7FFFFFFF;
}
