/*
 * XREFs of ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C0069480
 * Callers:
 *     InputUnInitialize @ 0x1C0069278 (InputUnInitialize.c)
 *     InputInitialize @ 0x1C006DA98 (InputInitialize.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

void InputExtensibilityCallout::UnInitialize(void)
{
  _QWORD *DeviceContext; // rbx

  DeviceContext = WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext )
  {
    if ( *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + 2) )
    {
      Win32FreePool(*((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + 2));
      DeviceContext[2] = 0LL;
      *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + 2) = 0LL;
      DeviceContext = WPP_MAIN_CB.Queue.Wcb.DeviceContext;
    }
    if ( DeviceContext )
      Win32FreePool((__int64)DeviceContext);
    WPP_MAIN_CB.Queue.Wcb.DeviceContext = 0LL;
  }
}
