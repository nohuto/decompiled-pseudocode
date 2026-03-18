/*
 * XREFs of NtCreateDirectoryObjectEx @ 0x140568EC0
 * Callers:
 *     <none>
 * Callees:
 *     ObpCreateDirectoryObject @ 0x140568EF8 (ObpCreateDirectoryObject.c)
 */

__int64 __fastcall NtCreateDirectoryObjectEx(__int64 a1)
{
  return ObpCreateDirectoryObject(a1);
}
