/*
 * XREFs of ?RmpSystemIsCpuSetControlDelegated@@YAEXZ @ 0x180026A1C
 * Callers:
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180023CB4 (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
char RmpSystemIsCpuSetControlDelegated(void)
{
  return IsNotifyGameModeExtensionRecipientsPresentPresent();
}
