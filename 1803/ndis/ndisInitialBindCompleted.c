/*
 * XREFs of ndisInitialBindCompleted @ 0x1C0020E18
 * Callers:
 *     ndisMSetMiniportReadyForBinding @ 0x1C00C67C8 (ndisMSetMiniportReadyForBinding.c)
 * Callees:
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00C2300 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisIsSystemBooting@@YAEXZ @ 0x1C00C695C (-ndisIsSystemBooting@@YAEXZ.c)
 */

void __fastcall ndisInitialBindCompleted(__int64 a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rcx

  if ( *(_BYTE *)(a1 + 1995) )
  {
    if ( !ndisIsSystemBooting() )
      ndisMExitInitMode(v1, RunSynchronous);
  }
}
