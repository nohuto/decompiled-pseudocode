/*
 * XREFs of ndisIfCreateOrUpdateInterface @ 0x1C00413AC
 * Callers:
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C00E319C (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 * Callees:
 *     ndisIfDeregisterInterfaceEx @ 0x1C00014EC (ndisIfDeregisterInterfaceEx.c)
 *     ndisIfFindInterfaceByInterfaceGuid @ 0x1C0004610 (ndisIfFindInterfaceByInterfaceGuid.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C000634C (IFBLOCK_DECREMENT_REF.c)
 *     NdisReferenceWithTag @ 0x1C000C060 (NdisReferenceWithTag.c)
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C003DD30 (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 *     ?ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z @ 0x1C00AF660 (-ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x1C00C7114 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 */

void __fastcall ndisIfCreateOrUpdateInterface(struct _GUID *this)
{
  int v2; // eax
  KIRQL v3; // si
  struct _LIST_ENTRY *InterfaceByInterfaceGuid; // rax
  struct _LIST_ENTRY *v5; // rdi
  KIRQL v6; // bl
  unsigned int Flink_high; // ebx
  KIRQL v8; // si
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  Handle = 0LL;
  v2 = ndisIfOpenInterfacePersistedStorage(this, (struct KRegKey *)&Handle, 1u);
  if ( (int)(v2 + 0x80000000) >= 0 && v2 != -1073741772 )
    goto LABEL_14;
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  InterfaceByInterfaceGuid = ndisIfFindInterfaceByInterfaceGuid(this);
  v5 = InterfaceByInterfaceGuid;
  if ( InterfaceByInterfaceGuid )
  {
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)InterfaceByInterfaceGuid[90].Flink, 0xEu);
    ++LODWORD(v5[81].Blink);
  }
  KeReleaseSpinLock(&ndisIfListLock, v3);
  if ( Handle )
  {
    if ( v5 )
    {
      ndisIfUpdateIfBlockFromPersistedState((struct _NDIS_IF_BLOCK *)v5, (struct KRegKey *)&Handle);
      v6 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      IFBLOCK_DECREMENT_REF(v5);
      KeReleaseSpinLock(&ndisIfListLock, v6);
    }
    else
    {
      ndisLoadNetworkInterfaceFromPersistedState(this, (struct KRegKey *)&Handle);
    }
    goto LABEL_14;
  }
  if ( v5 )
  {
    Flink_high = 0;
    v8 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    if ( LODWORD(v5[88].Flink) == 2 )
      Flink_high = HIDWORD(v5->Flink);
    IFBLOCK_DECREMENT_REF(v5);
    KeReleaseSpinLock(&ndisIfListLock, v8);
    if ( Flink_high )
    {
      ndisIfDeregisterInterfaceEx(Flink_high, 1);
LABEL_14:
      if ( Handle )
        ZwClose(Handle);
    }
  }
}
