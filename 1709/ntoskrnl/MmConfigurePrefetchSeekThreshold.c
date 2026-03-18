/*
 * XREFs of MmConfigurePrefetchSeekThreshold @ 0x14059F64C
 * Callers:
 *     MiInitSystem @ 0x140828E58 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall MmConfigurePrefetchSeekThreshold(int a1)
{
  dword_14038913C = a1;
}
