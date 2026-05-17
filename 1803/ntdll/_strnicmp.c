/*
 * XREFs of _strnicmp @ 0x18008C580
 * Callers:
 *     sub_18003F7F8 @ 0x18003F7F8 (sub_18003F7F8.c)
 *     sub_1801094D4 @ 0x1801094D4 (sub_1801094D4.c)
 * Callees:
 *     sub_18008C514 @ 0x18008C514 (sub_18008C514.c)
 */

int __cdecl strnicmp(const char *String1, const char *String2, size_t MaxCount)
{
  return sub_18008C514((unsigned __int8 *)String1, (unsigned __int8 *)String2, MaxCount);
}
