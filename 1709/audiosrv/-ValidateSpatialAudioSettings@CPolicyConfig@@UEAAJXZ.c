/*
 * XREFs of ?ValidateSpatialAudioSettings@CPolicyConfig@@UEAAJXZ @ 0x180089670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPolicyConfig::ValidateSpatialAudioSettings(PVOID pv)
{
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)pv + 8LL))(pv);
  if ( !TrySubmitThreadpoolCallback(CPolicyConfig::ValidateSpatialAudioSettingsCallback, pv, 0LL) )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)pv + 16LL))(pv);
  return 0LL;
}
