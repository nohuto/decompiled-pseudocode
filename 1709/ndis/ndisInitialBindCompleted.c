/*
 * XREFs of ndisInitialBindCompleted @ 0x1C0012CC8
 * Callers:
 *     ndisMSetMiniportReadyForBinding @ 0x1C00C103C (ndisMSetMiniportReadyForBinding.c)
 * Callees:
 *     ?ndisIsSystemBooting@@YAEXZ @ 0x1C00C11F0 (-ndisIsSystemBooting@@YAEXZ.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00C5BE8 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
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
