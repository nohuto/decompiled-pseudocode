/*
 * XREFs of ?wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x180055630
 * Callers:
 *     ?EnsureImpl@Dwm3DRECompositorThunk@@AEAAXXZ @ 0x1800424C0 (-EnsureImpl@Dwm3DRECompositorThunk@@AEAAXXZ.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18005D3B0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_SetPropertyFlagCallback(union wil_details_FeaturePropertyCache *a1, _DWORD *a2)
{
  int v3; // eax

  **(_DWORD **)a2 = 0;
  if ( (a2[2] & *(_DWORD *)a1) == a2[2] )
    return 0LL;
  v3 = a2[2] | *(_DWORD *)a1;
  *(_DWORD *)a1 = v3;
  if ( !a2[3] && (v3 & 8) == 0 )
  {
    *(_DWORD *)a1 = v3 | 8;
    **(_DWORD **)a2 = 1;
  }
  return 1LL;
}
