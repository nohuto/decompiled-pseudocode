/*
 * XREFs of ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0043050
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetNsiClientInfo @ 0x1C000CE98 (ndisGetNsiClientInfo.c)
 *     ndisIsCompartmentAccessibleByClient @ 0x1C000D34C (ndisIsCompartmentAccessibleByClient.c)
 *     ndisIfFindInterfaceByNetLuid @ 0x1C0016734 (ndisIfFindInterfaceByNetLuid.c)
 *     NdisReferenceWithTag @ 0x1C001B270 (NdisReferenceWithTag.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C001B868 (IFBLOCK_DECREMENT_REF.c)
 *     ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x1C001CBB0 (-ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPE.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00B6D6C (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

__int64 __fastcall ndisNsiSetInterfaceInformation(struct _NM_REQUEST_SET_PARAMETER *a1)
{
  struct _NDIS_IF_BLOCK *v1; // rsi
  unsigned int v3; // r14d
  KIRQL v4; // r15
  unsigned int v5; // ebx
  __int64 v6; // r14
  unsigned int v7; // ebx
  _LIST_ENTRY *InterfaceByNetLuid; // rax
  unsigned int v9; // eax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  unsigned int v12[2]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B8h]
  _BYTE v15[1088]; // [rsp+58h] [rbp-B0h] BYREF

  v1 = 0LL;
  v3 = 0;
  v12[0] = 0;
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_q(0x54u, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, (__int64)a1);
  ndisGetNsiClientInfo((__int64)v13);
  KeEnterCriticalRegion();
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  memset(v15, 0, sizeof(v15));
  if ( *((_DWORD *)a1 + 6) != 8 )
    goto LABEL_4;
  if ( *((_DWORD *)a1 + 8) || *((_DWORD *)a1 + 14) )
  {
    v5 = -1073741811;
  }
  else
  {
    v6 = *((unsigned int *)a1 + 13);
    v7 = *((_DWORD *)a1 + 12);
    if ( v7 + (unsigned int)v6 > 0x440
      || v7 + (unsigned int)v6 < v7
      || (memmove(&v15[v6], *((const void **)a1 + 5), v7),
          InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(**((_LIST_ENTRY ***)a1 + 2)),
          (v1 = (struct _NDIS_IF_BLOCK *)InterfaceByNetLuid) == 0LL)
      || !ndisIsCompartmentAccessibleByClient((__int64)InterfaceByNetLuid[86].Blink, (__int64)v13, 1) )
    {
LABEL_4:
      v5 = -1073741811;
      goto LABEL_15;
    }
    v9 = ndisNsiChangeInterfaceInfo(
           v1,
           (struct _NDIS_NSI_INTERFACE_INFORMATION_RW *)v15,
           v7,
           v6,
           (unsigned __int16 *)v12);
    v3 = v12[0];
    v5 = v9;
  }
  if ( v3 )
  {
    RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v1->RefCountTracker;
    v14 = 0LL;
    v13[0] = 0LL;
    v13[1] = *((_QWORD *)a1 + 5);
    HIDWORD(v14) = *((_DWORD *)a1 + 13);
    LODWORD(v14) = v3;
    NdisReferenceWithTag(RefCountTracker, 5u);
    ++v1->Ref;
    KeReleaseSpinLock(&ndisIfListLock, v4);
    ndisNsiNotifyClientInterfaceChange(v1, 0LL, v13);
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    IFBLOCK_DECREMENT_REF(v1, 5u);
  }
LABEL_15:
  KeReleaseSpinLock(&ndisIfListLock, v4);
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_qD(0x55u, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, (__int64)a1, v5);
  return v5;
}
