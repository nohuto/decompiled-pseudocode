/*
 * XREFs of ndisReferenceOpenByHandle @ 0x1C000510C
 * Callers:
 *     ndisAllocateReceiveQueue @ 0x1C00396F4 (ndisAllocateReceiveQueue.c)
 *     ndisSetReceiveFilter @ 0x1C003B5FC (ndisSetReceiveFilter.c)
 *     ndisLegacyRequest @ 0x1C00442B0 (ndisLegacyRequest.c)
 *     ndisMDirectOidRequest @ 0x1C0044600 (ndisMDirectOidRequest.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00B5960 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000C060 (NdisReferenceWithTag.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qDL @ 0x1C005E974 (WPP_SF_qDL.c)
 */

unsigned __int8 __fastcall ndisReferenceOpenByHandle(__int64 a1, unsigned __int8 a2)
{
  unsigned __int8 v4; // bl
  KIRQL v5; // r15
  struct _NDIS_OPEN_BLOCK *i; // rax
  KIRQL v7; // bl
  __int64 v8; // rdx

  v4 = 0;
  if ( (unsigned __int8)byte_1C009875B >= 4u )
    WPP_SF_qD(108LL, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1, a2);
  v5 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  for ( i = ndisGlobalOpenList; i; i = i->NextGlobalOpen )
  {
    if ( i == (struct _NDIS_OPEN_BLOCK *)a1 )
    {
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 232));
      if ( (*(_DWORD *)(a1 + 224) & 0x8000) == 0 && *(_DWORD *)(a1 + 228) )
      {
        v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 696));
        NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 688));
        ++*(_DWORD *)(a1 + 228);
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 696), v7);
        v4 = 1;
      }
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 232));
      break;
    }
  }
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v5);
  if ( (unsigned __int8)byte_1C009875B >= 4u )
    WPP_SF_qDL(v4, v8, a1, a2, v4);
  return v4;
}
