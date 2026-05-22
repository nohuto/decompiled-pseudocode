/*
 * XREFs of ?SetStabilizerFlags@MPCInputProviderBase@@IEAAXW4MethodFlags@RayStabilizer@@@Z @ 0x18005FF54
 * Callers:
 *     ??0MPCGamepadProcessor@@QEAA@XZ @ 0x180036FC8 (--0MPCGamepadProcessor@@QEAA@XZ.c)
 *     ??0MPCMouseProcessor@@QEAA@XZ @ 0x18004A1A8 (--0MPCMouseProcessor@@QEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@IEAAXXZ @ 0x180039E28 (-_Tidy@-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@IEAAXX.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

void __fastcall MPCInputProviderBase::SetStabilizerFlags(__int64 a1, int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // ecx
  int v4; // eax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  _OWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1 + 440;
  if ( a2 != *(_DWORD *)(a1 + 484) )
  {
    *(_DWORD *)(a1 + 480) = 0;
    v3 = *(_DWORD *)(a1 + 480);
    *(_DWORD *)(v2 + 44) = a2;
    if ( (a2 & 1) != 0 )
      v3 = 3;
    *(_DWORD *)(v2 + 40) = v3;
    if ( (a2 & 2) != 0 )
    {
      v4 = 90;
      if ( v3 > 0x5A )
        v4 = v3;
      *(_DWORD *)(v2 + 40) = v4;
    }
    std::deque<RayStabilizationResult>::_Tidy((_QWORD *)v2);
    memset(v7, 0, sizeof(v7));
    v5 = v7[0];
    *(_BYTE *)(v2 + 80) = 0;
    v6 = v7[1];
    *(_OWORD *)(v2 + 48) = v5;
    *(_OWORD *)(v2 + 64) = v6;
  }
}
