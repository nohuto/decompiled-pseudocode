/*
 * XREFs of TemplateEventDescriptor @ 0x180025530
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18000A8F0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x180039FA0 (-_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall TemplateEventDescriptor(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  return EventWrite(Microsoft_Windows_Immersive_ShellHandle, a2, 0, 0LL);
}
