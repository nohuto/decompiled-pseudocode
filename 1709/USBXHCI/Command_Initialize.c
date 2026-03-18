/*
 * XREFs of Command_Initialize @ 0x1C000D1D8
 * Callers:
 *     Command_ControllerResetPostReset @ 0x1C000C6F4 (Command_ControllerResetPostReset.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C0005F34 (Controller_IsControllerAccessible.c)
 *     XilCoreCommand_Initialize @ 0x1C0006C98 (XilCoreCommand_Initialize.c)
 *     XilCommand_InitializeSecureResources @ 0x1C000EFA0 (XilCommand_InitializeSecureResources.c)
 */

char __fastcall Command_Initialize(__int64 a1)
{
  char result; // al

  result = Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8));
  if ( result )
  {
    if ( *(_BYTE *)(a1 + 136) )
      result = XilCommand_InitializeSecureResources();
    else
      result = XilCoreCommand_Initialize(a1 + 152);
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 44) = 0;
    *(_DWORD *)(a1 + 64) = 1;
  }
  return result;
}
