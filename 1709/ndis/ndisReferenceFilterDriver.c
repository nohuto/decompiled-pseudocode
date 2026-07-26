/*
 * XREFs of ndisReferenceFilterDriver @ 0x1C000F228
 * Callers:
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00C2F68 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     NdisPDStartup @ 0x1C00F8290 (NdisPDStartup.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01021E4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000C060 (NdisReferenceWithTag.c)
 */

bool __fastcall ndisReferenceFilterDriver(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rdi
  int v4; // ebx
  KIRQL v5; // si
  unsigned __int16 v6; // cx

  v2 = a1 + 72;
  v4 = 1;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 72));
  if ( !*(_BYTE *)(v2 + 10) )
  {
    v6 = *(_WORD *)(v2 + 8);
    if ( v6 >= 0xFFEBu )
    {
      ndisRefCountReferenceCountOverflow = 1;
      v4 = 2;
    }
    else
    {
      *(_WORD *)(v2 + 8) = v6 + 1;
      NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v2 + 16), a2);
      v4 = 0;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v5);
  return v4 == 0;
}
