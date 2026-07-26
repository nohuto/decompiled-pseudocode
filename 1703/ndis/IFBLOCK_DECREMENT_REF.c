/*
 * XREFs of IFBLOCK_DECREMENT_REF @ 0x1C001B868
 * Callers:
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@PEAK@Z @ 0x1C001B330 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ?ndisNsiQueuedIfBlockRodChangeNotification@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C001C570 (-ndisNsiQueuedIfBlockRodChangeNotification@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ndisIfDetachMiniportBlock @ 0x1C0025030 (ndisIfDetachMiniportBlock.c)
 *     ndisIfDeregisterInterfaceEx @ 0x1C00255B4 (ndisIfDeregisterInterfaceEx.c)
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C00422E0 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0042570 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0043050 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ndisIfAliasChange @ 0x1C00446C8 (ndisIfAliasChange.c)
 *     ndisIfCreateOrUpdateInterface @ 0x1C0044894 (ndisIfCreateOrUpdateInterface.c)
 *     ndisIfSetIfDescr @ 0x1C0044FFC (ndisIfSetIfDescr.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1C000C850 (NdisDereferenceWithTag.c)
 *     NdisFreeRefCount @ 0x1C0025560 (NdisFreeRefCount.c)
 *     ndisIfDeleteStackEntries @ 0x1C0026758 (ndisIfDeleteStackEntries.c)
 *     NETWORKBLOCK_DECREMENT_REF @ 0x1C0027164 (NETWORKBLOCK_DECREMENT_REF.c)
 */

void __fastcall IFBLOCK_DECREMENT_REF(_QWORD *P, unsigned __int8 a2)
{
  int v4; // edi
  _QWORD **v5; // rdx
  PVOID *v6; // rcx
  _QWORD **v7; // rdx
  PVOID *v8; // rcx
  _QWORD **v9; // rdx
  PVOID *v10; // rcx
  __int64 v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  struct _KEVENT *v15; // rcx

  NdisDereferenceWithTag(P[180], a2);
  if ( (*((_DWORD *)P + 326))-- == 1 )
  {
    v4 = *((_DWORD *)P + 1);
    KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
    ndisIfDeleteStackEntries(P);
    *((_DWORD *)P + 324) = 0;
    *((_DWORD *)P + 325) = 0;
    KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
    v5 = (_QWORD **)P[154];
    v6 = (PVOID *)P[155];
    if ( v5[1] != P + 154 || *v6 != P + 154 )
      __fastfail(3u);
    *v6 = v5;
    v5[1] = v6;
    v7 = (_QWORD **)P[156];
    v8 = (PVOID *)P[157];
    if ( v7[1] != P + 156 || *v8 != P + 156 )
      __fastfail(3u);
    *v8 = v7;
    v7[1] = v8;
    v9 = (_QWORD **)P[158];
    v10 = (PVOID *)P[159];
    if ( v9[1] != P + 158 || *v10 != P + 158 )
      __fastfail(3u);
    *v10 = v9;
    v9[1] = v10;
    NETWORKBLOCK_DECREMENT_REF(P[172]);
    v11 = (unsigned int)(v4 - 1) >> 3;
    if ( IfUsedIfIndicesLength >= (int)v11 + 1 )
      *((_BYTE *)IfUsedIfIndicesData + (unsigned int)v11) = *((_BYTE *)IfUsedIfIndicesData + v11) & ~(1 << ((v4 - 1) & 7));
    v12 = (void *)P[180];
    --ndisInterfaceCount;
    NdisFreeRefCount(v12);
    v13 = (void *)P[179];
    P[180] = 0LL;
    if ( v13 )
    {
      ExFreePoolWithTag(v13, 0);
      P[179] = 0LL;
    }
    v14 = (void *)P[160];
    if ( v14 )
    {
      ExFreePoolWithTag(v14, 0);
      P[160] = 0LL;
      *((_DWORD *)P + 322) = 0;
      *((_DWORD *)P + 323) = 0;
    }
    v15 = (struct _KEVENT *)P[174];
    if ( v15 )
      KeSetEvent(v15, 0, 0);
    ExFreePoolWithTag(P, 0);
  }
}
