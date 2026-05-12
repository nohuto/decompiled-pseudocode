/*
 * XREFs of RaidGetStorPoFxComponent @ 0x1C0018E74
 * Callers:
 *     StorUpdateCrashDumpPowerReady @ 0x1C0018D48 (StorUpdateCrashDumpPowerReady.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C0018EB8 (RaidRegisterForRuntimePowerManagement.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C001CFF8 (StorpAdapterInitializePoFxPower.c)
 *     RaidGetTotalStorPoFxDeviceSize @ 0x1C001D264 (RaidGetTotalStorPoFxDeviceSize.c)
 *     StorpUnitInitializePoFxPower @ 0x1C0034D60 (StorpUnitInitializePoFxPower.c)
 *     StorPortUnitIdleState @ 0x1C0036EB0 (StorPortUnitIdleState.c)
 * Callees:
 *     <none>
 */

char *__fastcall RaidGetStorPoFxComponent(int *a1, unsigned int a2)
{
  int v2; // r8d
  char *result; // rax
  unsigned __int64 v4; // rax

  v2 = *a1;
  result = 0LL;
  if ( *a1 == 1 )
  {
    if ( a2 >= a1[2] )
      return result;
    v4 = ((unsigned __int64)a2 << 6) + 16;
    return (char *)a1 + v4;
  }
  if ( (v2 == 2 || v2 == 3) && a2 < a1[2] )
  {
    v4 = ((unsigned __int64)a2 << 6) + 24;
    return (char *)a1 + v4;
  }
  return result;
}
