/*
 * XREFs of ?DpiAcpiPowerStateCallback@@YAXPEAX00@Z @ 0x1C00141D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DpiAcpiCallAcpiEventHandler@@YAJPEAU_DEVICE_OBJECT@@W4_DXGK_EVENT_TYPE@@KPEAX@Z @ 0x1C0032D18 (-DpiAcpiCallAcpiEventHandler@@YAJPEAU_DEVICE_OBJECT@@W4_DXGK_EVENT_TYPE@@KPEAX@Z.c)
 */

void __fastcall DpiAcpiPowerStateCallback(struct _DEVICE_OBJECT *CallbackContext, PVOID Argument1, PVOID Argument2)
{
  if ( (_DWORD)Argument1 == 4 || (_DWORD)Argument1 == 1 )
    DpiAcpiCallAcpiEventHandler(CallbackContext, DxgkPowerStateEvent, (unsigned int)Argument1, Argument2);
}
