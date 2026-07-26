/*
 * XREFs of ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C00AAE00
 * Callers:
 *     <none>
 * Callees:
 *     ndisRemoveOpenFromGlobalList @ 0x1C0001460 (ndisRemoveOpenFromGlobalList.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C0002848 (ndisReferenceMiniportNoCheck.c)
 *     ndisDereferenceProtocol @ 0x1C0006BC0 (ndisDereferenceProtocol.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisFreeOpenBlock @ 0x1C00AAED8 (ndisFreeOpenBlock.c)
 *     ndisInvokeCloseAdapterComplete @ 0x1C00AAF80 (ndisInvokeCloseAdapterComplete.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C00B55DC (ndisNotifyWmiBindUnbind.c)
 */

void __fastcall ndisMQueuedFinishClose(struct _NDIS_OPEN_BLOCK *P)
{
  __int64 MiniportHandle; // rdi
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rax
  __int64 v4; // rdx
  struct _KEVENT *CloseCompleteEvent; // rcx
  struct _KEVENT *UnsolicitedUnbindEvent; // rcx

  MiniportHandle = (__int64)P->MiniportHandle;
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_qq(0xFu, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, P, MiniportHandle);
  ndisReferenceMiniportNoCheck(MiniportHandle);
  ProtocolHandle = P->ProtocolHandle;
  if ( ProtocolHandle->MajorNdisVersion < 6u )
    ProtocolHandle->CloseAdapterCompleteHandler(P->ProtocolBindingContext, 0);
  else
    ndisInvokeCloseAdapterComplete(P);
  ndisDereferenceMiniport(MiniportHandle, 0x33u);
  if ( (P->OpenFlags & 0x10000) == 0 )
    ndisNotifyWmiBindUnbind(MiniportHandle, P->ProtocolHandle, 0LL);
  ndisDereferenceProtocol(P->ProtocolHandle, v4, 9u);
  CloseCompleteEvent = P->CloseCompleteEvent;
  if ( CloseCompleteEvent )
    KeSetEvent(CloseCompleteEvent, 0, 0);
  UnsolicitedUnbindEvent = P->UnsolicitedUnbindEvent;
  if ( UnsolicitedUnbindEvent )
    KeSetEvent(UnsolicitedUnbindEvent, 0, 0);
  ndisRemoveOpenFromGlobalList(P);
  ndisFreeOpenBlock(P);
  ndisDereferenceMiniport(MiniportHandle, 0x2Eu);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_qq(0x10u, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, P, MiniportHandle);
}
