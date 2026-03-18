/*
 * XREFs of MiMakeQuasiPte @ 0x1401A6658
 * Callers:
 *     MiUpdateUserMappings @ 0x140475520 (MiUpdateUserMappings.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiMakeQuasiPte(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
}
