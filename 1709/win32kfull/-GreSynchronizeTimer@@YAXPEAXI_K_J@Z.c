/*
 * XREFs of ?GreSynchronizeTimer@@YAXPEAXI_K_J@Z @ 0x1C027A020
 * Callers:
 *     <none>
 * Callees:
 *     ?vSynchronizeDriver@@YAXK@Z @ 0x1C00190B4 (-vSynchronizeDriver@@YAXK@Z.c)
 */

void __fastcall GreSynchronizeTimer(void *a1)
{
  vSynchronizeDriver(128);
}
