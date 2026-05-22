/*
 * XREFs of ?OnInit@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_J@Z @ 0x1800D4770
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@IEAAXXZ @ 0x180042284 (-_Tidy@-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@IEAAXX.c)
 *     ?push_back@?$deque@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@V?$allocator@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@@std@@@std@@QEAAX$$QEAUSubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@@Z @ 0x1800D9C10 (-push_back@-$deque@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@V-$al.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::AverageHapticsFilter::OnInit(
        Windows::Internal::SpatialInteractions::AverageHapticsFilter *this,
        __int64 a2)
{
  __int64 v4; // r12
  const char *v5; // r9
  int v6; // edi
  __int64 result; // rax
  _QWORD v8[3]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  try
  {
    v6 = 0;
    *((_BYTE *)this + 48) = 0;
    std::deque<RayStabilizationResult>::_Tidy((_QWORD *)this + 10);
    v4 = *((_QWORD *)this + 1) / *((int *)this + 9);
    while ( v6 < *((_DWORD *)this + 9) )
    {
      v8[0] = a2;
      v8[1] = v4 + a2;
      v8[2] = 0LL;
      std::deque<Windows::Internal::SpatialInteractions::AverageHapticsFilter::Subdivision>::push_back(
        (char *)this + 80,
        v8);
      a2 += v4;
      ++v6;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xE9,
                           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\hapticsengine.h",
                           v5);
  }
  return result;
}
