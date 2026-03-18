/*
 * XREFs of GreFlush @ 0x1C0018D00
 * Callers:
 *     <none>
 * Callees:
 *     ?vSynchronizeDriver@@YAXK@Z @ 0x1C00190B4 (-vSynchronizeDriver@@YAXK@Z.c)
 */

void GreFlush()
{
  vSynchronizeDriver(0x40u);
}
