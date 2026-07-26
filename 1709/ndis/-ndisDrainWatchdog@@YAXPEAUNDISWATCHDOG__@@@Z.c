/*
 * XREFs of ?ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00B98A8
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C000C1D0 (ndisFDoOidRequestInternal.c)
 *     ?ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00E790C (-ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     ?ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C000D150 (-ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 */

void __fastcall ndisDrainWatchdog(struct _NDIS_REFCOUNT_BLOCK *a1)
{
  struct _NDIS_REFCOUNT_BLOCK *v1; // rax

  if ( a1 != (struct _NDIS_REFCOUNT_BLOCK *)-1LL )
  {
    v1 = ndisRefCountHandleFromRefCountBlock(a1);
    KeWaitForSingleObject(&v1[2].RefWithStack[0].Block.References[2], Executive, 0, 0, 0LL);
  }
}
