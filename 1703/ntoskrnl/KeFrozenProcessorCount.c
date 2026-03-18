/*
 * XREFs of KeFrozenProcessorCount @ 0x1402033D0
 * Callers:
 *     IoInitializeBugCheckProgress @ 0x1401F0C68 (IoInitializeBugCheckProgress.c)
 *     IoUpdateBugCheckProgressEnvVariable @ 0x1401F1138 (IoUpdateBugCheckProgressEnvVariable.c)
 * Callees:
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 */

__int64 KeFrozenProcessorCount()
{
  unsigned int v0; // edi
  ULONG i; // ebx
  __int64 Prcb; // rax

  v0 = 0;
  for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
  {
    Prcb = KeGetPrcb(i);
    if ( Prcb && (*(_DWORD *)(Prcb + 11656) & 0xF) == 2 )
      ++v0;
  }
  return v0;
}
