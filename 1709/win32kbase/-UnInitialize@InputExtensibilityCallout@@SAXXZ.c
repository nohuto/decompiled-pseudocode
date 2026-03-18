/*
 * XREFs of ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C0004FB0
 * Callers:
 *     InputUnInitialize @ 0x1C0004D90 (InputUnInitialize.c)
 *     InputInitialize @ 0x1C000650C (InputInitialize.c)
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

void __fastcall InputExtensibilityCallout::UnInitialize(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *DeviceContext; // rbx

  DeviceContext = WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext )
  {
    if ( *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + 2) )
    {
      Win32FreePool(*((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + 2), a2, a3);
      DeviceContext[2] = 0LL;
      *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + 2) = 0LL;
    }
    if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext )
      Win32FreePool(WPP_MAIN_CB.Queue.Wcb.DeviceContext, a2, a3);
    WPP_MAIN_CB.Queue.Wcb.DeviceContext = 0LL;
  }
}
