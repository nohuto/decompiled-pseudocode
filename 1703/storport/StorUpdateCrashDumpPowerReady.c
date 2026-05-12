/*
 * XREFs of StorUpdateCrashDumpPowerReady @ 0x1C0018D48
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000E860 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0011770 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0011F10 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0017C80 (RaUnitDeviceUsageNotificationIrp.c)
 *     StorPortUnitIdleState @ 0x1C0036EB0 (StorPortUnitIdleState.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0004AE0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidGetStorPoFxComponent @ 0x1C0018E74 (RaidGetStorPoFxComponent.c)
 */

char __fastcall StorUpdateCrashDumpPowerReady(__int64 a1)
{
  char v1; // si
  __int64 v2; // rbx
  char v3; // di
  char v4; // r14
  _DWORD *StorPoFxComponent; // rax
  unsigned int v7; // edx
  __int64 v8; // r9
  int v10; // ecx

  v1 = 1;
  v2 = *(_QWORD *)(a1 + 5144);
  v3 = 1;
  v4 = 1;
  if ( (*(_BYTE *)(a1 + 109) & 0x40) != 0
    || *(_DWORD *)(a1 + 268) == 4
    && !*(_DWORD *)(a1 + 100)
    && ((v10 = *(_DWORD *)(*(_QWORD *)(a1 + 528) + 4LL), v10 == 5) || v10 == 17 || (*(_BYTE *)(a1 + 108) & 0x28) == 0x28) )
  {
    v1 = 0;
  }
  else
  {
    if ( !v2 )
    {
      v3 = 0;
      goto LABEL_12;
    }
    if ( (*(_BYTE *)(v2 + 154) & 4) == 0
      && (*(_DWORD *)(v2 + 196) != 4 || *(_DWORD *)(v2 + 660) || (*(_BYTE *)(v2 + 153) & 0x44) != 0x44) )
    {
      if ( !RaidUnitCheckAndAcquirePoFx(v2) )
        goto LABEL_13;
      StorPoFxComponent = (_DWORD *)RaidGetStorPoFxComponent(*(_QWORD *)(*(_QWORD *)(v2 + 1456) + 8LL), 0LL);
      if ( !StorPoFxComponent
        || *StorPoFxComponent >= 2u && *(_DWORD *)(v8 + 16) > StorPoFxComponent[9]
        || *StorPoFxComponent == 1 && (*(_BYTE *)(v2 + 153) & 0x40) != 0 && *(_DWORD *)(v8 + 16) > v7 )
      {
        v3 = 0;
      }
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v2 + 1448));
LABEL_12:
      if ( v3 )
        goto LABEL_13;
      goto LABEL_22;
    }
    v3 = 0;
  }
LABEL_22:
  v4 = 0;
LABEL_13:
  *(_BYTE *)(a1 + 4989) = v1;
  if ( v2 )
  {
    *(_BYTE *)(v2 + 1446) = v3;
    *(_BYTE *)(v2 + 1447) = v4;
  }
  return v3;
}
