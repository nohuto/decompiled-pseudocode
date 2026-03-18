/*
 * XREFs of NtQueryInformationByName @ 0x14068C5B8
 * Callers:
 *     <none>
 * Callees:
 *     IoQueryInformationByName @ 0x14068B8F0 (IoQueryInformationByName.c)
 */

__int64 __fastcall NtQueryInformationByName(__int64 a1, unsigned __int64 a2, void *a3, unsigned int a4, signed int a5)
{
  return IoQueryInformationByName(a1, a2, a3, a4, a5, 0LL);
}
