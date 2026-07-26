/*
 * XREFs of ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C00048E4
 * Callers:
 *     ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x1C00047CC (-ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPE.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C003DFB0 (-ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 * Callees:
 *     NETWORKBLOCK_DECREMENT_REF @ 0x1C00027A4 (NETWORKBLOCK_DECREMENT_REF.c)
 *     ndisIfUpdateFilterIfStack @ 0x1C000469C (ndisIfUpdateFilterIfStack.c)
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C0004ED8 (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 *     ndisIfDereferenceMiniport @ 0x1C00091B0 (ndisIfDereferenceMiniport.c)
 *     ndisIfReferenceMiniport @ 0x1C0009F38 (ndisIfReferenceMiniport.c)
 *     ndisMDereferenceIfBlock @ 0x1C001F488 (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C001F6AC (ndisMReferenceIfBlock.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C00204BC (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 */

__int64 __fastcall ndisIfUpdateInterfaceIsolationNetworkIdLocked(
        struct _NDIS_IF_BLOCK *a1,
        const struct _GUID *a2,
        char a3)
{
  _GUID *p_NetworkGuid; // r13
  _NDIS_IF_NETWORK_BLOCK *Network; // rbp
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rax
  __int64 v10; // rdx
  struct _NDIS_IF_NETWORK_BLOCK *v11; // rdi
  _NDIS_IF_COMPARTMENT_BLOCK *Compartment; // rax
  char v13; // r14
  __int64 v14; // rdx
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // r15
  __int64 v16; // rdx
  __int64 v17; // r8
  _LIST_ENTRY *p_NetworkLink; // rsi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *p_InterfaceLink; // rax
  _LIST_ENTRY *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rdx
  struct _GUID NetworkGuid; // [rsp+20h] [rbp-58h] BYREF

  p_NetworkGuid = &a1->NetworkGuid;
  if ( !(unsigned int)ndisCompareGuid(&a1->NetworkGuid, a2) )
    return 0LL;
  Network = a1->Network;
  if ( Network )
  {
    NetworkBlock = ndisIfFindNetworkBlock(a2);
    v11 = NetworkBlock;
    if ( NetworkBlock )
    {
      if ( (NetworkBlock->Flags & 3) == 0 )
      {
        if ( a1->NetworkIdOverridden && !a3 )
          return 0LL;
        Compartment = Network->Compartment;
        if ( Compartment->LoopbackIf == a1 )
        {
          if ( v11->Compartment != Compartment )
            return 3221225485LL;
          Compartment->LoopbackNetwork = v11;
          Network->Compartment->LoopbackInfo.LoopbackIfNetworkGuid = v11->NetworkGuid;
        }
        if ( a1->ProviderHandle != ndisIfProviderHandle || (a1->Flags & 2) == 0 )
          goto LABEL_20;
        v13 = 0;
        if ( a1->IsNdisFilter )
        {
          NetworkGuid = *(struct _GUID *)(*(_QWORD *)(*(_QWORD *)&a1->Miniport->Reserved4.Length + 4064LL) + 580LL);
        }
        else
        {
          LOBYTE(v10) = 6;
          if ( !ndisIfReferenceMiniport(a1, v10) )
            goto LABEL_20;
          LOBYTE(v14) = 8;
          BaseMiniport = a1->Miniport->BaseMiniport;
          if ( ndisMReferenceIfBlock(BaseMiniport, v14) )
          {
            LOBYTE(v16) = 8;
            v13 = 1;
            NetworkGuid = BaseMiniport->IfBlock->NetworkGuid;
            ndisMDereferenceIfBlock(BaseMiniport, v16);
          }
          LOBYTE(v17) = 6;
          ndisIfDereferenceMiniport(a1, v16, v17);
          if ( !v13 )
            goto LABEL_20;
        }
        if ( !(unsigned int)ndisCompareGuid(a2, &NetworkGuid) )
        {
LABEL_20:
          p_NetworkLink = &a1->NetworkLink;
          Flink = a1->NetworkLink.Flink;
          if ( Flink->Blink != &a1->NetworkLink || (Blink = a1->NetworkLink.Blink, Blink->Flink != p_NetworkLink) )
            __fastfail(3u);
          Blink->Flink = Flink;
          Flink->Blink = Blink;
          NETWORKBLOCK_DECREMENT_REF((__int64)Network);
          p_InterfaceLink = &v11->InterfaceLink;
          v22 = v11->InterfaceLink.Flink;
          if ( v22->Blink != &v11->InterfaceLink )
            __fastfail(3u);
          p_NetworkLink->Flink = v22;
          a1->NetworkLink.Blink = p_InterfaceLink;
          v22->Blink = p_NetworkLink;
          p_InterfaceLink->Flink = p_NetworkLink;
          ++v11->Ref;
          a1->Compartment = v11->Compartment;
          a1->CompartmentId = v11->Compartment->CompartmentId;
          a1->Network = v11;
          *p_NetworkGuid = v11->NetworkGuid;
          if ( a3 )
            a1->NetworkIdOverridden = 1;
          if ( a1->ProviderHandle == ndisIfProviderHandle && (a1->Flags & 2) == 0 )
          {
            LOBYTE(v22) = 7;
            v23 = ndisIfReferenceMiniport(a1, v22);
            if ( v23 )
            {
              ndisIfUpdateFilterIfStack(v23);
              LOBYTE(v24) = 7;
              ndisIfDereferenceMiniport(a1, v25, v24);
            }
          }
          return 0LL;
        }
      }
    }
  }
  return 3221225485LL;
}
