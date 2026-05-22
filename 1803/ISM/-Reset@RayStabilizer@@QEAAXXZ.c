/*
 * XREFs of ?Reset@RayStabilizer@@QEAAXXZ @ 0x1800578D0
 * Callers:
 *     ?TryDemote@MPCInputProviderBase@@UEAA_NXZ @ 0x180049A30 (-TryDemote@MPCInputProviderBase@@UEAA_NXZ.c)
 *     ??0MPCGamepadProcessor@@QEAA@XZ @ 0x1800930E8 (--0MPCGamepadProcessor@@QEAA@XZ.c)
 *     ??0MPCMouseProcessor@@QEAA@XZ @ 0x180096768 (--0MPCMouseProcessor@@QEAA@XZ.c)
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAJPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800985D0 (-PopulateTargetingData@MPCMouseProcessor@@UEAAJPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 *     ?OnPromotedToPrimary@MPCMouseProcessor@@MEAAXXZ @ 0x180099070 (-OnPromotedToPrimary@MPCMouseProcessor@@MEAAXXZ.c)
 * Callees:
 *     ?_Tidy@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@IEAAXXZ @ 0x180042284 (-_Tidy@-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@IEAAXX.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 */

void __fastcall RayStabilizer::Reset(RayStabilizer *this)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  _OWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF

  std::deque<RayStabilizationResult>::_Tidy(this);
  memset_0(v4, 0, sizeof(v4));
  v2 = v4[0];
  *((_BYTE *)this + 80) = 0;
  v3 = v4[1];
  *((_OWORD *)this + 3) = v2;
  *((_OWORD *)this + 4) = v3;
}
