/*
 * XREFs of ?TryDemote@MPCInputProviderBase@@UEAA_NXZ @ 0x18005FE60
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@IEAAXXZ @ 0x180039E28 (-_Tidy@-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@IEAAXX.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

char __fastcall MPCInputProviderBase::TryDemote(MPCInputProviderBase *this)
{
  char v2; // di
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  _OWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 3) + 80LL))((char *)this - 24);
  if ( v2 )
  {
    std::deque<RayStabilizationResult>::_Tidy((_QWORD *)this + 52);
    memset(v6, 0, sizeof(v6));
    v3 = v6[0];
    *((_BYTE *)this + 496) = 0;
    v4 = v6[1];
    *((_OWORD *)this + 29) = v3;
    *((_OWORD *)this + 30) = v4;
  }
  return v2;
}
