/*
 * XREFs of ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0043260
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetNsiClientInfo @ 0x1C000CE98 (ndisGetNsiClientInfo.c)
 *     ndisIfFindCompartmentBlock @ 0x1C000CFB0 (ndisIfFindCompartmentBlock.c)
 *     COMPARTMENTBLOCK_DECREMENT_REF @ 0x1C000D334 (COMPARTMENTBLOCK_DECREMENT_REF.c)
 *     ndisIsCompartmentAccessibleByClient @ 0x1C000D34C (ndisIsCompartmentAccessibleByClient.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C001B9F4 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     NETWORKBLOCK_DECREMENT_REF @ 0x1C0027164 (NETWORKBLOCK_DECREMENT_REF.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ?ndisIfReleaseSiteId@@YAXK@Z @ 0x1C00411B8 (-ndisIfReleaseSiteId@@YAXK@Z.c)
 *     ?ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z @ 0x1C00415F4 (-ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z.c)
 *     ?ndisNsiNotifyClientNetworkChange@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@@Z @ 0x1C00D0D58 (-ndisNsiNotifyClientNetworkChange@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_.c)
 */

__int64 __fastcall ndisNsiSetNetworkInfo(struct _NM_REQUEST_SET_PARAMETER *a1)
{
  unsigned int v1; // edi
  char v2; // r15
  KIRQL v4; // r12
  __int64 v5; // rsi
  unsigned int v6; // ebx
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rax
  struct _NDIS_IF_NETWORK_BLOCK *v8; // rsi
  _LIST_ENTRY *CompartmentBlock; // r11
  int v10; // eax
  unsigned int Flags; // eax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  __int64 v14; // r11
  _LIST_ENTRY *v15; // rcx
  _LIST_ENTRY *v16; // rax
  KIRQL v17; // bl
  unsigned int v18; // eax
  unsigned int v19; // edx
  __int64 v20; // rcx
  unsigned int v21; // eax
  unsigned int v23; // [rsp+30h] [rbp-D0h] BYREF
  struct _KEVENT Event; // [rsp+38h] [rbp-C8h] BYREF
  struct _NDIS_NSI_NETWORK_RW v25; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v26[2]; // [rsp+260h] [rbp+160h] BYREF
  unsigned __int64 v27; // [rsp+270h] [rbp+170h]

  v1 = 0;
  v2 = 0;
  v23 = 0;
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_q(0x72u, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, (__int64)a1);
  ndisGetNsiClientInfo((__int64)v26);
  KeEnterCriticalRegion();
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  memset(&v25, 0, sizeof(v25));
  if ( *((_DWORD *)a1 + 6) != 16
    || *((_DWORD *)a1 + 8)
    || (v5 = *((unsigned int *)a1 + 13), v6 = *((_DWORD *)a1 + 12), v6 + (unsigned int)v5 > 0x210)
    || v6 + (unsigned int)v5 < v6 )
  {
    v1 = -1073741808;
    goto LABEL_31;
  }
  memmove(&v25.Header.Type + v5, *((const void **)a1 + 5), v6);
  if ( !(_DWORD)v5 )
  {
LABEL_8:
    v1 = -1073741811;
LABEL_31:
    KeReleaseSpinLock(&ndisIfListLock, v4);
    goto LABEL_32;
  }
  if ( (unsigned int)v5 <= 4 )
  {
    if ( v6 < 4 )
      goto LABEL_8;
    v2 = 1;
  }
  NetworkBlock = ndisIfFindNetworkBlock(*((const struct _GUID **)a1 + 2));
  v8 = NetworkBlock;
  if ( !NetworkBlock || !ndisIsCompartmentAccessibleByClient((__int64)NetworkBlock->Compartment, (__int64)v26, 1) )
    goto LABEL_8;
  if ( v2 )
    CompartmentBlock = ndisIfFindCompartmentBlock(v25.CompartmentId);
  if ( !CompartmentBlock )
    goto LABEL_8;
  v10 = *((_DWORD *)a1 + 14);
  if ( !v10 )
  {
    v18 = ndisNsiChangeNetworkInfo(v8, &v25, *((_DWORD *)a1 + 12), *((_DWORD *)a1 + 13), &v23);
    v19 = v23;
    v1 = v18;
    if ( v23 )
    {
      ++v8->Ref;
      v20 = *((_QWORD *)a1 + 5);
      v27 = 0LL;
      v26[0] = 0LL;
      v21 = *((_DWORD *)a1 + 13);
      v26[1] = v20;
      v27 = __PAIR64__(v21, v19);
      KeReleaseSpinLock(&ndisIfListLock, v4);
      ndisNsiNotifyClientNetworkChange(v8, 0LL, v26);
      v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      NETWORKBLOCK_DECREMENT_REF((__int64)v8);
    }
    goto LABEL_31;
  }
  if ( v10 != 3 )
    goto LABEL_8;
  if ( v8->InterfaceLink.Flink != &v8->InterfaceLink )
    goto LABEL_8;
  Flags = v8->Flags;
  if ( (Flags & 1) != 0 )
    goto LABEL_8;
  v8->Flags = Flags | 1;
  Flink = v8->CompartmentLink.Flink;
  Blink = v8->CompartmentLink.Blink;
  if ( Flink->Blink != &v8->CompartmentLink || Blink->Flink != &v8->CompartmentLink )
    __fastfail(3u);
  --ndisIfNetworkCount;
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  ndisIfReleaseSiteId(v8->NetworkInfo.SiteId);
  COMPARTMENTBLOCK_DECREMENT_REF(v14);
  v15 = v8->Link.Flink;
  v16 = v8->Link.Blink;
  if ( (struct _NDIS_IF_NETWORK_BLOCK *)v8->Link.Flink->Blink != v8 || (struct _NDIS_IF_NETWORK_BLOCK *)v16->Flink != v8 )
    __fastfail(3u);
  v16->Flink = v15;
  v15->Blink = v16;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v8->AsyncEvent = &Event;
  KeReleaseSpinLock(&ndisIfListLock, v4);
  ndisNsiNotifyClientNetworkChange(v8, 2LL, 0LL);
  v17 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  NETWORKBLOCK_DECREMENT_REF((__int64)v8);
  KeReleaseSpinLock(&ndisIfListLock, v17);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  v8->AsyncEvent = 0LL;
  ExFreePoolWithTag(v8, 0);
LABEL_32:
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_qD(0x73u, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, (__int64)a1, v1);
  return v1;
}
