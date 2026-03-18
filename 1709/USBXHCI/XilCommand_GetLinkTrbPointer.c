/*
 * XREFs of XilCommand_GetLinkTrbPointer @ 0x1C000EF60
 * Callers:
 *     Command_PrepareHardware @ 0x1C00553E0 (Command_PrepareHardware.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilCommand_GetLinkTrbPointer(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 136) )
    return *(_QWORD *)(a1 + 168);
  else
    return *(_QWORD *)(a1 + 176);
}
