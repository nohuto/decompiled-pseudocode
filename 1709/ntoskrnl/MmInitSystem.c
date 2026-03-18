/*
 * XREFs of MmInitSystem @ 0x140828DC4
 * Callers:
 *     KiInitializeBootStructures @ 0x1404270C0 (KiInitializeBootStructures.c)
 *     Phase1InitializationIoReady @ 0x14082FAF0 (Phase1InitializationIoReady.c)
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 * Callees:
 *     MiInitSystem @ 0x140828E58 (MiInitSystem.c)
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 *     MiInitializeSystemVa @ 0x14083959C (MiInitializeSystemVa.c)
 *     MiComputeNumaCosts @ 0x140856F40 (MiComputeNumaCosts.c)
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
        byte_140389294 = 1;
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
