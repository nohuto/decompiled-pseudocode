/*
 * XREFs of LdrpCreateLoaderEvents @ 0x180009F28
 * Callers:
 *     LdrpInitParallelLoadingSupport @ 0x180006D5C (LdrpInitParallelLoadingSupport.c)
 *     LdrpCompleteProcessCloning @ 0x1800D6910 (LdrpCompleteProcessCloning.c)
 * Callees:
 *     ZwCreateEvent @ 0x1800A09C0 (ZwCreateEvent.c)
 */

__int64 LdrpCreateLoaderEvents()
{
  __int64 result; // rax
  char v1; // [rsp+20h] [rbp-18h]
  int v2; // [rsp+20h] [rbp-18h]

  v1 = 0;
  result = ZwCreateEvent(&LdrpLoadCompleteEvent, 2031619LL, 0LL, 1LL, v1);
  if ( (int)result >= 0 )
  {
    LOBYTE(v2) = 0;
    return ZwCreateEvent(&LdrpWorkCompleteEvent, 2031619LL, 0LL, 1LL, v2);
  }
  return result;
}
