/*
 * XREFs of ?AddRef@TouchInfoAdapter@@UEAAKXZ @ 0x180014990
 * Callers:
 *     ?AddRef@MobileCursor@@W7EAAKXZ @ 0x180016980 (-AddRef@MobileCursor@@W7EAAKXZ.c)
 *     ?AddRef@ControllerProcessor@@WDA@EAAKXZ @ 0x180042170 (-AddRef@ControllerProcessor@@WDA@EAAKXZ.c)
 *     ?AddRef@MouseProcessor@@WKI@EAAKXZ @ 0x18006CDF0 (-AddRef@MouseProcessor@@WKI@EAAKXZ.c)
 *     ?AddRef@MouseProcessor@@WMI@EAAKXZ @ 0x18006CE10 (-AddRef@MouseProcessor@@WMI@EAAKXZ.c)
 *     ?AddRef@MouseProcessor@@WLA@EAAKXZ @ 0x18006CE60 (-AddRef@MouseProcessor@@WLA@EAAKXZ.c)
 *     ?AddRef@MouseProcessor@@WLI@EAAKXZ @ 0x18006CE90 (-AddRef@MouseProcessor@@WLI@EAAKXZ.c)
 *     ?AddRef@MouseProcessor@@WMA@EAAKXZ @ 0x18006CEC0 (-AddRef@MouseProcessor@@WMA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TouchInfoAdapter::AddRef(TouchInfoAdapter *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}
