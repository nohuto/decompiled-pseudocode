/*
 * XREFs of MiMakeQuasiPte @ 0x14017C804
 * Callers:
 *     MiUpdateUserMappings @ 0x14042F614 (MiUpdateUserMappings.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiMakeQuasiPte(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
}
