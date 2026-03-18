/*
 * XREFs of DpiAcpiDockEventCallback @ 0x1C01E6270
 * Callers:
 *     <none>
 * Callees:
 *     ?DpiAcpiCallAcpiEventHandler@@YAJPEAU_DEVICE_OBJECT@@W4_DXGK_EVENT_TYPE@@KPEAX@Z @ 0x1C0032D18 (-DpiAcpiCallAcpiEventHandler@@YAJPEAU_DEVICE_OBJECT@@W4_DXGK_EVENT_TYPE@@KPEAX@Z.c)
 */

__int64 __fastcall DpiAcpiDockEventCallback(PVOID NotificationStructure, struct _DEVICE_OBJECT *Context)
{
  return DpiAcpiCallAcpiEventHandler(Context, 3u, 0x77u, 0LL);
}
