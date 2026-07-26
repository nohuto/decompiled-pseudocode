/*
 * XREFs of ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C001CCC8
 * Callers:
 *     ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x1C001CBB0 (-ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPE.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C0041468 (-ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 * Callees:
 *     ndisIfReferenceMiniport @ 0x1C0009344 (ndisIfReferenceMiniport.c)
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C00108F0 (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 *     ndisMDereferenceIfBlock @ 0x1C0019F9C (ndisMDereferenceIfBlock.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C001B9F4 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ndisIfUpdateFilterIfStack @ 0x1C001CA80 (ndisIfUpdateFilterIfStack.c)
 *     ndisIfDereferenceMiniport @ 0x1C0020654 (ndisIfDereferenceMiniport.c)
 *     ndisMReferenceIfBlock @ 0x1C0022560 (ndisMReferenceIfBlock.c)
 *     NETWORKBLOCK_DECREMENT_REF @ 0x1C0027164 (NETWORKBLOCK_DECREMENT_REF.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

__int64 __fastcall ndisIfUpdateInterfaceIsolationNetworkIdLocked(
        struct _NDIS_IF_BLOCK *a1,
        const struct _GUID *a2,
        char a3)
{
  _GUID *p_NetworkGuid; // r13
  _NDIS_IF_NETWORK_BLOCK *Network; // rbp
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rax
  struct _NDIS_IF_NETWORK_BLOCK *v10; // rdi
  _NDIS_IF_COMPARTMENT_BLOCK *Compartment; // rax
  char v12; // r14
  __int64 v13; // rdx
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // r15
  __int64 v15; // rdx
  __int64 v16; // r8
  _LIST_ENTRY *p_NetworkLink; // rsi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *p_InterfaceLink; // rax
  _LIST_ENTRY *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rdx
  struct _GUID NetworkGuid; // [rsp+20h] [rbp-58h] BYREF

  p_NetworkGuid = &a1->NetworkGuid;
  if ( !(unsigned int)ndisCompareGuid(&a1->NetworkGuid, a2) )
    return 0LL;
  Network = a1->Network;
  if ( Network )
  {
    NetworkBlock = ndisIfFindNetworkBlock(a2);
    v10 = NetworkBlock;
    if ( NetworkBlock )
    {
      if ( (NetworkBlock->Flags & 3) == 0 )
      {
        if ( a1->NetworkIdOverridden && !a3 )
          return 0LL;
        Compartment = Network->Compartment;
        if ( Compartment->LoopbackIf == a1 )
        {
          if ( v10->Compartment != Compartment )
            return 3221225485LL;
          Compartment->LoopbackNetwork = v10;
          Network->Compartment->LoopbackInfo.LoopbackIfNetworkGuid = v10->NetworkGuid;
        }
        if ( a1->ProviderHandle != ndisIfProviderHandle || (a1->Flags & 2) == 0 )
          goto LABEL_20;
        v12 = 0;
        if ( a1->IsNdisFilter )
        {
          NetworkGuid = *(struct _GUID *)(*(_QWORD *)(*(_QWORD *)&a1->Miniport->Reserved4.Length + 4064LL) + 580LL);
        }
        else
        {
          if ( !ndisIfReferenceMiniport((__int64)a1, 6u) )
            goto LABEL_20;
          LOBYTE(v13) = 8;
          BaseMiniport = a1->Miniport->BaseMiniport;
          if ( ndisMReferenceIfBlock(BaseMiniport, v13) )
          {
            v12 = 1;
            NetworkGuid = BaseMiniport->IfBlock->NetworkGuid;
            ndisMDereferenceIfBlock((__int64)BaseMiniport, 8u);
          }
          LOBYTE(v16) = 6;
          ndisIfDereferenceMiniport(a1, v15, v16);
          if ( !v12 )
            goto LABEL_20;
        }
        if ( !(unsigned int)ndisCompareGuid(a2, &NetworkGuid) )
        {
LABEL_20:
          p_NetworkLink = &a1->NetworkLink;
          Flink = a1->NetworkLink.Flink;
          Blink = a1->NetworkLink.Blink;
          if ( Flink->Blink != &a1->NetworkLink || Blink->Flink != p_NetworkLink )
            __fastfail(3u);
          Blink->Flink = Flink;
          Flink->Blink = Blink;
          NETWORKBLOCK_DECREMENT_REF(Network);
          p_InterfaceLink = &v10->InterfaceLink;
          v21 = v10->InterfaceLink.Flink;
          if ( v21->Blink != &v10->InterfaceLink )
            __fastfail(3u);
          p_NetworkLink->Flink = v21;
          a1->NetworkLink.Blink = p_InterfaceLink;
          v21->Blink = p_NetworkLink;
          p_InterfaceLink->Flink = p_NetworkLink;
          ++v10->Ref;
          a1->Compartment = v10->Compartment;
          a1->CompartmentId = v10->Compartment->CompartmentId;
          a1->Network = v10;
          *p_NetworkGuid = v10->NetworkGuid;
          if ( a3 )
            a1->NetworkIdOverridden = 1;
          if ( a1->ProviderHandle == ndisIfProviderHandle && (a1->Flags & 2) == 0 )
          {
            v22 = ndisIfReferenceMiniport((__int64)a1, 7u);
            if ( v22 )
            {
              ndisIfUpdateFilterIfStack(v22);
              LOBYTE(v23) = 7;
              ndisIfDereferenceMiniport(a1, v24, v23);
            }
          }
          return 0LL;
        }
      }
    }
  }
  return 3221225485LL;
}
