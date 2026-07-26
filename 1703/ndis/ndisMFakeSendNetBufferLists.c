/*
 * XREFs of ndisMFakeSendNetBufferLists @ 0x1C0022E10
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C00038F0 (NdisSendNetBufferLists.c)
 * Callees:
 *     ndisMSendCompleteNetBufferListsInternal @ 0x1C0001C00 (ndisMSendCompleteNetBufferListsInternal.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 */

void __fastcall ndisMFakeSendNetBufferLists(__int64 a1, struct _NET_BUFFER_LIST *a2, __int64 a3, char a4)
{
  int v7; // ecx
  struct _NET_BUFFER_LIST *i; // rax

  if ( (unsigned __int8)byte_1C009260A >= 4u )
    WPP_SF_qq(80LL, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1, a2);
  v7 = *(_DWORD *)(a1 + 540);
  for ( i = a2; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
    i->Status = v7;
  ndisMSendCompleteNetBufferListsInternal(a1, a2, a4 & 1);
  if ( (unsigned __int8)byte_1C009260A >= 4u )
    WPP_SF_qq(81LL, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1, a2);
}
