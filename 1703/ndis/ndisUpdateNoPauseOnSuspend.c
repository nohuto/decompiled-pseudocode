/*
 * XREFs of ndisUpdateNoPauseOnSuspend @ 0x1C00B510C
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00AA760 (NdisMSetMiniportAttributes.c)
 *     ?ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B50E4 (-ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     NdisNblTrackerRegisterComponent @ 0x1C001BA60 (NdisNblTrackerRegisterComponent.c)
 *     NdisNblTrackerDeregisterComponent @ 0x1C0025590 (NdisNblTrackerDeregisterComponent.c)
 */

void __fastcall ndisUpdateNoPauseOnSuspend(__int64 a1)
{
  unsigned __int8 v2; // al

  if ( *(int *)(a1 + 1872) < 0
    && ((v2 = *(_BYTE *)(a1 + 3156), v2 > 6u) || v2 == 6 && *(_BYTE *)(a1 + 3157) >= 0x1Eu)
    && ndisNoPauseOnSuspend )
  {
    *(_DWORD *)(a1 + 2688) |= 0x80u;
    if ( !*(_QWORD *)(a1 + 3928) )
      *(_QWORD *)(a1 + 3928) = NdisNblTrackerRegisterComponent(3, a1, *(_QWORD *)(a1 + 3880));
  }
  else
  {
    *(_DWORD *)(a1 + 2688) &= ~0x80u;
    NdisNblTrackerDeregisterComponent(*(_QWORD *)(a1 + 3928));
    *(_QWORD *)(a1 + 3928) = 0LL;
  }
}
