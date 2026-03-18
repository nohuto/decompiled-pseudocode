/*
 * XREFs of KiSetDebuggerOwner @ 0x140203B14
 * Callers:
 *     KeBugCheck2 @ 0x1401FEE60 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x1402030B4 (KeFreezeExecution.c)
 *     KeSwitchFrozenProcessor @ 0x140203448 (KeSwitchFrozenProcessor.c)
 *     KiFreezeTargetExecution @ 0x1402036D4 (KiFreezeTargetExecution.c)
 *     KiSendThawExecution @ 0x140203980 (KiSendThawExecution.c)
 * Callees:
 *     <none>
 */

char __fastcall KiSetDebuggerOwner(__int64 a1)
{
  char result; // al
  __int64 v2; // rdx

  result = KiDebuggerIsStallOwner;
  if ( KiDebuggerIsStallOwner
    || !a1
    || (result = KeNumberProcessors_0, (_DWORD)KeNumberProcessors_0 == 1)
    || (result = MEMORY[0xFFFFF780000003C6]) != 0 )
  {
    v2 = a1;
  }
  else
  {
    v2 = qword_1403E5148;
    if ( *(_DWORD *)(a1 + 36) )
      v2 = KiProcessorBlock[0];
  }
  KiFreezeStallOwner = v2;
  _InterlockedExchange64(&KiDebuggerOwner, a1);
  return result;
}
