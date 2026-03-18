/*
 * XREFs of _snprintf_s @ 0x140163B50
 * Callers:
 *     RtlIncrementCorrelationVector @ 0x140723D30 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     _vsnprintf_s @ 0x140163B80 (_vsnprintf_s.c)
 */

int snprintf_s(char *DstBuf, size_t SizeInBytes, size_t MaxCount, const char *Format, ...)
{
  va_list va; // [rsp+60h] [rbp+28h] BYREF

  va_start(va, Format);
  return vsnprintf_s(DstBuf, SizeInBytes, MaxCount, Format, va);
}
