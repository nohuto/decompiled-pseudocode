/*
 * XREFs of NtCreateDirectoryObjectEx @ 0x140579ADC
 * Callers:
 *     <none>
 * Callees:
 *     ObpCreateDirectoryObject @ 0x140579B14 (ObpCreateDirectoryObject.c)
 */

__int64 __fastcall NtCreateDirectoryObjectEx(__int64 a1)
{
  return ObpCreateDirectoryObject(a1);
}
