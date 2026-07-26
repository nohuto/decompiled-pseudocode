/*
 * XREFs of IFBLOCK_DECREMENT_REF @ 0x1C000634C
 * Callers:
 *     ndisIfDetachMiniportBlock @ 0x1C0001008 (ndisIfDetachMiniportBlock.c)
 *     ndisIfDeregisterInterfaceEx @ 0x1C00014EC (ndisIfDeregisterInterfaceEx.c)
 *     ?ndisNsiQueuedIfBlockRodChangeNotification@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0004530 (-ndisNsiQueuedIfBlockRodChangeNotification@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@PEAK@Z @ 0x1C0004954 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C003EE20 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C003F0B0 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C003FB90 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ndisIfAliasChange @ 0x1C00411E0 (ndisIfAliasChange.c)
 *     ndisIfCreateOrUpdateInterface @ 0x1C00413AC (ndisIfCreateOrUpdateInterface.c)
 *     ndisIfSetIfDescr @ 0x1C0041CD8 (ndisIfSetIfDescr.c)
 * Callees:
 *     NdisFreeRefCount @ 0x1C00013F0 (NdisFreeRefCount.c)
 *     ndisIfDeleteStackEntries @ 0x1C00023D0 (ndisIfDeleteStackEntries.c)
 *     NETWORKBLOCK_DECREMENT_REF @ 0x1C00027A4 (NETWORKBLOCK_DECREMENT_REF.c)
 *     NdisDereferenceWithTag @ 0x1C0006C70 (NdisDereferenceWithTag.c)
 */

void __fastcall IFBLOCK_DECREMENT_REF(_QWORD *P)
{
  int v3; // edi
  _QWORD **v4; // rdx
  PVOID *v5; // rcx
  _QWORD **v6; // rdx
  PVOID *v7; // rcx
  _QWORD **v8; // rdx
  PVOID *v9; // rcx
  __int64 v10; // rcx
  struct _NDIS_REFCOUNT_BLOCK *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  struct _KEVENT *v14; // rcx

  NdisDereferenceWithTag(P[180]);
  if ( (*((_DWORD *)P + 326))-- == 1 )
  {
    v3 = *((_DWORD *)P + 1);
    KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
    ndisIfDeleteStackEntries(P);
    *((_DWORD *)P + 324) = 0;
    *((_DWORD *)P + 325) = 0;
    KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
    v4 = (_QWORD **)P[154];
    if ( v4[1] != P + 154 || (v5 = (PVOID *)P[155], *v5 != P + 154) )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = v5;
    v6 = (_QWORD **)P[156];
    if ( v6[1] != P + 156 || (v7 = (PVOID *)P[157], *v7 != P + 156) )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = v7;
    v8 = (_QWORD **)P[158];
    if ( v8[1] != P + 158 || (v9 = (PVOID *)P[159], *v9 != P + 158) )
      __fastfail(3u);
    *v9 = v8;
    v8[1] = v9;
    NETWORKBLOCK_DECREMENT_REF(P[172]);
    v10 = (unsigned int)(v3 - 1) >> 3;
    if ( IfUsedIfIndicesLength >= (int)v10 + 1 )
      *((_BYTE *)IfUsedIfIndicesData + (unsigned int)v10) = *((_BYTE *)IfUsedIfIndicesData + v10) & ~(1 << ((v3 - 1) & 7));
    v11 = (struct _NDIS_REFCOUNT_BLOCK *)P[180];
    --ndisInterfaceCount;
    NdisFreeRefCount(v11);
    v12 = (void *)P[179];
    P[180] = 0LL;
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0);
      P[179] = 0LL;
    }
    v13 = (void *)P[160];
    if ( v13 )
    {
      ExFreePoolWithTag(v13, 0);
      P[160] = 0LL;
      *((_DWORD *)P + 322) = 0;
      *((_DWORD *)P + 323) = 0;
    }
    v14 = (struct _KEVENT *)P[174];
    if ( v14 )
      KeSetEvent(v14, 0, 0);
    ExFreePoolWithTag(P, 0);
  }
}
