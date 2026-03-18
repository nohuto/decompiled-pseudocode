/*
 * XREFs of SeTokenImpersonationLevel @ 0x140572350
 * Callers:
 *     CmpOpenHiveFile @ 0x1404D7AAC (CmpOpenHiveFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeTokenImpersonationLevel(__int64 a1)
{
  return *(unsigned int *)(a1 + 196);
}
