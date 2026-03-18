/*
 * XREFs of SeTokenImpersonationLevel @ 0x1405DFF60
 * Callers:
 *     CmpOpenHiveFile @ 0x14049E1B8 (CmpOpenHiveFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeTokenImpersonationLevel(__int64 a1)
{
  return *(unsigned int *)(a1 + 196);
}
