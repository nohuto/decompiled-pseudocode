/*
 * XREFs of XilCommand_GetCommandRingBufferLogicalAddress @ 0x1C000EF3C
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x1C000CADC (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C000CF74 (Command_HandleCommandRingStoppedEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilCommand_GetCommandRingBufferLogicalAddress(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 136) )
    return *(_QWORD *)(a1 + 160);
  else
    return *(_QWORD *)(*(_QWORD *)(a1 + 168) + 24LL);
}
