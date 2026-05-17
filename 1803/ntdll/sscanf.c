/*
 * XREFs of sscanf @ 0x18008F8C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008F8F8 @ 0x18008F8F8 (sub_18008F8F8.c)
 */

int sscanf(const char *const Buffer, const char *const Format, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, Format);
  return sub_18008F8F8((unsigned int)sub_180094560, (_DWORD)Buffer, (_DWORD)Format, 0, (__int64)va);
}
