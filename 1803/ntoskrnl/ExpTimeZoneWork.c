/*
 * XREFs of ExpTimeZoneWork @ 0x1407BCF70
 * Callers:
 *     <none>
 * Callees:
 *     ZwSetSystemTime @ 0x1401AA940 (ZwSetSystemTime.c)
 */

__int64 ExpTimeZoneWork()
{
  __int64 result; // rax

  do
  {
    ZwSetSystemTime(0LL, 0LL);
    result = (unsigned int)_InterlockedExchangeAdd(&ExpOkToTimeZoneRefresh, 0xFFFFFFFF);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
