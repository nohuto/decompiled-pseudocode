/*
 * XREFs of _strnicmp @ 0x1800972E0
 * Callers:
 *     sub_18003C49C @ 0x18003C49C (sub_18003C49C.c)
 *     sub_1801064D4 @ 0x1801064D4 (sub_1801064D4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl strnicmp(const char *String1, const char *String2, size_t MaxCount)
{
  return strnicmp_0(String1, String2, MaxCount);
}
