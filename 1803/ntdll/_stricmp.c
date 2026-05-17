/*
 * XREFs of _stricmp @ 0x18008C460
 * Callers:
 *     sub_1800CB260 @ 0x1800CB260 (sub_1800CB260.c)
 *     sub_1800D5064 @ 0x1800D5064 (sub_1800D5064.c)
 *     sub_1800DA774 @ 0x1800DA774 (sub_1800DA774.c)
 * Callees:
 *     sub_18008C410 @ 0x18008C410 (sub_18008C410.c)
 */

int __cdecl stricmp(const char *String1, const char *String2)
{
  return sub_18008C410((unsigned __int8 *)String1, (unsigned __int8 *)String2);
}
