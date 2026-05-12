/*
 * XREFs of StorUpdateCrashDumpPowerReady @ 0x1C00187C8
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000EB58 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0010460 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C00119D8 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0017E0C (RaUnitDeviceUsageNotificationIrp.c)
 *     StorPortAdapterIdleState @ 0x1C0038AD0 (StorPortAdapterIdleState.c)
 *     StorPortUnitIdleState @ 0x1C0038D50 (StorPortUnitIdleState.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C00052E0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidGetStorPoFxComponent @ 0x1C0019534 (RaidGetStorPoFxComponent.c)
 */

char __fastcall StorUpdateCrashDumpPowerReady(__int64 a1)
{
  char v1; // si
  __int64 v2; // rbx
  char v3; // di
  char v4; // r14
  __int64 v6; // r9
  _DWORD *StorPoFxComponent; // rax
  unsigned int v8; // edx
  __int64 v9; // r9
  int v11; // ecx
  _DWORD *v12; // rax
  unsigned int v13; // edx
  __int64 v14; // r9

  v1 = 1;
  v2 = *(_QWORD *)(a1 + 5144);
  v3 = 1;
  v4 = 1;
  if ( (*(_BYTE *)(a1 + 109) & 0x40) != 0
    || *(_DWORD *)(a1 + 268) == 4
    && !*(_DWORD *)(a1 + 100)
    && ((v11 = *(_DWORD *)(*(_QWORD *)(a1 + 528) + 4LL), v11 == 5) || v11 == 17 || (*(_BYTE *)(a1 + 108) & 0x28) == 0x28)
    || (v6 = *(_QWORD *)(a1 + 5088)) != 0
    && ((v12 = (_DWORD *)RaidGetStorPoFxComponent(*(_QWORD *)(v6 + 8), 0LL)) == 0LL
     || *v12 >= 2u && *(_DWORD *)(v14 + 16) > v12[9]
     || *v12 == 1 && (*(_BYTE *)(a1 + 108) & 0x20) != 0 && *(_DWORD *)(v14 + 16) > v13) )
  {
    v1 = 0;
  }
  else
  {
    if ( !v2 )
    {
      v3 = 0;
      goto LABEL_13;
    }
    if ( (*(_BYTE *)(v2 + 154) & 4) == 0
      && (*(_DWORD *)(v2 + 196) != 4 || *(_DWORD *)(v2 + 692) || (*(_BYTE *)(v2 + 153) & 0x44) != 0x44) )
    {
      if ( !RaidUnitCheckAndAcquirePoFx(v2) )
        goto LABEL_14;
      StorPoFxComponent = (_DWORD *)RaidGetStorPoFxComponent(*(_QWORD *)(*(_QWORD *)(v2 + 1488) + 8LL), 0LL);
      if ( !StorPoFxComponent
        || *StorPoFxComponent >= 2u && *(_DWORD *)(v9 + 16) > StorPoFxComponent[9]
        || *StorPoFxComponent == 1 && (*(_BYTE *)(v2 + 153) & 0x40) != 0 && *(_DWORD *)(v9 + 16) > v8 )
      {
        v3 = 0;
      }
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v2 + 1480));
LABEL_13:
      if ( v3 )
        goto LABEL_14;
      goto LABEL_23;
    }
    v3 = 0;
  }
LABEL_23:
  v4 = 0;
LABEL_14:
  *(_BYTE *)(a1 + 4989) = v1;
  if ( v2 )
  {
    *(_BYTE *)(v2 + 1478) = v3;
    *(_BYTE *)(v2 + 1479) = v4;
  }
  return v3;
}
