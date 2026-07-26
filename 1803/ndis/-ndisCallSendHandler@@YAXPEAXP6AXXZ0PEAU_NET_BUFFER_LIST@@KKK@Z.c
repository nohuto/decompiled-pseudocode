/*
 * XREFs of ?ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0001920
 * Callers:
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C0005950 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 * Callees:
 *     ndisMSendNBLToMiniportInternal @ 0x1C0005A50 (ndisMSendNBLToMiniportInternal.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
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
  void *v8; // rdx
  char v9; // [rsp+20h] [rbp-28h]

  if ( ndisVerifierNdisDispatch && *(_BYTE *)a1 == 5 && (v8 = (void *)a1[114]) != 0LL )
  {
    ndisVerifierNdisDispatch->NdisFilterSendNetBufferListsHandler(a3, a4, a5, a7, v8, a2);
  }
  else if ( (char *)a2 == (char *)ndisMSendNBLToMiniport )
  {
    v9 = 0;
    ndisMSendNBLToMiniportInternal(a3, a4, a5, a7, v9);
  }
  else
  {
    a2(a3, a4, a5, a7);
  }
}
