/*
 * XREFs of MmInitSystem @ 0x140803254
 * Callers:
 *     KiInitializeBootStructures @ 0x14040F390 (KiInitializeBootStructures.c)
 *     Phase1InitializationIoReady @ 0x140809CD4 (Phase1InitializationIoReady.c)
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 * Callees:
 *     MiInitSystem @ 0x1408032EC (MiInitSystem.c)
 *     MiInitializeSystemVa @ 0x140810A84 (MiInitializeSystemVa.c)
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 *     MiComputeNumaCosts @ 0x1408267F0 (MiComputeNumaCosts.c)
 */

char __fastcall MmInitSystem(int a1, ULONG_PTR a2)
{
  if ( a1 == -1 )
  {
    MiInitializeSystemVa(a2);
    return 1;
  }
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      MiComputeNumaCosts();
      MiFlags = MiFlags & 0xFFFFFFCF | 0x10;
      if ( (unsigned __int8)MiInitSystem(1LL, a2) )
      {
        byte_14036CFD4 = 1;
        return 1;
      }
      return 0;
    }
    if ( a1 == 2 )
    {
      MiFlags = MiFlags & 0xFFFFFFCF | 0x20;
      return ((__int64 (*)(void))MiInitSystem)();
    }
  }
  else if ( (unsigned __int8)MmInitNucleus(a2) )
  {
    return ((__int64 (*)(void))MiInitSystem)();
  }
  return 0;
}
