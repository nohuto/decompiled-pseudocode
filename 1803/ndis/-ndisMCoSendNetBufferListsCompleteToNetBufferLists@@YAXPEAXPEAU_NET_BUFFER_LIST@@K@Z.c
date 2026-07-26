/*
 * XREFs of ?ndisMCoSendNetBufferListsCompleteToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00541C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 */

void __fastcall ndisMCoSendNetBufferListsCompleteToNetBufferLists(
        _QWORD *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3)
{
  __int64 v3; // rsi

  v3 = a1[9];
  if ( (unsigned __int8)byte_1C009960A >= 4u )
    WPP_SF_qq(0x15u, &WPP_4d0c893ac8ec3b5f26b43baabc605489_Traceguids, a1, a2);
  (*(void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))(v3 + 64))(*(_QWORD *)(v3 + 24), a2, a3);
  if ( (unsigned __int8)byte_1C009960A >= 4u )
    WPP_SF_qq(0x16u, &WPP_4d0c893ac8ec3b5f26b43baabc605489_Traceguids, a1, a2);
}
