/*
 * XREFs of ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00FAB6C
 * Callers:
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00BF038 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniportByHandle @ 0x1C0015E38 (ndisReferenceMiniportByHandle.c)
 *     ndisHandleFilterHandlersChange @ 0x1C001C624 (ndisHandleFilterHandlersChange.c)
 *     ndisSetupWmiNode @ 0x1C001C8F4 (ndisSetupWmiNode.c)
 *     ndisCloseRef @ 0x1C001D0D4 (ndisCloseRef.c)
 *     ndisFilterAttachCleanUp @ 0x1C002513C (ndisFilterAttachCleanUp.c)
 *     ndisDereferenceFilter @ 0x1C00252A0 (ndisDereferenceFilter.c)
 *     ndisReferenceFilterByHandle @ 0x1C00256FC (ndisReferenceFilterByHandle.c)
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     Template_qqq @ 0x1C0043A1C (Template_qqq.c)
 *     WPP_SF_qqZZ @ 0x1C005C678 (WPP_SF_qqZZ.c)
 *     Template_jcqjzzz @ 0x1C0073AF8 (Template_jcqjzzz.c)
 *     ndisDereferencePackage @ 0x1C00A5008 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00A502C (ndisReferencePackage.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00B5704 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXKK_K@Z @ 0x1C00B5B18 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     NdisMSleep @ 0x1C00BC470 (NdisMSleep.c)
 *     ndisFInvokeDetach @ 0x1C00BF418 (ndisFInvokeDetach.c)
 *     ?ndisFilterWaitForPnPComplete@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00BF468 (-ndisFilterWaitForPnPComplete@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisFNotifyDetach @ 0x1C00BF48C (ndisFNotifyDetach.c)
 */

void __fastcall ndisDetachFilterInner(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_FILTER_BLOCK *a2)
{
  char v2; // r14
  char v4; // r15
  char v6; // dl
  PVOID v7; // rbp
  char *v8; // rbx
  __int64 v9; // rcx
  NTSTATUS v10; // ebx
  __int64 v11; // r9
  KIRQL v12; // al
  _NDIS_FILTER_BLOCK *LowerFilter; // rax
  PVOID WnodeEventItem; // [rsp+90h] [rbp+18h] BYREF
  struct NDISWATCHDOG__ *v15; // [rsp+98h] [rbp+20h] BYREF

  v2 = 0;
  v4 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x22u, &WPP_71a2ef01b9413cf456b1a739814e8f19_Traceguids, (__int64)a2);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( ndisReferenceFilterByHandle(a2, v6) )
  {
    v2 = 1;
    if ( ndisReferenceMiniportByHandle(a1, 0, 0x29u) )
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
      v7 = WnodeEventItem;
      if ( WnodeEventItem )
      {
        v8 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
        memmove(
          v8,
          a2->FilterDriver->DefaultFilterCharacteristics.UniqueName.Buffer,
          a2->FilterDriver->DefaultFilterCharacteristics.UniqueName.Length);
        memmove(
          &v8[a2->FilterDriver->DefaultFilterCharacteristics.UniqueName.Length + 2],
          a1->BindPaths->Paths[0].Buffer,
          a1->BindPaths->Paths[0].Length);
        v10 = IoWMIWriteEvent(v7);
        if ( v10 < 0 )
        {
          if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
            WPP_SF_(0x23u, &WPP_71a2ef01b9413cf456b1a739814e8f19_Traceguids);
          if ( (Microsoft_Windows_NDISEnableBits & 0x100) != 0 )
            Template_qqq(v9, &FilterRemovalIndicationFailed, &a2->InterfaceGuid, v10, 216, 0);
          ExFreePoolWithTag(v7, 0);
        }
      }
      a2->State = NdisFilterDetaching;
      if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
        Template_jcqjzzz(
          (__int64)&a2->Miniport->InterfaceGuid,
          (__int64)a2->FilterInstanceName._Myptr,
          &a2->InterfaceGuid,
          (unsigned __int64)&a2->InterfaceGuid,
          6,
          225,
          (__int64)&a2->Miniport->InterfaceGuid,
          a2->Miniport->pAdapterInstanceName->Buffer,
          a2->FilterInstanceName._Myptr->Buffer,
          a2->FilterFriendlyName->Buffer);
      ndisFilterWaitForPnPComplete(a2);
      ndisMakeWatchdog((struct _NDIS_REFCOUNT_BLOCK **)&v15, a2, (_NDIS_REFCOUNT_STACK_ENTRY)20, v11, 0LL);
      ndisFInvokeDetach((__int64)a2);
      if ( v15 != (struct NDISWATCHDOG__ *)-1LL )
        ndisFreeWatchdog((struct _NDIS_REFCOUNT_BLOCK *)v15);
      if ( (unsigned __int8)byte_1C0092610 >= 4u )
        WPP_SF_qqZZ(
          0x24u,
          &WPP_71a2ef01b9413cf456b1a739814e8f19_Traceguids,
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
      v12 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
      a2->Flags &= ~0x100u;
      a2->LockThread = 0LL;
      a2->LockDbg = 0;
      LOBYTE(a2->Flags) = 0;
      a2->Flags |= 8u;
      KeReleaseSpinLock(&a2->Lock, v12);
      a2->State = NdisFilterDetached;
      if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
        Template_jcqjzzz(
          (__int64)&a2->Miniport->InterfaceGuid,
          (__int64)a2->FilterInstanceName._Myptr,
          &a2->InterfaceGuid,
          (unsigned __int64)&a2->InterfaceGuid,
          0,
          28,
          (__int64)&a2->Miniport->InterfaceGuid,
          a2->Miniport->pAdapterInstanceName->Buffer,
          a2->FilterInstanceName._Myptr->Buffer,
          a2->FilterFriendlyName->Buffer);
      if ( (a2->Flags & 0x8000) != 0 )
        --a1->MediaChangeFilters;
      ndisFilterAttachCleanUp(a2, (__int64)a1, 1);
      ndisDereferenceMiniport((__int64)a1, 0x28u);
    }
  }
  ndisHandleFilterHandlersChange((__int64)a1);
  if ( v2 )
  {
    a2->Miniport = 0LL;
    ndisDereferenceFilter(a2, 0);
  }
  if ( v4 )
    ndisDereferenceMiniport((__int64)a1, 0x29u);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x25u, &WPP_71a2ef01b9413cf456b1a739814e8f19_Traceguids, (__int64)a2);
}
