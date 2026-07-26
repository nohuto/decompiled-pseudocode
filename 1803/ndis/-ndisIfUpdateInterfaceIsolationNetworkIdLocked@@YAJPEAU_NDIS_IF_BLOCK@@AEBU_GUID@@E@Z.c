/*
 * XREFs of ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C0020524
 * Callers:
 *     ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x1C002040C (-ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPE.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C003F300 (-ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 * Callees:
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C00092E0 (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 *     ndisIfReferenceMiniport @ 0x1C000DF28 (ndisIfReferenceMiniport.c)
 *     NETWORKBLOCK_DECREMENT_REF @ 0x1C0014988 (NETWORKBLOCK_DECREMENT_REF.c)
 *     ndisMDereferenceIfBlock @ 0x1C0019F1C (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C0019FC4 (ndisMReferenceIfBlock.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C001BFA4 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ndisIfUpdateFilterIfStack @ 0x1C00202DC (ndisIfUpdateFilterIfStack.c)
 *     ndisIfDereferenceMiniport @ 0x1C0021310 (ndisIfDereferenceMiniport.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
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
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // r15
  __int64 v14; // rdx
  __int64 v15; // r8
  _LIST_ENTRY *p_NetworkLink; // rsi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *p_InterfaceLink; // rax
  _LIST_ENTRY *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdx
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
          BaseMiniport = a1->Miniport->BaseMiniport;
          if ( ndisMReferenceIfBlock((__int64)BaseMiniport, 8u) )
          {
            v12 = 1;
            NetworkGuid = BaseMiniport->IfBlock->NetworkGuid;
            ndisMDereferenceIfBlock((__int64)BaseMiniport, MPIFREF_CHIIC);
          }
          LOBYTE(v15) = 6;
          ndisIfDereferenceMiniport(a1, v14, v15);
          if ( !v12 )
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
          p_InterfaceLink = &v10->InterfaceLink;
          v20 = v10->InterfaceLink.Flink;
          if ( v20->Blink != &v10->InterfaceLink )
            __fastfail(3u);
          p_NetworkLink->Flink = v20;
          a1->NetworkLink.Blink = p_InterfaceLink;
          v20->Blink = p_NetworkLink;
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
            v21 = ndisIfReferenceMiniport((__int64)a1, 7u);
            if ( v21 )
            {
              ndisIfUpdateFilterIfStack(v21);
              LOBYTE(v22) = 7;
              ndisIfDereferenceMiniport(a1, v23, v22);
            }
          }
          return 0LL;
        }
      }
    }
  }
  return 3221225485LL;
}
