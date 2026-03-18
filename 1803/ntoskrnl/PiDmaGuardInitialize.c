/*
 * XREFs of PiDmaGuardInitialize @ 0x1408A4834
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1408A3B0C (IopInitializePlugPlayServices.c)
 * Callees:
 *     PipDmgIsDmaRemappingEnabled @ 0x14062303C (PipDmgIsDmaRemappingEnabled.c)
 *     PipDmgInitPhaseOne @ 0x1408A503C (PipDmgInitPhaseOne.c)
 */

__int64 __fastcall PiDmaGuardInitialize(int a1)
{
  unsigned int v1; // ebx
  char IsDmaRemappingEnabled; // al

  v1 = 0;
  if ( a1 )
  {
    if ( a1 != 1 )
      __fastfail(5u);
    return (unsigned int)PipDmgInitPhaseOne();
  }
  else
  {
    IsDmaRemappingEnabled = PipDmgIsDmaRemappingEnabled();
    PipDmaRemappingEnabled = IsDmaRemappingEnabled;
    if ( PipDmaGuardPolicyOverride )
      PipDmaGuardPolicy = PipDmaGuardPolicyOverride;
    else
      PipDmaGuardPolicy = (IsDmaRemappingEnabled != 0) + 1;
  }
  return v1;
}
