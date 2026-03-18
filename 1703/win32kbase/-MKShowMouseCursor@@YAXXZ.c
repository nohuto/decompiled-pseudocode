/*
 * XREFs of ?MKShowMouseCursor@@YAXXZ @ 0x1C0118BB0
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0072AD0 (xxxUpdatePerUserAccessPackSettings.c)
 * Callees:
 *     ?SetGlobalCursorLevel@@YAXH@Z @ 0x1C008F6E0 (-SetGlobalCursorLevel@@YAXH@Z.c)
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
