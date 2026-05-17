/*
 * XREFs of sscanf_s @ 0x1800963D0
 * Callers:
 *     RtlIncrementCorrelationVector @ 0x1800F1740 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 *     sub_180098700 @ 0x180098700 (sub_180098700.c)
 */

int sscanf_s(const char *const Buffer, const char *const Format, ...)
{
  __int64 v4; // rdx
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, Format);
  if ( Format )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( Buffer[v4] );
    return sub_180098700(Buffer, v4, Format, va);
  }
  else
  {
    sub_18008B020();
    return -1;
  }
}
