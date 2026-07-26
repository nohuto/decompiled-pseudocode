/*
 * XREFs of ndisIfDeregisterInterfaceEx @ 0x1C00255B4
 * Callers:
 *     ndisIfCreateOrUpdateInterface @ 0x1C0044894 (ndisIfCreateOrUpdateInterface.c)
 *     NdisIfDeregisterInterface @ 0x1C00BF3B0 (NdisIfDeregisterInterface.c)
 * Callees:
 *     ndisIfReferenceMiniport @ 0x1C0009344 (ndisIfReferenceMiniport.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C001B868 (IFBLOCK_DECREMENT_REF.c)
 *     ndisIfFindInterface @ 0x1C001CE94 (ndisIfFindInterface.c)
 *     ndisIfDereferenceMiniport @ 0x1C0020654 (ndisIfDereferenceMiniport.c)
 *     WPP_SF_d @ 0x1C0043BDC (WPP_SF_d.c)
 *     NdisMRemoveMiniportInternal @ 0x1C00614AC (NdisMRemoveMiniportInternal.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00AC4FC (ndisMSetMiniportReadyForBinding.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00B6D6C (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ?ndisPcwNotifyIfBlockRemoval@@YAXPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00BF3C0 (-ndisPcwNotifyIfBlockRemoval@@YAXPEAU_NDIS_IF_BLOCK@@@Z.c)
 */

void __fastcall ndisIfDeregisterInterfaceEx(unsigned int a1, int a2)
{
  struct _LIST_ENTRY *Interface; // rax
  KIRQL v5; // r10
  struct _NDIS_IF_BLOCK *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  KIRQL v9; // bl
  __int64 v10; // rcx
  __int64 v11; // rdx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_d(45LL, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, a1);
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  Interface = ndisIfFindInterface(a1);
  v6 = (struct _NDIS_IF_BLOCK *)Interface;
  if ( LOBYTE(Interface[87].Blink) )
    v6 = 0LL;
  else
    LOBYTE(Interface[87].Blink) = 1;
  KeReleaseSpinLock(&ndisIfListLock, v5);
  if ( !v6 )
  {
    if ( (unsigned __int8)byte_1C009261D < 3u )
      return;
    v10 = 46LL;
LABEL_18:
    WPP_SF_d(v10, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, a1);
    return;
  }
  v7 = ndisIfReferenceMiniport((__int64)v6, 0x14u);
  v8 = v7;
  if ( v7 )
  {
    ndisMSetMiniportReadyForBinding(v7, 0LL, 0x800000LL, 0LL);
    NdisMRemoveMiniportInternal(v8, 76LL);
    ndisIfDereferenceMiniport((__int64)v6, v11, 0x14u);
  }
  ndisPcwNotifyIfBlockRemoval(v6);
  ndisNsiNotifyClientInterfaceChange(v6, 2LL, 0LL);
  if ( !a2 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v6->AsyncEvent = &Event;
  }
  v9 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  IFBLOCK_DECREMENT_REF(v6, 0xFFu);
  KeReleaseSpinLock(&ndisIfListLock, v9);
  if ( !a2 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( (unsigned __int8)byte_1C009261D >= 4u )
  {
    v10 = 47LL;
    goto LABEL_18;
  }
}
