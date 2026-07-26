/*
 * XREFs of ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C00BF110
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisDereferenceProtocol @ 0x1C001802C (ndisDereferenceProtocol.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001C6A4 (ndisReferenceMiniportNoCheck.c)
 *     ndisRemoveOpenFromGlobalList @ 0x1C0025424 (ndisRemoveOpenFromGlobalList.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C00B739C (ndisNotifyWmiBindUnbind.c)
 *     ndisFreeOpenBlock @ 0x1C00BF1E8 (ndisFreeOpenBlock.c)
 *     ndisInvokeCloseAdapterComplete @ 0x1C00BF280 (ndisInvokeCloseAdapterComplete.c)
 */

void __fastcall ndisMQueuedFinishClose(void *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rax
  __int64 v4; // rdx
  struct _KEVENT *v5; // rcx
  struct _KEVENT *v6; // rcx

  v1 = *((_QWORD *)a1 + 2);
  if ( (unsigned __int8)byte_1C009260D >= 4u )
    WPP_SF_qq(0xFu, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, a1, v1);
  ndisReferenceMiniportNoCheck(v1, 0x33u);
  v3 = *((_QWORD *)a1 + 3);
  if ( *(_BYTE *)(v3 + 56) < 6u )
    (*(void (__fastcall **)(_QWORD, _QWORD))(v3 + 232))(*((_QWORD *)a1 + 4), 0LL);
  else
    ndisInvokeCloseAdapterComplete(a1);
  ndisDereferenceMiniport(v1, 0x33u);
  if ( (*((_DWORD *)a1 + 56) & 0x10000) == 0 )
    ndisNotifyWmiBindUnbind(v1, *((_QWORD *)a1 + 3), 0);
  ndisDereferenceProtocol(*((_NDIS_PROTOCOL_BLOCK **)a1 + 3), v4, 9u);
  v5 = (struct _KEVENT *)*((_QWORD *)a1 + 41);
  if ( v5 )
    KeSetEvent(v5, 0, 0);
  v6 = (struct _KEVENT *)*((_QWORD *)a1 + 124);
  if ( v6 )
    KeSetEvent(v6, 0, 0);
  ndisRemoveOpenFromGlobalList((struct _NDIS_OPEN_BLOCK *)a1);
  ndisFreeOpenBlock(a1);
  ndisDereferenceMiniport(v1, 0x2Eu);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C009260D >= 4u )
    WPP_SF_qq(0x10u, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, a1, v1);
}
