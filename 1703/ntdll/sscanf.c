/*
 * XREFs of sscanf @ 0x18009A550
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009A588 @ 0x18009A588 (sub_18009A588.c)
 */

int sscanf(const char *const Buffer, const char *const Format, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, Format);
  return sub_18009A588((unsigned int)sub_18009F290, (_DWORD)Buffer, (_DWORD)Format, 0, (__int64)va);
}
