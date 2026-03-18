/*
 * XREFs of ?MKHideMouseCursor@@YAXXZ @ 0x1C0074980
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0072AD0 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?TurnOffMouseKeys@@YAXXZ @ 0x1C0118FD0 (-TurnOffMouseKeys@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void MKHideMouseCursor(void)
{
  if ( (gdwPUDFlags & 0x1000) != 0 )
  {
    gdwGTERMFlags &= ~1u;
    gdwPUDFlags &= ~0x1000u;
    *((_DWORD *)gpsi + 489) = 0;
    *((_DWORD *)gpsi + 513) = 0;
    SetGlobalCursorLevel(-1);
  }
}
