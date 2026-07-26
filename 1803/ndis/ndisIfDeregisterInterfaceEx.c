/*
 * XREFs of ndisIfDeregisterInterfaceEx @ 0x1C00121B4
 * Callers:
 *     ndisIfCreateOrUpdateInterface @ 0x1C00424F4 (ndisIfCreateOrUpdateInterface.c)
 *     NdisIfDeregisterInterface @ 0x1C00B2850 (NdisIfDeregisterInterface.c)
 * Callees:
 *     ndisIfReferenceMiniport @ 0x1C000DF28 (ndisIfReferenceMiniport.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C001BE18 (IFBLOCK_DECREMENT_REF.c)
 *     ndisIfFindInterface @ 0x1C00206F4 (ndisIfFindInterface.c)
 *     ndisIfDereferenceMiniport @ 0x1C0021310 (ndisIfDereferenceMiniport.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 *     NdisMRemoveMiniportInternal @ 0x1C00621EC (NdisMRemoveMiniportInternal.c)
 *     ?ndisPcwNotifyIfBlockRemoval@@YAXPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00B2868 (-ndisPcwNotifyIfBlockRemoval@@YAXPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00C078C (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00C67C8 (ndisMSetMiniportReadyForBinding.c)
 */

void __fastcall ndisIfDeregisterInterfaceEx(unsigned int a1, int a2)
{
  __int64 Interface; // rax
  KIRQL v5; // r10
  struct _NDIS_IF_BLOCK *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  KIRQL v9; // bl
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_d(45LL, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1);
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  Interface = ndisIfFindInterface(a1);
  v6 = (struct _NDIS_IF_BLOCK *)Interface;
  if ( *(_BYTE *)(Interface + 1400) )
    v6 = 0LL;
  else
    *(_BYTE *)(Interface + 1400) = 1;
  KeReleaseSpinLock(&ndisIfListLock, v5);
  if ( !v6 )
  {
    if ( (unsigned __int8)byte_1C009961D < 3u )
      return;
    v10 = 46LL;
LABEL_18:
    WPP_SF_d(v10, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1);
    return;
  }
  v7 = ndisIfReferenceMiniport((__int64)v6, 0x14u);
  v8 = v7;
  if ( v7 )
  {
    ndisMSetMiniportReadyForBinding(v7, 0LL, 0x800000LL, 0LL);
    NdisMRemoveMiniportInternal(v8, 76LL);
    LOBYTE(v11) = 20;
    ndisIfDereferenceMiniport(v6, v12, v11);
  }
  ndisPcwNotifyIfBlockRemoval(v6);
  ndisNsiNotifyClientInterfaceChange(v6, 2LL, 0LL);
  if ( !a2 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v6->AsyncEvent = &Event;
  }
  v9 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  IFBLOCK_DECREMENT_REF(v6);
  KeReleaseSpinLock(&ndisIfListLock, v9);
  if ( !a2 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( (unsigned __int8)byte_1C009961D >= 4u )
  {
    v10 = 47LL;
    goto LABEL_18;
  }
}
