/*
 * XREFs of ndisIfDeregisterInterfaceEx @ 0x1C00014EC
 * Callers:
 *     ndisIfCreateOrUpdateInterface @ 0x1C00413AC (ndisIfCreateOrUpdateInterface.c)
 *     NdisIfDeregisterInterface @ 0x1C00AB0B0 (NdisIfDeregisterInterface.c)
 * Callees:
 *     IFBLOCK_DECREMENT_REF @ 0x1C000634C (IFBLOCK_DECREMENT_REF.c)
 *     ndisIfDereferenceMiniport @ 0x1C00091B0 (ndisIfDereferenceMiniport.c)
 *     ndisIfReferenceMiniport @ 0x1C0009F38 (ndisIfReferenceMiniport.c)
 *     ndisIfFindInterface @ 0x1C001B8E4 (ndisIfFindInterface.c)
 *     WPP_SF_d @ 0x1C0040950 (WPP_SF_d.c)
 *     NdisMRemoveMiniportInternal @ 0x1C006186C (NdisMRemoveMiniportInternal.c)
 *     ?ndisPcwNotifyIfBlockRemoval@@YAXPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00AB0C8 (-ndisPcwNotifyIfBlockRemoval@@YAXPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00B4EFC (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00C103C (ndisMSetMiniportReadyForBinding.c)
 */

void __fastcall ndisIfDeregisterInterfaceEx(unsigned int a1, int a2)
{
  __int64 Interface; // rax
  KIRQL v5; // r10
  struct _NDIS_IF_BLOCK *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rbx
  KIRQL v10; // bl
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_d(45LL, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1);
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
    if ( (unsigned __int8)byte_1C009875D < 3u )
      return;
    v11 = 46LL;
LABEL_18:
    WPP_SF_d(v11, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1);
    return;
  }
  LOBYTE(v7) = 20;
  v8 = ndisIfReferenceMiniport(v6, v7);
  v9 = v8;
  if ( v8 )
  {
    ndisMSetMiniportReadyForBinding(v8, 0LL, 0x800000LL, 0LL);
    NdisMRemoveMiniportInternal(v9, 76LL);
    LOBYTE(v12) = 20;
    ndisIfDereferenceMiniport(v6, v13, v12);
  }
  ndisPcwNotifyIfBlockRemoval(v6);
  ndisNsiNotifyClientInterfaceChange(v6, 2LL, 0LL);
  if ( !a2 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v6->AsyncEvent = &Event;
  }
  v10 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  IFBLOCK_DECREMENT_REF(v6);
  KeReleaseSpinLock(&ndisIfListLock, v10);
  if ( !a2 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( (unsigned __int8)byte_1C009875D >= 4u )
  {
    v11 = 47LL;
    goto LABEL_18;
  }
}
