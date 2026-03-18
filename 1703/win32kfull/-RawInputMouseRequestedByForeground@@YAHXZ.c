/*
 * XREFs of ?RawInputMouseRequestedByForeground@@YAHXZ @ 0x1C019D2CC
 * Callers:
 *     ?MouseWheelRoutingFocus@@YAHXZ @ 0x1C019CAF8 (-MouseWheelRoutingFocus@@YAHXZ.c)
 *     EditionGetMouseWheelRoutingMode @ 0x1C01A0010 (EditionGetMouseWheelRoutingMode.c)
 * Callees:
 *     <none>
 */

__int64 RawInputMouseRequestedByForeground(void)
{
  unsigned int v0; // ebx
  __int64 v1; // rcx

  v0 = 0;
  if ( gpqForeground )
  {
    v1 = *(_QWORD *)(gpqForeground + 64LL);
    if ( v1 )
    {
      if ( gForegroundQRawMouseRequested )
        return (unsigned int)IsDesktopApp(*(_QWORD *)(v1 + 376)) != 0;
    }
  }
  return v0;
}
