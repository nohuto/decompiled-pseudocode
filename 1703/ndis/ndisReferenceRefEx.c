/*
 * XREFs of ndisReferenceRefEx @ 0x1C001EE0C
 * Callers:
 *     ndisReferenceMiniportByHandle @ 0x1C0015E38 (ndisReferenceMiniportByHandle.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001741C (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisFIndicateStatusInternal @ 0x1C00179C4 (ndisFIndicateStatusInternal.c)
 *     ndisReferenceFilterDriver @ 0x1C001C8D4 (ndisReferenceFilterDriver.c)
 *     ndisGetLowerFilterWithPnpRef @ 0x1C001D338 (ndisGetLowerFilterWithPnpRef.c)
 *     ndisGetHigherFilterWithPnpRef @ 0x1C00206BC (ndisGetHigherFilterWithPnpRef.c)
 *     NdisAllocateIoWorkItem @ 0x1C0022C60 (NdisAllocateIoWorkItem.c)
 *     ndisReferenceDriver @ 0x1C0023B90 (ndisReferenceDriver.c)
 *     ndisReferenceRef @ 0x1C00256E0 (ndisReferenceRef.c)
 *     ndisReferenceFilterByHandle @ 0x1C00256FC (ndisReferenceFilterByHandle.c)
 *     NdisCancelDirectOidRequest @ 0x1C0045610 (NdisCancelDirectOidRequest.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C0046520 (ndisDoCancelDirectOidRequest.c)
 *     ndisDoDirectOidRequest @ 0x1C0046784 (ndisDoDirectOidRequest.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C0049E40 (ndisQueueRestoreRequestsOnTop.c)
 *     ndisRefNextFilterForOidCancellation @ 0x1C004A124 (ndisRefNextFilterForOidCancellation.c)
 *     NdisFRestartFilter @ 0x1C00599B0 (NdisFRestartFilter.c)
 *     ndisFCancelDirectOidRequestInternal @ 0x1C0059BF0 (ndisFCancelDirectOidRequestInternal.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C005A894 (ndisQueueStackExpansionFallbackWorkItem.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C005BB50 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C001B270 (NdisReferenceWithTag.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001EF4C (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001EFE0 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006C854 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

bool __fastcall ndisReferenceRefEx(PKSPIN_LOCK SpinLock, unsigned __int8 a2, _DWORD *a3)
{
  KIRQL v6; // al
  bool v7; // zf
  KIRQL v8; // bp
  unsigned __int16 v9; // r9
  struct _NDIS_REFCOUNT_BLOCK *v10; // rbx
  unsigned __int8 *p_Tag; // rdx
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // r11
  unsigned __int8 v14; // r8
  unsigned __int8 v15; // r10
  unsigned __int8 v16; // r9
  _NDIS_REFCOUNT_TAGGED_ENTRY *v17; // rcx
  unsigned __int8 NumOverflowTaggedEntries; // cl

  v6 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v7 = *((_BYTE *)SpinLock + 10) == 0;
  v8 = v6;
  *a3 = 1;
  if ( v7 )
  {
    v9 = *((_WORD *)SpinLock + 4);
    if ( v9 >= 0xFFEBu )
    {
      ndisRefCountReferenceCountOverflow = 1;
      *a3 = 2;
    }
    else
    {
      v10 = (struct _NDIS_REFCOUNT_BLOCK *)SpinLock[2];
      *((_WORD *)SpinLock + 4) = v9 + 1;
      if ( v10 )
      {
        if ( v10->Type )
        {
          if ( v10->Type == 1 )
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)&v10->8 + a2, 1u);
        }
        else
        {
          p_Tag = 0LL;
          if ( _bittestandset((signed __int32 *)v10->TaggedRefCounts.RefMask, a2) )
          {
            Tags = v10->TaggedRefCounts.Tags;
            v14 = -1;
            if ( Tags && (v15 = v10->NumOverflowTaggedEntries, v16 = 0, v15) )
            {
              do
              {
                v17 = &Tags[v16];
                if ( v17->Tag == a2 )
                {
                  if ( v17->RefCount != 0xFF )
                  {
                    ++v17->RefCount;
                    goto LABEL_6;
                  }
                }
                else if ( !v17->RefCount )
                {
                  p_Tag = &Tags[v16].Tag;
                }
                ++v16;
              }
              while ( v16 < v15 );
              if ( !p_Tag )
                goto LABEL_18;
              *p_Tag = a2;
              p_Tag[1] = 1;
            }
            else
            {
LABEL_18:
              if ( !v10->Type )
              {
                NumOverflowTaggedEntries = v10->NumOverflowTaggedEntries;
                if ( NumOverflowTaggedEntries == 0xFF )
                {
                  ndisFreeRefCountAuxiliaryMemory(v10);
                  v10->Type = 2;
                }
                else
                {
                  if ( (unsigned int)NumOverflowTaggedEntries + 2 <= 0xFF )
                    v14 = NumOverflowTaggedEntries + 2;
                  ndisResizeRefCountBlockTagged(v10, v14);
                }
              }
              NdisReferenceWithTag(v10, a2);
            }
          }
        }
      }
LABEL_6:
      *a3 = 0;
    }
  }
  KeReleaseSpinLock(SpinLock, v8);
  return *a3 == 0;
}
