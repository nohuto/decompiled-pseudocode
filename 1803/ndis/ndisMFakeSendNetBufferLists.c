/*
 * XREFs of ndisMFakeSendNetBufferLists @ 0x1C00600C0
 * Callers:
 *     <none>
 * Callees:
 *     ndisMSendCompleteNetBufferListsInternal @ 0x1C0001C80 (ndisMSendCompleteNetBufferListsInternal.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 */

void __fastcall ndisMFakeSendNetBufferLists(__int64 a1, struct _NET_BUFFER_LIST *a2, __int64 a3, char a4)
{
  int v7; // ecx
  struct _NET_BUFFER_LIST *i; // rax

  if ( (unsigned __int8)byte_1C009960A >= 4u )
    WPP_SF_qq(0x54u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1, a2);
  v7 = *(_DWORD *)(a1 + 540);
  for ( i = a2; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
    i->Status = v7;
  ndisMSendCompleteNetBufferListsInternal(a1, a2, a4 & 1);
  if ( (unsigned __int8)byte_1C009960A >= 4u )
    WPP_SF_qq(0x55u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1, a2);
}
