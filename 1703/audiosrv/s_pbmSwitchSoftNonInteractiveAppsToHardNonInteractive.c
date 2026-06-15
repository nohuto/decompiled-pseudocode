/*
 * XREFs of s_pbmSwitchSoftNonInteractiveAppsToHardNonInteractive @ 0x180002A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall s_pbmSwitchSoftNonInteractiveAppsToHardNonInteractive(__int64 a1)
{
  if ( (unsigned int)IsPbmSwitchSoftNonToHardNonInteractiveSupported() )
    return PbmSwitchSoftNonInteractiveAppsToHardNonInteractive(a1);
  else
    return 0LL;
}
