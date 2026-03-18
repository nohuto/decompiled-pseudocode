/*
 * XREFs of ?MKShowMouseCursor@@YAXXZ @ 0x1C0117A20
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C005F450 (xxxUpdatePerUserAccessPackSettings.c)
 * Callees:
 *     ?SetGlobalCursorLevel@@YAXH@Z @ 0x1C0097E20 (-SetGlobalCursorLevel@@YAXH@Z.c)
 */

void MKShowMouseCursor(void)
{
  if ( (gdwGTERMFlags & 1) == 0 )
  {
    gdwPUDFlags |= 0x1000u;
    gdwGTERMFlags |= 1u;
    *((_DWORD *)gpsi + 489) = 1;
    *((_DWORD *)gpsi + 513) = 2;
    SetGlobalCursorLevel(0);
  }
}
