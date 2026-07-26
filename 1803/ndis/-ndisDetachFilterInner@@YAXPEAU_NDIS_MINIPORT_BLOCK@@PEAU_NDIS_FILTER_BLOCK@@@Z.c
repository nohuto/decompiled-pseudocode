/*
 * XREFs of ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0101C04
 * Callers:
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00B24B4 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisFilterAttachCleanUp @ 0x1C0011CBC (ndisFilterAttachCleanUp.c)
 *     ndisDereferenceFilter @ 0x1C0011E1C (ndisDereferenceFilter.c)
 *     ndisReferenceFilterByHandle @ 0x1C00122FC (ndisReferenceFilterByHandle.c)
 *     ndisReferenceMiniportByHandle @ 0x1C001A448 (ndisReferenceMiniportByHandle.c)
 *     ndisSetupWmiNode @ 0x1C001C2EC (ndisSetupWmiNode.c)
 *     ndisHandleFilterHandlersChange @ 0x1C001CE10 (ndisHandleFilterHandlersChange.c)
 *     ndisCloseRef @ 0x1C00248C0 (ndisCloseRef.c)
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     McTemplateK0qqq @ 0x1C00412A4 (McTemplateK0qqq.c)
 *     WPP_SF_qqZZ @ 0x1C005C954 (WPP_SF_qqZZ.c)
 *     McTemplateK0jcqjzzz @ 0x1C0075DE0 (McTemplateK0jcqjzzz.c)
 *     ndisDereferencePackage @ 0x1C00ADAEC (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C00B116C (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ndisFInvokeDetach @ 0x1C00B28C0 (ndisFInvokeDetach.c)
 *     ?ndisFilterWaitForPnPComplete@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00B2910 (-ndisFilterWaitForPnPComplete@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisFNotifyDetach @ 0x1C00B2934 (ndisFNotifyDetach.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00B8854 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     NdisMSleep @ 0x1C00C8450 (NdisMSleep.c)
 */

void __fastcall ndisDetachFilterInner(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_FILTER_BLOCK *a2)
{
  char v2; // r14
  char v4; // r15
  PVOID v6; // rbp
  char *v7; // rbx
  struct _MCGEN_TRACE_CONTEXT *v8; // rcx
  signed int v9; // ebx
  KIRQL v10; // al
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  _NDIS_FILTER_BLOCK *LowerFilter; // rax
  PVOID WnodeEventItem; // [rsp+90h] [rbp+18h] BYREF
  struct NDISWATCHDOG__ *v17; // [rsp+98h] [rbp+20h] BYREF

  v2 = 0;
  v4 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x22u, &WPP_bee287f1cada383e7b1ca74881464cf2_Traceguids, (__int64)a2);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( ndisReferenceFilterByHandle(a2) )
  {
    v2 = 1;
    if ( ndisReferenceMiniportByHandle(a1, 0) )
    {
      v4 = 1;
      ndisFNotifyDetach((__int64)a2);
      ndisCloseRef(&a2->PnPRef.SpinLock);
      ndisSetupWmiNode(
        (__int64)a1,
        (const void **)a2->FilterFriendlyName,
        a2->FilterDriver->DefaultFilterCharacteristics.UniqueName.Length + 4 + a1->BindPaths->Paths[0].Length,
        (__int128 *)&GUID_NDIS_NOTIFY_FILTER_REMOVAL,
        &WnodeEventItem);
      v6 = WnodeEventItem;
      if ( WnodeEventItem )
      {
        v7 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
        memmove(
          v7,
          a2->FilterDriver->DefaultFilterCharacteristics.UniqueName.Buffer,
          a2->FilterDriver->DefaultFilterCharacteristics.UniqueName.Length);
        memmove(
          &v7[a2->FilterDriver->DefaultFilterCharacteristics.UniqueName.Length + 2],
          a1->BindPaths->Paths[0].Buffer,
          a1->BindPaths->Paths[0].Length);
        v9 = IoWMIWriteEvent(v6);
        if ( v9 < 0 )
        {
          if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
            WPP_SF_(0x23u, &WPP_bee287f1cada383e7b1ca74881464cf2_Traceguids);
          if ( (Microsoft_Windows_NDISEnableBits & 0x100) != 0 )
            McTemplateK0qqq(v8, &FilterRemovalIndicationFailed, &a2->InterfaceGuid, v9, 0x5DBu, 0);
          ExFreePoolWithTag(v6, 0);
        }
      }
      a2->State = NdisFilterDetaching;
      if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
        McTemplateK0jcqjzzz(
          (__int64)&a2->Miniport->InterfaceGuid,
          (__int64)a2->FilterInstanceName._Myptr,
          &a2->InterfaceGuid,
          (__int64)&a2->InterfaceGuid,
          6,
          228,
          (__int64)&a2->Miniport->InterfaceGuid,
          a2->Miniport->pAdapterInstanceName->Buffer,
          a2->FilterInstanceName._Myptr->Buffer,
          a2->FilterFriendlyName->Buffer);
      ndisFilterWaitForPnPComplete(a2);
      ndisMakeWatchdog(
        (struct _NDIS_REFCOUNT_BLOCK **)&v17,
        a2,
        (_NDIS_REFCOUNT_STACK_ENTRY)20,
        a2->FilterDriver->DefaultFilterCharacteristics.DetachHandler,
        0x41EB0u,
        0LL);
      ndisFInvokeDetach((__int64)a2);
      if ( v17 != (struct NDISWATCHDOG__ *)-1LL )
        ndisFreeWatchdog((struct _NDIS_REFCOUNT_BLOCK *)v17);
      if ( (unsigned __int8)byte_1C0099610 >= 4u )
        WPP_SF_qqZZ(
          0x24u,
          &WPP_bee287f1cada383e7b1ca74881464cf2_Traceguids,
          a1,
          a2,
          &a2->FilterDriver->DefaultFilterCharacteristics.FriendlyName,
          a1->pAdapterInstanceName);
      while ( a2->StatusIndicationsQueued )
        NdisMSleep(0x3E8u);
      if ( (a2->Flags & 0x8000) != 0 )
      {
        LowerFilter = a2->LowerFilter;
        if ( LowerFilter )
        {
          a1->MediaType = LowerFilter->MediaType;
          a1->PhysicalMediumType = a2->LowerFilter->PhysicalMediaType;
        }
        else
        {
          a1->MediaType = a1->MiniportMediaType;
          a1->PhysicalMediumType = a1->MiniportPhysicalMediumType;
        }
      }
      v10 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
      a2->Flags &= ~0x100u;
      a2->LockThread = 0LL;
      a2->LockDbg = 0;
      LOBYTE(a2->Flags) = 0;
      a2->Flags |= 8u;
      KeReleaseSpinLock(&a2->Lock, v10);
      a2->State = NdisFilterDetached;
      if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
        McTemplateK0jcqjzzz(
          (__int64)&a2->Miniport->InterfaceGuid,
          (__int64)a2->FilterInstanceName._Myptr,
          &a2->InterfaceGuid,
          (__int64)&a2->InterfaceGuid,
          0,
          35,
          (__int64)&a2->Miniport->InterfaceGuid,
          a2->Miniport->pAdapterInstanceName->Buffer,
          a2->FilterInstanceName._Myptr->Buffer,
          a2->FilterFriendlyName->Buffer);
      if ( (a2->Flags & 0x8000) != 0 )
        --a1->MediaChangeFilters;
      ndisFilterAttachCleanUp(a2, (__int64)a1, 1);
      ndisDereferenceMiniport((__int64)a1, 0x28u, v11, v12);
    }
  }
  ndisHandleFilterHandlersChange((__int64)a1);
  if ( v2 )
  {
    a2->Miniport = 0LL;
    ndisDereferenceFilter((KSPIN_LOCK *)&a2->Header.Type);
  }
  if ( v4 )
    ndisDereferenceMiniport((__int64)a1, 0x29u, v13, v14);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x25u, &WPP_bee287f1cada383e7b1ca74881464cf2_Traceguids, (__int64)a2);
}
