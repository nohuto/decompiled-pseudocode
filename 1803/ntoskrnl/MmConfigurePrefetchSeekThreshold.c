/*
 * XREFs of MmConfigurePrefetchSeekThreshold @ 0x140584DC4
 * Callers:
 *     MiInitSystem @ 0x14089C128 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall MmConfigurePrefetchSeekThreshold(int a1)
{
  dword_1403CC3BC = a1;
}
