/*
 * XREFs of ?DpiAcpiPowerStateCallback@@YAXPEAX00@Z @ 0x1C0041860
 * Callers:
 *     <none>
 * Callees:
 *     ?DpiAcpiCallAcpiEventHandler@@YAJPEAU_DEVICE_OBJECT@@W4_DXGK_EVENT_TYPE@@KPEAX@Z @ 0x1C0041604 (-DpiAcpiCallAcpiEventHandler@@YAJPEAU_DEVICE_OBJECT@@W4_DXGK_EVENT_TYPE@@KPEAX@Z.c)
 */

void __fastcall DpiAcpiPowerStateCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  if ( (_DWORD)Argument1 == 4 || (_DWORD)Argument1 == 1 )
    DpiAcpiCallAcpiEventHandler(CallbackContext, 2u, (unsigned int)Argument1, Argument2);
}
