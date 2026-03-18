/*
 * XREFs of KeFrozenProcessorCount @ 0x1402096CC
 * Callers:
 *     IoInitializeBugCheckProgress @ 0x1401F652C (IoInitializeBugCheckProgress.c)
 *     IoUpdateBugCheckProgressEnvVariable @ 0x1401F6A8C (IoUpdateBugCheckProgressEnvVariable.c)
 * Callees:
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
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
