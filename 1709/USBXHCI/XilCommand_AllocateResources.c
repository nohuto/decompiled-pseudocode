/*
 * XREFs of XilCommand_AllocateResources @ 0x1C000EB18
 * Callers:
 *     Command_PrepareHardware @ 0x1C00553E0 (Command_PrepareHardware.c)
 * Callees:
 *     XilCommand_AllocateSecureResources @ 0x1C000EB44 (XilCommand_AllocateSecureResources.c)
 *     XilCoreCommand_AllocateResources @ 0x1C003FF04 (XilCoreCommand_AllocateResources.c)
 */

__int64 __fastcall XilCommand_AllocateResources(__int64 a1)
{
  _BYTE *v1; // rcx

  v1 = (_BYTE *)(a1 + 136);
  if ( *v1 )
    return XilCommand_AllocateSecureResources();
  else
    return XilCoreCommand_AllocateResources(v1 + 16);
}
