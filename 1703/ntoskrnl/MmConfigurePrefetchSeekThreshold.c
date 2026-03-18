/*
 * XREFs of MmConfigurePrefetchSeekThreshold @ 0x14045EF9C
 * Callers:
 *     MiInitSystem @ 0x1408032EC (MiInitSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall MmConfigurePrefetchSeekThreshold(int a1)
{
  dword_14036CE7C = a1;
}
