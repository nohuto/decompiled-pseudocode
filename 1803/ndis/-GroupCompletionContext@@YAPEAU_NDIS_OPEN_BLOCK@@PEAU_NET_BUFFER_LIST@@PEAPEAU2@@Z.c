/*
 * XREFs of ?GroupCompletionContext@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@PEAPEAU2@@Z @ 0x1C0067B28
 * Callers:
 *     ?NdisMTcpOffloadDisconnectComplete@@YAXPEAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C0067B60 (-NdisMTcpOffloadDisconnectComplete@@YAXPEAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?NdisMTcpOffloadForwardComplete@@YAXPEAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C0067BC0 (-NdisMTcpOffloadForwardComplete@@YAXPEAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?NdisMTcpOffloadReceiveComplete@@YAXPEAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C0067C00 (-NdisMTcpOffloadReceiveComplete@@YAXPEAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?NdisMTcpOffloadSendComplete@@YAXPEAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C0067D20 (-NdisMTcpOffloadSendComplete@@YAXPEAXPEAU_NET_BUFFER_LIST@@@Z.c)
 * Callees:
 *     <none>
 */

struct _NDIS_OPEN_BLOCK *__fastcall GroupCompletionContext(
        struct _NET_BUFFER_LIST *Alignment,
        struct _NET_BUFFER_LIST **a2)
{
  struct _NDIS_OPEN_BLOCK *result; // rax
  struct _NET_BUFFER_LIST *v3; // r8

  result = 0LL;
  v3 = 0LL;
  while ( !result )
  {
    result = (struct _NDIS_OPEN_BLOCK *)Alignment->SourceHandle;
LABEL_5:
    v3 = Alignment;
    Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    if ( !Alignment )
    {
      *a2 = 0LL;
      return result;
    }
  }
  if ( result == Alignment->SourceHandle )
    goto LABEL_5;
  v3->Link.Alignment = 0LL;
  *a2 = Alignment;
  return result;
}
