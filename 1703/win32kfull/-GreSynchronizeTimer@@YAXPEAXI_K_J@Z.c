/*
 * XREFs of ?GreSynchronizeTimer@@YAXPEAXI_K_J@Z @ 0x1C027D630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GreSynchronizeTimer(void *a1)
{
  vSynchronizeDriver(128);
}
