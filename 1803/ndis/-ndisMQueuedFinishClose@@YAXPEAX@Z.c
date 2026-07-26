/*
 * XREFs of ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C00B25B0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisRemoveOpenFromGlobalList @ 0x1C0012128 (ndisRemoveOpenFromGlobalList.c)
 *     ndisDereferenceProtocol @ 0x1C001A8FC (ndisDereferenceProtocol.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C0024678 (ndisReferenceMiniportNoCheck.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     ndisFreeOpenBlock @ 0x1C00B2688 (ndisFreeOpenBlock.c)
 *     ndisInvokeCloseAdapterComplete @ 0x1C00B2720 (ndisInvokeCloseAdapterComplete.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C00C0970 (ndisNotifyWmiBindUnbind.c)
 */

void __fastcall ndisMQueuedFinishClose(struct _NDIS_OPEN_BLOCK *P)
{
  __int64 MiniportHandle; // rdi
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KEVENT *CloseCompleteEvent; // rcx
  struct _KEVENT *UnsolicitedUnbindEvent; // rcx
  __int64 v12; // r8
  __int64 v13; // r9

  MiniportHandle = (__int64)P->MiniportHandle;
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_qq(0xFu, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, P, MiniportHandle);
  ndisReferenceMiniportNoCheck(MiniportHandle, 0x33u);
  ProtocolHandle = P->ProtocolHandle;
  if ( ProtocolHandle->MajorNdisVersion < 6u )
    ProtocolHandle->CloseAdapterCompleteHandler(P->ProtocolBindingContext, 0);
  else
    ndisInvokeCloseAdapterComplete(P);
  ndisDereferenceMiniport(MiniportHandle, 0x33u, v4, v5);
  if ( (P->OpenFlags & 0x10000) == 0 )
    ndisNotifyWmiBindUnbind(MiniportHandle, P->ProtocolHandle, 0LL);
  ndisDereferenceProtocol(P->ProtocolHandle, v6, 9u);
  CloseCompleteEvent = P->CloseCompleteEvent;
  if ( CloseCompleteEvent )
    KeSetEvent(CloseCompleteEvent, 0, 0);
  UnsolicitedUnbindEvent = P->UnsolicitedUnbindEvent;
  if ( UnsolicitedUnbindEvent )
    KeSetEvent(UnsolicitedUnbindEvent, 0, 0);
  ndisRemoveOpenFromGlobalList(P, v7, v8, v9);
  ndisFreeOpenBlock(P);
  ndisDereferenceMiniport(MiniportHandle, 0x2Eu, v12, v13);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_qq(0x10u, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, P, MiniportHandle);
}
