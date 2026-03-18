/*
 * XREFs of strstr @ 0x1401697D0
 * Callers:
 *     InbvDetermineFunction @ 0x14015E03C (InbvDetermineFunction.c)
 *     HvlDebuggerSupportInitialize @ 0x1401685F0 (HvlDebuggerSupportInitialize.c)
 *     KiInitializeBootStructures @ 0x14040F390 (KiInitializeBootStructures.c)
 *     KiMatchLoadOption @ 0x140412910 (KiMatchLoadOption.c)
 *     HvlPhase0Initialize @ 0x1405A8F40 (HvlPhase0Initialize.c)
 *     SepInitializeCodeIntegrity @ 0x1405C5404 (SepInitializeCodeIntegrity.c)
 *     KdInitSystem @ 0x140789150 (KdInitSystem.c)
 *     CcInitializeBcbProfiler @ 0x1407DC30C (CcInitializeBcbProfiler.c)
 *     CmpGetBiosVersion @ 0x1407F78EC (CmpGetBiosVersion.c)
 *     IopInitializeBootDrivers @ 0x1407F91C4 (IopInitializeBootDrivers.c)
 *     KiInitializeNxSupportDiscard @ 0x1407FF0C8 (KiInitializeNxSupportDiscard.c)
 *     KiPerformGroupConfiguration @ 0x1408099B0 (KiPerformGroupConfiguration.c)
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 *     ViInitSystemPhase0 @ 0x140812964 (ViInitSystemPhase0.c)
 *     MiInitializeBootDefaults @ 0x140812ADC (MiInitializeBootDefaults.c)
 *     KitpInitAitSampleRate @ 0x140812C98 (KitpInitAitSampleRate.c)
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 *     InbvDriverInitialize @ 0x140818F1C (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x140818FD0 (BvgaDriverInitialize.c)
 *     KeInitializeClock @ 0x140819AAC (KeInitializeClock.c)
 *     RamdiskStart @ 0x140836EAC (RamdiskStart.c)
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
