/*
 * XREFs of ndisUpdateNoPauseOnSuspend @ 0x1C00BDD30
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00BB0D0 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     NdisMSetMiniportAttributes @ 0x1C00BFE50 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     NdisNblTrackerDeregisterComponent @ 0x1C000F1B0 (NdisNblTrackerDeregisterComponent.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C00100B0 (NdisNblTrackerRegisterComponent.c)
 */

void __fastcall ndisUpdateNoPauseOnSuspend(__int64 a1)
{
  unsigned __int8 v2; // al

  if ( *(int *)(a1 + 1872) < 0
    && ((v2 = *(_BYTE *)(a1 + 3156), v2 > 6u) || v2 == 6 && *(_BYTE *)(a1 + 3157) >= 0x1Eu)
    && ndisNoPauseOnSuspend )
  {
    *(_DWORD *)(a1 + 2692) |= 0x80u;
    if ( !*(_QWORD *)(a1 + 3928) )
      *(_QWORD *)(a1 + 3928) = NdisNblTrackerRegisterComponent(3, a1, *(_QWORD *)(a1 + 3880));
  }
  else
  {
    *(_DWORD *)(a1 + 2692) &= ~0x80u;
    NdisNblTrackerDeregisterComponent(*(_QWORD *)(a1 + 3928));
    *(_QWORD *)(a1 + 3928) = 0LL;
  }
}
