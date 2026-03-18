/*
 * XREFs of strstr @ 0x140187E10
 * Callers:
 *     InbvDetermineFunction @ 0x14017C380 (InbvDetermineFunction.c)
 *     HvlDebuggerSupportInitialize @ 0x140187348 (HvlDebuggerSupportInitialize.c)
 *     KiInitializeBootStructures @ 0x140478DD0 (KiInitializeBootStructures.c)
 *     KiMatchLoadOption @ 0x14047CB50 (KiMatchLoadOption.c)
 *     HvlPhase0Initialize @ 0x140628830 (HvlPhase0Initialize.c)
 *     SepIsOptionPresent @ 0x14064293C (SepIsOptionPresent.c)
 *     KdInitSystem @ 0x140803140 (KdInitSystem.c)
 *     CcInitializeBcbProfiler @ 0x14087C364 (CcInitializeBcbProfiler.c)
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 *     KiInitializeNxSupportDiscard @ 0x1408A4EDC (KiInitializeNxSupportDiscard.c)
 *     InitBootProcessor @ 0x1408A6138 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 *     KiPerformGroupConfiguration @ 0x1408AC1C8 (KiPerformGroupConfiguration.c)
 *     CmpGetBiosVersion @ 0x1408AFA38 (CmpGetBiosVersion.c)
 *     IopInitializeBootDrivers @ 0x1408B5D8C (IopInitializeBootDrivers.c)
 *     InbvDriverInitialize @ 0x1408BA654 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x1408BA710 (BvgaDriverInitialize.c)
 *     KeInitializeClock @ 0x1408C3688 (KeInitializeClock.c)
 *     ViInitSystemPhase0 @ 0x1408C58B4 (ViInitSystemPhase0.c)
 *     MiInitializeBootDefaults @ 0x1408C69EC (MiInitializeBootDefaults.c)
 *     KitpInitAitSampleRate @ 0x1408C7D10 (KitpInitAitSampleRate.c)
 *     RamdiskStart @ 0x1408E2E3C (RamdiskStart.c)
 * Callees:
 *     <none>
 */

char *__cdecl strstr(const char *Str, const char *SubStr)
{
  char *v3; // r8
  char v5; // al
  signed __int64 i; // r9
  const char *v7; // rdx

  v3 = (char *)Str;
  if ( !*SubStr )
    return (char *)Str;
  v5 = *Str;
  if ( !*Str )
    return 0LL;
  for ( i = Str - SubStr; ; ++i )
  {
    v7 = SubStr;
    if ( v5 )
      break;
LABEL_9:
    if ( !*v7 )
      return v3;
    v5 = *++v3;
    if ( !*v3 )
      return 0LL;
  }
  while ( *v7 )
  {
    if ( v7[i] == *v7 )
    {
      ++v7;
      if ( v7[i] )
        continue;
    }
    goto LABEL_9;
  }
  return v3;
}
