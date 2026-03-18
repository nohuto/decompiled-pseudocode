/*
 * XREFs of KiSetDebuggerOwner @ 0x140209E18
 * Callers:
 *     KeBugCheck2 @ 0x1402052B0 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x1402093B0 (KeFreezeExecution.c)
 *     KeSwitchFrozenProcessor @ 0x140209740 (KeSwitchFrozenProcessor.c)
 *     KiFreezeTargetExecution @ 0x1402099CC (KiFreezeTargetExecution.c)
 *     KiSendThawExecution @ 0x140209C84 (KiSendThawExecution.c)
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
    v2 = qword_140402948;
    if ( *(_DWORD *)(a1 + 36) )
      v2 = KiProcessorBlock[0];
  }
  KiFreezeStallOwner = v2;
  _InterlockedExchange64(&KiDebuggerOwner, a1);
  return result;
}
