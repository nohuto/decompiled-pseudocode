/*
 * XREFs of MiRevertQuasiPte @ 0x14017C8F8
 * Callers:
 *     MiUpdateUserMappings @ 0x14042F614 (MiUpdateUserMappings.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiRevertQuasiPte(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFBFEuLL | 1;
}
