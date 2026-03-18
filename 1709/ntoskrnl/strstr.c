/*
 * XREFs of strstr @ 0x14015E110
 * Callers:
 *     InbvDetermineFunction @ 0x14013EB6C (InbvDetermineFunction.c)
 *     HvlDebuggerSupportInitialize @ 0x14015D5D8 (HvlDebuggerSupportInitialize.c)
 *     KiInitializeBootStructures @ 0x1404270C0 (KiInitializeBootStructures.c)
 *     KiMatchLoadOption @ 0x140428BB4 (KiMatchLoadOption.c)
 *     HvlPhase0Initialize @ 0x1405ABC98 (HvlPhase0Initialize.c)
 *     SepIsOptionPresent @ 0x1405D885C (SepIsOptionPresent.c)
 *     KdInitSystem @ 0x140796140 (KdInitSystem.c)
 *     CcInitializeBcbProfiler @ 0x14080C364 (CcInitializeBcbProfiler.c)
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 *     KiPerformGroupConfiguration @ 0x14082F088 (KiPerformGroupConfiguration.c)
 *     MiInitializeBootDefaults @ 0x14082F394 (MiInitializeBootDefaults.c)
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 *     InbvDriverInitialize @ 0x140832D94 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x140832E50 (BvgaDriverInitialize.c)
 *     CmpGetBiosVersion @ 0x14083B7EC (CmpGetBiosVersion.c)
 *     KiInitializeNxSupportDiscard @ 0x140843C4C (KiInitializeNxSupportDiscard.c)
 *     IopInitializeBootDrivers @ 0x140845EE8 (IopInitializeBootDrivers.c)
 *     ViInitSystemPhase0 @ 0x140848008 (ViInitSystemPhase0.c)
 *     KeInitializeClock @ 0x140848FF0 (KeInitializeClock.c)
 *     KitpInitAitSampleRate @ 0x140855AB8 (KitpInitAitSampleRate.c)
 *     RamdiskStart @ 0x14086E0DC (RamdiskStart.c)
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
