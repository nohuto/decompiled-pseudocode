/*
 * XREFs of ?ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0004160
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C00038F0 (NdisSendNetBufferLists.c)
 *     ndisFilterSendNetBufferLists @ 0x1C0004B60 (ndisFilterSendNetBufferLists.c)
 *     NdisFSendNetBufferLists @ 0x1C000D5A0 (NdisFSendNetBufferLists.c)
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C00589E4 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisCallSendHandler(
        _QWORD *a1,
        void (__fastcall *a2)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int),
        void *a3,
        struct _NET_BUFFER_LIST *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 v9; // r8
  void *v10; // rdx

  if ( ndisVerifierNdisDispatch && *(_BYTE *)a1 == 5 && (v10 = (void *)a1[114]) != 0LL )
  {
    ndisVerifierNdisDispatch->NdisFilterSendNetBufferListsHandler(a3, a4, a5, a7, v10, a2);
  }
  else
  {
    v9 = a5;
    if ( (char *)a2 == (char *)ndisMSendNBLToMiniport )
    {
      LOBYTE(a5) = 0;
      ndisMSendNBLToMiniportInternal(a3, a4, v9, a7, a5);
    }
    else
    {
      a2(a3, a4, a5, a7);
    }
  }
}
