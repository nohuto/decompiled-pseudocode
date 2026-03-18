/*
 * XREFs of PsIsProcessTimerDelayActive @ 0x140051ED4
 * Callers:
 *     ExpSetTimer @ 0x140049460 (ExpSetTimer.c)
 *     ExpSetTimer2 @ 0x140051C60 (ExpSetTimer2.c)
 * Callees:
 *     <none>
 */

char __fastcall PsIsProcessTimerDelayActive(__int64 a1, _DWORD *a2)
{
  int v2; // eax

  if ( (*(_DWORD *)(a1 + 440) & 0x10) == 0 )
    return 0;
  v2 = *(_DWORD *)(a1 + 68);
  if ( !v2 )
    return 0;
  *a2 = v2;
  return 1;
}
