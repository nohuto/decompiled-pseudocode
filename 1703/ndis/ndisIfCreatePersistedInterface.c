/*
 * XREFs of ndisIfCreatePersistedInterface @ 0x1C00449D0
 * Callers:
 *     ndisCheckIfTypeMismatch @ 0x1C005EFE0 (ndisCheckIfTypeMismatch.c)
 *     ndisIfCreateInterfaceForiScsi @ 0x1C00D0F3C (ndisIfCreateInterfaceForiScsi.c)
 *     ndisHandlePnPRequest @ 0x1C00F7108 (ndisHandlePnPRequest.c)
 * Callees:
 *     ndisIfFindCompartmentBlock @ 0x1C000CFB0 (ndisIfFindCompartmentBlock.c)
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@W4NdisIfBlockSource@@@Z @ 0x1C00165F8 (-ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_.c)
 *     ndisIfFindInterfaceByNetLuid @ 0x1C0016734 (ndisIfFindInterfaceByNetLuid.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C00B7034 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     ndisInitializeNsi @ 0x1C00BD660 (ndisInitializeNsi.c)
 */

__int64 __fastcall ndisIfCreatePersistedInterface(union _NET_LUID_LH *a1, enum NdisIfBlockSource a2)
{
  unsigned int InterfaceFromPersistentStore; // ebx
  _LIST_ENTRY *InterfaceByNetLuid; // rbx
  KIRQL v6; // r8
  unsigned __int16 v7; // cx
  _LIST_ENTRY *CompartmentBlock; // rbx
  KIRQL v9; // r10
  bool v10; // zf
  _QWORD v12[10]; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v13; // [rsp+80h] [rbp+10h] BYREF

  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_q(0xBAu, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, (__int64)a1);
  if ( !ndisNsiInitialized )
    ndisInitializeNsi();
  if ( !a1 )
  {
    InterfaceFromPersistentStore = -1073741811;
    goto LABEL_18;
  }
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid((_LIST_ENTRY *)a1->Value);
  KeReleaseSpinLock(&ndisIfListLock, v6);
  if ( InterfaceByNetLuid )
    goto LABEL_8;
  v7 = *((_WORD *)&a1->Info + 3);
  v13 = (a1->Value >> 24) & 0xFFFFFF;
  InterfaceFromPersistentStore = ndisIfAllocateAndVerifyNetLuidIndex(v7, &v13, 0, 0);
  if ( !InterfaceFromPersistentStore )
  {
    LODWORD(a1[135].Value) = 1;
    KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    CompartmentBlock = ndisIfFindCompartmentBlock(a1[135].Value);
    KeReleaseSpinLock(&ndisIfListLock, v9);
    if ( !CompartmentBlock )
      goto LABEL_8;
    v10 = *((_DWORD *)&a1[135].Info + 1) == -1;
    *(_LIST_ENTRY *)&a1[133].Value = CompartmentBlock[3].Blink[2];
    if ( v10 )
      *((_DWORD *)&a1[135].Info + 1) = 0;
    if ( LODWORD(a1[136].Value) == -1 )
      LODWORD(a1[136].Value) = 0;
    memset(v12, 0, 0x48uLL);
    v12[0] = 0LL;
    LODWORD(v12[1]) = 0;
    v12[4] = 0x100000000LL;
    v12[2] = &NPI_MS_NDIS_MODULEID;
    LODWORD(v12[3]) = 10;
    v12[5] = a1;
    LODWORD(v12[6]) = 8;
    v12[7] = a1 + 1;
    LODWORD(v12[8]) = 1156;
    if ( (int)NsiSetAllParametersEx(v12) < 0 )
    {
LABEL_8:
      InterfaceFromPersistentStore = -1073741823;
      goto LABEL_18;
    }
    InterfaceFromPersistentStore = ndisIfCreateInterfaceFromPersistentStore(a1, (struct _GUID *)&a1[1], a2);
    if ( InterfaceFromPersistentStore )
    {
      HIDWORD(v12[4]) = 3;
      NsiSetAllParametersEx(v12);
    }
  }
LABEL_18:
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_qD(0xBBu, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, (__int64)a1, InterfaceFromPersistentStore);
  return InterfaceFromPersistentStore;
}
